#include <stdio.h>
#include <unistd.h>

void start_quiz();

int main() {
    int restart;

    do {
        start_quiz();

        printf("\nWould you like to restart the quiz? (1 for yes, 0 for no): ");
        scanf("%d", &restart);

    } while (restart == 1);

    printf("Thank you for playing Ultimate Football quiz!\n");
    return 0;
}

void start_quiz() {
    int j;
    char answer1, answer2, answer3, answer4, answer5;
    int pnt1 = 0, pnt2 = 0, pnt3 = 0, pnt4 = 0, pnt5 = 0;
    int countdown = 3;

    printf("\tWelcome to Ultimate Football mini quiz!\t\n\n");

    printf("> Enter 1 to start the quiz\n");
    printf("> Enter 0 to end the quiz\n");

    scanf("%d", &j);

    if (j == 1) {
        printf("The quiz is starting in...\n");
        for (int i = countdown; i >= 1; i--) {
            printf("%d\n", i);
            sleep(2);
        }
        printf("The quiz has started, Good luck!\n\n");

        printf("1)\tWhat is the nationality of Cristiano Ronaldo?\n");
        printf("a)\tSpain\n");
        printf("b)\tPortugal\n");
        printf("c)\tGermany\n");
        printf("d)\tNigeria\n");

        printf("Choose the right answer : ");
        scanf(" %c", &answer1);

        if (answer1 == 'b') {
            printf("Correct answer!\n");
            pnt1 = 1;
            printf("You have scored %d point\n", pnt1);
        } else {
            printf("Wrong answer!\n");
        }

        printf("2)\tWho won the Fifa World Cup in 2018?\n");
        printf("a)\tFrance\n");
        printf("b)\tMorocco\n");
        printf("c)\tArgentina\n");
        printf("d)\tGermany\n");

        printf("Choose the right answer : ");
        scanf(" %c", &answer2);

        if (answer2 == 'a') {
            printf("Correct answer!\n");
            pnt2 = 1;
            printf("You have scored %d point\n", pnt2);
        } else {
            printf("Wrong answer!\n");
        }

        printf("3)\tWhich club is the most successful in Europe?\n");
        printf("a)\tManchester United\n");
        printf("b)\tBayern Munich\n");
        printf("c)\tJuventus\n");
        printf("d)\tReal Madrid\n");

        printf("Choose the right answer : ");
        scanf(" %c", &answer3);

        if (answer3 == 'd') {
            printf("Correct answer!\n");
            pnt3 = 1;
            printf("You have scored %d point\n", pnt3);
        } else {
            printf("Wrong answer!\n");
        }

        printf("4)\tWho transferred from Chelsea to Manchester United in 2018?\n");
        printf("a)\tMason Mount\n");
        printf("b)\tRomelu Lukaku\n");
        printf("c)\tNemanja Matic\n");
        printf("d)\tJuan Mata\n");

        printf("Choose the right answer : ");
        scanf(" %c", &answer4);

        if (answer4 == 'b') {
            printf("Correct answer!\n");
            pnt4 = 1;
            printf("You have scored %d point\n", pnt4);
        } else {
            printf("Wrong answer!\n");
        }
        
        printf("5)\tWhich player won the FIFA Puskás Award in 2019?\n");
        printf("a)\tLuka Modric\n");
        printf("b)\tFaiz Subri\n");
        printf("c)\tDaniel Zsóri\n");
        printf("d)\tThiago Silva\n");

        printf("Choose the right answer : ");
        scanf(" %c", &answer5);

        if (answer5 == 'c') {
            printf("Correct answer!\n");
            pnt5 = 1;
            printf("You have scored %d point\n", pnt5);
        } else {
            printf("Wrong answer!\n");
        }

        int totalPoints = pnt1 + pnt2 + pnt3 + pnt4 + pnt5;
        if (totalPoints > 4) {
            printf("Congratulations! You have scored %d points out of 5 questions\n", totalPoints);
        } else if (totalPoints == 3) {
            printf("Almost there! You have scored %d points out of 5 questions\n\n", totalPoints);
        } else {
            printf("You have scored %d points out of 5 questions\n", totalPoints);
        }
    } else if (j == 0) {
        printf("The quiz has ended!\n\n");
    } else {
        printf("Invalid input!\n");
    }
}