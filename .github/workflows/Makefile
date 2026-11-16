
CC = arm-none-eabi-gcc
BUILD_DIR = output
NWLINK = npx --yes -- nwlink@0.0.16

src = main.c

CFLAGS = -std=c99
CFLAGS += $(shell $(NWLINK) eadk-cflags)
CFLAGS += -Os -Wall

LDFLAGS = -Wl,--relocatable
LDFLAGS += -nostartfiles
LDFLAGS += --specs=nano.specs
LDFLAGS += -Wl,-e,main
LDFLAGS += -Wl,-u,eadk_app_name
LDFLAGS += -Wl,-u,eadk_app_icon
LDFLAGS += -Wl,-u,eadk_api_level

.PHONY: build
build: $(BUILD_DIR)/app.nwa

$(BUILD_DIR)/app.nwa: main.o $(BUILD_DIR)/icon.o
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/icon.o: icon.png
	mkdir -p $(BUILD_DIR)
	$(NWLINK) png-icon-o $< $@

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) main.o
