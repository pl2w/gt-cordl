#pragma once
// IWYU pragma private; include "UnityEngine/_AndroidJNIHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(_AndroidJNIHelper)
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine {
class AndroidJavaProxy;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class _AndroidJNIHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::_AndroidJNIHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::_AndroidJNIHelper*, "UnityEngine", "_AndroidJNIHelper");
// [UsedByNativeCode]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine._AndroidJNIHelper
class CORDL_TYPE _AndroidJNIHelper : public ::System::Object {
public:
// Declarations
/// @brief Field FRAME_SIZE_FOR_ARRAYS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FRAME_SIZE_FOR_ARRAYS, put=setStaticF_FRAME_SIZE_FOR_ARRAYS)) int32_t  FRAME_SIZE_FOR_ARRAYS;

/// @brief Method Box, addr 0xb531f48, size 0x8fc, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* Box(::System::Object*  obj) ;

/// @brief Method ConvertFromJNIArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ArrayType>
static inline ArrayType ConvertFromJNIArray(::System::IntPtr  array) ;

/// @brief Method ConvertToJNIArray, addr 0xb523244, size 0xcb4, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToJNIArray(::System::Array*  array) ;

/// @brief Method CreateJNIArgArray, addr 0xb523fb4, size 0x50c, virtual false, abstract: false, final false
static inline void CreateJNIArgArray(::ArrayW<::System::Object*>  args, ::System::Span_1<::UnityEngine::jvalue>  ret) ;

/// @brief Method CreateJavaProxy, addr 0xb523168, size 0x88, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateJavaProxy(::System::IntPtr  player, ::System::IntPtr  delegateHandle, ::UnityEngine::AndroidJavaProxy*  proxy) ;

/// @brief Method CreateJavaRunnable, addr 0xb522fa0, size 0x58, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable*  jrunnable) ;

/// @brief Method DeleteJNIArgArray, addr 0xb52467c, size 0x16c, virtual false, abstract: false, final false
static inline void DeleteJNIArgArray(::ArrayW<::System::Object*>  args, ::System::Span_1<::UnityEngine::jvalue>  jniArgs) ;

/// @brief Method GetConstructorID, addr 0xb5248b8, size 0x6c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetConstructorID(::System::IntPtr  jclass, ::ArrayW<::System::Object*>  args) ;

/// @brief Method GetConstructorID, addr 0xb5226e0, size 0x1ec, virtual false, abstract: false, final false
static inline ::System::IntPtr GetConstructorID(::System::IntPtr  jclass, ::StringW  signature) ;

/// @brief Method GetFieldID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
static inline ::System::IntPtr GetFieldID(::System::IntPtr  jclass, ::StringW  fieldName, bool  isStatic) ;

/// @brief Method GetFieldID, addr 0xb522ca4, size 0x2a8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID(::System::IntPtr  jclass, ::StringW  fieldName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetMethodID, addr 0xb5249a0, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  jclass, ::StringW  methodName, ::ArrayW<::System::Object*>  args, bool  isStatic) ;

/// @brief Method GetMethodID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
static inline ::System::IntPtr GetMethodID(::System::IntPtr  jclass, ::StringW  methodName, ::ArrayW<::System::Object*>  args, bool  isStatic) ;

/// @brief Method GetMethodID, addr 0xb5229ac, size 0x218, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  jclass, ::StringW  methodName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetMethodIDFallback, addr 0xb5365b4, size 0x94, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodIDFallback(::System::IntPtr  jclass, ::StringW  methodName, ::StringW  signature, bool  isStatic) ;

/// @brief Method GetSignature, addr 0xb5257dc, size 0x158, virtual false, abstract: false, final false
static inline ::StringW GetSignature(::ArrayW<::System::Object*>  args) ;

/// @brief Method GetSignature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ReturnType>
static inline ::StringW GetSignature(::ArrayW<::System::Object*>  args) ;

/// @brief Method GetSignature, addr 0xb524a78, size 0xd10, virtual false, abstract: false, final false
static inline ::StringW GetSignature(::System::Object*  obj) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeJavaProxyMethod, addr 0xb535cc4, size 0xe8, virtual false, abstract: false, final false
static inline ::System::IntPtr InvokeJavaProxyMethod(::UnityEngine::AndroidJavaProxy*  proxy, ::System::IntPtr  jmethodName, ::System::IntPtr  jargs) ;

static inline ::UnityEngine::_AndroidJNIHelper* New_ctor() ;

/// @brief Method Unbox, addr 0xb532c10, size 0x9d0, virtual false, abstract: false, final false
static inline ::System::Object* Unbox(::UnityEngine::AndroidJavaObject*  obj) ;

/// @brief Method UnboxArray, addr 0xb535dac, size 0x808, virtual false, abstract: false, final false
static inline ::System::Object* UnboxArray(::UnityEngine::AndroidJavaObject*  obj) ;

/// @brief Method .ctor, addr 0xb536648, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_FRAME_SIZE_FOR_ARRAYS() ;

static inline void setStaticF_FRAME_SIZE_FOR_ARRAYS(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr _AndroidJNIHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "_AndroidJNIHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
_AndroidJNIHelper(_AndroidJNIHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "_AndroidJNIHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
_AndroidJNIHelper(_AndroidJNIHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30278};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::_AndroidJNIHelper) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
