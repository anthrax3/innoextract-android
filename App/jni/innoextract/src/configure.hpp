#ifndef INNOEXTRACT_CONFIGURE_HPP
#define INNOEXTRACT_CONFIGURE_HPP

// Console functions
#undef INNOEXTRACT_HAVE_ISATTY
#undef INNOEXTRACT_HAVE_IOCTL

// Time functions
#undef INNOEXTRACT_HAVE_TIMEGM
#define INNOEXTRACT_HAVE_GMTIME_R true

// File functions
#undef INNOEXTRACT_HAVE_UTIMENSAT
#undef INNOEXTRACT_HAVE_DYNAMIC_UTIMENSAT
#define INNOEXTRACT_HAVE_AT_FDCWD true
#define INNOEXTRACT_HAVE_UTIMES true

// Endianness
#undef INNOEXTRACT_HAVE_BUILTIN_BSWAP16
#undef INNOEXTRACT_HAVE_BUILTIN_BSWAP32
#undef INNOEXTRACT_HAVE_BUILTIN_BSWAP64
#define INNOEXTRACT_HAVE_BSWAP_16 true
#define INNOEXTRACT_HAVE_BSWAP_32 true
#define INNOEXTRACT_HAVE_BSWAP_64 true

// C++11 functionality
#undef INNOEXTRACT_HAVE_ALIGNOF
#define INNOEXTRACT_HAVE_STD_CODECVT_UTF8_UTF16 true
#define INNOEXTRACT_HAVE_STD_UNIQUE_PTR true

// Optional dependencies
#define INNOEXTRACT_HAVE_LZMA 1
#define INNOEXTRACT_HAVE_ICONV true
#undef INNOEXTRACT_HAVE_WIN32_CONV
#undef INNOEXTRACT_HAVE_BUILTIN_CONV

// Process functions
#undef INNOEXTRACT_HAVE_POSIX_SPAWNP
#undef INNOEXTRACT_HAVE_FORK
#undef INNOEXTRACT_HAVE_EXECVP
#undef INNOEXTRACT_HAVE_WAITPID

#endif // INNOEXTRACT_CONFIGURE_HPP