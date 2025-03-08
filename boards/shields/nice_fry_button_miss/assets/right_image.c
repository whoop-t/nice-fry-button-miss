#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_RIGHT_IMAGE
#define LV_ATTRIBUTE_IMG_RIGHT_IMAGE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_RIGHT_IMAGE uint8_t
    right_image_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif
  // 'f-button-1', 80x69px
0xaa, 0xaa, 0xbf, 0xff, 0xff, 0xff, 0xca, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x5f, 0xff, 0x81, 0xff, 
0xe5, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaf, 0xff, 0x7a, 0x3f, 0xf2, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 
0x57, 0xff, 0x47, 0xcf, 0xf5, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xa9, 0xff, 0xbb, 0xd7, 0xfa, 0xaa, 
0xaa, 0xaa, 0x55, 0x55, 0x54, 0x7f, 0xbf, 0xcb, 0xf9, 0x55, 0x55, 0x55, 0x00, 0x00, 0x00, 0x1f, 
0xdf, 0x81, 0xf8, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xe7, 0xe7, 0x7e, 0xfb, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xeb, 0xe0, 0xfe, 0xfb, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xbc, 0xeb, 0x6c, 
0xfa, 0xdb, 0x6d, 0xb6, 0xf7, 0xbd, 0xef, 0x7e, 0x1e, 0xf6, 0xf9, 0xef, 0x7b, 0xde, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x7b, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 
0x6d, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x99, 0x6d, 0x32, 0xda, 0x65, 0xb4, 0xcb, 0x6d, 0x96, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 
0x0f, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb0, 0x00, 0x00, 0x00, 0x3b, 0x6d, 0xb6, 0xff, 0xff, 
0xff, 0x80, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf7, 0xbd, 0xfc, 0x00, 0x3f, 0xff, 0xf0, 0x00, 
0xfb, 0xde, 0xb6, 0xdb, 0x70, 0x06, 0xc0, 0x00, 0x36, 0xc0, 0x0d, 0xb6, 0xff, 0xff, 0xe0, 0x3e, 
0x00, 0x00, 0x03, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0x81, 0xf0, 0x00, 0x00, 0x00, 0x7e, 0x03, 0xff, 
0xb6, 0xde, 0x05, 0x80, 0x00, 0x00, 0x00, 0x1b, 0x01, 0xb6, 0xf7, 0xbc, 0x1f, 0x00, 0x3f, 0xff, 
0xe0, 0x0f, 0xe0, 0xdf, 0xff, 0xf8, 0x3e, 0x01, 0xff, 0xff, 0xfc, 0x07, 0xf0, 0x7f, 0xb6, 0xd0, 
0x6c, 0x06, 0xc0, 0x00, 0xf6, 0x03, 0x68, 0x36, 0xff, 0xe0, 0xf8, 0x1f, 0xaa, 0xaa, 0x7f, 0xc1, 
0xfc, 0x1f, 0xff, 0xe1, 0xf0, 0x3f, 0x54, 0x05, 0x3f, 0xe0, 0xfe, 0x0f, 0xb6, 0x83, 0x60, 0x36, 
0xa8, 0xaa, 0x96, 0xd0, 0x6d, 0x06, 0xff, 0xc3, 0xc0, 0x7e, 0x55, 0xf9, 0x5f, 0xf0, 0x3f, 0x07, 
0xff, 0xc3, 0xc0, 0xfe, 0xa8, 0xaa, 0x9f, 0xf0, 0x3f, 0x07, 0xb6, 0xc3, 0x40, 0xb6, 0x54, 0x05, 
0x56, 0xd0, 0x2d, 0x86, 0xff, 0xc3, 0xc0, 0x7f, 0x2a, 0xaa, 0x9f, 0xf0, 0x3f, 0x87, 0xf7, 0xc3, 
0xe0, 0x3f, 0x95, 0x55, 0x3f, 0xe0, 0x7f, 0x06, 0xb6, 0xc3, 0x60, 0x16, 0xca, 0xaa, 0x76, 0xc0, 
0x6d, 0x06, 0xff, 0xe1, 0xf8, 0x0f, 0xe0, 0x00, 0xff, 0x81, 0xfe, 0x0f, 0xff, 0xe0, 0xfc, 0x03, 
0xff, 0xff, 0xfc, 0x03, 0xfc, 0x0f, 0xb6, 0xd0, 0x6c, 0x00, 0xfb, 0x6d, 0xb0, 0x03, 0x68, 0x16, 
0xf7, 0xb8, 0x3f, 0x00, 0x0f, 0xff, 0x00, 0x0f, 0xf0, 0x1e, 0xff, 0xfc, 0x1f, 0x80, 0x00, 0x00, 
0x00, 0x1f, 0xe0, 0x7f, 0xb6, 0xda, 0x05, 0xa0, 0x00, 0x00, 0x00, 0x5b, 0x40, 0xb6, 0xff, 0xff, 
0x01, 0xfe, 0x00, 0x00, 0x03, 0xff, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xe0, 0x00, 0x1f, 0xfc, 
0x07, 0xff, 0xb6, 0xd9, 0x60, 0x06, 0xdb, 0xed, 0xb6, 0xc0, 0x1b, 0x96, 0xff, 0xff, 0xfc, 0x00, 
0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
0xb6, 0xdb, 0x6f, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xed, 0xb6, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
0x01, 0xff, 0xff, 0xff, 0xf7, 0xfd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xb6, 0xdb, 
0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb6, 
0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 
0xb6, 0xdb, 0x6d, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x99, 0x6d, 0x32, 0xda, 0x65, 0xb4, 0xcb, 
0x69, 0x96, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
0xaa, 0xaa
};

