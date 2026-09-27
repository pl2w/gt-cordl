#pragma once
// IWYU pragma private; include "GlobalNamespace/InitSteamPurchaseRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitSteamPurchaseRequest)
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
class InitSteamPurchaseRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InitSteamPurchaseRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitSteamPurchaseRequest*, "", "InitSteamPurchaseRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: InitSteamPurchaseRequest
class CORDL_TYPE InitSteamPurchaseRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_OfferDisplayId, put=set_OfferDisplayId)) ::StringW  OfferDisplayId;

 __declspec(property(get=get_OfferDisplayIndex, put=set_OfferDisplayIndex)) int32_t  OfferDisplayIndex;

 __declspec(property(get=get_OfferId, put=set_OfferId)) ::StringW  OfferId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x543f730, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::InitSteamPurchaseRequest* New_ctor() ;

static inline ::GlobalNamespace::InitSteamPurchaseRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x543f89c, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x543feac, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x543f5a0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x543f654, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::InitSteamPurchaseRequest*  obj) ;

/// @brief Method get_OfferDisplayId, addr 0x543fc2c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_OfferDisplayId() ;

/// @brief Method get_OfferDisplayIndex, addr 0x543fdd8, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_OfferDisplayIndex() ;

/// @brief Method get_OfferId, addr 0x543fa80, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_OfferId() ;

/// @brief Method set_OfferDisplayId, addr 0x543fb54, size 0xd8, virtual false, abstract: false, final false
inline void set_OfferDisplayId(::StringW  value) ;

/// @brief Method set_OfferDisplayIndex, addr 0x543fd00, size 0xd8, virtual false, abstract: false, final false
inline void set_OfferDisplayIndex(int32_t  value) ;

/// @brief Method set_OfferId, addr 0x543f9a8, size 0xd8, virtual false, abstract: false, final false
inline void set_OfferId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x543f694, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::InitSteamPurchaseRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitSteamPurchaseRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitSteamPurchaseRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitSteamPurchaseRequest(InitSteamPurchaseRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitSteamPurchaseRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitSteamPurchaseRequest(InitSteamPurchaseRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9138};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitSteamPurchaseRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitSteamPurchaseRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
