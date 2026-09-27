#pragma once
// IWYU pragma private; include "GlobalNamespace/ListMothershipTitleDataCompleteDelegateWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestCompleteDelegateWrapper_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ListMothershipTitleDataCompleteDelegateWrapper)
namespace GlobalNamespace {
class ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0;
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
class ListMothershipTitleDataCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper*);
MARK_REF_T(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper*, "", "ListMothershipTitleDataCompleteDelegateWrapper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0*, "", "ListMothershipTitleDataCompleteDelegateWrapper/SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0");
// Dependencies MothershipRequestCompleteDelegateWrapper, System.Runtime.InteropServices.HandleRef, System.Type
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListMothershipTitleDataCompleteDelegateWrapper
class CORDL_TYPE ListMothershipTitleDataCompleteDelegateWrapper : public ::GlobalNamespace::MothershipRequestCompleteDelegateWrapper {
public:
// Declarations
using SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0 = ::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0;

/// @brief Field selfInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selfInstance, put=setStaticF_selfInstance)) ::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper*  selfInstance;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Field swigDelegate0, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate0, put=__cordl_internal_set_swigDelegate0)) ::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0*  swigDelegate0;

/// @brief Field swigMethodTypes0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes0, put=setStaticF_swigMethodTypes0)) ::ArrayW<::System::Type*>  swigMethodTypes0;

/// @brief Method Dispose, addr 0x54675c4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper* New_ctor() ;

static inline ::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SwigDerivedClassHasMethod, addr 0x5467930, size 0x2d8, virtual false, abstract: false, final false
inline bool SwigDerivedClassHasMethod(::StringW  methodName, ::ArrayW<::System::Type*>  methodTypes) ;

/// @brief Method SwigDirectorConnect, addr 0x5467800, size 0x130, virtual false, abstract: false, final false
inline void SwigDirectorConnect() ;

/// [MonoPInvokeCallback(typeof(ListMothershipTitleDataCompleteDelegateWrapper::SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0))]
/// @brief Method SwigDirectorMethodOnCompleteCallback, addr 0x5467338, size 0xfc, virtual false, abstract: false, final false
static inline void SwigDirectorMethodOnCompleteCallback(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr ::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0* const& __cordl_internal_get_swigDelegate0() const;

constexpr ::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0*& __cordl_internal_get_swigDelegate0() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

constexpr void __cordl_internal_set_swigDelegate0(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0*  value) ;

/// @brief Method .ctor, addr 0x5467730, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5467434, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x54674e8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper*  obj) ;

static inline ::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper* getStaticF_selfInstance() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes0() ;

static inline void setStaticF_selfInstance(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper*  value) ;

static inline void setStaticF_swigMethodTypes0(::ArrayW<::System::Type*>  value) ;

/// @brief Method swigRelease, addr 0x5467528, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListMothershipTitleDataCompleteDelegateWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListMothershipTitleDataCompleteDelegateWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListMothershipTitleDataCompleteDelegateWrapper(ListMothershipTitleDataCompleteDelegateWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListMothershipTitleDataCompleteDelegateWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListMothershipTitleDataCompleteDelegateWrapper(ListMothershipTitleDataCompleteDelegateWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9202};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigDelegate0, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0*  ___swigDelegate0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper, ___swigDelegate0) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListMothershipTitleDataCompleteDelegateWrapper/SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0
class CORDL_TYPE ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5467ea8, size 0xac, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5467f54, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5467e94, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

static inline ::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5467c08, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0(ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0(ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9201};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteDelegateWrapper_0) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
