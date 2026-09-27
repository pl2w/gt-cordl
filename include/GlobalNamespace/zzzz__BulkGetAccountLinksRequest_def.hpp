#pragma once
// IWYU pragma private; include "GlobalNamespace/BulkGetAccountLinksRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
CORDL_MODULE_EXPORT(BulkGetAccountLinksRequest)
namespace GlobalNamespace {
class AccountLinkLookupVector;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class BulkGetAccountLinksRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BulkGetAccountLinksRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BulkGetAccountLinksRequest*, "", "BulkGetAccountLinksRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: BulkGetAccountLinksRequest
class CORDL_TYPE BulkGetAccountLinksRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_Lookups, put=set_Lookups)) ::GlobalNamespace::AccountLinkLookupVector*  Lookups;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52705a0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::BulkGetAccountLinksRequest* New_ctor() ;

static inline ::GlobalNamespace::BulkGetAccountLinksRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5270900, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5270a0c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5270410, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52704c4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::BulkGetAccountLinksRequest*  obj) ;

/// @brief Method get_Lookups, addr 0x52707f8, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::AccountLinkLookupVector* get_Lookups() ;

/// @brief Method set_Lookups, addr 0x527070c, size 0xec, virtual false, abstract: false, final false
inline void set_Lookups(::GlobalNamespace::AccountLinkLookupVector*  value) ;

/// @brief Method swigRelease, addr 0x5270504, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::BulkGetAccountLinksRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BulkGetAccountLinksRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BulkGetAccountLinksRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BulkGetAccountLinksRequest(BulkGetAccountLinksRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BulkGetAccountLinksRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BulkGetAccountLinksRequest(BulkGetAccountLinksRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8807};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BulkGetAccountLinksRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BulkGetAccountLinksRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
