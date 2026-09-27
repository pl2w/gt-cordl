#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipWebSocketDelegateWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipWebSocketDelegateWrapper)
namespace GlobalNamespace {
class MothershipCloseWebSocketEventArgs;
}
namespace GlobalNamespace {
class MothershipOpenWebSocketEventArgs;
}
namespace GlobalNamespace {
class MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0;
}
namespace GlobalNamespace {
class MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipWebSocketDelegateWrapper;
}
namespace GlobalNamespace {
class MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0;
}
namespace GlobalNamespace {
class MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipWebSocketDelegateWrapper*);
MARK_REF_T(::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*);
MARK_REF_T(::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWebSocketDelegateWrapper*, "", "MothershipWebSocketDelegateWrapper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*, "", "MothershipWebSocketDelegateWrapper/SwigDelegateMothershipWebSocketDelegateWrapper_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*, "", "MothershipWebSocketDelegateWrapper/SwigDelegateMothershipWebSocketDelegateWrapper_1");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef, System.Type
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipWebSocketDelegateWrapper
class CORDL_TYPE MothershipWebSocketDelegateWrapper : public ::System::Object {
public:
// Declarations
using SwigDelegateMothershipWebSocketDelegateWrapper_0 = ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0;

using SwigDelegateMothershipWebSocketDelegateWrapper_1 = ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1;

/// @brief Field selfInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selfInstance, put=setStaticF_selfInstance)) ::GlobalNamespace::MothershipWebSocketDelegateWrapper*  selfInstance;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Field swigDelegate0, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate0, put=__cordl_internal_set_swigDelegate0)) ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*  swigDelegate0;

/// @brief Field swigDelegate1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate1, put=__cordl_internal_set_swigDelegate1)) ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*  swigDelegate1;

/// @brief Field swigMethodTypes0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes0, put=setStaticF_swigMethodTypes0)) ::ArrayW<::System::Type*>  swigMethodTypes0;

/// @brief Field swigMethodTypes1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes1, put=setStaticF_swigMethodTypes1)) ::ArrayW<::System::Type*>  swigMethodTypes1;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CloseConnection, addr 0x52d0870, size 0xfc, virtual true, abstract: false, final false
inline bool CloseConnection(::GlobalNamespace::MothershipCloseWebSocketEventArgs*  request) ;

/// @brief Method CreateConnection, addr 0x52d0774, size 0xfc, virtual true, abstract: false, final false
inline bool CreateConnection(::GlobalNamespace::MothershipOpenWebSocketEventArgs*  request) ;

/// @brief Method Dispose, addr 0x52d052c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52d0628, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52d0598, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipWebSocketDelegateWrapper* New_ctor() ;

static inline ::GlobalNamespace::MothershipWebSocketDelegateWrapper* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SwigDerivedClassHasMethod, addr 0x52d0c00, size 0x2d8, virtual false, abstract: false, final false
inline bool SwigDerivedClassHasMethod(::StringW  methodName, ::ArrayW<::System::Type*>  methodTypes) ;

/// @brief Method SwigDirectorConnect, addr 0x52d0a3c, size 0x1c4, virtual false, abstract: false, final false
inline void SwigDirectorConnect() ;

/// [MonoPInvokeCallback(typeof(MothershipWebSocketDelegateWrapper::SwigDelegateMothershipWebSocketDelegateWrapper_1))]
/// @brief Method SwigDirectorMethodCloseConnection, addr 0x52d0350, size 0xa4, virtual false, abstract: false, final false
static inline bool SwigDirectorMethodCloseConnection(::System::IntPtr  request) ;

/// [MonoPInvokeCallback(typeof(MothershipWebSocketDelegateWrapper::SwigDelegateMothershipWebSocketDelegateWrapper_0))]
/// @brief Method SwigDirectorMethodCreateConnection, addr 0x52d02ac, size 0xa4, virtual false, abstract: false, final false
static inline bool SwigDirectorMethodCreateConnection(::System::IntPtr  request) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0* const& __cordl_internal_get_swigDelegate0() const;

constexpr ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*& __cordl_internal_get_swigDelegate0() ;

constexpr ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1* const& __cordl_internal_get_swigDelegate1() const;

constexpr ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*& __cordl_internal_get_swigDelegate1() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

constexpr void __cordl_internal_set_swigDelegate0(::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*  value) ;

constexpr void __cordl_internal_set_swigDelegate1(::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*  value) ;

/// @brief Method .ctor, addr 0x52d096c, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52d03f4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52d0454, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipWebSocketDelegateWrapper*  obj) ;

static inline ::GlobalNamespace::MothershipWebSocketDelegateWrapper* getStaticF_selfInstance() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes0() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes1() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_selfInstance(::GlobalNamespace::MothershipWebSocketDelegateWrapper*  value) ;

static inline void setStaticF_swigMethodTypes0(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_swigMethodTypes1(::ArrayW<::System::Type*>  value) ;

/// @brief Method swigRelease, addr 0x52d0494, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipWebSocketDelegateWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipWebSocketDelegateWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketDelegateWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipWebSocketDelegateWrapper(MothershipWebSocketDelegateWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketDelegateWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipWebSocketDelegateWrapper(MothershipWebSocketDelegateWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9382};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

/// @brief Field swigDelegate0, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0*  ___swigDelegate0;

/// @brief Field swigDelegate1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1*  ___swigDelegate1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipWebSocketDelegateWrapper, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketDelegateWrapper, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketDelegateWrapper, ___swigDelegate0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipWebSocketDelegateWrapper, ___swigDelegate1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipWebSocketDelegateWrapper) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipWebSocketDelegateWrapper/SwigDelegateMothershipWebSocketDelegateWrapper_1
class CORDL_TYPE MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x52d1248, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  request, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x52d12a4, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x52d1234, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::System::IntPtr  request) ;

static inline ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x52d0f78, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1(MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1(MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9381};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_1) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipWebSocketDelegateWrapper/SwigDelegateMothershipWebSocketDelegateWrapper_0
class CORDL_TYPE MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x52d11b0, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  request, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x52d120c, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x52d119c, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::System::IntPtr  request) ;

static inline ::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x52d0ed8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0(MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0(MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9380};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
