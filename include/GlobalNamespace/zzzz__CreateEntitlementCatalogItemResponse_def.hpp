#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateEntitlementCatalogItemResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateEntitlementCatalogItemResponse)
namespace GlobalNamespace {
class MothershipEntitlementCatalogItem;
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
class CreateEntitlementCatalogItemResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateEntitlementCatalogItemResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateEntitlementCatalogItemResponse*, "", "CreateEntitlementCatalogItemResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateEntitlementCatalogItemResponse
class CORDL_TYPE CreateEntitlementCatalogItemResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_catalogItem, put=set_catalogItem)) ::GlobalNamespace::MothershipEntitlementCatalogItem*  catalogItem;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5289158, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x52893a8, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CreateEntitlementCatalogItemResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::CreateEntitlementCatalogItemResponse* New_ctor() ;

static inline ::GlobalNamespace::CreateEntitlementCatalogItemResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x52892c4, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52896bc, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5288fc8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x528907c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateEntitlementCatalogItemResponse*  obj) ;

/// @brief Method get_catalogItem, addr 0x52895b0, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipEntitlementCatalogItem* get_catalogItem() ;

/// @brief Method set_catalogItem, addr 0x52894c0, size 0xf0, virtual false, abstract: false, final false
inline void set_catalogItem(::GlobalNamespace::MothershipEntitlementCatalogItem*  value) ;

/// @brief Method swigRelease, addr 0x52890bc, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateEntitlementCatalogItemResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateEntitlementCatalogItemResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateEntitlementCatalogItemResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateEntitlementCatalogItemResponse(CreateEntitlementCatalogItemResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateEntitlementCatalogItemResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateEntitlementCatalogItemResponse(CreateEntitlementCatalogItemResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8856};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateEntitlementCatalogItemResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateEntitlementCatalogItemResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
