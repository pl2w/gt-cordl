#pragma once
// IWYU pragma private; include "GlobalNamespace/NotificationsMessageDelegateWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipWebSocketMessageDelegateWrapper_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NotificationsMessageDelegateWrapper)
namespace GlobalNamespace {
class NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0;
}
namespace GlobalNamespace {
class NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1;
}
namespace GlobalNamespace {
class NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2;
}
namespace GlobalNamespace {
class NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3;
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
class NotificationsMessageDelegateWrapper;
}
namespace GlobalNamespace {
class NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0;
}
namespace GlobalNamespace {
class NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1;
}
namespace GlobalNamespace {
class NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2;
}
namespace GlobalNamespace {
class NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NotificationsMessageDelegateWrapper*);
MARK_REF_T(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0*);
MARK_REF_T(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1*);
MARK_REF_T(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2*);
MARK_REF_T(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NotificationsMessageDelegateWrapper*, "", "NotificationsMessageDelegateWrapper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0*, "", "NotificationsMessageDelegateWrapper/SwigDelegateNotificationsMessageDelegateWrapper_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1*, "", "NotificationsMessageDelegateWrapper/SwigDelegateNotificationsMessageDelegateWrapper_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2*, "", "NotificationsMessageDelegateWrapper/SwigDelegateNotificationsMessageDelegateWrapper_2");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3*, "", "NotificationsMessageDelegateWrapper/SwigDelegateNotificationsMessageDelegateWrapper_3");
// Dependencies MothershipWebSocketMessageDelegateWrapper, System.Runtime.InteropServices.HandleRef, System.Type
namespace GlobalNamespace {
// Is value type: false
// CS Name: NotificationsMessageDelegateWrapper
class CORDL_TYPE NotificationsMessageDelegateWrapper : public ::GlobalNamespace::MothershipWebSocketMessageDelegateWrapper {
public:
// Declarations
using SwigDelegateNotificationsMessageDelegateWrapper_0 = ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0;

using SwigDelegateNotificationsMessageDelegateWrapper_1 = ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1;

using SwigDelegateNotificationsMessageDelegateWrapper_2 = ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2;

using SwigDelegateNotificationsMessageDelegateWrapper_3 = ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3;

/// @brief Field selfInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selfInstance, put=setStaticF_selfInstance)) ::GlobalNamespace::NotificationsMessageDelegateWrapper*  selfInstance;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Field swigDelegate0, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate0, put=__cordl_internal_set_swigDelegate0)) ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0*  swigDelegate0;

/// @brief Field swigDelegate1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate1, put=__cordl_internal_set_swigDelegate1)) ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1*  swigDelegate1;

/// @brief Field swigDelegate2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate2, put=__cordl_internal_set_swigDelegate2)) ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2*  swigDelegate2;

/// @brief Field swigDelegate3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate3, put=__cordl_internal_set_swigDelegate3)) ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3*  swigDelegate3;

/// @brief Field swigMethodTypes0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes0, put=setStaticF_swigMethodTypes0)) ::ArrayW<::System::Type*>  swigMethodTypes0;

/// @brief Field swigMethodTypes1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes1, put=setStaticF_swigMethodTypes1)) ::ArrayW<::System::Type*>  swigMethodTypes1;

/// @brief Field swigMethodTypes2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes2, put=setStaticF_swigMethodTypes2)) ::ArrayW<::System::Type*>  swigMethodTypes2;

/// @brief Field swigMethodTypes3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes3, put=setStaticF_swigMethodTypes3)) ::ArrayW<::System::Type*>  swigMethodTypes3;

/// @brief Method Dispose, addr 0x52da924, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::NotificationsMessageDelegateWrapper* New_ctor() ;

static inline ::GlobalNamespace::NotificationsMessageDelegateWrapper* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SwigDerivedClassHasMethod, addr 0x52dae48, size 0x2d8, virtual false, abstract: false, final false
inline bool SwigDerivedClassHasMethod(::StringW  methodName, ::ArrayW<::System::Type*>  methodTypes) ;

/// @brief Method SwigDirectorConnect, addr 0x52dab50, size 0x2f8, virtual false, abstract: false, final false
inline void SwigDirectorConnect() ;

/// [MonoPInvokeCallback(typeof(NotificationsMessageDelegateWrapper::SwigDelegateNotificationsMessageDelegateWrapper_2))]
/// @brief Method SwigDirectorMethodOnCloseCallback, addr 0x52da6bc, size 0x70, virtual false, abstract: false, final false
static inline void SwigDirectorMethodOnCloseCallback(::System::IntPtr  userData) ;

/// [MonoPInvokeCallback(typeof(NotificationsMessageDelegateWrapper::SwigDelegateNotificationsMessageDelegateWrapper_3))]
/// @brief Method SwigDirectorMethodOnErrorCallback, addr 0x52da72c, size 0x70, virtual false, abstract: false, final false
static inline void SwigDirectorMethodOnErrorCallback(::System::IntPtr  userData) ;

/// [MonoPInvokeCallback(typeof(NotificationsMessageDelegateWrapper::SwigDelegateNotificationsMessageDelegateWrapper_1))]
/// @brief Method SwigDirectorMethodOnMessageCallback, addr 0x52da60c, size 0xb0, virtual false, abstract: false, final false
static inline void SwigDirectorMethodOnMessageCallback(::System::IntPtr  message, ::System::IntPtr  userData) ;

/// [MonoPInvokeCallback(typeof(NotificationsMessageDelegateWrapper::SwigDelegateNotificationsMessageDelegateWrapper_0))]
/// @brief Method SwigDirectorMethodOnOpenCallback, addr 0x52da59c, size 0x70, virtual false, abstract: false, final false
static inline void SwigDirectorMethodOnOpenCallback(::System::IntPtr  userData) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0* const& __cordl_internal_get_swigDelegate0() const;

constexpr ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0*& __cordl_internal_get_swigDelegate0() ;

constexpr ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1* const& __cordl_internal_get_swigDelegate1() const;

constexpr ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1*& __cordl_internal_get_swigDelegate1() ;

constexpr ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2* const& __cordl_internal_get_swigDelegate2() const;

constexpr ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2*& __cordl_internal_get_swigDelegate2() ;

constexpr ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3* const& __cordl_internal_get_swigDelegate3() const;

constexpr ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3*& __cordl_internal_get_swigDelegate3() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

constexpr void __cordl_internal_set_swigDelegate0(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0*  value) ;

constexpr void __cordl_internal_set_swigDelegate1(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1*  value) ;

constexpr void __cordl_internal_set_swigDelegate2(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2*  value) ;

constexpr void __cordl_internal_set_swigDelegate3(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3*  value) ;

/// @brief Method .ctor, addr 0x52daa80, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52da79c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52da84c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::NotificationsMessageDelegateWrapper*  obj) ;

static inline ::GlobalNamespace::NotificationsMessageDelegateWrapper* getStaticF_selfInstance() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes0() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes1() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes2() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes3() ;

static inline void setStaticF_selfInstance(::GlobalNamespace::NotificationsMessageDelegateWrapper*  value) ;

static inline void setStaticF_swigMethodTypes0(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_swigMethodTypes1(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_swigMethodTypes2(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_swigMethodTypes3(::ArrayW<::System::Type*>  value) ;

/// @brief Method swigRelease, addr 0x52da88c, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::NotificationsMessageDelegateWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotificationsMessageDelegateWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageDelegateWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NotificationsMessageDelegateWrapper(NotificationsMessageDelegateWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageDelegateWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotificationsMessageDelegateWrapper(NotificationsMessageDelegateWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9400};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigDelegate0, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0*  ___swigDelegate0;

/// @brief Field swigDelegate1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1*  ___swigDelegate1;

/// @brief Field swigDelegate2, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2*  ___swigDelegate2;

/// @brief Field swigDelegate3, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3*  ___swigDelegate3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NotificationsMessageDelegateWrapper, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NotificationsMessageDelegateWrapper, ___swigDelegate0) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NotificationsMessageDelegateWrapper, ___swigDelegate1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NotificationsMessageDelegateWrapper, ___swigDelegate2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NotificationsMessageDelegateWrapper, ___swigDelegate3) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NotificationsMessageDelegateWrapper) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: NotificationsMessageDelegateWrapper/SwigDelegateNotificationsMessageDelegateWrapper_3
class CORDL_TYPE NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x52db7e0, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  userData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x52db83c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x52db7cc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  userData) ;

static inline ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x52db300, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3(NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3(NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9399};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_3) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: NotificationsMessageDelegateWrapper/SwigDelegateNotificationsMessageDelegateWrapper_2
class CORDL_TYPE NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x52db764, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  userData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x52db7c0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x52db750, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  userData) ;

static inline ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x52db260, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2(NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2(NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9398};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_2) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: NotificationsMessageDelegateWrapper/SwigDelegateNotificationsMessageDelegateWrapper_1
class CORDL_TYPE NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x52db6c8, size 0x7c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  message, ::System::IntPtr  userData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x52db744, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x52db6b4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  message, ::System::IntPtr  userData) ;

static inline ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x52db1c0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1(NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1(NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9397};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_1) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: NotificationsMessageDelegateWrapper/SwigDelegateNotificationsMessageDelegateWrapper_0
class CORDL_TYPE NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x52db64c, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  userData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x52db6a8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x52db638, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  userData) ;

static inline ::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x52db120, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0(NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0(NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9396};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NotificationsMessageDelegateWrapper_SwigDelegateNotificationsMessageDelegateWrapper_0) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
