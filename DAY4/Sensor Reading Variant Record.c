
#include <stdio.h>

union Value {
    float temperature;
    char door;
    long pulses;
};

struct Reading {
    int id;
    char kind;
    union Value value;
};

struct AllFields {
    int id;
    char kind;
    float temperature;
    char door;
    long pulses;
};

int main() {
    int n, i;
    struct Reading readings[1000];

    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("INVALID COUNT");
        return 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d %c", &readings[i].id, &readings[i].kind);

        switch (readings[i].kind) {
            case 'T':
                scanf("%f", &readings[i].value.temperature);
                break;

            case 'D':
                scanf(" %c", &readings[i].value.door);
                break;

            case 'P':
                scanf("%ld", &readings[i].value.pulses);
                break;

            default:
                printf("INVALID KIND");
                return 0;
        }
    }

    printf("SENSOR REPORT\n");

    for (i = 0; i < n; i++) {
        switch (readings[i].kind) {
            case 'T':
                printf("Sensor %d temperature %.2f C\n",
                       readings[i].id,
                       readings[i].value.temperature);
                break;

            case 'D':
                if (readings[i].value.door == 'O')
                    printf("Sensor %d door OPEN\n", readings[i].id);
                else
                    printf("Sensor %d door CLOSED\n", readings[i].id);
                break;

            case 'P':
                printf("Sensor %d pulses %ld\n",
                       readings[i].id,
                       readings[i].value.pulses);
                break;
        }
    }

    printf("sizeof(union Value): %zu\n", sizeof(union Value));
    printf("sizeof(Reading) with union: %zu\n", sizeof(struct Reading));
    printf("sizeof(Reading) with all fields: %zu\n", sizeof(struct AllFields));
    printf("Bytes saved per record: %zu\n",
           sizeof(struct AllFields) - sizeof(struct Reading));

    return 0;
}
