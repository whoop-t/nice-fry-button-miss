#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_LEFT_IMAGE
#define LV_ATTRIBUTE_IMG_LEFT_IMAGE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_LEFT_IMAGE uint8_t
    left_image_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif
  // 'pixil-frame-0(1)', 80x69px
0xaa, 0xaa, 0xaa, 0xaa, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 0x50, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 0xaa, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 
0x55, 0x55, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xa8, 0xaa, 0xaa, 0xa8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x55, 0x54, 0x55, 0x55, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa, 0x8a, 0xaa, 
0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x51, 0x55, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x8a, 0xaa, 0xaa, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf5, 0x55, 
0x55, 0x55, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xaa, 0xaa, 0xaa, 0xaa, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x0e, 0x55, 0x54, 0x55, 0x55, 0x40, 0x00, 0x00, 0x00, 0x00, 0xa7, 0x2a, 0xaa, 0x2a, 
0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x53, 0xd5, 0x55, 0x55, 0x55, 0x40, 0x00, 0x00, 0x00, 0x00, 
0xa8, 0xe2, 0xaa, 0x2a, 0xaa, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x54, 0x39, 0x55, 0x54, 0x00, 0x40, 
0x00, 0x00, 0x00, 0x00, 0xaa, 0x8e, 0x2a, 0xa3, 0xff, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x54, 0x57, 
0xc0, 0x0f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x29, 0xff, 0xdf, 0xff, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x55, 0x14, 0x7f, 0xdf, 0xff, 0xf0, 0x00, 0x0a, 0x00, 0x00, 0xaa, 0x80, 0x1f, 0xdf, 
0xff, 0xf8, 0x00, 0xab, 0x80, 0x00, 0x55, 0x00, 0x07, 0xdf, 0xff, 0xfe, 0x1f, 0xff, 0xc0, 0x00, 
0xaa, 0x00, 0x03, 0xdf, 0xff, 0xff, 0x22, 0x8a, 0x00, 0x00, 0x54, 0x00, 0x01, 0x5f, 0xff, 0xff, 
0x7f, 0xff, 0xe0, 0x00, 0xa8, 0x00, 0x00, 0x2f, 0xff, 0xff, 0x42, 0xaa, 0xb0, 0x00, 0x50, 0x00, 
0x00, 0x57, 0xff, 0xff, 0xbd, 0xdb, 0x60, 0x00, 0xa0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xa2, 0xaa, 
0xa8, 0x00, 0x40, 0x00, 0x00, 0x03, 0xff, 0xff, 0xda, 0xff, 0xf8, 0x00, 0x80, 0x00, 0x00, 0x03, 
0xdf, 0xff, 0xfa, 0x8b, 0x28, 0x08, 0x00, 0x00, 0x00, 0x03, 0xdf, 0xff, 0xf6, 0xff, 0xfe, 0x70, 
0x00, 0x00, 0x00, 0x03, 0xdf, 0xff, 0xfc, 0xaa, 0xaa, 0xa0, 0x00, 0x00, 0x00, 0x03, 0xbf, 0xff, 
0x82, 0xdb, 0x6d, 0xc0, 0x00, 0x00, 0x00, 0x03, 0x7f, 0xff, 0xaa, 0xaa, 0xaa, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xe2, 0x8a, 
0x28, 0xa8, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x07, 
0xff, 0xff, 0xfa, 0xaa, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc7, 0xfc, 0x5f, 0x6d, 0x80, 
0x00, 0x00, 0x00, 0x1f, 0xff, 0x39, 0xff, 0x82, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0xfe, 
0xff, 0xfb, 0xff, 0x80, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0xff, 0x7f, 0xe2, 0x28, 0x80, 0x00, 0x00, 
0x00, 0xff, 0xfd, 0xff, 0x7f, 0x1f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0xff, 0xfd, 0xff, 0xbe, 0xea, 
0xaa, 0x80, 0x00, 0x00, 0x00, 0xf9, 0xfb, 0xff, 0xbf, 0x1f, 0x6d, 0xc0, 0x00, 0x00, 0x00, 0xe0, 
0xfb, 0xff, 0xbf, 0xe2, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x01, 0xfb, 0x3f, 0xbf, 0xfb, 0xff, 0x80, 
0x00, 0x00, 0x00, 0x03, 0xfd, 0x3f, 0x7f, 0xe6, 0x28, 0x80, 0x00, 0x00, 0x00, 0x03, 0xc1, 0xff, 
0x7f, 0x9f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0xfe, 0xfe, 0x3a, 0xaa, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x39, 0xf8, 0xdb, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe2, 0xaa, 
0xa8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x2a, 0x8a, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xc0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x36, 0xda, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0xaa, 0x00, 0x00, 0xff, 0xff, 
0xfe, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x62, 0x8a, 
0xc0, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xff, 0x00, 
0x00, 0x00, 0x1a, 0xaa, 0xa8, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x06, 0xd9, 0xfe, 0x00, 
0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0xa8, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 
0x00, 0xfe, 0x00, 0x00, 0xaa, 0xbf, 0xff, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x3f, 
0xff, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0xff, 0xbf, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00
};

const lv_img_dsc_t left_image = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 80,
    .header.h = 69,
    .data_size = 620,
    .data = left_image_map,
};
