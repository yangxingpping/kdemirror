
#ifndef MAUIMAN_EXPORT_H
#define MAUIMAN_EXPORT_H

#ifdef MAUIMAN_STATIC_DEFINE
#  define MAUIMAN_EXPORT
#  define MAUIMAN_NO_EXPORT
#else
#  ifndef MAUIMAN_EXPORT
#    ifdef MauiMan4_EXPORTS
        /* We are building this library */
#      define MAUIMAN_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MAUIMAN_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MAUIMAN_NO_EXPORT
#    define MAUIMAN_NO_EXPORT 
#  endif
#endif

#ifndef MAUIMAN_DEPRECATED
#  define MAUIMAN_DEPRECATED __declspec(deprecated)
#endif

#ifndef MAUIMAN_DEPRECATED_EXPORT
#  define MAUIMAN_DEPRECATED_EXPORT MAUIMAN_EXPORT MAUIMAN_DEPRECATED
#endif

#ifndef MAUIMAN_DEPRECATED_NO_EXPORT
#  define MAUIMAN_DEPRECATED_NO_EXPORT MAUIMAN_NO_EXPORT MAUIMAN_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MAUIMAN_NO_DEPRECATED
#    define MAUIMAN_NO_DEPRECATED
#  endif
#endif

#endif /* MAUIMAN_EXPORT_H */
