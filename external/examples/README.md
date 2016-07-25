fast-artificial-neural-network library examples compiled to javascript
======================================================================
this directoy contains pre-compiled javascript binaries of the fann examples @ https://github.com/libfann/fann/tree/2.2.0/examples

# package-listing
```
1       2016-07-25 15:20:44 +0200        3514 bytes    Makefile
2       2016-07-25 15:27:20 +0200         448 bytes    README.md
3       2016-07-25 15:10:48 +0200        3681 bytes    cascade_train.c
4       2016-07-25 15:20:44 +0200      995963 bytes    cascade_train.js
5       2016-07-25 15:10:48 +0200        1893 bytes    momentums.c
6       2016-07-25 15:10:48 +0200        2335 bytes    mushroom.c
7       2016-07-25 15:20:44 +0200      915624 bytes    mushroom.js
8       2016-07-25 15:10:48 +0200        2103 bytes    robot.c
9       2016-07-25 15:20:44 +0200      913569 bytes    robot.js
10      2016-07-25 15:27:20 +0200        3981 bytes    scaling.net
11      2016-07-25 15:10:48 +0200        1038 bytes    scaling_test.c
12      2016-07-25 15:20:44 +0200      873994 bytes    scaling_test.js
13      2016-07-25 15:10:48 +0200        1241 bytes    scaling_train.c
14      2016-07-25 15:20:44 +0200      952191 bytes    scaling_train.js
15      2016-07-25 15:10:48 +0200        1241 bytes    simple_test.c
16      2016-07-25 15:20:44 +0200      826257 bytes    simple_test.js
17      2016-07-25 15:10:48 +0200        1638 bytes    simple_train.c
18      2016-07-25 15:20:44 +0200      911909 bytes    simple_train.js
19      2016-07-25 15:10:48 +0200        3636 bytes    steepness_train.c
20      2016-07-25 15:20:44 +0200      915468 bytes    steepness_train.js
21      2016-07-25 15:27:20 +0200       77821 bytes    test_result.txt
22      2016-07-25 15:10:48 +0200          36 bytes    xor.data
23      2016-07-25 15:10:48 +0200        4953 bytes    xor_sample.cpp
24      2016-07-25 15:10:48 +0200        2379 bytes    xor_test.c
25      2016-07-25 15:20:44 +0200      850754 bytes    xor_test.js
26      2016-07-25 15:10:48 +0200        3017 bytes    xor_train.c
27      2016-07-25 15:20:44 +0200      940458 bytes    xor_train.js
```

# to run the pre-compiled examples
- install nodejs
- clone this branch
```
git clone git@github.com:kaizhu256/node-fann-lite.git --single-branch --branch=examples
```
- and type:
```
cd external/examples
make runtest # there is no compiling - it simply runs tests with the pre-compiled binaries
```

