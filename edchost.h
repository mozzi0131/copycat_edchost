#ifndef __EDC_HOST_H__
#define __EDC_HOST_H__

#include <glib-2.0/glib.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _EdcHost EdcHost;
struct _EdcHost{
    gchar *name;
    gchar *address;
    
};

#ifdef __cplusplus
}
#endif

#endif // __EDC_HOST_H__