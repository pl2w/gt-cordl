#pragma once
// IWYU pragma private; include "GlobalNamespace/ListOfferBindingsCompleteDelegateWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestCompleteDelegateWrapper_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ListOfferBindingsCompleteDelegateWrapper)
namespace GlobalNamespace {
class ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0;
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
class ListOfferBindingsCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper*);
MARK_REF_T(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper*, "", "ListOfferBindingsCompleteDelegateWrapper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0*, "", "ListOfferBindingsCompleteDelegateWrapper/SwigDelegateListOfferBindingsCompleteDelegateWrapper_0");
// Dependencies MothershipRequestCompleteDelegateWrapper, System.Runtime.InteropServices.HandleRef, System.Type
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListOfferBindingsCompleteDelegateWrapper
class CORDL_TYPE ListOfferBindingsCompleteDelegateWrapper : public ::GlobalNamespace::MothershipRequestCompleteDelegateWrapper {
public:
// Declarations
using SwigDelegateListOfferBindingsCompleteDelegateWrapper_0 = ::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0;

/// @brief Field selfInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selfInstance, put=setStaticF_selfInstance)) ::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper*  selfInstance;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Field swigDelegate0, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate0, put=__cordl_internal_set_swigDelegate0)) ::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0*  swigDelegate0;

/// @brief Field swigMethodTypes0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes0, put=setStaticF_swigMethodTypes0)) ::ArrayW<::System::Type*>  swigMethodTypes0;

/// @brief Method Dispose, addr 0x546a1a8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper* New_ctor() ;

static inline ::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SwigDerivedClassHasMethod, addr 0x546a514, size 0x2d8, virtual false, abstract: false, final false
inline bool SwigDerivedClassHasMethod(::StringW  methodName, ::ArrayW<::System::Type*>  methodTypes) ;

/// @brief Method SwigDirectorConnect, addr 0x546a3e4, size 0x130, virtual false, abstract: false, final false
inline void SwigDirectorConnect() ;

/// [MonoPInvokeCallback(typeof(ListOfferBindingsCompleteDelegateWrapper::SwigDelegateListOfferBindingsCompleteDelegateWrapper_0))]
/// @brief Method SwigDirectorMethodOnCompleteCallback, addr 0x5469f1c, size 0xfc, virtual false, abstract: false, final false
static inline void SwigDirectorMethodOnCompleteCallback(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr ::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0* const& __cordl_internal_get_swigDelegate0() const;

constexpr ::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0*& __cordl_internal_get_swigDelegate0() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

constexpr void __cordl_internal_set_swigDelegate0(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0*  value) ;

/// @brief Method .ctor, addr 0x546a314, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x546a018, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x546a0cc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper*  obj) ;

static inline ::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper* getStaticF_selfInstance() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes0() ;

static inline void setStaticF_selfInstance(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper*  value) ;

static inline void setStaticF_swigMethodTypes0(::ArrayW<::System::Type*>  value) ;

/// @brief Method swigRelease, addr 0x546a10c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListOfferBindingsCompleteDelegateWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListOfferBindingsCompleteDelegateWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListOfferBindingsCompleteDelegateWrapper(ListOfferBindingsCompleteDelegateWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListOfferBindingsCompleteDelegateWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListOfferBindingsCompleteDelegateWrapper(ListOfferBindingsCompleteDelegateWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9208};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigDelegate0, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0*  ___swigDelegate0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper, ___swigDelegate0) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListOfferBindingsCompleteDelegateWrapper/SwigDelegateListOfferBindingsCompleteDelegateWrapper_0
class CORDL_TYPE ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x546aa8c, size 0xac, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x546ab38, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x546aa78, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

static inline ::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x546a7ec, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0(ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0(ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9207};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ListOfferBindingsCompleteDelegateWrapper_SwigDelegateListOfferBindingsCompleteDelegateWrapper_0) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
