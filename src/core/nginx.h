
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#ifndef _NGINX_H_INCLUDED_
#define _NGINX_H_INCLUDED_


#define nginx_version      1017008
#define NGINX_VERSION      "1.17.8"
#define NGINX_VER          "nginx/" NGINX_VERSION

#ifdef NGX_BUILD
#define NGINX_VER_BUILD    NGINX_VER " (" NGX_BUILD ")"
#else
#define NGINX_VER_BUILD    NGINX_VER
#endif
/**
 * Nginx平滑升级时,旧Nginx进程通过环境变量NGINX传递需要打开的监听端口
 */ 
#define NGINX_VAR          "NGINX"
/**
 * 修改旧进程的nginx.pid文件名为nginx.pid.oldbin
 */ 
#define NGX_OLDPID_EXT     ".oldbin"


#endif /* _NGINX_H_INCLUDED_ */
