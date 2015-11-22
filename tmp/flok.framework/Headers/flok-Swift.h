// Generated by Apple Swift version 2.1 (swiftlang-700.1.101.6 clang-700.1.76)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import JavaScriptCore;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class FlokSpot;
@class NSCoder;

SWIFT_CLASS("_TtC4flok8FlokView")
@interface FlokView : UIView
@property (nonatomic, copy) NSArray<FlokSpot *> * __nonnull spots;
@property (nonatomic, weak) UIView * __null_unspecified parentView;
@property (nonatomic, copy) NSString * __null_unspecified name;
- (FlokSpot * __null_unspecified)spotWithName:(NSString * __nonnull)name;
@property (nonatomic, copy) NSDictionary<NSString *, id> * __null_unspecified context;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * __nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)defaultInit;
- (nonnull instancetype)init;
- (void)didLoad;
- (void)layoutSubviews;
- (void)updateConstraints;
+ (void)preload;
- (void)didSwitchFromAction:(NSString * __nullable)from toAction:(NSString * __nullable)to;
- (void)emit:(NSString * __nonnull)name withInfo:(NSDictionary<NSString *, id> * __nonnull)info;
@end


SWIFT_CLASS("_TtC4flok13FlokDebugView")
@interface FlokDebugView : FlokView
- (FlokSpot * __null_unspecified)spotWithName:(NSString * __nonnull)name;
- (void)didLoad;
- (void)updateConstraints;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * __nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP4flok17FlokEngineExports_")
@protocol FlokEngineExports <JSExport>
- (void)if_dispatch:(NSArray * __nonnull)q;
@end

@protocol FlokEnginePipeDelegate;

SWIFT_CLASS("_TtC4flok10FlokEngine")
@interface FlokEngine : NSObject <JSExport, FlokEngineExports>
@property (nonatomic, weak) id <FlokEnginePipeDelegate> __nullable pipeDelegate;
@property (nonatomic, strong) UIView * __null_unspecified rootView;
- (nonnull instancetype)initWithSrc:(NSString * __nonnull)src;
- (nonnull instancetype)initWithSrc:(NSString * __nonnull)src inPipeMode:(BOOL)inPipeMode OBJC_DESIGNATED_INITIALIZER;
+ (void)if_dispatch:(NSArray * __nonnull)q;
- (void)boot;
- (void)intDispatch:(NSString * __nonnull)name args:(NSArray * __nullable)args;
- (void)int_dispatch:(NSArray * __nonnull)q;
- (void)if_dispatch:(NSArray * __nonnull)q;
@end



SWIFT_PROTOCOL("_TtP4flok22FlokEnginePipeDelegate_")
@protocol FlokEnginePipeDelegate
@optional
- (void)flokEngineDidReceiveIntDispatch:(NSArray * __nonnull)q;
@end


SWIFT_CLASS("_TtC4flok15FlokHookHandler")
@interface FlokHookHandler : NSObject
- (void)handle:(NSDictionary<NSString *, id> * __nonnull)info;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4flok11FlokRuntime")
@interface FlokRuntime : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4flok8FlokSpot")
@interface FlokSpot : UIView
@property (nonatomic, copy) NSString * __null_unspecified name;
- (nonnull instancetype)initWithCoder:(NSCoder * __nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)updateConstraints;
@end


#pragma clang diagnostic pop
