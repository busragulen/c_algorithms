// gpa calculator for university of bologna
#include <stdio.h>

int i, input, number, counter, score;
float individual, total, userGPA, avr, weighted;
float totalscores[100];

void lectures(number);

int main(){
    printf("how many lectures that you've taken?\n");
    scanf("%d", &input);
    
    if(input < 0){
        number = input*-1;
    }else{
        number = input;
    }
    
    lectures(number);
    
    return 0;
}

void lectures(number){
    
    typedef struct{
        char lectureName[50];
        int midterm;
        int final;
        int ects;
    }score;

    score user[100];
    
    for(i=0; i<=number; i++){
        
        printf("what is the name of lecture?\n");
        scanf("%s", &user[i].lectureName);
        printf("what is the ects of lecture?\n");
        scanf("%d", &user[i].ects);
        printf("midterm score;\n");
        scanf("%d", &user[i].midterm);
        printf("final score;\n");
        scanf("%d", &user[i].final);
        
        individual= user[i].midterm*0.4+user[i].final*0.6;
        printf("your avr score for %s is %.2f .\n\n", user[i].lectureName, individual);
        
        totalscores[i]= individual;
    
        counter++;
        
        if(counter==number){
            break;
        }
    }
        for (int k=0; k<=number; k++){
            weighted += user[k].ects;
        }    
        for(int j=0; j<=number; j++){
            total += totalscores[j];
        }
    
            avr = total / weighted;
            userGPA = avr*110/30;
    
            printf("your gpa is %.2f .", userGPA);
}

// this gpa calculating method is coded according to university of bologna's reformed gradues gpa system which is max grade is 110. actually i think it doesnt matter how to calculate it, i am just trying to practice c XD 
// bit.ly/gpacalculating
// btw i dont know why i've chosen this uni, idc still. 
