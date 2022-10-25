# g1tank
Yahboom G1 Raspberry PI tank application


### Installation. Recurcive clone including submodules:
```
git clone --recurse-submodules -b master https://github.com/alexeylebedbp/g1tank.git
```

Reqs:
OpenSSL
Boost

### 1. G1 Tank Robot Submodule:
Robot submodule represents Python application which is running on Raspberry Pi tank. Supports WebRTC protocol.

### 2. G1 Tank Server Submodule:
Signalling C++ server which is resposnible for establising connection between the tank and browser pilot app

### 3. G1 Tank Pilot Submodule:
React Typeescript browser application to control the robot. Supports WebRTC protocol.