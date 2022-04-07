#include "Styles.h"

void Pinetime::Applications::Screens::SetRadioButtonStyle(lv_obj_t* checkbox) {
  lv_obj_set_style_local_radius(checkbox, LV_CHECKBOX_PART_BULLET, LV_STATE_DEFAULT, LV_RADIUS_CIRCLE);
  lv_obj_set_style_local_border_width(checkbox, LV_CHECKBOX_PART_BULLET, LV_STATE_CHECKED, 9);
  lv_obj_set_style_local_border_color(checkbox, LV_CHECKBOX_PART_BULLET, LV_STATE_CHECKED, LV_COLOR_MAKE(0x0, 0xb0, 0x0));
  lv_obj_set_style_local_bg_color(checkbox, LV_CHECKBOX_PART_BULLET, LV_STATE_CHECKED, LV_COLOR_WHITE);
}