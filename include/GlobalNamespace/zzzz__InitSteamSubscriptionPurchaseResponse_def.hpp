#pragma once
// IWYU pragma private; include "GlobalNamespace/InitSteamSubscriptionPurchaseResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InitSteamSubscriptionPurchaseResponse)
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
class InitSteamSubscriptionPurchaseResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*, "", "InitSteamSubscriptionPurchaseResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: InitSteamSubscriptionPurchaseResponse
class CORDL_TYPE InitSteamSubscriptionPurchaseResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_SteamOrderId, put=set_SteamOrderId)) ::StringW  SteamOrderId;

 __declspec(property(get=get_SteamTransactionId, put=set_SteamTransactionId)) ::StringW  SteamTransactionId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5441b78, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5442120, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse* New_ctor() ;

static inline ::GlobalNamespace::InitSteamSubscriptionPurchaseResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x544203c, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5442238, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x54419e8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5441a9c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*  obj) ;

/// @brief Method get_SteamOrderId, addr 0x5441dbc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_SteamOrderId() ;

/// @brief Method get_SteamTransactionId, addr 0x5441f68, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_SteamTransactionId() ;

/// @brief Method set_SteamOrderId, addr 0x5441ce4, size 0xd8, virtual false, abstract: false, final false
inline void set_SteamOrderId(::StringW  value) ;

/// @brief Method set_SteamTransactionId, addr 0x5441e90, size 0xd8, virtual false, abstract: false, final false
inline void set_SteamTransactionId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5441adc, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitSteamSubscriptionPurchaseResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitSteamSubscriptionPurchaseResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitSteamSubscriptionPurchaseResponse(InitSteamSubscriptionPurchaseResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitSteamSubscriptionPurchaseResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitSteamSubscriptionPurchaseResponse(InitSteamSubscriptionPurchaseResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9142};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
