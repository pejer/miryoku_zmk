FROM zmkfirmware/zmk-build-arm64:3.0-branch

RUN apt-get -y update
RUN apt-get -y install --no-install-recommends gcc-arm-none-eabi
RUN apt-get clean \
    && rm -rf /var/lib/apt/lists/*

RUN git clone https://github.com/zmkfirmware/zmk.git
WORKDIR "/zmk"
RUN git pull -v
RUN /usr/local/bin/west init -l app/
RUN /usr/local/bin/west update
WORKDIR "/zmk/app"
