#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipConsumeConsumableResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipConsumeConsumableResponse)
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
class MothershipConsumeConsumableResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipConsumeConsumableResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipConsumeConsumableResponse*, "", "MothershipConsumeConsumableResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipConsumeConsumableResponse
class CORDL_TYPE MothershipConsumeConsumableResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Entitlement, put=set_Entitlement)) ::GlobalNamespace::MothershipEntitlementCatalogItem*  Entitlement;

 __declspec(property(get=get_NewQuantity, put=set_NewQuantity)) int32_t  NewQuantity;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x529b5e0, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x529bdac, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MothershipConsumeConsumableResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::MothershipConsumeConsumableResponse* New_ctor() ;

static inline ::GlobalNamespace::MothershipConsumeConsumableResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x529bcc8, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x529bf00, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x529b38c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x529b49c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipConsumeConsumableResponse*  obj) ;

/// @brief Method get_Entitlement, addr 0x529b9b4, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipEntitlementCatalogItem* get_Entitlement() ;

/// @brief Method get_NewQuantity, addr 0x529bbf4, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_NewQuantity() ;

/// @brief Method set_Entitlement, addr 0x529b888, size 0xec, virtual false, abstract: false, final false
inline void set_Entitlement(::GlobalNamespace::MothershipEntitlementCatalogItem*  value) ;

/// @brief Method set_NewQuantity, addr 0x529bb1c, size 0xd8, virtual false, abstract: false, final false
inline void set_NewQuantity(int32_t  value) ;

/// @brief Method swigRelease, addr 0x529b4dc, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipConsumeConsumableResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipConsumeConsumableResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipConsumeConsumableResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipConsumeConsumableResponse(MothershipConsumeConsumableResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipConsumeConsumableResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipConsumeConsumableResponse(MothershipConsumeConsumableResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9319};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipConsumeConsumableResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipConsumeConsumableResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
