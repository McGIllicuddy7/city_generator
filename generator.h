#pragma once
#define width 2000
#include <stdbool.h>
typedef enum {
    ground_grass = 0, ground_forest = 1, water = 2, street = 3, wall = 4
} square;
#define sz 100
#define gsz 10000
typedef struct{
    int x;
    int y;
    char type;
} building_t;
void renderGrid(void);
building_t * get_buildings();
void setNumBuildings(int value);
int getNumBuildings();
typedef enum{
    water_north, water_south, water_east, water_west, river_north_south, river_east_west, island,inland
}land_type;
typedef enum{
    village, small_town, medium_town, large_town, small_city, medium_city, large_city
}city_size;
void generateCity(land_type land, city_size size, bool walled);
void flipShouldShow();
void save_city(char * name);
void load_city(char * name);
