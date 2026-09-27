#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateTransactionCatalogItemRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateTransactionCatalogItemRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace GlobalNamespace {
class StringIntMap;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class UpdateTransactionCatalogItemRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateTransactionCatalogItemRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateTransactionCatalogItemRequest*, "", "UpdateTransactionCatalogItemRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateTransactionCatalogItemRequest
class CORDL_TYPE UpdateTransactionCatalogItemRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_externalServiceEntitlementId, put=set_externalServiceEntitlementId)) ::StringW  externalServiceEntitlementId;

 __declspec(property(get=get_externalServiceName, put=set_externalServiceName)) ::StringW  externalServiceName;

 __declspec(property(get=get_inventoryChanges, put=set_inventoryChanges)) ::GlobalNamespace::StringIntMap*  inventoryChanges;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_transactionId, put=set_transactionId)) ::StringW  transactionId;

/// @brief Method Dispose, addr 0x53985f8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateTransactionCatalogItemRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateTransactionCatalogItemRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5398764, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5399474, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5398468, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x539851c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateTransactionCatalogItemRequest*  obj) ;

/// @brief Method get_envId, addr 0x53991f4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_externalServiceEntitlementId, addr 0x5398e9c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_externalServiceEntitlementId() ;

/// @brief Method get_externalServiceName, addr 0x5398cf0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_externalServiceName() ;

/// @brief Method get_inventoryChanges, addr 0x5398b0c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringIntMap* get_inventoryChanges() ;

/// @brief Method get_name, addr 0x5398948, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_titleId, addr 0x5399048, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_transactionId, addr 0x53993a0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_transactionId() ;

/// @brief Method set_envId, addr 0x539911c, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_externalServiceEntitlementId, addr 0x5398dc4, size 0xd8, virtual false, abstract: false, final false
inline void set_externalServiceEntitlementId(::StringW  value) ;

/// @brief Method set_externalServiceName, addr 0x5398c18, size 0xd8, virtual false, abstract: false, final false
inline void set_externalServiceName(::StringW  value) ;

/// @brief Method set_inventoryChanges, addr 0x5398a1c, size 0xf0, virtual false, abstract: false, final false
inline void set_inventoryChanges(::GlobalNamespace::StringIntMap*  value) ;

/// @brief Method set_name, addr 0x5398870, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_titleId, addr 0x5398f70, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_transactionId, addr 0x53992c8, size 0xd8, virtual false, abstract: false, final false
inline void set_transactionId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x539855c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateTransactionCatalogItemRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateTransactionCatalogItemRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateTransactionCatalogItemRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateTransactionCatalogItemRequest(UpdateTransactionCatalogItemRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateTransactionCatalogItemRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateTransactionCatalogItemRequest(UpdateTransactionCatalogItemRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9704};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateTransactionCatalogItemRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateTransactionCatalogItemRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
