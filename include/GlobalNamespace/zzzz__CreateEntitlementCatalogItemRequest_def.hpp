#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateEntitlementCatalogItemRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreateEntitlementCatalogItemRequest)
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
class CreateEntitlementCatalogItemRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateEntitlementCatalogItemRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateEntitlementCatalogItemRequest*, "", "CreateEntitlementCatalogItemRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateEntitlementCatalogItemRequest
class CORDL_TYPE CreateEntitlementCatalogItemRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_inGameId, put=set_inGameId)) ::StringW  inGameId;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_type, put=set_type)) ::StringW  type;

/// @brief Method Dispose, addr 0x5288428, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::CreateEntitlementCatalogItemRequest* New_ctor() ;

static inline ::GlobalNamespace::CreateEntitlementCatalogItemRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5288594, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5288efc, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5288298, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x528834c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateEntitlementCatalogItemRequest*  obj) ;

/// @brief Method get_envId, addr 0x5288e28, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_inGameId, addr 0x5288924, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_inGameId() ;

/// @brief Method get_name, addr 0x5288778, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_titleId, addr 0x5288c7c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_type, addr 0x5288ad0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_type() ;

/// @brief Method set_envId, addr 0x5288d50, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_inGameId, addr 0x528884c, size 0xd8, virtual false, abstract: false, final false
inline void set_inGameId(::StringW  value) ;

/// @brief Method set_name, addr 0x52886a0, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_titleId, addr 0x5288ba4, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_type, addr 0x52889f8, size 0xd8, virtual false, abstract: false, final false
inline void set_type(::StringW  value) ;

/// @brief Method swigRelease, addr 0x528838c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateEntitlementCatalogItemRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateEntitlementCatalogItemRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateEntitlementCatalogItemRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateEntitlementCatalogItemRequest(CreateEntitlementCatalogItemRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateEntitlementCatalogItemRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateEntitlementCatalogItemRequest(CreateEntitlementCatalogItemRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8855};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateEntitlementCatalogItemRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateEntitlementCatalogItemRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