const lv_img_dsc_t right_image = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 80,
    .header.h = 69,
    .data_size = 620,
    .data = right_image_map,
};

#ifndef LV_ATTRIBUTE_IMG_RIGHT_IMAGE_2
#define LV_ATTRIBUTE_IMG_RIGHT_IMAGE_2
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_RIGHT_IMAGE_2 uint8_t
    right_image_2_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif
  // 'f-button-2', 80x69px
0xaa, 0xaa, 0x2a, 0xaa, 0xa2, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x55, 0x55, 0x05, 0x0d, 
0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0x80, 0x00, 0x2a, 0x72, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 
0x45, 0x55, 0x51, 0xfd, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xa8, 0xaa, 0x0f, 0xfe, 0x2a, 0xaa, 
0xaa, 0xaa, 0x55, 0x55, 0x55, 0x01, 0xff, 0xff, 0x95, 0x55, 0x55, 0x55, 0x00, 0x00, 0x00, 0x3f, 
0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xbf, 0xff, 0xff, 
0xfe, 0xdb, 0x6d, 0xb6, 0xf7, 0xbd, 0xef, 0x5f, 0xff, 0x03, 0xff, 0x6f, 0x7b, 0xde, 0xff, 0xff, 
0xff, 0xef, 0xfe, 0xf4, 0xff, 0xbf, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb3, 0xfe, 0x8f, 0x7f, 0xdb, 
0x6d, 0xb6, 0xff, 0xff, 0xff, 0xfd, 0xfe, 0x6f, 0xbf, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
0x7e, 0xff, 0x5f, 0xef, 0xff, 0xff, 0xb6, 0x99, 0x6d, 0x33, 0xbf, 0x7f, 0x6f, 0xeb, 0x6d, 0x96, 
0xff, 0xff, 0xff, 0xff, 0xdf, 0xbe, 0xf7, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x81, 
0x0f, 0xef, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb0, 0x00, 0x00, 0x1f, 0xdb, 0x6d, 0xb6, 0xff, 0xff, 
0xff, 0x80, 0x00, 0x00, 0x3f, 0x87, 0xff, 0xff, 0xf7, 0xbd, 0xfc, 0x00, 0x3f, 0xff, 0xbf, 0x00, 
0xfb, 0xde, 0xb6, 0xdb, 0x70, 0x06, 0xc0, 0x00, 0x3f, 0x40, 0x0d, 0xb6, 0xff, 0xff, 0xe0, 0x3e, 
0x00, 0x00, 0x1c, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0x81, 0xf0, 0x00, 0x00, 0x00, 0x7e, 0x03, 0xff, 
0xb6, 0xde, 0x05, 0x80, 0x00, 0x00, 0x00, 0x1b, 0x01, 0xb6, 0xf7, 0xbc, 0x1f, 0x00, 0x3f, 0xff, 
0xe0, 0x0f, 0xe0, 0xdf, 0xff, 0xf8, 0x3e, 0x01, 0xff, 0xff, 0xfc, 0x07, 0xf0, 0x7f, 0xb6, 0xd0, 
0x6c, 0x06, 0xc0, 0x00, 0xf6, 0x03, 0x68, 0x36, 0xff, 0xe0, 0xf8, 0x1f, 0xaa, 0xaa, 0x7f, 0xc1, 
0xfc, 0x1f, 0xff, 0xe1, 0xf0, 0x3f, 0x54, 0x05, 0x3f, 0xe0, 0xfe, 0x0f, 0xb6, 0x83, 0x60, 0x36, 
0xa8, 0xaa, 0x96, 0xd0, 0x6d, 0x06, 0xff, 0xc3, 0xc0, 0x7e, 0x55, 0xf9, 0x5f, 0xf0, 0x3f, 0x07, 
0xff, 0xc3, 0xc0, 0xfe, 0xa8, 0xaa, 0x9f, 0xf0, 0x3f, 0x07, 0xb6, 0xc3, 0x40, 0xb6, 0x54, 0x05, 
0x56, 0xd0, 0x2d, 0x86, 0xff, 0xc3, 0xc0, 0x7f, 0x2a, 0xaa, 0x9f, 0xf0, 0x3f, 0x87, 0xf7, 0xc3, 
0xe0, 0x3f, 0x95, 0x55, 0x3f, 0xe0, 0x7f, 0x06, 0xb6, 0xc3, 0x60, 0x16, 0xca, 0xaa, 0x76, 0xc0, 
0x6d, 0x06, 0xff, 0xe1, 0xf8, 0x0f, 0xe0, 0x00, 0xff, 0x81, 0xfe, 0x0f, 0xff, 0xe0, 0xfc, 0x03, 
0xff, 0xff, 0xfc, 0x03, 0xfc, 0x0f, 0xb6, 0xd0, 0x6c, 0x00, 0xfb, 0x6d, 0xb0, 0x03, 0x68, 0x16, 
0xf7, 0xb8, 0x3f, 0x00, 0x0f, 0xff, 0x00, 0x0f, 0xf0, 0x1e, 0xff, 0xfc, 0x1f, 0x80, 0x00, 0x00, 
0x00, 0x1f, 0xe0, 0x7f, 0xb6, 0xda, 0x05, 0xa0, 0x00, 0x00, 0x00, 0x5b, 0x40, 0xb6, 0xff, 0xff, 
0x01, 0xfe, 0x00, 0x00, 0x03, 0xff, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xe0, 0x00, 0x1f, 0xfc, 
0x07, 0xff, 0xb6, 0xd9, 0x60, 0x06, 0xdb, 0xed, 0xb6, 0xc0, 0x1b, 0x96, 0xff, 0xff, 0xfc, 0x00, 
0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
0xb6, 0xdb, 0x6f, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xed, 0xb6, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
0x01, 0xff, 0xff, 0xff, 0xf7, 0xfd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xb6, 0xdb, 
0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb6, 
0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 
0xb6, 0xdb, 0x6d, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x99, 0x6d, 0x32, 0xda, 0x65, 0xb4, 0xcb, 
0x69, 0x96, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
0xaa, 0xaa
};

