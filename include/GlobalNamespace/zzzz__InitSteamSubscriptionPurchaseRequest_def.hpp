#pragma once
// IWYU pragma private; include "GlobalNamespace/InitSteamSubscriptionPurchaseRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitSteamSubscriptionPurchaseRequest)
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
class InitSteamSubscriptionPurchaseRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InitSteamSubscriptionPurchaseRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitSteamSubscriptionPurchaseRequest*, "", "InitSteamSubscriptionPurchaseRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: InitSteamSubscriptionPurchaseRequest
class CORDL_TYPE InitSteamSubscriptionPurchaseRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_PriceInUSDCents, put=set_PriceInUSDCents)) int32_t  PriceInUSDCents;

 __declspec(property(get=get_Sku, put=set_Sku)) ::StringW  Sku;

 __declspec(property(get=get_SubscriptionBillingFrequency, put=set_SubscriptionBillingFrequency)) int32_t  SubscriptionBillingFrequency;

 __declspec(property(get=get_SubscriptionBillingFrequencyUnit, put=set_SubscriptionBillingFrequencyUnit)) ::StringW  SubscriptionBillingFrequencyUnit;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5440ff4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::InitSteamSubscriptionPurchaseRequest* New_ctor() ;

static inline ::GlobalNamespace::InitSteamSubscriptionPurchaseRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5441810, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x544191c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5440e64, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5440f18, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::InitSteamSubscriptionPurchaseRequest*  obj) ;

/// @brief Method get_PriceInUSDCents, addr 0x54413e4, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_PriceInUSDCents() ;

/// @brief Method get_Sku, addr 0x5441238, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Sku() ;

/// @brief Method get_SubscriptionBillingFrequency, addr 0x5441590, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_SubscriptionBillingFrequency() ;

/// @brief Method get_SubscriptionBillingFrequencyUnit, addr 0x544173c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_SubscriptionBillingFrequencyUnit() ;

/// @brief Method set_PriceInUSDCents, addr 0x544130c, size 0xd8, virtual false, abstract: false, final false
inline void set_PriceInUSDCents(int32_t  value) ;

/// @brief Method set_Sku, addr 0x5441160, size 0xd8, virtual false, abstract: false, final false
inline void set_Sku(::StringW  value) ;

/// @brief Method set_SubscriptionBillingFrequency, addr 0x54414b8, size 0xd8, virtual false, abstract: false, final false
inline void set_SubscriptionBillingFrequency(int32_t  value) ;

/// @brief Method set_SubscriptionBillingFrequencyUnit, addr 0x5441664, size 0xd8, virtual false, abstract: false, final false
inline void set_SubscriptionBillingFrequencyUnit(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5440f58, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::InitSteamSubscriptionPurchaseRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitSteamSubscriptionPurchaseRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitSteamSubscriptionPurchaseRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitSteamSubscriptionPurchaseRequest(InitSteamSubscriptionPurchaseRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitSteamSubscriptionPurchaseRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitSteamSubscriptionPurchaseRequest(InitSteamSubscriptionPurchaseRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9141};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitSteamSubscriptionPurchaseRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitSteamSubscriptionPurchaseRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
