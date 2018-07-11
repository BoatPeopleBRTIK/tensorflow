# Settings for ARTIK530.
ifeq ($(TARGET), ARTIK530)
#	test:
#	$(info ******** TARGET is)
#	$TARGET
#	$(*********) 	
	ifeq ($(TARGET_ARCH), armv7)
		CXXFLAGS += \
			-march=armv7-a \
			-mfpu=vfpv3 \
			-funsafe-math-optimizations \
			-ftree-vectorize

		CCFLAGS += \
			-march=armv7-a \
			-mfpu=vfpv3 \
			-funsafe-math-optimizations \
			-ftree-vectorize

		LDFLAGS := \
			-Wl,--no-export-dynamic \
			-Wl,--exclude-libs,ALL \
			-Wl,--gc-sections \
			-Wl,--as-needed
	endif

	LIBS := \
	-lstdc++ \
	-lpthread \
	-lm \
	-ldl

	OBJDIR := $(OBJDIR)artik530_$(TARGET_ARCH)/
	LIBDIR := $(LIBDIR)artik530_$(TARGET_ARCH)/
	BINDIR := $(BINDIR)artik530_$(TARGET_ARCH)/
	DEPDIR := $(DEPDIR)artik530_$(TARGET_ARCH)/
endif
