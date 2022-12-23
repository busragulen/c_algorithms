//a structure to scanf 3 customers' location infos for shipping.
#include <stdio.h>

int main() {
    
    int POSnum_building;
    int POSnum_flat;
    int POSnum_zipcode;
    
    struct location{
        char province[20];
        char district[20];
        char neighbourhood[20];
        int num_building;
        int num_floor;
        int num_flat;
        int zipcode; 
    };

    struct location clientlocal[3];
    
    for(int i=0; i<3; i++){
        printf("customer's location informations:\n\n");
        printf("your province:\n");
        scanf("%s", &clientlocal[i].province);
        printf("your district:\n");
        scanf("%s", &clientlocal[i].district);
        printf("your neighbourhood:\n");
        scanf("%s", &clientlocal[i].neighbourhood);
        printf("your building number:\n");
        scanf("%d", &clientlocal[i].num_building);
        printf("your floor number:\n");
        scanf("%d", &clientlocal[i].num_floor);
        printf("your flat number:\n");
        scanf("%d", &clientlocal[i].num_flat);
        printf("your zipcode:\n");
        scanf("%d", &clientlocal[i].zipcode);
       
        // a zipcode, building number or flat number cant be negative.
        
        if(clientlocal[i].num_building < 0 ){
            POSnum_building= clientlocal[i].num_building * -1 ;
        }else{
            POSnum_building= clientlocal[i].num_building;
        }
        if(clientlocal[i].num_flat < 0 ){
            POSnum_flat= clientlocal[i].num_flat * -1 ;
        }else{
            POSnum_flat= clientlocal[i].num_flat;
        }
        if(clientlocal[i].zipcode < 0 ){
            POSnum_zipcode= clientlocal[i].zipcode * -1 ;
        }else{
            POSnum_zipcode= clientlocal[i].zipcode;
        }
        
        printf("customer's location: %s province, %s distrcit, %s  neighbourhood ,%uth building, %dth floor, %uth flat, zipcode: %u \n\n", clientlocal[i].province, clientlocal[i].district, clientlocal[i].neighbourhood, POSnum_building, clientlocal[i].num_floor, POSnum_flat,  POSnum_zipcode  );
    }
    
    
    return 0;
}
