#pragma once
// IWYU pragma private; include "GlobalNamespace/ListMothershipTitleDataCompleteServerDelegateWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestCompleteDelegateWrapper_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ListMothershipTitleDataCompleteServerDelegateWrapper)
namespace GlobalNamespace {
class ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0;
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
class ListMothershipTitleDataCompleteServerDelegateWrapper;
}
namespace GlobalNamespace {
class ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper*);
MARK_REF_T(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper*, "", "ListMothershipTitleDataCompleteServerDelegateWrapper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0*, "", "ListMothershipTitleDataCompleteServerDelegateWrapper/SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0");
// Dependencies MothershipRequestCompleteDelegateWrapper, System.Runtime.InteropServices.HandleRef, System.Type
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListMothershipTitleDataCompleteServerDelegateWrapper
class CORDL_TYPE ListMothershipTitleDataCompleteServerDelegateWrapper : public ::GlobalNamespace::MothershipRequestCompleteDelegateWrapper {
public:
// Declarations
using SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0 = ::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0;

/// @brief Field selfInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selfInstance, put=setStaticF_selfInstance)) ::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper*  selfInstance;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Field swigDelegate0, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate0, put=__cordl_internal_set_swigDelegate0)) ::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0*  swigDelegate0;

/// @brief Field swigMethodTypes0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes0, put=setStaticF_swigMethodTypes0)) ::ArrayW<::System::Type*>  swigMethodTypes0;

/// @brief Method Dispose, addr 0x54681ec, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper* New_ctor() ;

static inline ::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SwigDerivedClassHasMethod, addr 0x5468558, size 0x2d8, virtual false, abstract: false, final false
inline bool SwigDerivedClassHasMethod(::StringW  methodName, ::ArrayW<::System::Type*>  methodTypes) ;

/// @brief Method SwigDirectorConnect, addr 0x5468428, size 0x130, virtual false, abstract: false, final false
inline void SwigDirectorConnect() ;

/// [MonoPInvokeCallback(typeof(ListMothershipTitleDataCompleteServerDelegateWrapper::SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0))]
/// @brief Method SwigDirectorMethodOnCompleteCallback, addr 0x5467f60, size 0xfc, virtual false, abstract: false, final false
static inline void SwigDirectorMethodOnCompleteCallback(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr ::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0* const& __cordl_internal_get_swigDelegate0() const;

constexpr ::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0*& __cordl_internal_get_swigDelegate0() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

constexpr void __cordl_internal_set_swigDelegate0(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0*  value) ;

/// @brief Method .ctor, addr 0x5468358, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x546805c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5468110, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper*  obj) ;

static inline ::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper* getStaticF_selfInstance() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes0() ;

static inline void setStaticF_selfInstance(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper*  value) ;

static inline void setStaticF_swigMethodTypes0(::ArrayW<::System::Type*>  value) ;

/// @brief Method swigRelease, addr 0x5468150, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListMothershipTitleDataCompleteServerDelegateWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListMothershipTitleDataCompleteServerDelegateWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListMothershipTitleDataCompleteServerDelegateWrapper(ListMothershipTitleDataCompleteServerDelegateWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListMothershipTitleDataCompleteServerDelegateWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListMothershipTitleDataCompleteServerDelegateWrapper(ListMothershipTitleDataCompleteServerDelegateWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9204};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigDelegate0, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0*  ___swigDelegate0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper, ___swigDelegate0) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListMothershipTitleDataCompleteServerDelegateWrapper/SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0
class CORDL_TYPE ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5468ad0, size 0xac, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5468b7c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5468abc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

static inline ::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5468830, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0(ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0(ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9203};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper_SwigDelegateListMothershipTitleDataCompleteServerDelegateWrapper_0) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
