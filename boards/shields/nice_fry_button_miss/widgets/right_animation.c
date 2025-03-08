#include <stdlib.h>
#include <zephyr/kernel.h>
#include "right_animation.h"

LV_IMG_DECLARE(right_image);
LV_IMG_DECLARE(right_image_2);
LV_IMG_DECLARE(right_image_3);
LV_IMG_DECLARE(right_image_4);
LV_IMG_DECLARE(right_image_5);

const lv_img_dsc_t *anim_imgs[] = {
    &right_image, &right_image_2, &right_image_3, &right_image_4, &right_image_5, &right_image_5, &right_image_5, &right_image_5, &right_image_5, &right_image_5, &right_image_5, &right_image_5, &right_image_5, &right_image_5, &right_image_5, &right_image_5
};

void draw_right_animation(lv_obj_t *canvas) {
#if IS_ENABLED(CONFIG_NICE_RIGHT_ANIMATION)
    lv_obj_t *art = lv_animimg_create(canvas);
    lv_obj_center(art);

    lv_animimg_set_src(art, (const void **)anim_imgs, 16);
    lv_animimg_set_duration(art, CONFIG_NICE_RIGHT_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);
#else
    lv_obj_t *art = lv_img_create(canvas);

    lv_img_set_src(art, &right_image_5);
#endif

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 36, 0);
}
