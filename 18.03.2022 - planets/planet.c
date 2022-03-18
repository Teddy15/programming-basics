#include<stdio.h>
#include<stdlib.h>
#define SPEED_OF_LIGHT 299792
/* 
Създайте структурата Planet. 
Планетата има име, дистанция на колко километра се намира от Слънцето и диаметър. Реализирайте функцията double get_seconds_to_sun(Planet p);, която показва колко секунди е нужно на светлината от слънцето да достигне планетата. Използвайте ИСТИНСКАТА скорост на светлината!
Създайте масив от планети за нашата слънчева система и изчислете средно аритметично за колко секунди светлината достига до всяка от тях.

*/

struct planet {
    char* name;
    double distance_to_sun;
    double diameter;
};

double get_seconds_to_sun(struct planet* p) {
    return p->distance_to_sun / SPEED_OF_LIGHT;
}

int main() {
    size_t PLANETS = 9;
    size_t MAX_SYMBOLS = 10;
    struct planet* planets = (struct planet*) malloc(sizeof(struct planet) * PLANETS);
    

    for(int i = 0; i < PLANETS; i++) {
        planets[i].name = (char*)malloc(sizeof(char) * MAX_SYMBOLS);
        
        fgets(planets[i].name, MAX_SYMBOLS, stdin);        
        printf("Name: %s\n", planets[i].name);
        
        scanf("%lf", &planets[i].distance_to_sun);
        printf("Distance to sun: %lf\n", planets[i].distance_to_sun);
        scanf("%lf", &planets[i].diameter);
        getchar();
        printf("Diameter: %lf\n", planets[i].diameter);

    }

    for(int i = 0; i < PLANETS; i++) {
        printf("Name: %s\nDistance to sun: %lf\nDiameter: %lf\n", planets[i].name, planets[i].distance_to_sun, planets[i].diameter);
        printf("Seconds to sunlight: %lf\n", get_seconds_to_sun(&planets[i]));
    }

    free(planets);
   return 0;
}