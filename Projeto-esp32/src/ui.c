#include "ui.h"

// Declare aqui suas imagens após convertê-las (ex: lv_img_dsc_t fundo_jarvis;)
LV_IMG_DECLARE(fundo_jarvis); 

void ui_init(void) {
    // 1. Fundo
    lv_obj_t * bg = lv_img_create(lv_scr_act());
    lv_img_set_src(bg, &fundo_jarvis);
    
    // 2. Criar elementos da interface
    create_dynamic_island();
}

void create_dynamic_island(void) {
    lv_obj_t *island = lv_obj_create(lv_scr_act());
    lv_obj_set_size(island, 150, 40);
    lv_obj_align(island, LV_ALIGN_TOP_MID, 0, 10);
    lv_obj_set_style_bg_color(island, lv_color_hex(0x1a1a1a), 0);
}