# output-log from running "make runtest"
```
Training network
node xor_train.js
Creating network.
Training network.
Max epochs     1000. Desired error: 0.0000000000.
Epochs            1. Current error: 0.2997876704. Bit fail 4.
Epochs           10. Current error: 0.1527178586. Bit fail 4.
Epochs           20. Current error: 0.0451563038. Bit fail 4.
Epochs           30. Current error: 0.0082749706. Bit fail 4.
Epochs           40. Current error: 0.0011275391. Bit fail 3.
Epochs           50. Current error: 0.0000868683. Bit fail 1.
Epochs           53. Current error: 0.0000329730. Bit fail 0.
Testing network. 0.000020
XOR test (-1.000000,-1.000000) -> -0.999494, should be -1.000000, difference=0.000506
XOR test (-1.000000,1.000000) -> 0.987042, should be 1.000000, difference=0.012958
XOR test (1.000000,-1.000000) -> 0.993626, should be 1.000000, difference=0.006374
XOR test (1.000000,1.000000) -> -0.989210, should be -1.000000, difference=0.010790
Saving network.
Cleaning up.


Testing network with floats
node xor_test.js
Creating network.
Layer / Neuron 0123456
L   1 / N    3 Deb....
L   1 / N    4 CCD....
L   1 / N    5 cCc....
L   1 / N    6 .......
L   2 / N    7 ...DCDB
L   2 / N    8 .......
Input layer                          :   2 neurons, 1 bias
  Hidden layer                       :   3 neurons, 1 bias
Output layer                         :   1 neurons
Total neurons and biases             :   8
Total connections                    :  13
Connection rate                      :   1.000
Network type                         :   FANN_NETTYPE_LAYER
Decimal point                        :  13
Multiplier                           :8192
Bit fail limit                       :  82
Testing network.
XOR test (-8192, -8192) -> -8192, should be -8192, difference=0.000000
XOR test (-8192, 8192) -> 8030, should be 8192, difference=0.019775
XOR test (8192, -8192) -> 8192, should be 8192, difference=0.000000
XOR test (8192, 8192) -> -8023, should be -8192, difference=0.020630
Cleaning up.

#!! @echo
#!! @echo Testing network with fixed points
#!! node xor_test_fixed.js

simple_train
node simple_train.js
Max epochs   500000. Desired error: 0.0010000000.
Epochs            1. Current error: 0.2500016689. Bit fail 4.
Epochs           20. Current error: 0.0009125834. Bit fail 0.


steepness_train
node steepness_train.js
Max epochs   500000. Desired error: 0.0010000000
Epochs            1. Current error: 0.2524190247
Epochs          177. Current error: 0.0009809781
Steepness: 1.100000
Epochs          178. Current error: 0.0003001272
Steepness: 1.200000
Epochs          179. Current error: 0.0001034043
Steepness: 1.300000
Epochs          180. Current error: 0.0000379862
Steepness: 1.400000
Epochs          181. Current error: 0.0000143236
Steepness: 1.500000
Epochs          182. Current error: 0.0000054580
Steepness: 1.600000
Epochs          183. Current error: 0.0000021183
Steepness: 1.700000
Epochs          184. Current error: 0.0000008573
Steepness: 1.800000
Epochs          185. Current error: 0.0000003642
Steepness: 1.900000
Epochs          186. Current error: 0.0000001601
Steepness: 2.000000
Epochs          187. Current error: 0.0000000805
Steepness: 2.100000
Epochs          188. Current error: 0.0000002841
Steepness: 2.200000
Epochs          189. Current error: 0.0000000165
Steepness: 2.300000
Epochs          190. Current error: 0.0000000094
Steepness: 2.400000
Epochs          191. Current error: 0.0000000097
Steepness: 2.500000
Epochs          192. Current error: 0.0000001791
Steepness: 2.600000
Epochs          193. Current error: 0.0000000065
Steepness: 2.700000
Epochs          194. Current error: 0.0000000039
Steepness: 2.800000
Epochs          195. Current error: 0.0000000031
Steepness: 2.900000
Epochs          196. Current error: 0.0000000057
Steepness: 3.000000
Epochs          197. Current error: 0.0000000063
Steepness: 3.100000
Epochs          198. Current error: 0.0000000150
Steepness: 3.200000
Epochs          199. Current error: 0.0000000682
Steepness: 3.300000
Epochs          200. Current error: 0.0000000110
Steepness: 3.400000
Epochs          201. Current error: 0.0000000102
Steepness: 3.500000
Epochs          202. Current error: 0.0000000153
Steepness: 3.600000
Epochs          203. Current error: 0.0000000205
Steepness: 3.700000
Epochs          204. Current error: 0.0000000108
Steepness: 3.800000
Epochs          205. Current error: 0.0000000067
Steepness: 3.900000
Epochs          206. Current error: 0.0000000044
Steepness: 4.000000
Epochs          207. Current error: 0.0000000033
Steepness: 4.100000
Epochs          208. Current error: 0.0000000030
Steepness: 4.200000
Epochs          209. Current error: 0.0000000040
Steepness: 4.300000
Epochs          210. Current error: 0.0000000103
Steepness: 4.400000
Epochs          211. Current error: 0.0000000064
Steepness: 4.500000
Epochs          212. Current error: 0.0000000042
Steepness: 4.600000
Epochs          213. Current error: 0.0000000028
Steepness: 4.700000
Epochs          214. Current error: 0.0000000020
Steepness: 4.800000
Epochs          215. Current error: 0.0000000015
Steepness: 4.900000
Epochs          216. Current error: 0.0000000013
Steepness: 5.000000
Epochs          217. Current error: 0.0000000014
Steepness: 5.100000
Epochs          218. Current error: 0.0000000023
Steepness: 5.200000
Epochs          219. Current error: 0.0000000078
Steepness: 5.300000
Epochs          220. Current error: 0.0000000032
Steepness: 5.400000
Epochs          221. Current error: 0.0000000030
Steepness: 5.500000
Epochs          222. Current error: 0.0000000035
Steepness: 5.600000
Epochs          223. Current error: 0.0000000055
Steepness: 5.700000
Epochs          224. Current error: 0.0000000028
Steepness: 5.800000
Epochs          225. Current error: 0.0000000025
Steepness: 5.900000
Epochs          226. Current error: 0.0000000027
Steepness: 6.000000
Epochs          227. Current error: 0.0000000041
Steepness: 6.100000
Epochs          228. Current error: 0.0000000025
Steepness: 6.200000
Epochs          229. Current error: 0.0000000021
Steepness: 6.300000
Epochs          230. Current error: 0.0000000019
Steepness: 6.400000
Epochs          231. Current error: 0.0000000022
Steepness: 6.500000
Epochs          232. Current error: 0.0000000036
Steepness: 6.600000
Epochs          233. Current error: 0.0000000019
Steepness: 6.700000
Epochs          234. Current error: 0.0000000018
Steepness: 6.800000
Epochs          235. Current error: 0.0000000019
Steepness: 6.900000
Epochs          236. Current error: 0.0000000028
Steepness: 7.000000
Epochs          237. Current error: 0.0000000017
Steepness: 7.100000
Epochs          238. Current error: 0.0000000015
Steepness: 7.200000
Epochs          239. Current error: 0.0000000015
Steepness: 7.300000
Epochs          240. Current error: 0.0000000018
Steepness: 7.400000
Epochs          241. Current error: 0.0000000019
Steepness: 7.500000
Epochs          242. Current error: 0.0000000017
Steepness: 7.600000
Epochs          243. Current error: 0.0000000016
Steepness: 7.700000
Epochs          244. Current error: 0.0000000019
Steepness: 7.800000
Epochs          245. Current error: 0.0000000013
Steepness: 7.900000
Epochs          246. Current error: 0.0000000011
Steepness: 8.000000
Epochs          247. Current error: 0.0000000010
Steepness: 8.100000
Epochs          248. Current error: 0.0000000010
Steepness: 8.200000
Epochs          249. Current error: 0.0000000013
Steepness: 8.300000
Epochs          250. Current error: 0.0000000014
Steepness: 8.400000
Epochs          251. Current error: 0.0000000012
Steepness: 8.500000
Epochs          252. Current error: 0.0000000012
Steepness: 8.600000
Epochs          253. Current error: 0.0000000013
Steepness: 8.700000
Epochs          254. Current error: 0.0000000011
Steepness: 8.800000
Epochs          255. Current error: 0.0000000011
Steepness: 8.900000
Epochs          256. Current error: 0.0000000012
Steepness: 9.000000
Epochs          257. Current error: 0.0000000009
Steepness: 9.100000
Epochs          258. Current error: 0.0000000008
Steepness: 9.200000
Epochs          259. Current error: 0.0000000007
Steepness: 9.300000
Epochs          260. Current error: 0.0000000006
Steepness: 9.400000
Epochs          261. Current error: 0.0000000006
Steepness: 9.500000
Epochs          262. Current error: 0.0000000007
Steepness: 9.600000
Epochs          263. Current error: 0.0000000011
Steepness: 9.700000
Epochs          264. Current error: 0.0000000007
Steepness: 9.800000
Epochs          265. Current error: 0.0000000007
Steepness: 9.900000
Epochs          266. Current error: 0.0000000007
Steepness: 10.000000
Epochs          267. Current error: 0.0000000009
Steepness: 10.100000
Epochs          268. Current error: 0.0000000007
Steepness: 10.200000
Epochs          269. Current error: 0.0000000006
Steepness: 10.300000
Epochs          270. Current error: 0.0000000005
Steepness: 10.400000
Epochs          271. Current error: 0.0000000005
Steepness: 10.500000
Epochs          272. Current error: 0.0000000006
Steepness: 10.600000
Epochs          273. Current error: 0.0000000007
Steepness: 10.700000
Epochs          274. Current error: 0.0000000006
Steepness: 10.800000
Epochs          275. Current error: 0.0000000005
Steepness: 10.900000
Epochs          276. Current error: 0.0000000004
Steepness: 11.000000
Epochs          277. Current error: 0.0000000003
Steepness: 11.100000
Epochs          278. Current error: 0.0000000003
Steepness: 11.200000
Epochs          279. Current error: 0.0000000002
Steepness: 11.300000
Epochs          280. Current error: 0.0000000002
Steepness: 11.400000
Epochs          281. Current error: 0.0000000002
Steepness: 11.500000
Epochs          282. Current error: 0.0000000001
Steepness: 11.600000
Epochs          283. Current error: 0.0000000001
Steepness: 11.700000
Epochs          284. Current error: 0.0000000001
Steepness: 11.800000
Epochs          285. Current error: 0.0000000001
Steepness: 11.900000
Epochs          286. Current error: 0.0000000001
Steepness: 12.000000
Epochs          287. Current error: 0.0000000001
Steepness: 12.100000
Epochs          288. Current error: 0.0000000000
Steepness: 12.200000
Epochs          289. Current error: 0.0000000000
Steepness: 12.300000
Epochs          290. Current error: 0.0000000000
Steepness: 12.400000
Epochs          291. Current error: 0.0000000000
Steepness: 12.500000
Epochs          292. Current error: 0.0000000000
Steepness: 12.600000
Epochs          293. Current error: 0.0000000000
Steepness: 12.700000
Epochs          294. Current error: 0.0000000000
Steepness: 12.800000
Epochs          295. Current error: 0.0000000000
Steepness: 12.900000
Epochs          296. Current error: 0.0000000000
Steepness: 13.000000
Epochs          297. Current error: 0.0000000000
Steepness: 13.100000
Epochs          298. Current error: 0.0000000000
Steepness: 13.200000
Epochs          299. Current error: 0.0000000000
Steepness: 13.300000
Epochs          300. Current error: 0.0000000000
Steepness: 13.400000
Epochs          301. Current error: 0.0000000000
Steepness: 13.500000
Epochs          302. Current error: 0.0000000000
Steepness: 13.600000
Epochs          303. Current error: 0.0000000000
Steepness: 13.700000
Epochs          304. Current error: 0.0000000000
Steepness: 13.800000
Epochs          305. Current error: 0.0000000000
Steepness: 13.900000
Epochs          306. Current error: 0.0000000000
Steepness: 14.000000
Epochs          307. Current error: 0.0000000000
Steepness: 14.100000
Epochs          308. Current error: 0.0000000000
Steepness: 14.200000
Epochs          309. Current error: 0.0000000000
Steepness: 14.300000
Epochs          310. Current error: 0.0000000000
Steepness: 14.400000
Epochs          311. Current error: 0.0000000000
Steepness: 14.500000
Epochs          312. Current error: 0.0000000000
Steepness: 14.600000
Epochs          313. Current error: 0.0000000000
Steepness: 14.700000
Epochs          314. Current error: 0.0000000000
Steepness: 14.800000
Epochs          315. Current error: 0.0000000000
Steepness: 14.900000
Epochs          316. Current error: 0.0000000000
Steepness: 15.000000
Epochs          317. Current error: 0.0000000000
Steepness: 15.100000
Epochs          318. Current error: 0.0000000000
Steepness: 15.200000
Epochs          319. Current error: 0.0000000000
Steepness: 15.300000
Epochs          320. Current error: 0.0000000000
Steepness: 15.400000
Epochs          321. Current error: 0.0000000000
Steepness: 15.500000
Epochs          322. Current error: 0.0000000000
Steepness: 15.600000
Epochs          323. Current error: 0.0000000000
Steepness: 15.700000
Epochs          324. Current error: 0.0000000000
Steepness: 15.800000
Epochs          325. Current error: 0.0000000000
Steepness: 15.900000
Epochs          326. Current error: 0.0000000000
Steepness: 16.000000
Epochs          327. Current error: 0.0000000000
Steepness: 16.100000
Epochs          328. Current error: 0.0000000000
Steepness: 16.200000
Epochs          329. Current error: 0.0000000000
Steepness: 16.300000
Epochs          330. Current error: 0.0000000000
Steepness: 16.400000
Epochs          331. Current error: 0.0000000000
Steepness: 16.500000
Epochs          332. Current error: 0.0000000000
Steepness: 16.600000
Epochs          333. Current error: 0.0000000000
Steepness: 16.700000
Epochs          334. Current error: 0.0000000000
Steepness: 16.800000
Epochs          335. Current error: 0.0000000000
Steepness: 16.900000
Epochs          336. Current error: 0.0000000000
Steepness: 17.000000
Epochs          337. Current error: 0.0000000000
Steepness: 17.100000
Epochs          338. Current error: 0.0000000000
Steepness: 17.200000
Epochs          339. Current error: 0.0000000000
Steepness: 17.300000
Epochs          340. Current error: 0.0000000000
Steepness: 17.400000
Epochs          341. Current error: 0.0000000000
Steepness: 17.500000
Epochs          342. Current error: 0.0000000000
Steepness: 17.600000
Epochs          343. Current error: 0.0000000000
Steepness: 17.700000
Epochs          344. Current error: 0.0000000000
Steepness: 17.800000
Epochs          345. Current error: 0.0000000000
Steepness: 17.900000
Epochs          346. Current error: 0.0000000000
Steepness: 18.000000
Epochs          347. Current error: 0.0000000000
Steepness: 18.100000
Epochs          348. Current error: 0.0000000000
Steepness: 18.200000
Epochs          349. Current error: 0.0000000000
Steepness: 18.300000
Epochs          350. Current error: 0.0000000000
Steepness: 18.400000
Epochs          351. Current error: 0.0000000000
Steepness: 18.500000
Epochs          352. Current error: 0.0000000000
Steepness: 18.600000
Epochs          353. Current error: 0.0000000000
Steepness: 18.700000
Epochs          354. Current error: 0.0000000000
Steepness: 18.800000
Epochs          355. Current error: 0.0000000000
Steepness: 18.900000
Epochs          356. Current error: 0.0000000000
Steepness: 19.000000
Epochs          357. Current error: 0.0000000000
Steepness: 19.100000
Epochs          358. Current error: 0.0000000000
Steepness: 19.200000
Epochs          359. Current error: 0.0000000000
Steepness: 19.300000
Epochs          360. Current error: 0.0000000000
Steepness: 19.400000
Epochs          361. Current error: 0.0000000000
Steepness: 19.500000
Epochs          362. Current error: 0.0000000000
Steepness: 19.600000
Epochs          363. Current error: 0.0000000000
Steepness: 19.700000
Epochs          364. Current error: 0.0000000000
Steepness: 19.800000
Epochs          365. Current error: 0.0000000000
Steepness: 19.900000
Epochs          366. Current error: 0.0000000000
XOR test (-1.000000, -1.000000) -> -1.000000, should be -1.000000, difference=-0.000000
XOR test (-1.000000, 1.000000) -> 1.000000, should be 1.000000, difference=-0.000000
XOR test (1.000000, -1.000000) -> 1.000000, should be 1.000000, difference=-0.000000
XOR test (1.000000, 1.000000) -> -1.000000, should be -1.000000, difference=-0.000000


simple_test
node simple_test.js
xor test (-1.000000,1.000000) -> 1.000000


robot
node robot.js
Creating network.
Training network.
Max epochs     3000. Desired error: 0.0010000000.
Epochs            1. Current error: 0.0390572505. Bit fail 71.
Epochs           10. Current error: 0.0055758507. Bit fail 3.
Epochs           20. Current error: 0.0034071755. Bit fail 0.
Epochs           30. Current error: 0.0028041620. Bit fail 0.
Epochs           40. Current error: 0.0023216517. Bit fail 0.
Epochs           50. Current error: 0.0016860781. Bit fail 0.
Epochs           60. Current error: 0.0011961701. Bit fail 0.
Epochs           67. Current error: 0.0009749556. Bit fail 0.
Testing network.
MSE error on test data: 0.008083
Saving network.
Cleaning up.


mushroom
node mushroom.js
Creating network.
Training network.
Max epochs      300. Desired error: 0.0002000000.
Epochs            1. Current error: 0.2517136875. Bit fail 8124.
Epochs           10. Current error: 0.0016762446. Bit fail 24.
Epochs           15. Current error: 0.0000873804. Bit fail 0.
Testing network.
MSE error on test data: 0.000146
Saving network.
Cleaning up.


cascade_train
node cascade_train.js
Reading data.
Creating network.
Input layer                          :   8 neurons, 1 bias
Output layer                         :   1 neurons
Total neurons and biases             :  10
Total connections                    :   9
Connection rate                      :   1.000
Network type                         :   FANN_NETTYPE_SHORTCUT
Training algorithm                   :   FANN_TRAIN_RPROP
Training error function              :   FANN_ERRORFUNC_LINEAR
Training stop function               :   FANN_STOPFUNC_BIT
Bit fail limit                       :   0.900
Learning rate                        :   0.700
Learning momentum                    :   0.000
Quickprop decay                      :  -0.000100
Quickprop mu                         :   1.750
RPROP increase factor                :   1.200
RPROP decrease factor                :   0.500
RPROP delta min                      :   0.000
RPROP delta max                      :  50.000
Cascade output change fraction       :   0.010000
Cascade candidate change fraction    :   0.010000
Cascade output stagnation epochs     :  12
Cascade candidate stagnation epochs  :  12
Cascade max output epochs            : 150
Cascade min output epochs            :  50
Cascade max candidate epochs         : 150
Cascade min candidate epochs         :  50
Cascade weight multiplier            :   0.400
Cascade candidate limit              :1000.000
Cascade activation functions[0]      :   FANN_SIGMOID_SYMMETRIC
Cascade activation steepnesses[0]    :   1.000
Cascade candidate groups             :   8
Cascade no. of candidates            :   8
Training network.
Max neurons  30. Desired error: 0.000000
Neurons       0. Current error: 1.000000. Total error:256.0000. Epochs    51. Bit fail 256
Neurons       1. Current error: 0.789996. Total error:202.2391. Epochs   153. Bit fail 121. candidate steepness 1.00. function FANN_SIGMOID_SYMMETRIC
Neurons       2. Current error: 0.279070. Total error: 71.4419. Epochs   266. Bit fail  45. candidate steepness 1.00. function FANN_SIGMOID_SYMMETRIC
Neurons       3. Current error: 0.052359. Total error: 13.4038. Epochs   531. Bit fail  10. candidate steepness 1.00. function FANN_SIGMOID_SYMMETRIC
Neurons       4. Current error: 0.022565. Total error:  5.7766. Epochs   807. Bit fail   1. candidate steepness 1.00. function FANN_SIGMOID_SYMMETRIC
Neurons       5. Current error: 0.015418. Total error:  3.9469. Epochs  1008. Bit fail   1. candidate steepness 1.00. function FANN_SIGMOID_SYMMETRIC
Neurons       6. Current error: 0.012008. Total error:  3.0741. Epochs  1262. Bit fail   1. candidate steepness 1.00. function FANN_SIGMOID_SYMMETRIC
Neurons       7. Current error: 0.053309. Total error: 13.6471. Epochs  1408. Bit fail   0. candidate steepness 1.00. function FANN_SIGMOID_SYMMETRIC
Train outputs    Current error: 0.094917. Epochs   1409
Layer / Neuron 0123456789012345
L   1 / N    9 CCCCCCCCc.......
L   2 / N   10 CCCCCCCCcd......
L   3 / N   11 CCCCCCCCcdc.....
L   4 / N   12 bbbbbbbbBDCC....
L   5 / N   13 AABaABABbaBDA...
L   6 / N   14 aABbBBBBbbBDBd..
L   7 / N   15 BBBBBBBBbbbbBAA.
L   8 / N   16 AAAAAAAAaAcCDaAB

Train error: 0.030982, Train bit-fail: 1, Test error: 0.030982, Test bit-fail: 1

ERROR: -1.000000 does not match 0.294168
Saving network.
Cleaning up.


scaling_train
node scaling_train.js
Max epochs     5000. Desired error: 0.0001000000.
Epochs            1. Current error: 1.0000548706. Bit fail 820.
Epochs         1000. Current error: 0.0084274540. Bit fail 0.
Epochs         2000. Current error: 0.0077834826. Bit fail 0.
Epochs         3000. Current error: 0.0072035255. Bit fail 0.
Epochs         4000. Current error: 0.0066751494. Bit fail 0.
Epochs         5000. Current error: 0.0062839775. Bit fail 0.


scaling_test
node scaling_test.js
Creating network.
Layer / Neuron 0123456789012345
L   1 / N    4 aaAB............
L   1 / N    5 aADa............
L   1 / N    6 aabA............
L   1 / N    7 aaAa............
L   1 / N    8 AAba............
L   1 / N    9 ................
L   2 / N   10 ....AbBCAA......
L   2 / N   11 ....bCCaCB......
L   2 / N   12 ....BbAAaA......
L   2 / N   13 ....CbBbaB......
L   2 / N   14 ....AbBBAB......
L   2 / N   15 ................
L   3 / N   16 ..........bMdbda
L   3 / N   17 ................
Input layer                          :   3 neurons, 1 bias
  Hidden layer                       :   5 neurons, 1 bias
  Hidden layer                       :   5 neurons, 1 bias
Output layer                         :   1 neurons
Total neurons and biases             :  17
Total connections                    :  56
Connection rate                      :   1.000
Network type                         :   FANN_NETTYPE_LAYER
Training algorithm                   :   FANN_TRAIN_RPROP
Training error function              :   FANN_ERRORFUNC_TANH
Training stop function               :   FANN_STOPFUNC_MSE
Bit fail limit                       :   0.350
Learning rate                        :   0.700
Learning momentum                    :   0.000
Quickprop decay                      :  -0.000100
Quickprop mu                         :   1.750
RPROP increase factor                :   1.200
RPROP decrease factor                :   0.500
RPROP delta min                      :   0.000
RPROP delta max                      :  50.000
Cascade output change fraction       :   0.010000
Cascade candidate change fraction    :   0.010000
Cascade output stagnation epochs     :  12
Cascade candidate stagnation epochs  :  12
Cascade max output epochs            : 150
Cascade min output epochs            :  50
Cascade max candidate epochs         : 150
Cascade min candidate epochs         :  50
Cascade weight multiplier            :   0.400
Cascade candidate limit              :1000.000
Cascade activation functions[0]      :   FANN_SIGMOID
Cascade activation functions[1]      :   FANN_SIGMOID_SYMMETRIC
Cascade activation functions[2]      :   FANN_GAUSSIAN
Cascade activation functions[3]      :   FANN_GAUSSIAN_SYMMETRIC
Cascade activation functions[4]      :   FANN_ELLIOT
Cascade activation functions[5]      :   FANN_ELLIOT_SYMMETRIC
Cascade activation functions[6]      :   FANN_SIN_SYMMETRIC
Cascade activation functions[7]      :   FANN_COS_SYMMETRIC
Cascade activation functions[8]      :   FANN_SIN
Cascade activation functions[9]      :   FANN_COS
Cascade activation steepnesses[0]    :   0.250
Cascade activation steepnesses[1]    :   0.500
Cascade activation steepnesses[2]    :   0.750
Cascade activation steepnesses[3]    :   1.000
Cascade candidate groups             :   2
Cascade no. of candidates            :  80
Testing network.
Result 999.240472 original 1001.000000 error 1.759528
Result 999.218104 original 1000.540000 error 1.321896
Result 999.211245 original 999.584000 error 0.372755
Result 999.223397 original 999.010000 error 0.213397
Result 999.256598 original 999.346000 error 0.089402
Result 999.309843 original 1000.280000 error 0.970157
Result 999.378143 original 1000.960000 error 1.581857
Result 999.453282 original 1000.750000 error 1.296718
Result 999.526244 original 999.854000 error 0.327756
Result 999.589927 original 999.089000 error 0.500927
Result 999.243196 original 1001.010000 error 1.766804
Result 999.221455 original 1000.550000 error 1.328545
Result 999.215349 original 999.580000 error 0.364651
Result 999.228331 original 999.000000 error 0.228331
Result 999.262340 original 999.340000 error 0.077660
Result 999.316210 original 1000.290000 error 0.973790
Result 999.384782 original 1000.970000 error 1.585218
Result 999.459738 original 1000.760000 error 1.300262
Result 999.532097 original 999.853000 error 0.320903
Result 999.594909 original 999.080000 error 0.514909
Result 999.245956 original 1001.020000 error 1.774044
Result 999.224854 original 1000.550000 error 1.325146
Result 999.219508 original 999.576000 error 0.356492
Result 999.233325 original 998.990000 error 0.243325
Result 999.268137 original 999.333000 error 0.064863
Result 999.322615 original 1000.290000 error 0.967385
Result 999.391431 original 1000.980000 error 1.588569
Result 999.466176 original 1000.770000 error 1.303824
Result 999.537910 original 999.852000 error 0.314090
Result 999.599838 original 999.071000 error 0.528838
Result 999.248755 original 1001.030000 error 1.781245
Result 999.228300 original 1000.560000 error 1.331700
Result 999.223723 original 999.571000 error 0.347277
Result 999.238378 original 998.980000 error 0.258378
Result 999.273986 original 999.327000 error 0.053014
Result 999.329056 original 1000.290000 error 0.960944
Result 999.398090 original 1000.990000 error 1.591910
Result 999.472593 original 1000.780000 error 1.307407
Result 999.543680 original 999.850000 error 0.306320
Result 999.604714 original 999.062000 error 0.542714
Result 999.251592 original 1001.040000 error 1.788408
Result 999.231795 original 1000.560000 error 1.328205
Result 999.227995 original 999.567000 error 0.339005
Result 999.243490 original 998.970000 error 0.273490
Result 999.279889 original 999.320000 error 0.040111
Result 999.335532 original 1000.290000 error 0.954468
Result 999.404756 original 1001.000000 error 1.595244
Result 999.478989 original 1000.780000 error 1.301011
Result 999.549408 original 999.849000 error 0.299592
Result 999.609537 original 999.052000 error 0.557537
Result 999.254468 original 1001.050000 error 1.795532
Result 999.235338 original 1000.570000 error 1.334662
Result 999.232323 original 999.563000 error 0.330677
Result 999.248662 original 998.961000 error 0.287662
Result 999.285844 original 999.314000 error 0.028156
Result 999.342040 original 1000.300000 error 0.957960
Result 999.411427 original 1001.010000 error 1.598573
Result 999.485362 original 1000.790000 error 1.304638
Result 999.555091 original 999.847000 error 0.291909
Result 999.614306 original 999.043000 error 0.571306
Result 999.257384 original 1001.060000 error 1.802616
Result 999.238931 original 1000.570000 error 1.331069
Result 999.236709 original 999.559000 error 0.322291
Result 999.253893 original 998.951000 error 0.302893
Result 999.291850 original 999.307000 error 0.015150
Result 999.348581 original 1000.300000 error 0.951419
Result 999.418101 original 1001.020000 error 1.601899
Result 999.491710 original 1000.800000 error 1.308290
Result 999.560729 original 999.846000 error 0.285271
Result 999.619022 original 999.034000 error 0.585022
Result 999.260341 original 1001.070000 error 1.809659
Result 999.242574 original 1000.580000 error 1.337426
Result 999.241152 original 999.555000 error 0.313848
Result 999.259183 original 998.941000 error 0.318183
Result 999.297907 original 999.301000 error 0.003093
Result 999.355151 original 1000.300000 error 0.944849
Result 999.424778 original 1001.030000 error 1.605222
Result 999.498032 original 1000.810000 error 1.311968
Result 999.566321 original 999.844000 error 0.277679
Result 999.623683 original 999.025000 error 0.598683
Result 999.263338 original 1001.080000 error 1.816662
Result 999.246268 original 1000.580000 error 1.333732
Result 999.245653 original 999.551000 error 0.305347
Result 999.264532 original 998.931000 error 0.333532
Result 999.304014 original 999.294000 error 0.010014
Result 999.361751 original 1000.310000 error 0.948249
Result 999.431455 original 1001.040000 error 1.608545
Result 999.504327 original 1000.810000 error 1.305673
Result 999.571866 original 999.843000 error 0.271134
Result 999.628290 original 999.016000 error 0.612290
Result 999.266377 original 1001.090000 error 1.823623
Result 999.250012 original 1000.590000 error 1.339988
Result 999.250211 original 999.546000 error 0.295789
Result 999.269940 original 998.921000 error 0.348940
Result 999.310169 original 999.288000 error 0.022169
Result 999.368377 original 1000.310000 error 0.941623
Result 999.438130 original 1001.050000 error 1.611870
Result 999.510592 original 1000.820000 error 1.309408
Result 999.577364 original 999.841000 error 0.263636
Result 999.632843 original 999.007000 error 0.625843
Result 999.266044 original 1001.100000 error 1.833956
Result 999.243852 original 1000.640000 error 1.396148
Result 999.237307 original 999.684000 error 0.446693
Result 999.249863 original 999.110000 error 0.139863
Result 999.283402 original 999.446000 error 0.162598
Result 999.336639 original 1000.380000 error 1.043361
Result 999.404271 original 1001.060000 error 1.655729
Result 999.477894 original 1000.850000 error 1.372106
Result 999.548567 original 999.954000 error 0.405433
Result 999.609490 original 999.189000 error 0.420490
Result 999.268872 original 1001.110000 error 1.841128
Result 999.247335 original 1000.650000 error 1.402665
Result 999.241566 original 999.680000 error 0.438434
Result 999.254966 original 999.100000 error 0.154966
Result 999.289304 original 999.440000 error 0.150696
Result 999.343132 original 1000.390000 error 1.046868
Result 999.410977 original 1001.070000 error 1.659023
Result 999.484354 original 1000.860000 error 1.375646
Result 999.554373 original 999.953000 error 0.398627
Result 999.614394 original 999.180000 error 0.434394
Result 999.271738 original 1001.120000 error 1.848262
Result 999.250867 original 1000.650000 error 1.399133
Result 999.245882 original 999.675000 error 0.429118
Result 999.260128 original 999.090000 error 0.170128
Result 999.295260 original 999.433000 error 0.137740
Result 999.349659 original 1000.390000 error 1.040341
Result 999.417691 original 1001.080000 error 1.662309
Result 999.490792 original 1000.870000 error 1.379208
Result 999.560135 original 999.952000 error 0.391865
Result 999.619246 original 999.171000 error 0.448246
Result 999.274644 original 1001.130000 error 1.855356
Result 999.254447 original 1000.660000 error 1.405553
Result 999.250254 original 999.671000 error 0.420746
Result 999.265349 original 999.080000 error 0.185349
Result 999.301267 original 999.427000 error 0.125733
Result 999.356220 original 1000.390000 error 1.033780
Result 999.424410 original 1001.090000 error 1.665590
Result 999.497206 original 1000.880000 error 1.382794
Result 999.565853 original 999.950000 error 0.384147
Result 999.624043 original 999.161000 error 0.463043
Result 999.277590 original 1001.140000 error 1.862410
Result 999.258077 original 1000.660000 error 1.401923
Result 999.254684 original 999.667000 error 0.412316
Result 999.270630 original 999.070000 error 0.200630
Result 999.307326 original 999.420000 error 0.112674
Result 999.362812 original 1000.390000 error 1.027188
Result 999.431133 original 1001.100000 error 1.668867
Result 999.503596 original 1000.880000 error 1.376404
Result 999.571526 original 999.949000 error 0.377474
Result 999.628787 original 999.152000 error 0.476787
Result 999.280576 original 1001.150000 error 1.869424
Result 999.261757 original 1000.670000 error 1.408243
Result 999.259172 original 999.663000 error 0.403828
Result 999.275971 original 999.060000 error 0.215971
Result 999.313436 original 999.414000 error 0.100564
Result 999.369435 original 1000.400000 error 1.030565
Result 999.437857 original 1001.110000 error 1.672143
Result 999.509960 original 1000.890000 error 1.380040
Result 999.577153 original 999.947000 error 0.369847
Result 999.633476 original 999.143000 error 0.490476
Result 999.283604 original 1001.160000 error 1.876396
Result 999.265488 original 1000.670000 error 1.404512
Result 999.263717 original 999.659000 error 0.395283
Result 999.281370 original 999.051000 error 0.230370
Result 999.319595 original 999.407000 error 0.087405
Result 999.376087 original 1000.400000 error 1.023913
Result 999.444582 original 1001.120000 error 1.675418
Result 999.516296 original 1000.900000 error 1.383704
Result 999.582733 original 999.946000 error 0.363267
Result 999.638112 original 999.134000 error 0.504112
Result 999.286673 original 1001.170000 error 1.883327
Result 999.269271 original 1000.680000 error 1.410729
Result 999.268321 original 999.655000 error 0.386679
Result 999.286828 original 999.041000 error 0.245828
Result 999.325804 original 999.401000 error 0.075196
Result 999.382765 original 1000.400000 error 1.017235
Result 999.451305 original 1001.130000 error 1.678695
Result 999.522602 original 1000.910000 error 1.387398
Result 999.588265 original 999.944000 error 0.355735
Result 999.642692 original 999.125000 error 0.517692
Result 999.289785 original 1001.180000 error 1.890215
Result 999.273105 original 1000.680000 error 1.406895
Result 999.272984 original 999.651000 error 0.378016
Result 999.292345 original 999.031000 error 0.261345
Result 999.332060 original 999.394000 error 0.061940
Result 999.389470 original 1000.410000 error 1.020530
Result 999.458024 original 1001.140000 error 1.681976
Result 999.528878 original 1000.910000 error 1.381122
Result 999.593749 original 999.943000 error 0.349251
Result 999.647219 original 999.116000 error 0.531219
Result 999.292939 original 1001.190000 error 1.897061
Result 999.276991 original 1000.690000 error 1.413009
Result 999.277705 original 999.646000 error 0.368295
Result 999.297920 original 999.021000 error 0.276920
Result 999.338363 original 999.388000 error 0.049637
Result 999.396198 original 1000.410000 error 1.013802
Result 999.464738 original 1001.150000 error 1.685262
Result 999.535122 original 1000.920000 error 1.384878
Result 999.599184 original 999.941000 error 0.341816
Result 999.651690 original 999.107000 error 0.544690
Result 999.292311 original 1001.200000 error 1.907689
Result 999.270420 original 1000.740000 error 1.469580
Result 999.264289 original 999.784000 error 0.519711
Result 999.277307 original 999.210000 error 0.067307
Result 999.311177 original 999.546000 error 0.234823
Result 999.364326 original 1000.480000 error 1.115674
Result 999.431147 original 1001.160000 error 1.728853
Result 999.503089 original 1000.950000 error 1.446911
Result 999.571327 original 1000.050000 error 0.478673
Result 999.629385 original 999.289000 error 0.340385
Result 999.295245 original 1001.210000 error 1.914755
Result 999.274037 original 1000.750000 error 1.475963
Result 999.268706 original 999.780000 error 0.511294
Result 999.282579 original 999.200000 error 0.082579
Result 999.317238 original 999.540000 error 0.222762
Result 999.370940 original 1000.490000 error 1.119060
Result 999.437915 original 1001.170000 error 1.732085
Result 999.509547 original 1000.960000 error 1.450453
Result 999.577081 original 1000.050000 error 0.472919
Result 999.634212 original 999.280000 error 0.354212
Result 999.298220 original 1001.220000 error 1.921780
Result 999.277704 original 1000.750000 error 1.472296
Result 999.273180 original 999.776000 error 0.502820
Result 999.287910 original 999.190000 error 0.097910
Result 999.323351 original 999.533000 error 0.209649
Result 999.377585 original 1000.490000 error 1.112415
Result 999.444687 original 1001.180000 error 1.735313
Result 999.515979 original 1000.970000 error 1.454021
Result 999.582789 original 1000.050000 error 0.467211
Result 999.638985 original 999.271000 error 0.367985
Result 999.301235 original 1001.230000 error 1.928765
Result 999.281421 original 1000.760000 error 1.478579
Result 999.277712 original 999.771000 error 0.493288
Result 999.293300 original 999.180000 error 0.113300
Result 999.329514 original 999.527000 error 0.197486
Result 999.384261 original 1000.490000 error 1.105739
Result 999.451461 original 1001.190000 error 1.738539
Result 999.522386 original 1000.980000 error 1.457614
Result 999.588452 original 1000.050000 error 0.461548
Result 999.643703 original 999.262000 error 0.381703
Result 999.304292 original 1001.240000 error 1.935708
Result 999.285189 original 1000.760000 error 1.474811
Result 999.282302 original 999.767000 error 0.484698
Result 999.298750 original 999.170000 error 0.128750
Result 999.335727 original 999.520000 error 0.184273
Result 999.390966 original 1000.490000 error 1.099034
Result 999.458234 original 1001.200000 error 1.741766
Result 999.528764 original 1000.980000 error 1.451236
Result 999.594067 original 1000.050000 error 0.455933
Result 999.648368 original 999.252000 error 0.396368
Result 999.307390 original 1001.250000 error 1.942610
Result 999.289008 original 1000.770000 error 1.480992
Result 999.286950 original 999.763000 error 0.476050
Result 999.304259 original 999.161000 error 0.143259
Result 999.341990 original 999.514000 error 0.172010
Result 999.397698 original 1000.500000 error 1.102302
Result 999.465006 original 1001.210000 error 1.744994
Result 999.535113 original 1000.990000 error 1.454887
Result 999.599635 original 1000.050000 error 0.450365
Result 999.652977 original 999.243000 error 0.409977
Result 999.310531 original 1001.260000 error 1.949469
Result 999.292880 original 1000.770000 error 1.477120
Result 999.291658 original 999.759000 error 0.467342
Result 999.309827 original 999.151000 error 0.158827
Result 999.348300 original 999.507000 error 0.158700
Result 999.404455 original 1000.500000 error 1.095545
Result 999.471775 original 1001.220000 error 1.748225
Result 999.541432 original 1001.000000 error 1.458568
Result 999.605155 original 1000.050000 error 0.444845
Result 999.657532 original 999.234000 error 0.423532
Result 999.313715 original 1001.270000 error 1.956285
Result 999.296804 original 1000.780000 error 1.483196
Result 999.296424 original 999.755000 error 0.458576
Result 999.315453 original 999.141000 error 0.174453
Result 999.354657 original 999.501000 error 0.146343
Result 999.411237 original 1000.500000 error 1.088763
Result 999.478538 original 1001.230000 error 1.751462
Result 999.547718 original 1001.010000 error 1.462282
Result 999.610625 original 1000.040000 error 0.429375
Result 999.662033 original 999.225000 error 0.437033
Result 999.316943 original 1001.280000 error 1.963057
Result 999.300780 original 1000.780000 error 1.479220
Result 999.301250 original 999.751000 error 0.449750
Result 999.321137 original 999.131000 error 0.190137
Result 999.361060 original 999.494000 error 0.132940
Result 999.418041 original 1000.510000 error 1.091959
Result 999.485294 original 1001.240000 error 1.754706
Result 999.553971 original 1001.010000 error 1.456029
Result 999.616045 original 1000.040000 error 0.423955
Result 999.666478 original 999.216000 error 0.450478
Result 999.320215 original 1001.290000 error 1.969785
Result 999.304811 original 1000.790000 error 1.485189
Result 999.306134 original 999.746000 error 0.439866
Result 999.326879 original 999.121000 error 0.205879
Result 999.367508 original 999.488000 error 0.120492
Result 999.424866 original 1000.510000 error 1.085134
Result 999.492041 original 1001.250000 error 1.757959
Result 999.560190 original 1001.020000 error 1.459810
Result 999.621415 original 1000.040000 error 0.418585
Result 999.670869 original 999.207000 error 0.463869
Result 999.319251 original 1001.300000 error 1.980749
Result 999.297795 original 1000.840000 error 1.542205
Result 999.292186 original 999.884000 error 0.591814
Result 999.305728 original 999.310000 error 0.004272
Result 999.339926 original 999.646000 error 0.306074
Result 999.392906 original 1000.580000 error 1.187094
Result 999.458774 original 1001.260000 error 1.801226
Result 999.528872 original 1001.050000 error 1.521128
Result 999.594532 original 1000.150000 error 0.555468
Result 999.649629 original 999.389000 error 0.260629
Result 999.322294 original 1001.310000 error 1.987706
Result 999.301548 original 1000.850000 error 1.548452
Result 999.296762 original 999.880000 error 0.583238
Result 999.311170 original 999.300000 error 0.011170
Result 999.346144 original 999.640000 error 0.293856
Result 999.399636 original 1000.590000 error 1.190364
Result 999.465598 original 1001.270000 error 1.804402
Result 999.535322 original 1001.060000 error 1.524678
Result 999.600231 original 1000.150000 error 0.549769
Result 999.654377 original 999.380000 error 0.274377
Result 999.325378 original 1001.320000 error 1.994622
Result 999.305352 original 1000.850000 error 1.544648
Result 999.301396 original 999.875000 error 0.573604
Result 999.316670 original 999.290000 error 0.026670
Result 999.352411 original 999.633000 error 0.280589
Result 999.406395 original 1000.590000 error 1.183605
Result 999.472422 original 1001.280000 error 1.807578
Result 999.541744 original 1001.070000 error 1.528256
Result 999.605883 original 1000.150000 error 0.544117
Result 999.659071 original 999.371000 error 0.288071
Result 999.328505 original 1001.330000 error 2.001495
Result 999.309208 original 1000.860000 error 1.550792
Result 999.306089 original 999.871000 error 0.564911
Result 999.322230 original 999.280000 error 0.042230
Result 999.358728 original 999.627000 error 0.268272
Result 999.413181 original 1000.590000 error 1.176819
Result 999.479244 original 1001.290000 error 1.810756
Result 999.548137 original 1001.080000 error 1.531863
Result 999.611487 original 1000.150000 error 0.538513
Result 999.663711 original 999.362000 error 0.301711
Result 999.331674 original 1001.340000 error 2.008326
Result 999.313116 original 1000.860000 error 1.546884
Result 999.310841 original 999.867000 error 0.556159
Result 999.327849 original 999.270000 error 0.057849
Result 999.365093 original 999.620000 error 0.254907
Result 999.419992 original 1000.590000 error 1.170008
Result 999.486062 original 1001.300000 error 1.813938
Result 999.554499 original 1001.080000 error 1.525501
Result 999.617043 original 1000.150000 error 0.532957
Result 999.668296 original 999.352000 error 0.316296
Result 999.334886 original 1001.350000 error 2.015114
Result 999.317076 original 1000.870000 error 1.552924
Result 999.315652 original 999.863000 error 0.547348
Result 999.333526 original 999.260000 error 0.073526
Result 999.371505 original 999.614000 error 0.242495
Result 999.426828 original 1000.600000 error 1.173172
Result 999.492875 original 1001.310000 error 1.817125
Result 999.560828 original 1001.090000 error 1.529172
Result 999.622550 original 1000.150000 error 0.527450
Result 999.672825 original 999.343000 error 0.329825
Result 999.338142 original 1001.360000 error 2.021858
Result 999.321090 original 1000.870000 error 1.548910
Result 999.320523 original 999.859000 error 0.538477
Result 999.339262 original 999.251000 error 0.088262
Result 999.377963 original 999.607000 error 0.229037
Result 999.433686 original 1000.600000 error 1.166314
Result 999.499681 original 1001.320000 error 1.820319
Result 999.567125 original 1001.100000 error 1.532875
Result 999.628006 original 1000.150000 error 0.521994
Result 999.677301 original 999.334000 error 0.343301
Result 999.341443 original 1001.370000 error 2.028557
Result 999.325158 original 1000.880000 error 1.554842
Result 999.325453 original 999.855000 error 0.529547
Result 999.345055 original 999.241000 error 0.104055
Result 999.384465 original 999.601000 error 0.216535
Result 999.440565 original 1000.600000 error 1.159435
Result 999.506478 original 1001.330000 error 1.823522
Result 999.573386 original 1001.110000 error 1.536614
Result 999.633412 original 1000.140000 error 0.506588
Result 999.681721 original 999.325000 error 0.356721
Result 999.344788 original 1001.380000 error 2.035212
Result 999.329279 original 1000.880000 error 1.550721
Result 999.330442 original 999.851000 error 0.520558
Result 999.350906 original 999.231000 error 0.119906
Result 999.391012 original 999.594000 error 0.202988
Result 999.447463 original 1000.610000 error 1.162537
Result 999.513265 original 1001.340000 error 1.826735
Result 999.579611 original 1001.110000 error 1.530389
Result 999.638767 original 1000.140000 error 0.501233
Result 999.686086 original 999.316000 error 0.370086
Result 999.348179 original 1001.390000 error 2.041821
Result 999.333455 original 1000.890000 error 1.556545
Result 999.335492 original 999.846000 error 0.510508
Result 999.356814 original 999.221000 error 0.135814
Result 999.397601 original 999.588000 error 0.190399
Result 999.454378 original 1000.610000 error 1.155622
Result 999.520039 original 1001.350000 error 1.829961
Result 999.585799 original 1001.120000 error 1.534201
Result 999.644070 original 1000.140000 error 0.495930
Result 999.690397 original 999.307000 error 0.383397
Result 999.346837 original 1001.400000 error 2.053163
Result 999.325959 original 1000.940000 error 1.614041
Result 999.320989 original 999.984000 error 0.663011
Result 999.335124 original 999.410000 error 0.074876
Result 999.369647 original 999.746000 error 0.376353
Result 999.422378 original 1000.680000 error 1.257622
Result 999.487153 original 1001.360000 error 1.872847
Result 999.555245 original 1001.150000 error 1.594755
Result 999.618192 original 1000.250000 error 0.631808
Result 999.670236 original 999.489000 error 0.181236
Result 999.349991 original 1001.410000 error 2.060009
Result 999.329850 original 1000.950000 error 1.620150
Result 999.325725 original 999.980000 error 0.654275
Result 999.340735 original 999.400000 error 0.059265
Result 999.376019 original 999.740000 error 0.363981
Result 999.429219 original 1000.690000 error 1.260781
Result 999.494026 original 1001.370000 error 1.875974
Result 999.561683 original 1001.160000 error 1.598317
Result 999.623834 original 1000.250000 error 0.626166
Result 999.674906 original 999.480000 error 0.194906
Result 999.353186 original 1001.420000 error 2.066814
Result 999.333794 original 1000.950000 error 1.616206
Result 999.330521 original 999.976000 error 0.645479
Result 999.346404 original 999.390000 error 0.043596
Result 999.382438 original 999.733000 error 0.350562
Result 999.436085 original 1000.690000 error 1.253915
Result 999.500895 original 1001.380000 error 1.879105
Result 999.568089 original 1001.170000 error 1.601911
Result 999.629427 original 1000.250000 error 0.620573
Result 999.679521 original 999.471000 error 0.208521
Result 999.356426 original 1001.430000 error 2.073574
Result 999.337790 original 1000.960000 error 1.622210
Result 999.335376 original 999.971000 error 0.635624
Result 999.352133 original 999.380000 error 0.027867
Result 999.388905 original 999.727000 error 0.338095
Result 999.442976 original 1000.690000 error 1.247024
Result 999.507759 original 1001.390000 error 1.882241
Result 999.574463 original 1001.180000 error 1.605537
Result 999.634970 original 1000.250000 error 0.615030
Result 999.684081 original 999.462000 error 0.222081
Result 999.359709 original 1001.440000 error 2.080291
Result 999.341840 original 1000.960000 error 1.618160
Result 999.340291 original 999.967000 error 0.626709
Result 999.357920 original 999.370000 error 0.012080
Result 999.395418 original 999.720000 error 0.324582
Result 999.449889 original 1000.700000 error 1.250111
Result 999.514615 original 1001.400000 error 1.885385
Result 999.580804 original 1001.180000 error 1.599196
Result 999.640464 original 1000.250000 error 0.609536
Result 999.688587 original 999.452000 error 0.236587
Result 999.363037 original 1001.450000 error 2.086963
Result 999.345943 original 1000.970000 error 1.624057
Result 999.345266 original 999.963000 error 0.617734
Result 999.363765 original 999.361000 error 0.002765
Result 999.401976 original 999.714000 error 0.312024
Result 999.456822 original 1000.700000 error 1.243178
Result 999.521463 original 1001.410000 error 1.888537
Result 999.587109 original 1001.190000 error 1.602891
Result 999.645907 original 1000.250000 error 0.604093
Result 999.693037 original 999.443000 error 0.250037
Result 999.366410 original 1001.460000 error 2.093590
Result 999.350101 original 1000.970000 error 1.619899
Result 999.350300 original 999.959000 error 0.608700
Result 999.369667 original 999.351000 error 0.018667
Result 999.408578 original 999.707000 error 0.298422
Result 999.463775 original 1000.700000 error 1.236225
Result 999.528300 original 1001.420000 error 1.891700
Result 999.593378 original 1001.200000 error 1.606622
Result 999.651298 original 1000.250000 error 0.598702
Result 999.697433 original 999.434000 error 0.263433
Result 999.369829 original 1001.470000 error 2.100171
Result 999.354313 original 1000.980000 error 1.625687
Result 999.355394 original 999.955000 error 0.599606
Result 999.375626 original 999.341000 error 0.034626
Result 999.415222 original 999.701000 error 0.285778
Result 999.470745 original 1000.700000 error 1.229255
Result 999.535124 original 1001.430000 error 1.894876
Result 999.599610 original 1001.210000 error 1.610390
Result 999.656638 original 1000.240000 error 0.583362
Result 999.701773 original 999.425000 error 0.276773
Result 999.373294 original 1001.480000 error 2.106706
Result 999.358581 original 1000.980000 error 1.621419
Result 999.360549 original 999.951000 error 0.590451
Result 999.381642 original 999.331000 error 0.050642
Result 999.421908 original 999.694000 error 0.272092
Result 999.477731 original 1000.710000 error 1.232269
Result 999.541935 original 1001.440000 error 1.898065
Result 999.605803 original 1001.210000 error 1.604197
Result 999.661926 original 1000.240000 error 0.578074
Result 999.706059 original 999.416000 error 0.290059
Result 999.376806 original 1001.490000 error 2.113194
Result 999.362905 original 1000.990000 error 1.627095
Result 999.365763 original 999.946000 error 0.580237
Result 999.387714 original 999.321000 error 0.066714
Result 999.428633 original 999.688000 error 0.259367
Result 999.484730 original 1000.710000 error 1.225270
Result 999.548729 original 1001.450000 error 1.901271
Result 999.611956 original 1001.220000 error 1.608044
Result 999.667161 original 1000.240000 error 0.572839
Result 999.710291 original 999.407000 error 0.303291
Result 999.375041 original 1001.500000 error 2.124959
Result 999.354891 original 1001.040000 error 1.685109
Result 999.350682 original 1000.080000 error 0.729318
Result 999.365485 original 999.510000 error 0.144515
Result 999.400335 original 999.846000 error 0.445665
Result 999.452737 original 1000.780000 error 1.327263
Result 999.516279 original 1001.460000 error 1.943721
Result 999.582213 original 1001.250000 error 1.667787
Result 999.642317 original 1000.350000 error 0.707683
Result 999.691221 original 999.589000 error 0.102221
Result 999.378306 original 1001.510000 error 2.131694
Result 999.358922 original 1001.050000 error 1.691078
Result 999.355581 original 1000.080000 error 0.724419
Result 999.371264 original 999.500000 error 0.128736
Result 999.406857 original 999.840000 error 0.433143
Result 999.459683 original 1000.790000 error 1.330317
Result 999.523195 original 1001.470000 error 1.946805
Result 999.588633 original 1001.260000 error 1.671367
Result 999.647899 original 1000.350000 error 0.702101
Result 999.695813 original 999.580000 error 0.115813
Result 999.381614 original 1001.520000 error 2.138386
Result 999.363006 original 1001.050000 error 1.686994
Result 999.360539 original 1000.080000 error 0.719461
Result 999.377102 original 999.490000 error 0.112898
Result 999.413425 original 999.833000 error 0.419575
Result 999.466651 original 1000.790000 error 1.323349
Result 999.530103 original 1001.480000 error 1.949897
Result 999.595018 original 1001.270000 error 1.674982
Result 999.653431 original 1000.350000 error 0.696569
Result 999.700350 original 999.571000 error 0.129350
Result 999.384968 original 1001.530000 error 2.145032
Result 999.367144 original 1001.060000 error 1.692856
Result 999.365558 original 1000.070000 error 0.704442
Result 999.382998 original 999.480000 error 0.097002
Result 999.420038 original 999.827000 error 0.406962
Result 999.473640 original 1000.790000 error 1.316360
Result 999.537002 original 1001.490000 error 1.952998
Result 999.601369 original 1001.280000 error 1.678631
Result 999.658911 original 1000.350000 error 0.691089
Result 999.704831 original 999.562000 error 0.142831
Result 999.388367 original 1001.540000 error 2.151633
Result 999.371337 original 1001.060000 error 1.688663
Result 999.370636 original 1000.070000 error 0.699364
Result 999.388952 original 999.470000 error 0.081048
Result 999.426696 original 999.820000 error 0.393304
Result 999.480648 original 1000.790000 error 1.309352
Result 999.543890 original 1001.500000 error 1.956110
Result 999.607683 original 1001.280000 error 1.672317
Result 999.664340 original 1000.350000 error 0.685660
Result 999.709258 original 999.552000 error 0.157258
Result 999.391812 original 1001.550000 error 2.158188
Result 999.375585 original 1001.070000 error 1.694415
Result 999.375774 original 1000.060000 error 0.684226
Result 999.394962 original 999.461000 error 0.066038
Result 999.433395 original 999.814000 error 0.380605
Result 999.487673 original 1000.800000 error 1.312327
Result 999.550766 original 1001.510000 error 1.959234
Result 999.613959 original 1001.290000 error 1.676041
Result 999.669718 original 1000.350000 error 0.680282
Result 999.713629 original 999.543000 error 0.170629
Result 999.395303 original 1001.560000 error 2.164697
Result 999.379888 original 1001.070000 error 1.690112
Result 999.380973 original 1000.060000 error 0.679027
Result 999.401030 original 999.451000 error 0.049970
Result 999.440136 original 999.807000 error 0.366864
Result 999.494714 original 1000.800000 error 1.305286
Result 999.557628 original 1001.520000 error 1.962372
Result 999.620197 original 1001.300000 error 1.679803
Result 999.675042 original 1000.350000 error 0.674958
Result 999.717946 original 999.534000 error 0.183946
Result 999.398842 original 1001.570000 error 2.171158
Result 999.384247 original 1001.080000 error 1.695753
Result 999.386232 original 1000.050000 error 0.663768
Result 999.407153 original 999.441000 error 0.033847
Result 999.446917 original 999.801000 error 0.354083
Result 999.501768 original 1000.800000 error 1.298232
Result 999.564473 original 1001.530000 error 1.965527
Result 999.626394 original 1001.310000 error 1.683606
Result 999.680314 original 1000.340000 error 0.659686
Result 999.722208 original 999.525000 error 0.197208
Result 999.402428 original 1001.580000 error 2.177572
Result 999.388662 original 1001.080000 error 1.691338
Result 999.391551 original 1000.050000 error 0.658449
Result 999.413331 original 999.431000 error 0.017669
Result 999.453737 original 999.794000 error 0.340263
Result 999.508834 original 1000.810000 error 1.301166
Result 999.571301 original 1001.540000 error 1.968699
Result 999.632551 original 1001.310000 error 1.677449
Result 999.685533 original 1000.340000 error 0.654467
Result 999.726415 original 999.516000 error 0.210415
Result 999.406062 original 1001.590000 error 2.183938
Result 999.393134 original 1001.090000 error 1.696866
Result 999.396930 original 1000.050000 error 0.653070
Result 999.419565 original 999.421000 error 0.001435
Result 999.460594 original 999.788000 error 0.327406
Result 999.515911 original 1000.810000 error 1.294089
Result 999.578109 original 1001.550000 error 1.971891
Result 999.638665 original 1001.320000 error 1.681335
Result 999.690698 original 1000.340000 error 0.649302
Result 999.730568 original 999.507000 error 0.223568
Result 999.403827 original 1001.600000 error 2.196173
Result 999.384565 original 1001.140000 error 1.755435
Result 999.381249 original 1000.180000 error 0.798751
Result 999.396798 original 999.610000 error 0.213202
Result 999.431978 original 999.946000 error 0.514022
Result 999.483974 original 1000.880000 error 1.396026
Result 999.546149 original 1001.560000 error 2.013851
Result 999.609776 original 1001.350000 error 1.740224
Result 999.666917 original 1000.450000 error 0.783083
Result 999.712602 original 999.689000 error 0.023602
Result 999.407205 original 1001.610000 error 2.202795
Result 999.388737 original 1001.150000 error 1.761263
Result 999.386310 original 1000.180000 error 0.793690
Result 999.402744 original 999.600000 error 0.197256
Result 999.438646 original 999.940000 error 0.501354
Result 999.491019 original 1000.890000 error 1.398981
Result 999.553101 original 1001.570000 error 2.016899
Result 999.616173 original 1001.360000 error 1.743827
Result 999.672436 original 1000.450000 error 0.777564
Result 999.717115 original 999.680000 error 0.037115
Result 999.410628 original 1001.620000 error 2.209372
Result 999.392963 original 1001.150000 error 1.757037
Result 999.391431 original 1000.180000 error 0.788569
Result 999.408748 original 999.590000 error 0.181252
Result 999.445359 original 999.933000 error 0.487641
Result 999.498082 original 1000.890000 error 1.391918
Result 999.560041 original 1001.580000 error 2.019959
Result 999.622533 original 1001.370000 error 1.747467
Result 999.677903 original 1000.450000 error 0.772097
Result 999.721573 original 999.671000 error 0.050573
Result 999.414097 original 1001.630000 error 2.215903
Result 999.397244 original 1001.160000 error 1.762756
Result 999.396613 original 1000.170000 error 0.773387
Result 999.414810 original 999.580000 error 0.165190
Result 999.452114 original 999.927000 error 0.474886
Result 999.505163 original 1000.890000 error 1.384837
Result 999.566969 original 1001.590000 error 2.023031
Result 999.628854 original 1001.380000 error 1.751146
Result 999.683319 original 1000.450000 error 0.766681
Result 999.725976 original 999.661000 error 0.064976
Result 999.417613 original 1001.640000 error 2.222387
Result 999.401581 original 1001.160000 error 1.758419
Result 999.401854 original 1000.170000 error 0.768146
Result 999.420928 original 999.570000 error 0.149072
Result 999.458910 original 999.920000 error 0.461090
Result 999.512259 original 1000.890000 error 1.377741
Result 999.573882 original 1001.600000 error 2.026118
Result 999.635137 original 1001.380000 error 1.744863
Result 999.688682 original 1000.450000 error 0.761318
Result 999.730324 original 999.652000 error 0.078324
Result 999.421176 original 1001.650000 error 2.228824
Result 999.405974 original 1001.170000 error 1.764026
Result 999.407157 original 1000.160000 error 0.752843
Result 999.427102 original 999.560000 error 0.132898
Result 999.465747 original 999.914000 error 0.448253
Result 999.519369 original 1000.900000 error 1.380631
Result 999.580779 original 1001.610000 error 2.029221
Result 999.641380 original 1001.390000 error 1.748620
Result 999.693992 original 1000.450000 error 0.756008
Result 999.734617 original 999.643000 error 0.091617
Result 999.424787 original 1001.660000 error 2.235213
Result 999.410424 original 1001.170000 error 1.759576
Result 999.412519 original 1000.160000 error 0.747481
Result 999.433332 original 999.551000 error 0.117668
Result 999.472622 original 999.907000 error 0.434378
Result 999.526491 original 1000.900000 error 1.373509
Result 999.587658 original 1001.620000 error 2.032342
Result 999.647581 original 1001.400000 error 1.752419
Result 999.699248 original 1000.450000 error 0.750752
Result 999.738856 original 999.634000 error 0.104856
Result 999.428447 original 1001.670000 error 2.241553
Result 999.414930 original 1001.180000 error 1.765070
Result 999.417942 original 1000.150000 error 0.732058
Result 999.439616 original 999.541000 error 0.101384
Result 999.479534 original 999.901000 error 0.421466
Result 999.533622 original 1000.900000 error 1.366378
Result 999.594518 original 1001.630000 error 2.035482
Result 999.653740 original 1001.410000 error 1.756260
Result 999.704451 original 1000.440000 error 0.735549
Result 999.743040 original 999.625000 error 0.118040
Result 999.432155 original 1001.680000 error 2.247845
Result 999.419494 original 1001.180000 error 1.760506
Result 999.423425 original 1000.150000 error 0.726575
Result 999.445955 original 999.531000 error 0.085045
Result 999.486482 original 999.894000 error 0.407518
Result 999.540762 original 1000.910000 error 1.369238
Result 999.601356 original 1001.640000 error 2.038644
Result 999.659856 original 1001.410000 error 1.750144
Result 999.709599 original 1000.440000 error 0.730401
Result 999.747169 original 999.616000 error 0.131169
Result 999.435913 original 1001.690000 error 2.254087
Result 999.424115 original 1001.190000 error 1.765885
Result 999.428968 original 1000.150000 error 0.721032
Result 999.452346 original 999.521000 error 0.068654
Result 999.493464 original 999.888000 error 0.394536
Result 999.547908 original 1000.910000 error 1.362092
Result 999.608172 original 1001.650000 error 2.041828
Result 999.665927 original 1001.420000 error 1.754073
Result 999.714693 original 1000.440000 error 0.725307
Result 999.751245 original 999.607000 error 0.144245
Result 999.433160 original 1001.700000 error 2.266840
Result 999.414950 original 1001.240000 error 1.825050
Result 999.412665 original 1000.280000 error 0.867335
Result 999.429043 original 999.710000 error 0.280957
Result 999.464560 original 1000.050000 error 0.585440
Result 999.516076 original 1000.980000 error 1.463924
Result 999.576755 original 1001.660000 error 2.083245
Result 999.637935 original 1001.450000 error 1.812065
Result 999.691997 original 1000.550000 error 0.858003
Result 999.734391 original 999.789000 error 0.054609
Result 999.436652 original 1001.710000 error 2.273348
Result 999.419264 original 1001.250000 error 1.830736
Result 999.417888 original 1000.280000 error 0.862112
Result 999.435154 original 999.700000 error 0.264846
Result 999.471371 original 1000.040000 error 0.568629
Result 999.523213 original 1000.990000 error 1.466787
Result 999.583735 original 1001.670000 error 2.086265
Result 999.644303 original 1001.460000 error 1.815697
Result 999.697452 original 1000.550000 error 0.852548
Result 999.738826 original 999.780000 error 0.041174
Result 999.440190 original 1001.720000 error 2.279810
Result 999.423633 original 1001.250000 error 1.826367
Result 999.423172 original 1000.280000 error 0.856828
Result 999.441323 original 999.690000 error 0.248677
Result 999.478222 original 1000.030000 error 0.551778
Result 999.530365 original 1000.990000 error 1.459635
Result 999.590700 original 1001.680000 error 2.089300
Result 999.650632 original 1001.470000 error 1.819368
Result 999.702854 original 1000.550000 error 0.847146
Result 999.743206 original 999.771000 error 0.027794
Result 999.443776 original 1001.730000 error 2.286224
Result 999.428059 original 1001.260000 error 1.831941
Result 999.428516 original 1000.270000 error 0.841484
Result 999.447547 original 999.680000 error 0.232453
Result 999.485114 original 1000.030000 error 0.544886
Result 999.537530 original 1000.990000 error 1.452470
Result 999.597650 original 1001.690000 error 2.092350
Result 999.656920 original 1001.480000 error 1.823080
Result 999.708202 original 1000.550000 error 0.841798
Result 999.747531 original 999.762000 error 0.014469
Result 999.447410 original 1001.740000 error 2.292590
Result 999.432541 original 1001.260000 error 1.827459
Result 999.433921 original 1000.270000 error 0.836079
Result 999.453827 original 999.670000 error 0.216173
Result 999.492044 original 1000.020000 error 0.527956
Result 999.544708 original 1000.990000 error 1.445292
Result 999.604581 original 1001.700000 error 2.095419
Result 999.663167 original 1001.480000 error 1.816833
Result 999.713497 original 1000.550000 error 0.836503
Result 999.751802 original 999.752000 error 0.000198
Result 999.451093 original 1001.750000 error 2.298907
Result 999.437080 original 1001.270000 error 1.832920
Result 999.439386 original 1000.260000 error 0.820614
Result 999.460162 original 999.661000 error 0.200838
Result 999.499011 original 1000.010000 error 0.510989
Result 999.551895 original 1001.000000 error 1.448105
Result 999.611492 original 1001.710000 error 2.098508
Result 999.669372 original 1001.490000 error 1.820628
Result 999.718738 original 1000.550000 error 0.831262
Result 999.756018 original 999.743000 error 0.013018
Result 999.454824 original 1001.760000 error 2.305176
Result 999.441676 original 1001.270000 error 1.828324
Result 999.444911 original 1000.260000 error 0.815089
Result 999.466550 original 999.651000 error 0.184450
Result 999.506014 original 1000.010000 error 0.503986
Result 999.559090 original 1001.000000 error 1.440910
Result 999.618382 original 1001.720000 error 2.101618
Result 999.675533 original 1001.500000 error 1.824467
Result 999.723925 original 1000.550000 error 0.826075
Result 999.760179 original 999.734000 error 0.026179
Result 999.458605 original 1001.770000 error 2.311395
Result 999.446330 original 1001.280000 error 1.833670
Result 999.450497 original 1000.250000 error 0.799503
Result 999.472992 original 999.641000 error 0.168008
Result 999.513051 original 1000.000000 error 0.486949
Result 999.566291 original 1001.000000 error 1.433709
Result 999.625249 original 1001.730000 error 2.104751
Result 999.681649 original 1001.510000 error 1.828351
Result 999.729057 original 1000.540000 error 0.810943
Result 999.764286 original 999.725000 error 0.039286
Result 999.462437 original 1001.780000 error 2.317563
Result 999.451042 original 1001.280000 error 1.828958
Result 999.456143 original 1000.250000 error 0.793857
Result 999.479486 original 999.631000 error 0.151514
Result 999.520121 original 999.994000 error 0.473879
Result 999.573496 original 1001.010000 error 1.436504
Result 999.632091 original 1001.740000 error 2.107909
Result 999.687719 original 1001.510000 error 1.822281
Result 999.734135 original 1000.540000 error 0.805865
Result 999.768339 original 999.716000 error 0.052339
Result 999.466319 original 1001.790000 error 2.323681
Result 999.455813 original 1001.290000 error 1.834187
Result 999.461849 original 1000.250000 error 0.788151
Result 999.486032 original 999.621000 error 0.134968
Result 999.527222 original 999.988000 error 0.460778
Result 999.580704 original 1001.010000 error 1.429296
Result 999.638908 original 1001.750000 error 2.111092
Result 999.693744 original 1001.520000 error 1.826256
Result 999.739157 original 1000.540000 error 0.800843
Result 999.772338 original 999.707000 error 0.065338
Result 999.462999 original 1001.800000 error 2.337001
Result 999.446013 original 1001.340000 error 1.893987
Result 999.444900 original 1000.380000 error 0.935100
Result 999.462196 original 999.810000 error 0.347804
Result 999.498061 original 1000.150000 error 0.651939
Result 999.549027 original 1001.080000 error 1.530973
Result 999.608085 original 1001.760000 error 2.151915
Result 999.666686 original 1001.550000 error 1.883314
Result 999.717567 original 1000.650000 error 0.932433
Result 999.756603 original 999.889000 error 0.132397
Result 999.466606 original 1001.810000 error 2.343394
Result 999.450469 original 1001.350000 error 1.899531
Result 999.450285 original 1000.380000 error 0.929715
Result 999.468470 original 999.800000 error 0.331530
Result 999.505008 original 1000.140000 error 0.634992
Result 999.556248 original 1001.090000 error 1.533752
Result 999.615086 original 1001.770000 error 2.154914
Result 999.673021 original 1001.560000 error 1.886979
Result 999.722955 original 1000.650000 error 0.927045
Result 999.760961 original 999.880000 error 0.119039
Result 999.470261 original 1001.820000 error 2.349739
Result 999.454982 original 1001.350000 error 1.895018
Result 999.455731 original 1000.380000 error 0.924269
Result 999.474799 original 999.790000 error 0.315201
Result 999.511992 original 1000.130000 error 0.618008
Result 999.563480 original 1001.090000 error 1.526520
Result 999.622070 original 1001.780000 error 2.157930
Result 999.679314 original 1001.570000 error 1.890686
Result 999.728289 original 1000.650000 error 0.921711
Result 999.765264 original 999.871000 error 0.105736
Result 999.473964 original 1001.830000 error 2.356036
Result 999.459552 original 1001.360000 error 1.900448
Result 999.461237 original 1000.370000 error 0.908763
Result 999.481183 original 999.780000 error 0.298817
Result 999.519014 original 1000.130000 error 0.610986
Result 999.570723 original 1001.090000 error 1.519277
Result 999.629033 original 1001.790000 error 2.160967
Result 999.685565 original 1001.580000 error 1.894435
Result 999.733569 original 1000.650000 error 0.916431
Result 999.769512 original 999.862000 error 0.092488
Result 999.477717 original 1001.840000 error 2.362283
Result 999.464179 original 1001.360000 error 1.895821
Result 999.466803 original 1000.370000 error 0.903197
Result 999.487621 original 999.770000 error 0.282379
Result 999.526071 original 1000.120000 error 0.593929
Result 999.577973 original 1001.090000 error 1.512027
Result 999.635975 original 1001.800000 error 2.164025
Result 999.691771 original 1001.580000 error 1.888229
Result 999.738795 original 1000.650000 error 0.911205
Result 999.773706 original 999.852000 error 0.078294
Result 999.481520 original 1001.850000 error 2.368480
Result 999.468865 original 1001.370000 error 1.901135
Result 999.472430 original 1000.360000 error 0.887570
Result 999.494112 original 999.760000 error 0.265888
Result 999.533163 original 1000.110000 error 0.576837
Result 999.585229 original 1001.100000 error 1.514771
Result 999.642894 original 1001.810000 error 2.167106
Result 999.697933 original 1001.590000 error 1.892067
Result 999.743966 original 1000.650000 error 0.906034
Result 999.777845 original 999.843000 error 0.065155
Result 999.485373 original 1001.860000 error 2.374627
Result 999.473608 original 1001.370000 error 1.896392
Result 999.478117 original 1000.360000 error 0.881883
Result 999.500656 original 999.751000 error 0.250344
Result 999.540287 original 1000.110000 error 0.569713
Result 999.592489 original 1001.100000 error 1.507511
Result 999.649788 original 1001.820000 error 2.170212
Result 999.704049 original 1001.600000 error 1.895951
Result 999.749081 original 1000.650000 error 0.900919
Result 999.781930 original 999.834000 error 0.052070
Result 999.489277 original 1001.870000 error 2.380723
Result 999.478410 original 1001.380000 error 1.901590
Result 999.483864 original 1000.350000 error 0.866136
Result 999.507251 original 999.741000 error 0.233749
Result 999.547442 original 1000.100000 error 0.552558
Result 999.599752 original 1001.100000 error 1.500248
Result 999.656655 original 1001.830000 error 2.173345
Result 999.710118 original 1001.610000 error 1.899882
Result 999.754142 original 1000.640000 error 0.885858
Result 999.785962 original 999.825000 error 0.039038
Result 999.493232 original 1001.880000 error 2.386768
Result 999.483271 original 1001.380000 error 1.896729
Result 999.489671 original 1000.350000 error 0.860329
Result 999.513896 original 999.731000 error 0.217104
Result 999.554627 original 1000.090000 error 0.535373
Result 999.607015 original 1001.110000 error 1.502985
Result 999.663495 original 1001.840000 error 2.176505
Result 999.716140 original 1001.610000 error 1.893860
Result 999.759147 original 1000.640000 error 0.880853
Result 999.789939 original 999.816000 error 0.026061
Result 999.497239 original 1001.890000 error 2.392761
Result 999.488190 original 1001.390000 error 1.901810
Result 999.495538 original 1000.350000 error 0.854462
Result 999.520591 original 999.721000 error 0.200409
Result 999.561839 original 1000.090000 error 0.528161
Result 999.614277 original 1001.110000 error 1.495723
Result 999.670305 original 1001.850000 error 2.179695
Result 999.722114 original 1001.620000 error 1.897886
Result 999.764097 original 1000.640000 error 0.875903
Result 999.793864 original 999.807000 error 0.013136
Result 999.493301 original 1001.900000 error 2.406699
Result 999.477714 original 1001.440000 error 1.962286
Result 999.477922 original 1000.480000 error 1.002078
Result 999.496228 original 999.910000 error 0.413772
Result 999.532454 original 1000.250000 error 0.717546
Result 999.582802 original 1001.180000 error 1.597198
Result 999.640125 original 1001.860000 error 2.219875
Result 999.696026 original 1001.650000 error 1.953974
Result 999.743631 original 1000.750000 error 1.006369
Result 999.779252 original 999.989000 error 0.209748
Result 999.497024 original 1001.910000 error 2.412976
Result 999.482313 original 1001.450000 error 1.967687
Result 999.483467 original 1000.480000 error 0.996533
Result 999.502660 original 999.900000 error 0.397340
Result 999.539529 original 1000.240000 error 0.700471
Result 999.590100 original 1001.190000 error 1.599900
Result 999.647140 original 1001.870000 error 2.222860
Result 999.702323 original 1001.660000 error 1.957677
Result 999.748951 original 1000.750000 error 1.001049
Result 999.783534 original 999.980000 error 0.196466
Result 999.500796 original 1001.920000 error 2.419204
Result 999.486970 original 1001.450000 error 1.963030
Result 999.489073 original 1000.480000 error 0.990927
Result 999.509146 original 999.890000 error 0.380854
Result 999.546640 original 1000.230000 error 0.683360
Result 999.597405 original 1001.190000 error 1.592595
Result 999.654134 original 1001.880000 error 2.225866
Result 999.708575 original 1001.670000 error 1.961425
Result 999.754216 original 1000.750000 error 0.995784
Result 999.787760 original 999.971000 error 0.183240
Result 999.504619 original 1001.930000 error 2.425381
Result 999.491684 original 1001.460000 error 1.968316
Result 999.494739 original 1000.470000 error 0.975261
Result 999.515685 original 999.880000 error 0.364315
Result 999.553785 original 1000.230000 error 0.676215
Result 999.604716 original 1001.190000 error 1.585284
Result 999.661105 original 1001.890000 error 2.228895
Result 999.714783 original 1001.680000 error 1.965217
Result 999.759426 original 1000.750000 error 0.990574
Result 999.791932 original 999.962000 error 0.170068
Result 999.508491 original 1001.940000 error 2.431509
Result 999.496457 original 1001.460000 error 1.963543
Result 999.500466 original 1000.470000 error 0.969534
Result 999.522276 original 999.870000 error 0.347724
Result 999.560963 original 1000.220000 error 0.659037
Result 999.612031 original 1001.200000 error 1.587969
Result 999.668050 original 1001.900000 error 2.231950
Result 999.720945 original 1001.680000 error 1.959055
Result 999.764581 original 1000.750000 error 0.985419
Result 999.796050 original 999.952000 error 0.155950
Result 999.512415 original 1001.950000 error 2.437585
Result 999.501289 original 1001.470000 error 1.968711
Result 999.506253 original 1000.460000 error 0.953747
Result 999.528920 original 999.861000 error 0.332080
Result 999.568172 original 1000.210000 error 0.641828
Result 999.619348 original 1001.200000 error 1.580652
Result 999.674969 original 1001.910000 error 2.235031
Result 999.727060 original 1001.690000 error 1.962940
Result 999.769680 original 1000.750000 error 0.980320
Result 999.800114 original 999.943000 error 0.142886
Result 999.516390 original 1001.960000 error 2.443610
Result 999.506179 original 1001.470000 error 1.963821
Result 999.512099 original 1000.460000 error 0.947901
Result 999.535613 original 999.851000 error 0.315387
Result 999.575410 original 1000.210000 error 0.634590
Result 999.626665 original 1001.200000 error 1.573335
Result 999.681859 original 1001.920000 error 2.238141
Result 999.733127 original 1001.700000 error 1.966873
Result 999.774724 original 1000.750000 error 0.975276
Result 999.804124 original 999.934000 error 0.129876
Result 999.520417 original 1001.970000 error 2.449583
Result 999.511128 original 1001.480000 error 1.968872
Result 999.518005 original 1000.450000 error 0.931995
Result 999.542356 original 999.841000 error 0.298644
Result 999.582675 original 1000.200000 error 0.617325
Result 999.633981 original 1001.200000 error 1.566019
Result 999.688720 original 1001.930000 error 2.241280
Result 999.739145 original 1001.710000 error 1.970855
Result 999.779712 original 1000.740000 error 0.960288
Result 999.808081 original 999.925000 error 0.116919
Result 999.524496 original 1001.980000 error 2.455504
Result 999.516137 original 1001.480000 error 1.963863
Result 999.523970 original 1000.450000 error 0.926030
Result 999.549148 original 999.831000 error 0.281852
Result 999.589967 original 1000.190000 error 0.600033
Result 999.641293 original 1001.210000 error 1.568707
Result 999.695550 original 1001.940000 error 2.244450
Result 999.745115 original 1001.710000 error 1.964885
Result 999.784644 original 1000.740000 error 0.955356
Result 999.811985 original 999.916000 error 0.104015
Result 999.528629 original 1001.990000 error 2.461371
Result 999.521205 original 1001.490000 error 1.968795
Result 999.529995 original 1000.450000 error 0.920005
Result 999.555986 original 999.821000 error 0.265014
Result 999.597282 original 1000.190000 error 0.592718
Result 999.648600 original 1001.210000 error 1.561400
Result 999.702348 original 1001.950000 error 2.247652
Result 999.751034 original 1001.720000 error 1.968966
Result 999.789521 original 1000.740000 error 0.950479
Result 999.815836 original 999.907000 error 0.091164
Cleaning up.
```
