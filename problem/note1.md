lib目录中实现了相关的函数，比如包裹函数 
使用gcc链接外部库时，需要把命令选项放在最后。
eg, `gcc -I ../key  -o finaleREsu tcpcliserv01.c -L../lib/ -lfunc `   

使用io函数时，有的不会即时输出，可以刷新缓冲区，或者使用'\n'

### 临时打开一个端口？

`sudo iptables -I INPUT -p udp  --dport 7 -j ACCEPT`， 然后`sudo iptables-save`

#### 持久化

`apt-get install iptables -persistent`, `service iptables-persistent save`



