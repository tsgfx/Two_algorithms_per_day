# http://t.cn/E9WBrut
# -*- coding: utf-8 -*-

# 遍历所有四位数
for x1 in range(1000, 10000):
    x2 = x1 * 9  # 计算N的9倍
    # 判断x2是否是x1的反序数
    if str(x1) == str(x2)[::-1]:
        print(x1)
