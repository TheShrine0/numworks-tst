#include <eadk.h>
#include <stdbool.h>
const char eadk_app_name[]
__attribute__((section(".rodata.eadk_app_name"))) = "Square survival";
const uint32_t eadk_api_level
__attribute__((section(".rodata.eadk_api_level"))) = 0;
int main() {

eadk_display_push_rect_uniform((eadk_rect_t){0,0,320,240},eadk_color_black);
eadk_display_draw_string("Square survival",(eadk_point_t){0,0},true,eadk_color_white,eadk_color_black);
eadk_display_draw_string("Best score : 0",(eadk_point_t){30,0},false,eadk_color_white,eadk_color_black);
eadk_display_draw_string("Play !",(eadk_point_t){50,0},false,eadk_color_white,eadk_color_black);
eadk_display_draw_string("Change color",(eadk_point_t){70,0},false,eadk_color_white,eadk_color_black);
};