const lv_img_dsc_t right_image_2 = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 80,
    .header.h = 69,
    .data_size = 620,
    .data = right_image_2_map,
};

#ifndef LV_ATTRIBUTE_IMG_RIGHT_IMAGE_3
#define LV_ATTRIBUTE_IMG_RIGHT_IMAGE_3
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_RIGHT_IMAGE_3 uint8_t
    right_image_3_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif
// 'f-button-3', 80x69px
0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x54, 0x55, 0x55, 0x55, 0x55, 
0x15, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 
0x15, 0x55, 0x55, 0x54, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
0xaa, 0xaa, 0x55, 0x55, 0x15, 0x55, 0x55, 0x51, 0x55, 0x55, 0x55, 0x55, 0x00, 0x00, 0x4a, 0xaa, 
0xaa, 0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xe5, 0x55, 0x54, 0x15, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0x00, 0x00, 0xa9, 0xff, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6e, 0x55, 0x55, 0x46, 
0xf6, 0xdb, 0x6d, 0xb6, 0xf7, 0xbd, 0xef, 0x2a, 0xaa, 0x1f, 0x7d, 0xef, 0x7b, 0xde, 0xff, 0xff, 
0xff, 0xc0, 0x01, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb7, 0xff, 0xff, 0xde, 0xdb, 
0x6d, 0xb6, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 
0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xb6, 0x99, 0x6d, 0x2f, 0xff, 0xff, 0xfa, 0xcb, 0x6d, 0x96, 
0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xfe, 0x1f, 
0xfd, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xbb, 0xfd, 0xc7, 0xfd, 0x3b, 0x6d, 0xb6, 0xff, 0xff, 
0xff, 0x81, 0xf8, 0xdb, 0xfe, 0x07, 0xff, 0xff, 0xf7, 0xbd, 0xfc, 0x01, 0xfb, 0x3d, 0xfe, 0x00, 
0xfb, 0xde, 0xb6, 0xdb, 0x70, 0x0d, 0xf7, 0xfe, 0xfe, 0xc0, 0x0d, 0xb6, 0xff, 0xff, 0xe0, 0x3c, 
0xf7, 0xfc, 0xfe, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0x81, 0xf0, 0x73, 0xf0, 0xfe, 0x7e, 0x03, 0xff, 
0xb6, 0xde, 0x05, 0x80, 0x0d, 0xee, 0xfe, 0x1b, 0x01, 0xb6, 0xf7, 0xbc, 0x1f, 0x00, 0xfa, 0x1c, 
0xfe, 0x0f, 0xe0, 0xdf, 0xff, 0xf8, 0x3e, 0x01, 0xff, 0xfe, 0xfc, 0x07, 0xf0, 0x7f, 0xb6, 0xd0, 
0x6c, 0x06, 0xc0, 0x00, 0xfd, 0x03, 0x68, 0x36, 0xff, 0xe0, 0xf8, 0x1f, 0xaa, 0xa9, 0xfb, 0xc1, 
0xfc, 0x1f, 0xff, 0xe1, 0xf0, 0x3f, 0x54, 0x05, 0xf7, 0xe0, 0xfe, 0x0f, 0xb6, 0x83, 0x60, 0x36, 
0xa8, 0xa9, 0xf6, 0xd0, 0x6d, 0x06, 0xff, 0xc3, 0xc0, 0x7e, 0x55, 0xf9, 0xef, 0xf0, 0x3f, 0x07, 
0xff, 0xc3, 0xc0, 0xfe, 0xa8, 0xa8, 0x1f, 0xf0, 0x3f, 0x07, 0xb6, 0xc3, 0x40, 0xb6, 0x54, 0x05, 
0x56, 0xd0, 0x2d, 0x86, 0xff, 0xc3, 0xc0, 0x7f, 0x2a, 0xaa, 0x9f, 0xf0, 0x3f, 0x87, 0xf7, 0xc3, 
0xe0, 0x3f, 0x95, 0x55, 0x3f, 0xe0, 0x7f, 0x06, 0xb6, 0xc3, 0x60, 0x16, 0xca, 0xaa, 0x76, 0xc0, 
0x6d, 0x06, 0xff, 0xe1, 0xf8, 0x0f, 0xe0, 0x00, 0xff, 0x81, 0xfe, 0x0f, 0xff, 0xe0, 0xfc, 0x03, 
0xff, 0xff, 0xfc, 0x03, 0xfc, 0x0f, 0xb6, 0xd0, 0x6c, 0x00, 0xfb, 0x6d, 0xb0, 0x03, 0x68, 0x16, 
0xf7, 0xb8, 0x3f, 0x00, 0x0f, 0xff, 0x00, 0x0f, 0xf0, 0x1e, 0xff, 0xfc, 0x1f, 0x80, 0x00, 0x00, 
0x00, 0x1f, 0xe0, 0x7f, 0xb6, 0xda, 0x05, 0xa0, 0x00, 0x00, 0x00, 0x5b, 0x40, 0xb6, 0xff, 0xff, 
0x01, 0xfe, 0x00, 0x00, 0x03, 0xff, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xe0, 0x00, 0x1f, 0xfc, 
0x07, 0xff, 0xb6, 0xd9, 0x60, 0x06, 0xdb, 0xed, 0xb6, 0xc0, 0x1b, 0x96, 0xff, 0xff, 0xfc, 0x00, 
0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
0xb6, 0xdb, 0x6f, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xed, 0xb6, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
0x01, 0xff, 0xff, 0xff, 0xf7, 0xfd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xb6, 0xdb, 
0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb6, 
0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 
0xb6, 0xdb, 0x6d, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x99, 0x6d, 0x32, 0xda, 0x65, 0xb4, 0xcb, 
0x69, 0x96, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
0xaa, 0xaa
};

