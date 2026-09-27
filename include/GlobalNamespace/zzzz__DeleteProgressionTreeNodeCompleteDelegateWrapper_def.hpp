#pragma once
// IWYU pragma private; include "GlobalNamespace/DeleteProgressionTreeNodeCompleteDelegateWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestCompleteDelegateWrapper_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteProgressionTreeNodeCompleteDelegateWrapper)
namespace GlobalNamespace {
class DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0;
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
class DeleteProgressionTreeNodeCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper*);
MARK_REF_T(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper*, "", "DeleteProgressionTreeNodeCompleteDelegateWrapper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0*, "", "DeleteProgressionTreeNodeCompleteDelegateWrapper/SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0");
// Dependencies MothershipRequestCompleteDelegateWrapper, System.Runtime.InteropServices.HandleRef, System.Type
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeleteProgressionTreeNodeCompleteDelegateWrapper
class CORDL_TYPE DeleteProgressionTreeNodeCompleteDelegateWrapper : public ::GlobalNamespace::MothershipRequestCompleteDelegateWrapper {
public:
// Declarations
using SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0 = ::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0;

/// @brief Field selfInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selfInstance, put=setStaticF_selfInstance)) ::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper*  selfInstance;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Field swigDelegate0, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate0, put=__cordl_internal_set_swigDelegate0)) ::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0*  swigDelegate0;

/// @brief Field swigMethodTypes0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes0, put=setStaticF_swigMethodTypes0)) ::ArrayW<::System::Type*>  swigMethodTypes0;

/// @brief Method Dispose, addr 0x53e5fb0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper* New_ctor() ;

static inline ::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SwigDerivedClassHasMethod, addr 0x53e6320, size 0x2d8, virtual false, abstract: false, final false
inline bool SwigDerivedClassHasMethod(::StringW  methodName, ::ArrayW<::System::Type*>  methodTypes) ;

/// @brief Method SwigDirectorConnect, addr 0x53e61ec, size 0x134, virtual false, abstract: false, final false
inline void SwigDirectorConnect() ;

/// [MonoPInvokeCallback(typeof(DeleteProgressionTreeNodeCompleteDelegateWrapper::SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0))]
/// @brief Method SwigDirectorMethodOnCompleteCallback, addr 0x53e5d24, size 0xfc, virtual false, abstract: false, final false
static inline void SwigDirectorMethodOnCompleteCallback(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr ::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0* const& __cordl_internal_get_swigDelegate0() const;

constexpr ::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0*& __cordl_internal_get_swigDelegate0() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

constexpr void __cordl_internal_set_swigDelegate0(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0*  value) ;

/// @brief Method .ctor, addr 0x53e611c, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53e5e20, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53e5ed4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper*  obj) ;

static inline ::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper* getStaticF_selfInstance() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes0() ;

static inline void setStaticF_selfInstance(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper*  value) ;

static inline void setStaticF_swigMethodTypes0(::ArrayW<::System::Type*>  value) ;

/// @brief Method swigRelease, addr 0x53e5f14, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteProgressionTreeNodeCompleteDelegateWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteProgressionTreeNodeCompleteDelegateWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteProgressionTreeNodeCompleteDelegateWrapper(DeleteProgressionTreeNodeCompleteDelegateWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteProgressionTreeNodeCompleteDelegateWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteProgressionTreeNodeCompleteDelegateWrapper(DeleteProgressionTreeNodeCompleteDelegateWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8955};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigDelegate0, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0*  ___swigDelegate0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper, ___swigDelegate0) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeleteProgressionTreeNodeCompleteDelegateWrapper/SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0
class CORDL_TYPE DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x53e6898, size 0xac, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x53e6944, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x53e6884, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

static inline ::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x53e67e4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0(DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0(DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8954};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DeleteProgressionTreeNodeCompleteDelegateWrapper_SwigDelegateDeleteProgressionTreeNodeCompleteDelegateWrapper_0) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
