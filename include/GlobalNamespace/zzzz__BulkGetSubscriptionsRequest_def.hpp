#pragma once
// IWYU pragma private; include "GlobalNamespace/BulkGetSubscriptionsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
CORDL_MODULE_EXPORT(BulkGetSubscriptionsRequest)
namespace GlobalNamespace {
class PlatformAndSkuVector;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace GlobalNamespace {
class StringVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class BulkGetSubscriptionsRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BulkGetSubscriptionsRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BulkGetSubscriptionsRequest*, "", "BulkGetSubscriptionsRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: BulkGetSubscriptionsRequest
class CORDL_TYPE BulkGetSubscriptionsRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_CatalogIds, put=set_CatalogIds)) ::GlobalNamespace::StringVector*  CatalogIds;

 __declspec(property(get=get_PlatformSkus, put=set_PlatformSkus)) ::GlobalNamespace::PlatformAndSkuVector*  PlatformSkus;

 __declspec(property(get=get_PlayerIds, put=set_PlayerIds)) ::GlobalNamespace::StringVector*  PlayerIds;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52734a8, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::BulkGetSubscriptionsRequest* New_ctor() ;

static inline ::GlobalNamespace::BulkGetSubscriptionsRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5273614, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5273d14, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5273318, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52733cc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::BulkGetSubscriptionsRequest*  obj) ;

/// @brief Method get_CatalogIds, addr 0x5273a0c, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_CatalogIds() ;

/// @brief Method get_PlatformSkus, addr 0x5273810, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlatformAndSkuVector* get_PlatformSkus() ;

/// @brief Method get_PlayerIds, addr 0x5273c08, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_PlayerIds() ;

/// @brief Method set_CatalogIds, addr 0x527391c, size 0xf0, virtual false, abstract: false, final false
inline void set_CatalogIds(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_PlatformSkus, addr 0x5273720, size 0xf0, virtual false, abstract: false, final false
inline void set_PlatformSkus(::GlobalNamespace::PlatformAndSkuVector*  value) ;

/// @brief Method set_PlayerIds, addr 0x5273b18, size 0xf0, virtual false, abstract: false, final false
inline void set_PlayerIds(::GlobalNamespace::StringVector*  value) ;

/// @brief Method swigRelease, addr 0x527340c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::BulkGetSubscriptionsRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BulkGetSubscriptionsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BulkGetSubscriptionsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BulkGetSubscriptionsRequest(BulkGetSubscriptionsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BulkGetSubscriptionsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BulkGetSubscriptionsRequest(BulkGetSubscriptionsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8814};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BulkGetSubscriptionsRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BulkGetSubscriptionsRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
