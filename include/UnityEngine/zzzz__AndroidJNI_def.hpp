#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNI)
namespace GlobalNamespace {
struct AndroidJNI_JStringBinding;
}
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct JNINativeMethod;
}
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNI;
}
// Write type traits
MARK_REF_T(::UnityEngine::AndroidJNI*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AndroidJNI*, "UnityEngine", "AndroidJNI");
// [NativeConditional("PLATFORM_ANDROID")]
// [StaticAccessor("AndroidJNIBindingsHelpers", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Modules/AndroidJNI/Public/AndroidJNIBindingsHelpers.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJNI
class CORDL_TYPE AndroidJNI : public ::System::Object {
public:
// Declarations
using JStringBinding = ::GlobalNamespace::AndroidJNI_JStringBinding;

/// [ThreadSafe]
/// @brief Method AllocObject, addr 0xb527474, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr AllocObject(::System::IntPtr  clazz) ;

/// [ThreadSafe]
/// @brief Method AttachCurrentThread, addr 0xb526954, size 0x28, virtual false, abstract: false, final false
static inline int32_t AttachCurrentThread() ;

/// @brief Method CallBooleanMethod, addr 0xb528e04, size 0x68, virtual false, abstract: false, final false
static inline bool CallBooleanMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallBooleanMethod, addr 0xb528e6c, size 0x9c, virtual false, abstract: false, final false
static inline bool CallBooleanMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallBooleanMethodUnsafe, addr 0xb528f08, size 0x54, virtual false, abstract: false, final false
static inline bool CallBooleanMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// [Obsolete("AndroidJNI.CallByteMethod is obsolete. Use AndroidJNI.CallSByteMethod method instead")]
/// @brief Method CallByteMethod, addr 0xb5290b0, size 0x4, virtual false, abstract: false, final false
static inline uint8_t CallByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallCharMethod, addr 0xb529208, size 0x68, virtual false, abstract: false, final false
static inline char16_t CallCharMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallCharMethod, addr 0xb529270, size 0x98, virtual false, abstract: false, final false
static inline char16_t CallCharMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallCharMethodUnsafe, addr 0xb529308, size 0x54, virtual false, abstract: false, final false
static inline char16_t CallCharMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallDoubleMethod, addr 0xb5294b0, size 0x68, virtual false, abstract: false, final false
static inline double_t CallDoubleMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallDoubleMethod, addr 0xb529518, size 0x98, virtual false, abstract: false, final false
static inline double_t CallDoubleMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallDoubleMethodUnsafe, addr 0xb5295b0, size 0x54, virtual false, abstract: false, final false
static inline double_t CallDoubleMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallFloatMethod, addr 0xb52935c, size 0x68, virtual false, abstract: false, final false
static inline float_t CallFloatMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallFloatMethod, addr 0xb5293c4, size 0x98, virtual false, abstract: false, final false
static inline float_t CallFloatMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallFloatMethodUnsafe, addr 0xb52945c, size 0x54, virtual false, abstract: false, final false
static inline float_t CallFloatMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallIntMethod, addr 0xb528cb0, size 0x68, virtual false, abstract: false, final false
static inline int32_t CallIntMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallIntMethod, addr 0xb528d18, size 0x98, virtual false, abstract: false, final false
static inline int32_t CallIntMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallIntMethodUnsafe, addr 0xb528db0, size 0x54, virtual false, abstract: false, final false
static inline int32_t CallIntMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallLongMethod, addr 0xb529604, size 0x68, virtual false, abstract: false, final false
static inline int64_t CallLongMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallLongMethod, addr 0xb52966c, size 0x98, virtual false, abstract: false, final false
static inline int64_t CallLongMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallLongMethodUnsafe, addr 0xb529704, size 0x54, virtual false, abstract: false, final false
static inline int64_t CallLongMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallObjectMethod, addr 0xb528b5c, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallObjectMethod, addr 0xb528bc4, size 0x98, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallObjectMethodUnsafe, addr 0xb528c5c, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallSByteMethod, addr 0xb5290b4, size 0x68, virtual false, abstract: false, final false
static inline int8_t CallSByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallSByteMethod, addr 0xb52911c, size 0x98, virtual false, abstract: false, final false
static inline int8_t CallSByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallSByteMethodUnsafe, addr 0xb5291b4, size 0x54, virtual false, abstract: false, final false
static inline int8_t CallSByteMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallShortMethod, addr 0xb528f5c, size 0x68, virtual false, abstract: false, final false
static inline int16_t CallShortMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallShortMethod, addr 0xb528fc4, size 0x98, virtual false, abstract: false, final false
static inline int16_t CallShortMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallShortMethodUnsafe, addr 0xb52905c, size 0x54, virtual false, abstract: false, final false
static inline int16_t CallShortMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticBooleanMethod, addr 0xb52a75c, size 0x68, virtual false, abstract: false, final false
static inline bool CallStaticBooleanMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticBooleanMethod, addr 0xb52a7c4, size 0x9c, virtual false, abstract: false, final false
static inline bool CallStaticBooleanMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallStaticBooleanMethodUnsafe, addr 0xb52a860, size 0x54, virtual false, abstract: false, final false
static inline bool CallStaticBooleanMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// [Obsolete("AndroidJNI.CallStaticByteMethod is obsolete. Use AndroidJNI.CallStaticSByteMethod method instead")]
/// @brief Method CallStaticByteMethod, addr 0xb52aa08, size 0x4, virtual false, abstract: false, final false
static inline uint8_t CallStaticByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticCharMethod, addr 0xb52ab60, size 0x68, virtual false, abstract: false, final false
static inline char16_t CallStaticCharMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticCharMethod, addr 0xb52abc8, size 0x98, virtual false, abstract: false, final false
static inline char16_t CallStaticCharMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallStaticCharMethodUnsafe, addr 0xb52ac60, size 0x54, virtual false, abstract: false, final false
static inline char16_t CallStaticCharMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticDoubleMethod, addr 0xb52ae08, size 0x68, virtual false, abstract: false, final false
static inline double_t CallStaticDoubleMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticDoubleMethod, addr 0xb52ae70, size 0x98, virtual false, abstract: false, final false
static inline double_t CallStaticDoubleMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallStaticDoubleMethodUnsafe, addr 0xb52af08, size 0x54, virtual false, abstract: false, final false
static inline double_t CallStaticDoubleMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticFloatMethod, addr 0xb52acb4, size 0x68, virtual false, abstract: false, final false
static inline float_t CallStaticFloatMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticFloatMethod, addr 0xb52ad1c, size 0x98, virtual false, abstract: false, final false
static inline float_t CallStaticFloatMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallStaticFloatMethodUnsafe, addr 0xb52adb4, size 0x54, virtual false, abstract: false, final false
static inline float_t CallStaticFloatMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticIntMethod, addr 0xb52a608, size 0x68, virtual false, abstract: false, final false
static inline int32_t CallStaticIntMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticIntMethod, addr 0xb52a670, size 0x98, virtual false, abstract: false, final false
static inline int32_t CallStaticIntMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallStaticIntMethodUnsafe, addr 0xb52a708, size 0x54, virtual false, abstract: false, final false
static inline int32_t CallStaticIntMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticLongMethod, addr 0xb52af5c, size 0x68, virtual false, abstract: false, final false
static inline int64_t CallStaticLongMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticLongMethod, addr 0xb52afc4, size 0x98, virtual false, abstract: false, final false
static inline int64_t CallStaticLongMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallStaticLongMethodUnsafe, addr 0xb52b05c, size 0x54, virtual false, abstract: false, final false
static inline int64_t CallStaticLongMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticObjectMethod, addr 0xb52a4b4, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticObjectMethod, addr 0xb52a51c, size 0x98, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallStaticObjectMethodUnsafe, addr 0xb52a5b4, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticSByteMethod, addr 0xb52aa0c, size 0x68, virtual false, abstract: false, final false
static inline int8_t CallStaticSByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticSByteMethod, addr 0xb52aa74, size 0x98, virtual false, abstract: false, final false
static inline int8_t CallStaticSByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallStaticSByteMethodUnsafe, addr 0xb52ab0c, size 0x54, virtual false, abstract: false, final false
static inline int8_t CallStaticSByteMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticShortMethod, addr 0xb52a8b4, size 0x68, virtual false, abstract: false, final false
static inline int16_t CallStaticShortMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticShortMethod, addr 0xb52a91c, size 0x98, virtual false, abstract: false, final false
static inline int16_t CallStaticShortMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallStaticShortMethodUnsafe, addr 0xb52a9b4, size 0x54, virtual false, abstract: false, final false
static inline int16_t CallStaticShortMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticStringMethod, addr 0xb52a210, size 0x68, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticStringMethod, addr 0xb52a278, size 0x74, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticStringMethodUnsafe, addr 0xb52a2ec, size 0xec, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// [ThreadSafe]
/// @brief Method CallStaticStringMethodUnsafeInternal, addr 0xb52a3d8, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AndroidJNI_JStringBinding CallStaticStringMethodUnsafeInternal(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticStringMethodUnsafeInternal_Injected, addr 0xb52a458, size 0x5c, virtual false, abstract: false, final false
static inline void CallStaticStringMethodUnsafeInternal_Injected(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args, ::by_ref<::GlobalNamespace::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method CallStaticVoidMethod, addr 0xb52b0b0, size 0x68, virtual false, abstract: false, final false
static inline void CallStaticVoidMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticVoidMethod, addr 0xb52b118, size 0x98, virtual false, abstract: false, final false
static inline void CallStaticVoidMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallStaticVoidMethodUnsafe, addr 0xb52b1b0, size 0x54, virtual false, abstract: false, final false
static inline void CallStaticVoidMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStringMethod, addr 0xb5288b8, size 0x68, virtual false, abstract: false, final false
static inline ::StringW CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStringMethod, addr 0xb528920, size 0x74, virtual false, abstract: false, final false
static inline ::StringW CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStringMethodUnsafe, addr 0xb528994, size 0xec, virtual false, abstract: false, final false
static inline ::StringW CallStringMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// [ThreadSafe]
/// @brief Method CallStringMethodUnsafeInternal, addr 0xb528a80, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AndroidJNI_JStringBinding CallStringMethodUnsafeInternal(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStringMethodUnsafeInternal_Injected, addr 0xb528b00, size 0x5c, virtual false, abstract: false, final false
static inline void CallStringMethodUnsafeInternal_Injected(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args, ::by_ref<::GlobalNamespace::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method CallVoidMethod, addr 0xb529758, size 0x68, virtual false, abstract: false, final false
static inline void CallVoidMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method CallVoidMethod, addr 0xb5297c0, size 0x98, virtual false, abstract: false, final false
static inline void CallVoidMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method CallVoidMethodUnsafe, addr 0xb529858, size 0x54, virtual false, abstract: false, final false
static inline void CallVoidMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// [ThreadSafe]
/// @brief Method CleanQueueGlobalRefs, addr 0xb5272dc, size 0x28, virtual false, abstract: false, final false
static inline void CleanQueueGlobalRefs() ;

/// [ThreadSafe]
/// @brief Method ConvertToBooleanArray, addr 0xb52bb68, size 0xcc, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToBooleanArray(::ArrayW<bool>  array) ;

/// @brief Method ConvertToBooleanArray_Injected, addr 0xb52bc34, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToBooleanArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  array) ;

/// [ThreadSafe]
/// @brief Method DeleteGlobalRef, addr 0xb52723c, size 0x3c, virtual false, abstract: false, final false
static inline void DeleteGlobalRef(::System::IntPtr  obj) ;

/// [ThreadSafe]
/// @brief Method DeleteLocalRef, addr 0xb5273b8, size 0x3c, virtual false, abstract: false, final false
static inline void DeleteLocalRef(::System::IntPtr  obj) ;

/// [ThreadSafe]
/// @brief Method DeleteWeakGlobalRef, addr 0xb527340, size 0x3c, virtual false, abstract: false, final false
static inline void DeleteWeakGlobalRef(::System::IntPtr  obj) ;

/// [ThreadSafe]
/// @brief Method DetachCurrentThread, addr 0xb52697c, size 0x28, virtual false, abstract: false, final false
static inline int32_t DetachCurrentThread() ;

/// [ThreadSafe]
/// @brief Method EnsureLocalCapacity, addr 0xb527438, size 0x3c, virtual false, abstract: false, final false
static inline int32_t EnsureLocalCapacity(int32_t  capacity) ;

/// [ThreadSafe]
/// @brief Method ExceptionClear, addr 0xb526fbc, size 0x28, virtual false, abstract: false, final false
static inline void ExceptionClear() ;

/// [ThreadSafe]
/// @brief Method ExceptionDescribe, addr 0xb526f94, size 0x28, virtual false, abstract: false, final false
static inline void ExceptionDescribe() ;

/// [ThreadSafe]
/// @brief Method ExceptionOccurred, addr 0xb526f6c, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr ExceptionOccurred() ;

/// [ThreadSafe]
/// @brief Method FatalError, addr 0xb526fe4, size 0x168, virtual false, abstract: false, final false
static inline void FatalError(::StringW  message) ;

/// @brief Method FatalError_Injected, addr 0xb52714c, size 0x3c, virtual false, abstract: false, final false
static inline void FatalError_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  message) ;

/// [ThreadSafe]
/// @brief Method FindClass, addr 0xb526a28, size 0x170, virtual false, abstract: false, final false
static inline ::System::IntPtr FindClass(::StringW  name) ;

/// @brief Method FindClass_Injected, addr 0xb526b98, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr FindClass_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// [ThreadSafe]
/// @brief Method FromBooleanArray, addr 0xb52c26c, size 0x118, virtual false, abstract: false, final false
static inline ::ArrayW<bool> FromBooleanArray(::System::IntPtr  array) ;

/// @brief Method FromBooleanArray_Injected, addr 0xb52c384, size 0x44, virtual false, abstract: false, final false
static inline void FromBooleanArray_Injected(::System::IntPtr  array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [Obsolete("AndroidJNI.FromByteArray is obsolete. Use AndroidJNI.FromSByteArray method instead")]
/// [ThreadSafe]
/// @brief Method FromByteArray, addr 0xb52c3c8, size 0x118, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromByteArray(::System::IntPtr  array) ;

/// @brief Method FromByteArray_Injected, addr 0xb52c4e0, size 0x44, virtual false, abstract: false, final false
static inline void FromByteArray_Injected(::System::IntPtr  array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [ThreadSafe]
/// @brief Method FromCharArray, addr 0xb52c560, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> FromCharArray(::System::IntPtr  array) ;

/// [ThreadSafe]
/// @brief Method FromDoubleArray, addr 0xb52c68c, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<double_t> FromDoubleArray(::System::IntPtr  array) ;

/// [ThreadSafe]
/// @brief Method FromFloatArray, addr 0xb52c650, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> FromFloatArray(::System::IntPtr  array) ;

/// [ThreadSafe]
/// @brief Method FromIntArray, addr 0xb52c5d8, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> FromIntArray(::System::IntPtr  array) ;

/// [ThreadSafe]
/// @brief Method FromLongArray, addr 0xb52c614, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<int64_t> FromLongArray(::System::IntPtr  array) ;

/// [ThreadSafe]
/// @brief Method FromObjectArray, addr 0xb52c6c8, size 0x118, virtual false, abstract: false, final false
static inline ::ArrayW<::System::IntPtr> FromObjectArray(::System::IntPtr  array) ;

/// @brief Method FromObjectArray_Injected, addr 0xb52c7e0, size 0x44, virtual false, abstract: false, final false
static inline void FromObjectArray_Injected(::System::IntPtr  array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [ThreadSafe]
/// @brief Method FromReflectedField, addr 0xb526c10, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr FromReflectedField(::System::IntPtr  refField) ;

/// [ThreadSafe]
/// @brief Method FromReflectedMethod, addr 0xb526bd4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr FromReflectedMethod(::System::IntPtr  refMethod) ;

/// [ThreadSafe]
/// @brief Method FromSByteArray, addr 0xb52c524, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<int8_t> FromSByteArray(::System::IntPtr  array) ;

/// [ThreadSafe]
/// @brief Method FromShortArray, addr 0xb52c59c, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<int16_t> FromShortArray(::System::IntPtr  array) ;

/// [ThreadSafe]
/// @brief Method GetArrayLength, addr 0xb52c824, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetArrayLength(::System::IntPtr  array) ;

/// [ThreadSafe]
/// @brief Method GetBooleanArrayElement, addr 0xb52cad0, size 0x44, virtual false, abstract: false, final false
static inline bool GetBooleanArrayElement(::System::IntPtr  array, int32_t  index) ;

/// [ThreadSafe]
/// @brief Method GetBooleanField, addr 0xb529a90, size 0x44, virtual false, abstract: false, final false
static inline bool GetBooleanField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// [Obsolete("AndroidJNI.GetByteArrayElement is obsolete. Use AndroidJNI.GetSByteArrayElement method instead")]
/// @brief Method GetByteArrayElement, addr 0xb52cb14, size 0x44, virtual false, abstract: false, final false
static inline uint8_t GetByteArrayElement(::System::IntPtr  array, int32_t  index) ;

/// [Obsolete("AndroidJNI.GetByteField is obsolete. Use AndroidJNI.GetSByteField method instead")]
/// @brief Method GetByteField, addr 0xb529ad4, size 0x44, virtual false, abstract: false, final false
static inline uint8_t GetByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetCharArrayElement, addr 0xb52cb9c, size 0x44, virtual false, abstract: false, final false
static inline char16_t GetCharArrayElement(::System::IntPtr  array, int32_t  index) ;

/// [ThreadSafe]
/// @brief Method GetCharField, addr 0xb529b5c, size 0x44, virtual false, abstract: false, final false
static inline char16_t GetCharField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetDirectBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Collections::NativeArray_1<T> GetDirectBuffer(::System::IntPtr  buffer) ;

/// [ThreadSafe]
/// @brief Method GetDirectBufferAddress, addr 0xb52d20c, size 0x3c, virtual false, abstract: false, final false
static inline int8_t* GetDirectBufferAddress(::System::IntPtr  buffer) ;

/// [ThreadSafe]
/// @brief Method GetDirectBufferCapacity, addr 0xb52d248, size 0x3c, virtual false, abstract: false, final false
static inline int64_t GetDirectBufferCapacity(::System::IntPtr  buffer) ;

/// @brief Method GetDirectByteBuffer, addr 0xb52d284, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<uint8_t> GetDirectByteBuffer(::System::IntPtr  buffer) ;

/// @brief Method GetDirectSByteBuffer, addr 0xb52d2cc, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<int8_t> GetDirectSByteBuffer(::System::IntPtr  buffer) ;

/// [ThreadSafe]
/// @brief Method GetDoubleArrayElement, addr 0xb52ccf0, size 0x44, virtual false, abstract: false, final false
static inline double_t GetDoubleArrayElement(::System::IntPtr  array, int32_t  index) ;

/// [ThreadSafe]
/// @brief Method GetDoubleField, addr 0xb529cb0, size 0x44, virtual false, abstract: false, final false
static inline double_t GetDoubleField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetFieldID, addr 0xb527920, size 0x248, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetFieldID_Injected, addr 0xb527b68, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// [ThreadSafe]
/// @brief Method GetFloatArrayElement, addr 0xb52ccac, size 0x44, virtual false, abstract: false, final false
static inline float_t GetFloatArrayElement(::System::IntPtr  array, int32_t  index) ;

/// [ThreadSafe]
/// @brief Method GetFloatField, addr 0xb529c6c, size 0x44, virtual false, abstract: false, final false
static inline float_t GetFloatField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetIntArrayElement, addr 0xb52cc24, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetIntArrayElement(::System::IntPtr  array, int32_t  index) ;

/// [ThreadSafe]
/// @brief Method GetIntField, addr 0xb529be4, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetIntField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// [StaticAccessor("jni", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetJavaVM, addr 0xb52692c, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr GetJavaVM() ;

/// [ThreadSafe]
/// @brief Method GetLongArrayElement, addr 0xb52cc68, size 0x44, virtual false, abstract: false, final false
static inline int64_t GetLongArrayElement(::System::IntPtr  array, int32_t  index) ;

/// [ThreadSafe]
/// @brief Method GetLongField, addr 0xb529c28, size 0x44, virtual false, abstract: false, final false
static inline int64_t GetLongField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetMethodID, addr 0xb527684, size 0x248, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetMethodID_Injected, addr 0xb5278cc, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// [ThreadSafe]
/// @brief Method GetObjectArrayElement, addr 0xb52cd34, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectArrayElement(::System::IntPtr  array, int32_t  index) ;

/// [ThreadSafe]
/// @brief Method GetObjectClass, addr 0xb527604, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectClass(::System::IntPtr  obj) ;

/// [ThreadSafe]
/// @brief Method GetObjectField, addr 0xb529a4c, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetQueueGlobalRefsCount, addr 0xb5272b4, size 0x28, virtual false, abstract: false, final false
static inline uint32_t GetQueueGlobalRefsCount() ;

/// [ThreadSafe]
/// @brief Method GetSByteArrayElement, addr 0xb52cb58, size 0x44, virtual false, abstract: false, final false
static inline int8_t GetSByteArrayElement(::System::IntPtr  array, int32_t  index) ;

/// [ThreadSafe]
/// @brief Method GetSByteField, addr 0xb529b18, size 0x44, virtual false, abstract: false, final false
static inline int8_t GetSByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetShortArrayElement, addr 0xb52cbe0, size 0x44, virtual false, abstract: false, final false
static inline int16_t GetShortArrayElement(::System::IntPtr  array, int32_t  index) ;

/// [ThreadSafe]
/// @brief Method GetShortField, addr 0xb529ba0, size 0x44, virtual false, abstract: false, final false
static inline int16_t GetShortField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetStaticBooleanField, addr 0xb52b3e8, size 0x44, virtual false, abstract: false, final false
static inline bool GetStaticBooleanField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// [Obsolete("AndroidJNI.GetStaticByteField is obsolete. Use AndroidJNI.GetStaticSByteField method instead")]
/// @brief Method GetStaticByteField, addr 0xb52b42c, size 0x44, virtual false, abstract: false, final false
static inline uint8_t GetStaticByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetStaticCharField, addr 0xb52b4b4, size 0x44, virtual false, abstract: false, final false
static inline char16_t GetStaticCharField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetStaticDoubleField, addr 0xb52b608, size 0x44, virtual false, abstract: false, final false
static inline double_t GetStaticDoubleField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetStaticFieldID, addr 0xb527e58, size 0x248, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetStaticFieldID_Injected, addr 0xb5280a0, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticFieldID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// [ThreadSafe]
/// @brief Method GetStaticFloatField, addr 0xb52b5c4, size 0x44, virtual false, abstract: false, final false
static inline float_t GetStaticFloatField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetStaticIntField, addr 0xb52b53c, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetStaticIntField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetStaticLongField, addr 0xb52b580, size 0x44, virtual false, abstract: false, final false
static inline int64_t GetStaticLongField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetStaticMethodID, addr 0xb527bbc, size 0x248, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetStaticMethodID_Injected, addr 0xb527e04, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticMethodID_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// [ThreadSafe]
/// @brief Method GetStaticObjectField, addr 0xb52b3a4, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticObjectField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetStaticSByteField, addr 0xb52b470, size 0x44, virtual false, abstract: false, final false
static inline int8_t GetStaticSByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetStaticShortField, addr 0xb52b4f8, size 0x44, virtual false, abstract: false, final false
static inline int16_t GetStaticShortField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticStringField, addr 0xb52b204, size 0xdc, virtual false, abstract: false, final false
static inline ::StringW GetStaticStringField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetStaticStringFieldInternal, addr 0xb52b2e0, size 0x70, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AndroidJNI_JStringBinding GetStaticStringFieldInternal(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticStringFieldInternal_Injected, addr 0xb52b350, size 0x54, virtual false, abstract: false, final false
static inline void GetStaticStringFieldInternal_Injected(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::by_ref<::GlobalNamespace::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method GetStringChars, addr 0xb528558, size 0xd4, virtual false, abstract: false, final false
static inline ::StringW GetStringChars(::System::IntPtr  str) ;

/// [ThreadSafe]
/// @brief Method GetStringCharsInternal, addr 0xb52862c, size 0x68, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AndroidJNI_JStringBinding GetStringCharsInternal(::System::IntPtr  str) ;

/// @brief Method GetStringCharsInternal_Injected, addr 0xb5286ec, size 0x44, virtual false, abstract: false, final false
static inline void GetStringCharsInternal_Injected(::System::IntPtr  str, ::by_ref<::GlobalNamespace::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method GetStringField, addr 0xb5298ac, size 0xdc, virtual false, abstract: false, final false
static inline ::StringW GetStringField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// [ThreadSafe]
/// @brief Method GetStringFieldInternal, addr 0xb529988, size 0x70, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AndroidJNI_JStringBinding GetStringFieldInternal(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetStringFieldInternal_Injected, addr 0xb5299f8, size 0x54, virtual false, abstract: false, final false
static inline void GetStringFieldInternal_Injected(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::by_ref<::GlobalNamespace::AndroidJNI_JStringBinding>  ret) ;

/// [ThreadSafe]
/// @brief Method GetStringLength, addr 0xb528730, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetStringLength(::System::IntPtr  str) ;

/// [ThreadSafe]
/// @brief Method GetStringUTFChars, addr 0xb5287a8, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW GetStringUTFChars(::System::IntPtr  str) ;

/// @brief Method GetStringUTFChars_Injected, addr 0xb528874, size 0x44, virtual false, abstract: false, final false
static inline void GetStringUTFChars_Injected(::System::IntPtr  str, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [ThreadSafe]
/// @brief Method GetStringUTFLength, addr 0xb52876c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetStringUTFLength(::System::IntPtr  str) ;

/// [ThreadSafe]
/// @brief Method GetSuperclass, addr 0xb526cf4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSuperclass(::System::IntPtr  clazz) ;

/// [ThreadSafe]
/// @brief Method GetVersion, addr 0xb526a00, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetVersion() ;

/// [RequiredByNativeCode]
/// @brief Method InvokeAction, addr 0xb5269a4, size 0x20, virtual false, abstract: false, final false
static inline void InvokeAction(::System::Action*  action) ;

/// [ThreadSafe]
/// @brief Method InvokeAttached, addr 0xb5269c4, size 0x3c, virtual false, abstract: false, final false
static inline void InvokeAttached(::System::Action*  action) ;

/// [ThreadSafe]
/// @brief Method IsAssignableFrom, addr 0xb526d30, size 0x44, virtual false, abstract: false, final false
static inline bool IsAssignableFrom(::System::IntPtr  clazz1, ::System::IntPtr  clazz2) ;

/// [ThreadSafe]
/// @brief Method IsInstanceOf, addr 0xb527640, size 0x44, virtual false, abstract: false, final false
static inline bool IsInstanceOf(::System::IntPtr  obj, ::System::IntPtr  clazz) ;

/// [ThreadSafe]
/// @brief Method IsSameObject, addr 0xb5273f4, size 0x44, virtual false, abstract: false, final false
static inline bool IsSameObject(::System::IntPtr  obj1, ::System::IntPtr  obj2) ;

/// [ThreadSafe]
/// @brief Method NewBooleanArray, addr 0xb52c860, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewBooleanArray(int32_t  size) ;

/// [Obsolete("AndroidJNI.NewByteArray is obsolete. Use AndroidJNI.NewSByteArray method instead")]
/// @brief Method NewByteArray, addr 0xb52c89c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewByteArray(int32_t  size) ;

/// [ThreadSafe]
/// @brief Method NewCharArray, addr 0xb52c914, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewCharArray(int32_t  size) ;

/// @brief Method NewDirectByteBuffer, addr 0xb52d1b4, size 0x58, virtual false, abstract: false, final false
static inline ::System::IntPtr NewDirectByteBuffer(::Unity::Collections::NativeArray_1<int8_t>  buffer) ;

/// @brief Method NewDirectByteBuffer, addr 0xb52d15c, size 0x58, virtual false, abstract: false, final false
static inline ::System::IntPtr NewDirectByteBuffer(::Unity::Collections::NativeArray_1<uint8_t>  buffer) ;

/// [ThreadSafe]
/// @brief Method NewDirectByteBuffer, addr 0xb52d118, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr NewDirectByteBuffer(uint8_t*  buffer, int64_t  capacity) ;

/// @brief Method NewDirectByteBufferFromNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::IntPtr NewDirectByteBufferFromNativeArray(::Unity::Collections::NativeArray_1<T>  buffer) ;

/// [ThreadSafe]
/// @brief Method NewDoubleArray, addr 0xb52ca40, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewDoubleArray(int32_t  size) ;

/// [ThreadSafe]
/// @brief Method NewFloatArray, addr 0xb52ca04, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewFloatArray(int32_t  size) ;

/// [ThreadSafe]
/// @brief Method NewGlobalRef, addr 0xb527200, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewGlobalRef(::System::IntPtr  obj) ;

/// [ThreadSafe]
/// @brief Method NewIntArray, addr 0xb52c98c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewIntArray(int32_t  size) ;

/// [ThreadSafe]
/// @brief Method NewLocalRef, addr 0xb52737c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewLocalRef(::System::IntPtr  obj) ;

/// [ThreadSafe]
/// @brief Method NewLongArray, addr 0xb52c9c8, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewLongArray(int32_t  size) ;

/// @brief Method NewObject, addr 0xb5274b0, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObject(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue>  args) ;

/// @brief Method NewObject, addr 0xb527518, size 0x98, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObject(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// [ThreadSafe]
/// @brief Method NewObjectA, addr 0xb5275b0, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObjectA(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// [ThreadSafe]
/// @brief Method NewObjectArray, addr 0xb52ca7c, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObjectArray(int32_t  size, ::System::IntPtr  clazz, ::System::IntPtr  obj) ;

/// [ThreadSafe]
/// @brief Method NewSByteArray, addr 0xb52c8d8, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewSByteArray(int32_t  size) ;

/// [ThreadSafe]
/// @brief Method NewShortArray, addr 0xb52c950, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewShortArray(int32_t  size) ;

/// [ThreadSafe]
/// @brief Method NewString, addr 0xb5282a4, size 0xcc, virtual false, abstract: false, final false
static inline ::System::IntPtr NewString(::ArrayW<char16_t>  chars) ;

/// @brief Method NewString, addr 0xb5280f4, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr NewString(::StringW  chars) ;

/// [ThreadSafe]
/// @brief Method NewStringFromStr, addr 0xb5280f8, size 0x170, virtual false, abstract: false, final false
static inline ::System::IntPtr NewStringFromStr(::StringW  chars) ;

/// @brief Method NewStringFromStr_Injected, addr 0xb528268, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewStringFromStr_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  chars) ;

/// [ThreadSafe]
/// @brief Method NewStringUTF, addr 0xb5283ac, size 0x170, virtual false, abstract: false, final false
static inline ::System::IntPtr NewStringUTF(::StringW  bytes) ;

/// @brief Method NewStringUTF_Injected, addr 0xb52851c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewStringUTF_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  bytes) ;

/// @brief Method NewString_Injected, addr 0xb528370, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  chars) ;

/// [ThreadSafe]
/// @brief Method NewWeakGlobalRef, addr 0xb527304, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewWeakGlobalRef(::System::IntPtr  obj) ;

/// [ThreadSafe]
/// @brief Method PopLocalFrame, addr 0xb5271c4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr PopLocalFrame(::System::IntPtr  ptr) ;

/// [ThreadSafe]
/// @brief Method PushLocalFrame, addr 0xb527188, size 0x3c, virtual false, abstract: false, final false
static inline int32_t PushLocalFrame(int32_t  capacity) ;

/// [ThreadSafe]
/// @brief Method QueueDeleteGlobalRef, addr 0xb527278, size 0x3c, virtual false, abstract: false, final false
static inline void QueueDeleteGlobalRef(::System::IntPtr  obj) ;

/// @brief Method RegisterNatives, addr 0xb52d314, size 0x134, virtual false, abstract: false, final false
static inline int32_t RegisterNatives(::System::IntPtr  clazz, ::ArrayW<::UnityEngine::JNINativeMethod>  methods) ;

/// [ThreadSafe]
/// @brief Method RegisterNativesAllocate, addr 0xb52d448, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr RegisterNativesAllocate(int32_t  length) ;

/// [ThreadSafe]
/// @brief Method RegisterNativesAndFree, addr 0xb52d6dc, size 0x54, virtual false, abstract: false, final false
static inline int32_t RegisterNativesAndFree(::System::IntPtr  clazz, ::System::IntPtr  natives, int32_t  n) ;

/// [ThreadSafe]
/// @brief Method RegisterNativesSet, addr 0xb52d484, size 0x258, virtual false, abstract: false, final false
static inline void RegisterNativesSet(::System::IntPtr  natives, int32_t  idx, ::StringW  name, ::StringW  signature, ::System::IntPtr  fnPtr) ;

/// @brief Method RegisterNativesSet_Injected, addr 0xb52d730, size 0x6c, virtual false, abstract: false, final false
static inline void RegisterNativesSet_Injected(::System::IntPtr  natives, int32_t  idx, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  signature, ::System::IntPtr  fnPtr) ;

/// [ThreadSafe]
/// @brief Method ReleaseStringChars, addr 0xb5268b4, size 0x3c, virtual false, abstract: false, final false
static inline void ReleaseStringChars(::GlobalNamespace::AndroidJNI_JStringBinding  str) ;

/// @brief Method ReleaseStringChars_Injected, addr 0xb5268f0, size 0x3c, virtual false, abstract: false, final false
static inline void ReleaseStringChars_Injected(::by_ref<::GlobalNamespace::AndroidJNI_JStringBinding>  str) ;

/// [ThreadSafe]
/// @brief Method SetBooleanArrayElement, addr 0xb52cdd0, size 0x54, virtual false, abstract: false, final false
static inline void SetBooleanArrayElement(::System::IntPtr  array, int32_t  index, bool  val) ;

/// [Obsolete("AndroidJNI.SetBooleanArrayElement(IntPtr, int, byte) is obsolete. Use AndroidJNI.SetBooleanArrayElement(IntPtr, int, bool) method instead")]
/// @brief Method SetBooleanArrayElement, addr 0xb52cd78, size 0x58, virtual false, abstract: false, final false
static inline void SetBooleanArrayElement(::System::IntPtr  array, int32_t  index, uint8_t  val) ;

/// [ThreadSafe]
/// @brief Method SetBooleanField, addr 0xb529f1c, size 0x54, virtual false, abstract: false, final false
static inline void SetBooleanField(::System::IntPtr  obj, ::System::IntPtr  fieldID, bool  val) ;

/// [Obsolete("AndroidJNI.SetByteArrayElement is obsolete. Use AndroidJNI.SetSByteArrayElement method instead")]
/// @brief Method SetByteArrayElement, addr 0xb52ce24, size 0x54, virtual false, abstract: false, final false
static inline void SetByteArrayElement(::System::IntPtr  array, int32_t  index, int8_t  val) ;

/// [Obsolete("AndroidJNI.SetByteField is obsolete. Use AndroidJNI.SetSByteField method instead")]
/// @brief Method SetByteField, addr 0xb529f70, size 0x54, virtual false, abstract: false, final false
static inline void SetByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID, uint8_t  val) ;

/// [ThreadSafe]
/// @brief Method SetCharArrayElement, addr 0xb52cecc, size 0x54, virtual false, abstract: false, final false
static inline void SetCharArrayElement(::System::IntPtr  array, int32_t  index, char16_t  val) ;

/// [ThreadSafe]
/// @brief Method SetCharField, addr 0xb52a018, size 0x54, virtual false, abstract: false, final false
static inline void SetCharField(::System::IntPtr  obj, ::System::IntPtr  fieldID, char16_t  val) ;

/// [ThreadSafe]
/// @brief Method SetDoubleArrayElement, addr 0xb52d070, size 0x54, virtual false, abstract: false, final false
static inline void SetDoubleArrayElement(::System::IntPtr  array, int32_t  index, double_t  val) ;

/// [ThreadSafe]
/// @brief Method SetDoubleField, addr 0xb52a1bc, size 0x54, virtual false, abstract: false, final false
static inline void SetDoubleField(::System::IntPtr  obj, ::System::IntPtr  fieldID, double_t  val) ;

/// [ThreadSafe]
/// @brief Method SetFloatArrayElement, addr 0xb52d01c, size 0x54, virtual false, abstract: false, final false
static inline void SetFloatArrayElement(::System::IntPtr  array, int32_t  index, float_t  val) ;

/// [ThreadSafe]
/// @brief Method SetFloatField, addr 0xb52a168, size 0x54, virtual false, abstract: false, final false
static inline void SetFloatField(::System::IntPtr  obj, ::System::IntPtr  fieldID, float_t  val) ;

/// [ThreadSafe]
/// @brief Method SetIntArrayElement, addr 0xb52cf74, size 0x54, virtual false, abstract: false, final false
static inline void SetIntArrayElement(::System::IntPtr  array, int32_t  index, int32_t  val) ;

/// [ThreadSafe]
/// @brief Method SetIntField, addr 0xb52a0c0, size 0x54, virtual false, abstract: false, final false
static inline void SetIntField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int32_t  val) ;

/// [ThreadSafe]
/// @brief Method SetLongArrayElement, addr 0xb52cfc8, size 0x54, virtual false, abstract: false, final false
static inline void SetLongArrayElement(::System::IntPtr  array, int32_t  index, int64_t  val) ;

/// [ThreadSafe]
/// @brief Method SetLongField, addr 0xb52a114, size 0x54, virtual false, abstract: false, final false
static inline void SetLongField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int64_t  val) ;

/// [ThreadSafe]
/// @brief Method SetObjectArrayElement, addr 0xb52d0c4, size 0x54, virtual false, abstract: false, final false
static inline void SetObjectArrayElement(::System::IntPtr  array, int32_t  index, ::System::IntPtr  obj) ;

/// [ThreadSafe]
/// @brief Method SetObjectField, addr 0xb529ec8, size 0x54, virtual false, abstract: false, final false
static inline void SetObjectField(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::System::IntPtr  val) ;

/// [ThreadSafe]
/// @brief Method SetSByteArrayElement, addr 0xb52ce78, size 0x54, virtual false, abstract: false, final false
static inline void SetSByteArrayElement(::System::IntPtr  array, int32_t  index, int8_t  val) ;

/// [ThreadSafe]
/// @brief Method SetSByteField, addr 0xb529fc4, size 0x54, virtual false, abstract: false, final false
static inline void SetSByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int8_t  val) ;

/// [ThreadSafe]
/// @brief Method SetShortArrayElement, addr 0xb52cf20, size 0x54, virtual false, abstract: false, final false
static inline void SetShortArrayElement(::System::IntPtr  array, int32_t  index, int16_t  val) ;

/// [ThreadSafe]
/// @brief Method SetShortField, addr 0xb52a06c, size 0x54, virtual false, abstract: false, final false
static inline void SetShortField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int16_t  val) ;

/// [ThreadSafe]
/// @brief Method SetStaticBooleanField, addr 0xb52b874, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticBooleanField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, bool  val) ;

/// [Obsolete("AndroidJNI.SetStaticByteField is obsolete. Use AndroidJNI.SetStaticSByteField method instead")]
/// @brief Method SetStaticByteField, addr 0xb52b8c8, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, uint8_t  val) ;

/// [ThreadSafe]
/// @brief Method SetStaticCharField, addr 0xb52b970, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticCharField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, char16_t  val) ;

/// [ThreadSafe]
/// @brief Method SetStaticDoubleField, addr 0xb52bb14, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticDoubleField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, double_t  val) ;

/// [ThreadSafe]
/// @brief Method SetStaticFloatField, addr 0xb52bac0, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticFloatField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, float_t  val) ;

/// [ThreadSafe]
/// @brief Method SetStaticIntField, addr 0xb52ba18, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticIntField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int32_t  val) ;

/// [ThreadSafe]
/// @brief Method SetStaticLongField, addr 0xb52ba6c, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticLongField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int64_t  val) ;

/// [ThreadSafe]
/// @brief Method SetStaticObjectField, addr 0xb52b820, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticObjectField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::System::IntPtr  val) ;

/// [ThreadSafe]
/// @brief Method SetStaticSByteField, addr 0xb52b91c, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticSByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int8_t  val) ;

/// [ThreadSafe]
/// @brief Method SetStaticShortField, addr 0xb52b9c4, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticShortField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int16_t  val) ;

/// [ThreadSafe]
/// @brief Method SetStaticStringField, addr 0xb52b64c, size 0x180, virtual false, abstract: false, final false
static inline void SetStaticStringField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::StringW  val) ;

/// @brief Method SetStaticStringField_Injected, addr 0xb52b7cc, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticStringField_Injected(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  val) ;

/// [ThreadSafe]
/// @brief Method SetStringField, addr 0xb529cf4, size 0x180, virtual false, abstract: false, final false
static inline void SetStringField(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::StringW  val) ;

/// @brief Method SetStringField_Injected, addr 0xb529e74, size 0x54, virtual false, abstract: false, final false
static inline void SetStringField_Injected(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  val) ;

/// [ThreadSafe]
/// @brief Method Throw, addr 0xb526d74, size 0x3c, virtual false, abstract: false, final false
static inline int32_t Throw(::System::IntPtr  obj) ;

/// [ThreadSafe]
/// @brief Method ThrowNew, addr 0xb526db0, size 0x178, virtual false, abstract: false, final false
static inline int32_t ThrowNew(::System::IntPtr  clazz, ::StringW  message) ;

/// @brief Method ThrowNew_Injected, addr 0xb526f28, size 0x44, virtual false, abstract: false, final false
static inline int32_t ThrowNew_Injected(::System::IntPtr  clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  message) ;

/// @brief Method ToBooleanArray, addr 0xb52bc70, size 0xc, virtual false, abstract: false, final false
static inline ::System::IntPtr ToBooleanArray(::ArrayW<bool>  array) ;

/// [Obsolete("AndroidJNI.ToByteArray is obsolete. Use AndroidJNI.ToSByteArray method instead")]
/// [ThreadSafe]
/// @brief Method ToByteArray, addr 0xb52bc7c, size 0xcc, virtual false, abstract: false, final false
static inline ::System::IntPtr ToByteArray(::ArrayW<uint8_t>  array) ;

/// @brief Method ToByteArray_Injected, addr 0xb52bd48, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr ToByteArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  array) ;

/// @brief Method ToCharArray, addr 0xb52be1c, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToCharArray(::ArrayW<char16_t>  array) ;

/// [ThreadSafe]
/// @brief Method ToCharArray, addr 0xb52be70, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToCharArray(char16_t*  array, int32_t  length) ;

/// @brief Method ToDoubleArray, addr 0xb52c114, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToDoubleArray(::ArrayW<double_t>  array) ;

/// [ThreadSafe]
/// @brief Method ToDoubleArray, addr 0xb52c168, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToDoubleArray(double_t*  array, int32_t  length) ;

/// @brief Method ToFloatArray, addr 0xb52c07c, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToFloatArray(::ArrayW<float_t>  array) ;

/// [ThreadSafe]
/// @brief Method ToFloatArray, addr 0xb52c0d0, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToFloatArray(float_t*  array, int32_t  length) ;

/// @brief Method ToIntArray, addr 0xb52bf4c, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToIntArray(::ArrayW<int32_t>  array) ;

/// [ThreadSafe]
/// @brief Method ToIntArray, addr 0xb52bfa0, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToIntArray(int32_t*  array, int32_t  length) ;

/// @brief Method ToLongArray, addr 0xb52bfe4, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToLongArray(::ArrayW<int64_t>  array) ;

/// [ThreadSafe]
/// @brief Method ToLongArray, addr 0xb52c038, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToLongArray(int64_t*  array, int32_t  length) ;

/// @brief Method ToObjectArray, addr 0xb52c264, size 0x8, virtual false, abstract: false, final false
static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr>  array) ;

/// @brief Method ToObjectArray, addr 0xb52c200, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr>  array, ::System::IntPtr  arrayClass) ;

/// [ThreadSafe]
/// @brief Method ToObjectArray, addr 0xb52c1ac, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToObjectArray(::System::IntPtr*  array, int32_t  length, ::System::IntPtr  arrayClass) ;

/// [ThreadSafe]
/// @brief Method ToReflectedField, addr 0xb526ca0, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToReflectedField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, bool  isStatic) ;

/// [ThreadSafe]
/// @brief Method ToReflectedMethod, addr 0xb526c4c, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToReflectedMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, bool  isStatic) ;

/// @brief Method ToSByteArray, addr 0xb52bd84, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToSByteArray(::ArrayW<int8_t>  array) ;

/// [ThreadSafe]
/// @brief Method ToSByteArray, addr 0xb52bdd8, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToSByteArray(int8_t*  array, int32_t  length) ;

/// @brief Method ToShortArray, addr 0xb52beb4, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToShortArray(::ArrayW<int16_t>  array) ;

/// [ThreadSafe]
/// @brief Method ToShortArray, addr 0xb52bf08, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToShortArray(int16_t*  array, int32_t  length) ;

/// [ThreadSafe]
/// @brief Method UnregisterNatives, addr 0xb52d79c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t UnregisterNatives(::System::IntPtr  clazz) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidJNI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJNI(AndroidJNI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJNI(AndroidJNI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30267};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AndroidJNI) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
