#include <stdio.h>

int main (void){
    int hinduArabNum = 0, iterator = 1000, clear = 0, input;

    //loop that takes care of inputs
    while(!clear)
    {
        printf("Hindu Arabic to Roman Numerals! \nGive me a positive number to convert to Roman numerals! \n");
        scanf("%d", &hinduArabNum);
        if (hinduArabNum <= 0 || hinduArabNum > 1000) //checks for invalid numbers
        {
            printf("Invalid Number! \nDo you still want to continue? \n1 - Yes \n2 - No");
            scanf("\n%d", &input);
            if (input == 2)
            {
                return 0; //ends program
            }
        }
        else
        {
            iterator = 1000;
            // skips leading zeroes.
            while ( iterator && !(hinduArabNum/iterator)) iterator/=10; //while (iterator) checks if iterator is zero, 
            //and while (!(hinduArabNum/iterator)) checks if the given value has a digit corresponding to the iterator; if iterator = 1000, digit must have a thousands value. 
            //if both conditions are true, iterator gets smaller and the loop repeats.
            
            //calculation do-while loop; executes while we still have digits to iterate through
            do {
                int digit = (hinduArabNum/iterator)%10; //acquires the first digit starting from the left and assigns it
                //how it works: 496 is divided by 10 -> 49.6, then the remainder 6 is assigned to the digit value. This continues down until the last digit.

                switch(iterator)
                { //assigns a value based on the value of the iterator
                    case 1: //if we are on the ones digit
                        switch(digit){
                            case 1:
                                printf("I");
                                break;
                            case 2:
                                printf("II");
                                break;
                            case 3:
                                printf("III");
                                break;
                            case 4:
                                printf("IV");
                                break;
                            case 5:
                                printf("V");
                                break;
                            case 6:
                                printf("VI");
                                break;
                            case 7:
                                printf("VII");
                                break;
                            case 8:
                                printf("VIII");
                                break;
                            case 9:
                                printf("IX");
                                break;
                        }
                        break;

                    case 10: //if on the tens digit
                        switch(digit){
                            case 1:
                                printf("X");
                                break;
                            case 2:
                                printf("XX");
                                break;
                            case 3:
                                printf("XXX");
                                break;
                            case 4:
                                printf("XL");
                                break;
                            case 5:
                                printf("L");
                                break;
                            case 6:
                                printf("LX");
                                break;
                            case 7:
                                printf("LXX");
                                break;
                            case 8:
                                printf("LXXX");
                                break;
                            case 9:
                                printf("XC");
                                break;
                        }
                        break;

                    case 100: //if on the hundreds digit
                        switch(digit){
                            case 1:
                                printf("C");
                                break;
                            case 2:
                                printf("CC");
                                break;
                            case 3:
                                printf("CCC");
                                break;
                            case 4:
                                printf("CD");
                                break;
                            case 5:
                                printf("D");
                                break;
                            case 6:
                                printf("DC");
                                break;
                            case 7:
                                printf("DCC");
                                break;
                            case 8:
                                printf("DCCC");
                                break;
                            case 9:
                                printf("CM");
                                break;
                        }
                        break;

                    case 1000: // if on the thousands digit
                        switch(digit){
                            case 1:
                                printf("M");
                                break;
                        }
                        break;
                }
            }
            while ((iterator/=10) >= 1); 
        printf("\nDo you still want to try another number? \n1 - Yes \n2 - No");
        scanf("\n%d", &input);
        if (input == 2)
        {
            return 0; //ends program
        }
    }
    }
}