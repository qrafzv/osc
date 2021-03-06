#------------------------------------------------------------------------------
# LDL Makefile
#------------------------------------------------------------------------------

VERSION = 2.0.4

default: demos

include ../UFconfig/UFconfig.mk

# Compile all C code, including the C-callable routine.
demos:
	( cd Lib    ; $(MAKE) )

# Compile all C code, including the C-callable routine and the mexFunctions.
all:
	( cd Lib    ; $(MAKE) )
	( cd Demo   ; $(MAKE) )
	( cd MATLAB ; $(MAKE) )

# compile just the C-callable libraries (not mexFunctions or Demos)
library:
	( cd Lib    ; $(MAKE) )

# remove object files, but keep the compiled programs and library archives
clean:
	( cd Lib    ; $(MAKE) clean )

# clean, and then remove compiled programs and library archives
purge:
	( cd Lib    ; $(MAKE) purge )

distclean: purge

# create PDF documents for the original distribution
docs:
	( cd Doc    ; $(MAKE) )

# get ready for distribution
dist: purge
	( cd Demo   ; $(MAKE) dist )
	( cd Doc    ; $(MAKE) )

ccode: library

lib: library

# compile the MATLAB mexFunction
mex:
	( cd MATLAB ; $(MAKE) )

# install LDL
install:
	$(CP) Lib/libldl.a $(INSTALL_LIB)/libldl.$(VERSION).a
	( cd $(INSTALL_LIB) ; ln -sf libldl.$(VERSION).a libldl.a )
	$(CP) Include/ldl.h $(INSTALL_INCLUDE)
	chmod 644 $(INSTALL_LIB)/libldl*.a
	chmod 644 $(INSTALL_INCLUDE)/ldl.h

# uninstall LDL
uninstall:
	$(RM) $(INSTALL_LIB)/libldl*.a
	$(RM) $(INSTALL_INCLUDE)/ldl.h

