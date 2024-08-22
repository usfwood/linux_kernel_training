/*  hello-1.c  The simplest kernel module.
 *  
 *  Copyright (C) 2001 by Peter Jay Salzman
 * 
 *  08/02/2006  -- Updated by Rodirgo Rubira Branco
 * /
 

 /* Kernel Programming */
 #define MODULE
 #define LINUX
 #define __KERNEL__

 #include <linux/module.h> /* Needed for all modules */
 #include <linux/kernel.h> /* Needed for KERN_ALERT */

 int init_module(void)
 {
     printk("<1>Hello World 1.\n");

     // A non 0 return means init_module failed; module can't be loaded.
     return 0;
 }

 void cleanup_module(void)
 {
     printk(KERN_ALERT "Goodbye World 1.\n");
 }

MODULE_LICENSE("GPL");

