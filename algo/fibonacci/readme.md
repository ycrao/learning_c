# 斐波那契数

>   详细定义见 [维基百科](https://zh.wikipedia.org/zh-cn/%E6%96%90%E6%B3%A2%E9%82%A3%E5%A5%91%E6%95%B0%E5%88%97) 。

### 定义

```
fib(0) = 0;
fib(1) = 1;
fib(2) = fib(1) + fib(0) = 1;
fib(3) = fib(2) + fib(1) = 2;
fib(4) = fib(3) + fib(2) = 3;
...
fib(n) = fib(n-1) + fib(n-2);  (n >= 2)
```

### 代码实现

[fib.c](fib.c)