const lv_img_dsc_t right_image_3 = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 80,
    .header.h = 69,
    .data_size = 620,
    .data = right_image_3_map,
};

#ifndef LV_ATTRIBUTE_IMG_RIGHT_IMAGE_4
#define LV_ATTRIBUTE_IMG_RIGHT_IMAGE_4
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_RIGHT_IMAGE_4 uint8_t
    right_image_4_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif
  // 'f-button-4', 80x69px
0xaa, 0x8a, 0xaa, 0xaa, 0xaa, 0xaa, 0xa2, 0xaa, 0xaa, 0xaa, 0x55, 0x45, 0x55, 0x55, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0xaa, 0xa2, 0xaa, 0xaa, 0xaa, 0xaa, 0xa2, 0xaa, 0xaa, 0xaa, 0x55, 0x51, 
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xa8, 0xaa, 0xaa, 0xaa, 0xaa, 0xa2, 0xaa, 
0xaa, 0xaa, 0x55, 0x54, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x00, 0x2a, 0xaa, 
0xaa, 0xaa, 0xa0, 0x00, 0x00, 0x00, 0xff, 0xff, 0x95, 0x55, 0x55, 0x55, 0x4f, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xca, 0xaa, 0xaa, 0xaa, 0x9f, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x65, 0x55, 0x55, 0x54, 
0x36, 0xdb, 0x6d, 0xb6, 0xf7, 0xbd, 0xe8, 0xaa, 0xaa, 0xa0, 0xbd, 0xef, 0x7b, 0xde, 0xff, 0xff, 
0xfc, 0x15, 0x55, 0x05, 0x3f, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0x20, 0x00, 0x2a, 0x76, 0xdb, 
0x6d, 0xb6, 0xff, 0xff, 0xff, 0x95, 0x55, 0x50, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 
0xaa, 0x87, 0xbf, 0xff, 0xff, 0xff, 0xb6, 0x99, 0x6d, 0x3c, 0x00, 0x7f, 0xd4, 0xcb, 0x6d, 0x96, 
0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 
0xef, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb7, 0xff, 0xff, 0xf0, 0x3b, 0x6d, 0xb6, 0xff, 0xff, 
0xff, 0x87, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xf7, 0xbd, 0xfc, 0x03, 0xff, 0xff, 0xf0, 0x00, 
0xfb, 0xde, 0xb6, 0xdb, 0x70, 0x0b, 0xfc, 0x7f, 0xf6, 0xc0, 0x0d, 0xb6, 0xff, 0xff, 0xe0, 0x3b, 
0xf3, 0xbf, 0xfb, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0x81, 0xf7, 0xf7, 0x1f, 0xf8, 0x7e, 0x03, 0xff, 
0xb6, 0xde, 0x05, 0x87, 0xe0, 0x6f, 0xf8, 0x1b, 0x01, 0xb6, 0xf7, 0xbc, 0x1f, 0x07, 0xde, 0xf7, 
0xf8, 0x0f, 0xe0, 0xdf, 0xff, 0xf8, 0x3e, 0x03, 0xbf, 0xf7, 0xf8, 0x07, 0xf0, 0x7f, 0xb6, 0xd0, 
0x6c, 0x0c, 0x3f, 0xc7, 0xfa, 0x03, 0x68, 0x36, 0xff, 0xe0, 0xf8, 0x1f, 0x87, 0x27, 0xf7, 0xc1, 
0xfc, 0x1f, 0xff, 0xe1, 0xf0, 0x3f, 0x50, 0x07, 0xf7, 0xe0, 0xfe, 0x0f, 0xb6, 0x83, 0x60, 0x36, 
0xa8, 0xaf, 0xe6, 0xd0, 0x6d, 0x06, 0xff, 0xc3, 0xc0, 0x7e, 0x55, 0xef, 0xef, 0xf0, 0x3f, 0x07, 
0xff, 0xc3, 0xc0, 0xfe, 0xa8, 0x9f, 0xcf, 0xf0, 0x3f, 0x07, 0xb6, 0xc3, 0x40, 0xb6, 0x54, 0x1f, 
0xa6, 0xd0, 0x2d, 0x86, 0xff, 0xc3, 0xc0, 0x7f, 0x2a, 0x9f, 0x9f, 0xf0, 0x3f, 0x87, 0xf7, 0xc3, 
0xe0, 0x3f, 0x95, 0x5f, 0x3f, 0xe0, 0x7f, 0x06, 0xb6, 0xc3, 0x60, 0x16, 0xca, 0xae, 0x76, 0xc0, 
0x6d, 0x06, 0xff, 0xe1, 0xf8, 0x0f, 0xe0, 0x01, 0xff, 0x81, 0xfe, 0x0f, 0xff, 0xe0, 0xfc, 0x03, 
0xff, 0xff, 0xfc, 0x03, 0xfc, 0x0f, 0xb6, 0xd0, 0x6c, 0x00, 0xfb, 0x6d, 0xb0, 0x03, 0x68, 0x16, 
0xf7, 0xb8, 0x3f, 0x00, 0x0f, 0xff, 0x00, 0x0f, 0xf0, 0x1e, 0xff, 0xfc, 0x1f, 0x80, 0x00, 0x00, 
0x00, 0x1f, 0xe0, 0x7f, 0xb6, 0xda, 0x05, 0xa0, 0x00, 0x00, 0x00, 0x5b, 0x40, 0xb6, 0xff, 0xff, 
0x01, 0xfe, 0x00, 0x00, 0x03, 0xff, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xe0, 0x00, 0x1f, 0xfc, 
0x07, 0xff, 0xb6, 0xd9, 0x60, 0x06, 0xdb, 0xed, 0xb6, 0xc0, 0x1b, 0x96, 0xff, 0xff, 0xfc, 0x00, 
0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
0xb6, 0xdb, 0x6f, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xed, 0xb6, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
0x01, 0xff, 0xff, 0xff, 0xf7, 0xfd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xb6, 0xdb, 
0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb6, 
0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 
0xb6, 0xdb, 0x6d, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x99, 0x6d, 0x32, 0xda, 0x65, 0xb4, 0xcb, 
0x69, 0x96, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
0xaa, 0xaa
};

