/*                                                     
 * $Id: hello.c,v 1.5 2004/10/26 03:32:21 corbet Exp $ 
 */                                                    
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

#define GITHUB_USER "ytkachenko83"

static int hello_init(void)
{
	printk(KERN_ALERT "Hello, world // %s\n", GITHUB_USER);
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "Goodbye, cruel world // %s\n", GITHUB_USER);
}

module_init(hello_init);
module_exit(hello_exit);