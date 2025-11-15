# ------------ BASE ------------
FROM ubuntu:22.04

# ------------ DEPENDÊNCIAS ------------
RUN apt update && apt install -y g++ make

# ------------ DIRETÓRIO DO APP ------------
WORKDIR /app

# Copia tudo do projeto para a imagem
COPY . .

# ------------ COMPILAÇÃO ------------
RUN g++ -std=c++17 -O2 main.cpp SystemInfo.cpp -o sysstatx

# ------------ ENTRYPOINT ------------
CMD ["./sysstatx"]

