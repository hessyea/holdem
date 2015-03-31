# texas hold'em poker

# compile
依赖libevent库
ubuntu下:
```bash
sudo apt-get install libevent-dev
git clone https://github.com/wangchuan3533/texas_holdem.git
cd texas_holdem
make
```

开发机环境下:
```bash
jumbo install libevent
git clone https://github.com/wangchuan3533/texas_holdem.git
cd texas_holdem
make
```

# test
## 如何运行
```bash
## server
./server &

## client 1
telnet localhost 10000
texas> login x
texas> mkdir t

## client 2
telnet localhost 10000
texas> login y
texas> cd t

## client 3
telnet localhost 10000
texas> login z
texas> cd t
```
## 客户端命令
### 房间相关
login <name>   登录
logout         登出
mkdir <name>   新建游戏
cd <name>      加入游戏
exit           退出游戏
ls <name>      查看游戏或玩家
pwd            查看当前游戏

### 游戏操作
raise <num>    加注 (数字部分可以使用10进制或16进制数字，也可以是数学表达式, 支持'+', '-', '*', '/', '(', ')')
call           跟注
fold           弃牌
check          让牌

## 使用 websocket代理

```bash
cd proxy
npm install
node index.js
```
用浏览器打开 http://localhost:8899/

## unit test
```bash
make clean
make test
./test
```
