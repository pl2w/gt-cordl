#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipPurchaseOfferRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MothershipPurchaseOfferRequest)
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
class MothershipPurchaseOfferRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipPurchaseOfferRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipPurchaseOfferRequest*, "", "MothershipPurchaseOfferRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipPurchaseOfferRequest
class CORDL_TYPE MothershipPurchaseOfferRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_OfferDisplayId, put=set_OfferDisplayId)) ::StringW  OfferDisplayId;

 __declspec(property(get=get_OfferDisplayIndex, put=set_OfferDisplayIndex)) int32_t  OfferDisplayIndex;

 __declspec(property(get=get_OfferId, put=set_OfferId)) ::StringW  OfferId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52b1620, size 0x15c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::MothershipPurchaseOfferRequest* New_ctor() ;

static inline ::GlobalNamespace::MothershipPurchaseOfferRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x52b177c, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52b1d8c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52b1498, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52b1548, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipPurchaseOfferRequest*  obj) ;

/// @brief Method get_OfferDisplayId, addr 0x52b1b0c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_OfferDisplayId() ;

/// @brief Method get_OfferDisplayIndex, addr 0x52b1cb8, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_OfferDisplayIndex() ;

/// @brief Method get_OfferId, addr 0x52b1960, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_OfferId() ;

/// @brief Method set_OfferDisplayId, addr 0x52b1a34, size 0xd8, virtual false, abstract: false, final false
inline void set_OfferDisplayId(::StringW  value) ;

/// @brief Method set_OfferDisplayIndex, addr 0x52b1be0, size 0xd8, virtual false, abstract: false, final false
inline void set_OfferDisplayIndex(int32_t  value) ;

/// @brief Method set_OfferId, addr 0x52b1888, size 0xd8, virtual false, abstract: false, final false
inline void set_OfferId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52b1588, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipPurchaseOfferRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipPurchaseOfferRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipPurchaseOfferRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipPurchaseOfferRequest(MothershipPurchaseOfferRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipPurchaseOfferRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipPurchaseOfferRequest(MothershipPurchaseOfferRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9349};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipPurchaseOfferRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipPurchaseOfferRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
