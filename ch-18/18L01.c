#include <stdio.h>
/*main() function */

main()
{

    enum language {human=100,
                    animal=50,
                    computer};
    enum days{SUN,
                MON,
                TUE,
                WED,
                THU,
                FRI,
                SAT};
    printf("human: %d, animal: %d, computer: %d\n", human, animal, computer);
    printf("Sun: %d\n", SUN);
    printf("Mon: %d\n", MON);
    printf("Tue: %d\n", TUE);
    printf("Wed: %d\n", WED);
    printf("Thu: %d\n", THU);
    printf("Fri: %d\n", FRI);
    printf("Sat: %d\n", SAT);

    return 0;

}
