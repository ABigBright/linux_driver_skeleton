#include <linux/module.h>

static int drv_init(void)
{
    printk("%s:%d\r\n", __FUNCTION__, __LINE__);
    return 0;
}

static void drv_exit(void)
{
    printk("%s:%d\r\n", __FUNCTION__, __LINE__);
}

module_init(drv_init);
module_exit(drv_exit);
