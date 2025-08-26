#include<linux/module.h>
#include<linux/init.h>

static int __init verticraze_init(void)
{
	pr_info("Hullo, initialized!!\n");
	return 0;	
}

static void __exit verticraze_exit(void)
{
	pr_info("Hullo,Exit\n");
}

module_init(verticraze_init);
module_exit(verticraze_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Verticraze");
MODULE_DESCRIPTION("Hello");