const lv_img_dsc_t right_image_4 = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 80,
    .header.h = 69,
    .data_size = 620,
    .data = right_image_4_map,
};

#ifndef LV_ATTRIBUTE_IMG_RIGHT_IMAGE_5
#define LV_ATTRIBUTE_IMG_RIGHT_IMAGE_5
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_RIGHT_IMAGE_5 uint8_t
    right_image_5_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif
// 'f-button-5', 80x69px
0xaa, 0x8a, 0xaa, 0xaa, 0xaa, 0xaa, 0xa2, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0xaa, 0xa2, 0xaa, 0xaa, 0xaa, 0xaa, 0xa2, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xa2, 0xaa, 0xaa, 0xaa, 0xaa, 0xa2, 0xaa, 
0xaa, 0xaa, 0x55, 0x51, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00, 0x00, 0xaa, 0xaa, 
0xaa, 0xaa, 0xa0, 0x00, 0x00, 0x00, 0xff, 0xfd, 0x55, 0x55, 0x55, 0x55, 0x57, 0xff, 0xff, 0xff, 
0xff, 0xfe, 0x2a, 0xaa, 0xaa, 0xaa, 0xa7, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x55, 0x55, 0x55, 0x55, 
0x4e, 0xdb, 0x6d, 0xb6, 0xf7, 0xbd, 0x8a, 0xaa, 0xaa, 0xaa, 0xad, 0xef, 0x7b, 0xde, 0xff, 0xff, 
0xd5, 0x55, 0x55, 0x55, 0x5f, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x62, 0xaa, 0xaa, 0xaa, 0x16, 0xdb, 
0x6d, 0xb6, 0xff, 0xff, 0xf1, 0x55, 0x55, 0x54, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0a, 
0xaa, 0x82, 0x7f, 0xff, 0xff, 0xff, 0xb6, 0x99, 0x6d, 0x50, 0x00, 0x14, 0xf4, 0xcb, 0x6d, 0x96, 
0xff, 0xff, 0xff, 0x8a, 0xaa, 0xa9, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x55, 0x07, 
0xaf, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xf8, 0x00, 0xff, 0x80, 0x3b, 0x6d, 0xb6, 0xff, 0xff, 
0xff, 0xe7, 0xff, 0xff, 0x80, 0x07, 0xff, 0xff, 0xf7, 0xbd, 0xfc, 0x1f, 0xff, 0xff, 0xb0, 0x00, 
0xfb, 0xde, 0xb6, 0xdb, 0x70, 0x3f, 0xff, 0xff, 0xd6, 0xc0, 0x0d, 0xb6, 0xff, 0xff, 0xe0, 0x3f, 
0xff, 0xff, 0xc3, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0x81, 0xbf, 0xff, 0xff, 0xc0, 0x7e, 0x03, 0xff, 
0xb6, 0xde, 0x05, 0xbf, 0xe7, 0xff, 0xc0, 0x1b, 0x01, 0xb6, 0xf7, 0xbc, 0x1f, 0x7f, 0x9b, 0xff, 
0xc0, 0x0f, 0xe0, 0xdf, 0xff, 0xf8, 0x3e, 0xfc, 0x35, 0xff, 0xbc, 0x07, 0xf0, 0x7f, 0xb6, 0xd0, 
0x6c, 0xf3, 0xce, 0xff, 0xb6, 0x03, 0x68, 0x36, 0xff, 0xe0, 0xf8, 0x67, 0xde, 0xff, 0x7f, 0xc1, 
0xfc, 0x1f, 0xff, 0xe1, 0xf0, 0x17, 0xfe, 0xfe, 0x3f, 0xe0, 0xfe, 0x0f, 0xb6, 0x83, 0x60, 0x33, 
0xfe, 0xfc, 0x96, 0xd0, 0x6d, 0x06, 0xff, 0xc3, 0xc0, 0x78, 0xf1, 0xfd, 0x5f, 0xf0, 0x3f, 0x07, 
0xff, 0xc3, 0xc0, 0xfe, 0x09, 0xfa, 0x9f, 0xf0, 0x3f, 0x07, 0xb6, 0xc3, 0x40, 0xb6, 0x55, 0xf9, 
0x56, 0xd0, 0x2d, 0x86, 0xff, 0xc3, 0xc0, 0x7f, 0x2b, 0xf2, 0x9f, 0xf0, 0x3f, 0x87, 0xf7, 0xc3, 
0xe0, 0x3f, 0x93, 0xf5, 0x3f, 0xe0, 0x7f, 0x06, 0xb6, 0xc3, 0x60, 0x16, 0xc7, 0xf2, 0x76, 0xc0, 
0x6d, 0x06, 0xff, 0xe1, 0xf8, 0x0f, 0xe7, 0xf0, 0xff, 0x81, 0xfe, 0x0f, 0xff, 0xe0, 0xfc, 0x03, 
0xfb, 0xf7, 0xfc, 0x03, 0xfc, 0x0f, 0xb6, 0xd0, 0x6c, 0x00, 0xfd, 0xf5, 0xb0, 0x03, 0x68, 0x16, 
0xf7, 0xb8, 0x3f, 0x00, 0x0e, 0x0f, 0x00, 0x0f, 0xf0, 0x1e, 0xff, 0xfc, 0x1f, 0x80, 0x00, 0x00, 
0x00, 0x1f, 0xe0, 0x7f, 0xb6, 0xda, 0x05, 0xa0, 0x00, 0x00, 0x00, 0x5b, 0x40, 0xb6, 0xff, 0xff, 
0x01, 0xfe, 0x00, 0x00, 0x03, 0xff, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xe0, 0x00, 0x1f, 0xfc, 
0x07, 0xff, 0xb6, 0xd9, 0x60, 0x06, 0xdb, 0xed, 0xb6, 0xc0, 0x1b, 0x96, 0xff, 0xff, 0xfc, 0x00, 
0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
0xb6, 0xdb, 0x6f, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xed, 0xb6, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
0x01, 0xff, 0xff, 0xff, 0xf7, 0xfd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xb6, 0xdb, 
0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb6, 
0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 0xf7, 0xbd, 0xef, 0x7b, 0xde, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 
0xb6, 0xdb, 0x6d, 0xb6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb6, 0x99, 0x6d, 0x32, 0xda, 0x65, 0xb4, 0xcb, 
0x69, 0x96, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0x55, 
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
0xaa, 0xaa
};

const lv_img_dsc_t right_image_5 = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 80,
    .header.h = 69,
    .data_size = 620,
    .data = right_image_5_map,
};
