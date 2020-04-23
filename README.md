USTH CS Network Programming
=====================================

Students are expected to:
* Fork this repository to your github account
* Push your commits regularly, with **proper** commit messages

Student Name: *Hoang Bao Long*
Microsoft Windows [Version 10.0.18363.778]
(c) 2019 Microsoft Corporation. All rights reserved.

C:\Users\longh>tracert 8.8.8.8

Tracing route to dns.google [8.8.8.8]
over a maximum of 30 hops:

  1     2 ms     1 ms    <1 ms  192.168.1.1
  2     5 ms     3 ms     3 ms  static.vnpt-hanoi.com.vn [203.210.148.84]
  3     4 ms     3 ms     3 ms  static.vnpt.vn [113.177.31.125]
  4     4 ms     5 ms     4 ms  static.vnpt.vn [113.171.33.37]
  5    31 ms    26 ms    27 ms  static.vnpt.vn [113.171.5.197]
  6    16 ms    14 ms     5 ms  static.vnpt.vn [113.171.5.114]
  7    23 ms    32 ms    23 ms  static.vnpt.vn [113.171.35.97]
  8    27 ms    28 ms    28 ms  72.14.219.148
  9    37 ms    43 ms    39 ms  66.249.95.211
 10    36 ms    35 ms    37 ms  209.85.243.23
 11    25 ms    25 ms    27 ms  dns.google [8.8.8.8]

Trace complete.

C:\Users\longh>ping https://usth.edu.vn/
Ping request could not find host https://usth.edu.vn/. Please check the name and try again.

C:\Users\longh>ping www.usth.edu.vn

Pinging www.usth.edu.vn [2606:4700:3031::681b:a10f] with 32 bytes of data:
Reply from 2606:4700:3031::681b:a10f: time=90ms
Reply from 2606:4700:3031::681b:a10f: time=90ms
Reply from 2606:4700:3031::681b:a10f: time=90ms
Reply from 2606:4700:3031::681b:a10f: time=91ms

Ping statistics for 2606:4700:3031::681b:a10f:
    Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 90ms, Maximum = 91ms, Average = 90ms

C:\Users\longh>tracert www.usth.edu.vn

Tracing route to www.usth.edu.vn [2606:4700:3031::681b:a10f]
over a maximum of 30 hops:

  1     1 ms     2 ms     1 ms  2001:ee0:4081:d57:a265:18ff:fec8:6b4f
  2     3 ms     6 ms     2 ms  2606:4700:3031::681b:a10f

Trace complete.

C:\Users\longh>
