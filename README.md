# Rijndael-Algorithm

Þetta algrím er notað til að dulkóða gögn, þetta algrím er *standard* algrím til að nota í að dulkóða gögn og hefur það fengið heitið AES (Advanced Encryption Standard).

# Skýrsla
## Algorithm

## Compile
Til að búa til exe skrá (fyrir encrypt), þá compile'arðu *saman* rijndael.c og super_random.c, með því að gera:
```bash
gcc src\rijndael.c src\super_random.c -o encrypt.exe
```
og með decrypt, þá er alveg nóg að velja bara `rijndael_decrypt.c`:
```bash
gcc src\rijndael.c -o decrypt.exe
```

## Tenglar
- Algrímið á **![Wikipedia](https://en.wikipedia.org/wiki/Advanced_Encryption_Standard)**.
- Video á **![Youtube](https://youtu.be/lnKPoWZnNNM)** um algrímið.
