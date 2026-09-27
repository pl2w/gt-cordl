#pragma once
// IWYU pragma private; include "GlobalNamespace/DeleteAccountLinkResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteAccountLinkResponse)
namespace GlobalNamespace {
class AccountLinksVector;
}
namespace GlobalNamespace {
class MothershipResponse;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class DeleteAccountLinkResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeleteAccountLinkResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeleteAccountLinkResponse*, "", "DeleteAccountLinkResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeleteAccountLinkResponse
class CORDL_TYPE DeleteAccountLinkResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Links, put=set_Links)) ::GlobalNamespace::AccountLinksVector*  Links;

/// @brief Field links_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_links_name, put=setStaticF_links_name)) ::StringW  links_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x53de588, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x53de7d8, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DeleteAccountLinkResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::DeleteAccountLinkResponse* New_ctor() ;

static inline ::GlobalNamespace::DeleteAccountLinkResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x53de6f4, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x53deaec, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x53de3f8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53de4ac, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::DeleteAccountLinkResponse*  obj) ;

static inline ::StringW getStaticF_links_name() ;

/// @brief Method get_Links, addr 0x53de9e0, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::AccountLinksVector* get_Links() ;

static inline void setStaticF_links_name(::StringW  value) ;

/// @brief Method set_Links, addr 0x53de8f0, size 0xf0, virtual false, abstract: false, final false
inline void set_Links(::GlobalNamespace::AccountLinksVector*  value) ;

/// @brief Method swigRelease, addr 0x53de4ec, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::DeleteAccountLinkResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteAccountLinkResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteAccountLinkResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteAccountLinkResponse(DeleteAccountLinkResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteAccountLinkResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteAccountLinkResponse(DeleteAccountLinkResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8938};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeleteAccountLinkResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeleteAccountLinkResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
