#ifndef __SRAIN_IMAGE_H
#define __SRAIN_IMAGE_H

#include <gtk/gtk.h>

#define SRAIN_TYPE_IMAGE (srain_image_get_type())
#define SRAIN_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST((obj), SRAIN_TYPE_IMAGE, SrainImage))
#define SRAIN_IS_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE((obj), SRAIN_TYPE_IMAGE))

/* SrainImageType's possible value:
 * - SRAIN_IMAGE_ENLARGE: show a enlarged image in a
 *      new window when clicked
 * - SRAIN_IMAGE_SPININER: show a GtkSpininer when downloading
 *      image from url
 * - SRAIN_IMAGE_AUTOLOAD: auto download image, if this bit no setted,
 *      you should click a button to load image.
 */
typedef int SrainImageType;
#define SRAIN_IMAGE_ENLARGE     0x1
#define SRAIN_IMAGE_SPININER    0x2
#define SRAIN_IMAGE_AUTOLOAD    0x4

typedef struct _SrainImage SrainImage;
typedef struct _SrainImageClass SrainImageClass;

GType srain_image_get_type(void);
SrainImage *srain_image_new(void);
void srain_image_set_from_file(SrainImage *simg, char *file, int size, SrainImageType type);
void srain_image_set_from_url_async(SrainImage *simg, const char *url, int size, SrainImageType type);

#endif /* __SRAIN_IMAGE_H */
