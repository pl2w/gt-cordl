#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateTransactionCatalogItemSunsetStatusResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateTransactionCatalogItemSunsetStatusResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class MothershipTransactionCatalogItem;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class UpdateTransactionCatalogItemSunsetStatusResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*, "", "UpdateTransactionCatalogItemSunsetStatusResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateTransactionCatalogItemSunsetStatusResponse
class CORDL_TYPE UpdateTransactionCatalogItemSunsetStatusResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_item, put=set_item)) ::GlobalNamespace::MothershipTransactionCatalogItem*  item;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x539bc0c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x539be5c, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse* New_ctor() ;

static inline ::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x539bd78, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x539c170, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x539ba7c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x539bb30, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*  obj) ;

/// @brief Method get_item, addr 0x539c064, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::MothershipTransactionCatalogItem* get_item() ;

/// @brief Method set_item, addr 0x539bf74, size 0xf0, virtual false, abstract: false, final false
inline void set_item(::GlobalNamespace::MothershipTransactionCatalogItem*  value) ;

/// @brief Method swigRelease, addr 0x539bb70, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateTransactionCatalogItemSunsetStatusResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateTransactionCatalogItemSunsetStatusResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateTransactionCatalogItemSunsetStatusResponse(UpdateTransactionCatalogItemSunsetStatusResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateTransactionCatalogItemSunsetStatusResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateTransactionCatalogItemSunsetStatusResponse(UpdateTransactionCatalogItemSunsetStatusResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9710};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateTransactionCatalogItemSunsetStatusResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
