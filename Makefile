
default:	build

clean:
	rm -rf Makefile objs

build:
	$(MAKE) -f objs/Makefile

install:
	$(MAKE) -f objs/Makefile install

modules:
	$(MAKE) -f objs/Makefile modules

upgrade:
	/Users/guanjun/nginx/sbin/nginx -t

	kill -USR2 `cat /Users/guanjun/nginx/logs/nginx.pid`
	sleep 1
	test -f /Users/guanjun/nginx/logs/nginx.pid.oldbin

	kill -QUIT `cat /Users/guanjun/nginx/logs/nginx.pid.oldbin`
