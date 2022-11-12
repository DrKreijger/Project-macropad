#include "3by2.h"


#ifdef BONGO_ENABLE
#include "bongo.h"
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
   draw_bongo(false);
   return(false);
}

#endif