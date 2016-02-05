//
//  Hello_World.c
//  Hello World
//
//  Created by Paolo Perego on 05/02/16.
//  Copyright © 2016 Codice Insicuro. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t Hello_World_start(kmod_info_t * ki, void *d);
kern_return_t Hello_World_stop(kmod_info_t *ki, void *d);

kern_return_t Hello_World_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t Hello_World_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
