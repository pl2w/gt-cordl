#pragma once
// IWYU pragma private; include "GlobalNamespace/AutomationListSubscriptionCatalogItemsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AutomationListSubscriptionCatalogItemsResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class SubscriptionCatalogItemVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class AutomationListSubscriptionCatalogItemsResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*, "", "AutomationListSubscriptionCatalogItemsResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: AutomationListSubscriptionCatalogItemsResponse
class CORDL_TYPE AutomationListSubscriptionCatalogItemsResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Results, put=set_Results)) ::GlobalNamespace::SubscriptionCatalogItemVector*  Results;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x526ebe8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x526f034, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse* New_ctor() ;

static inline ::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x526ef50, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x526f14c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x526ea58, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x526eb0c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*  obj) ;

/// @brief Method get_Results, addr 0x526ee44, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::SubscriptionCatalogItemVector* get_Results() ;

/// @brief Method set_Results, addr 0x526ed54, size 0xf0, virtual false, abstract: false, final false
inline void set_Results(::GlobalNamespace::SubscriptionCatalogItemVector*  value) ;

/// @brief Method swigRelease, addr 0x526eb4c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutomationListSubscriptionCatalogItemsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutomationListSubscriptionCatalogItemsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutomationListSubscriptionCatalogItemsResponse(AutomationListSubscriptionCatalogItemsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutomationListSubscriptionCatalogItemsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutomationListSubscriptionCatalogItemsResponse(AutomationListSubscriptionCatalogItemsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8803};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutomationListSubscriptionCatalogItemsResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
