#pragma once
// IWYU pragma private; include "GlobalNamespace/InitSteamPurchaseResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InitSteamPurchaseResponse)
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
class InitSteamPurchaseResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InitSteamPurchaseResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitSteamPurchaseResponse*, "", "InitSteamPurchaseResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: InitSteamPurchaseResponse
class CORDL_TYPE InitSteamPurchaseResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_SteamOrderId, put=set_SteamOrderId)) ::StringW  SteamOrderId;

 __declspec(property(get=get_SteamTransactionId, put=set_SteamTransactionId)) ::StringW  SteamTransactionId;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x5440108, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5440358, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InitSteamPurchaseResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::InitSteamPurchaseResponse* New_ctor() ;

static inline ::GlobalNamespace::InitSteamPurchaseResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5440274, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x54407c8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x543ff78, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x544002c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::InitSteamPurchaseResponse*  obj) ;

/// @brief Method get_SteamOrderId, addr 0x5440548, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_SteamOrderId() ;

/// @brief Method get_SteamTransactionId, addr 0x54406f4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_SteamTransactionId() ;

/// @brief Method set_SteamOrderId, addr 0x5440470, size 0xd8, virtual false, abstract: false, final false
inline void set_SteamOrderId(::StringW  value) ;

/// @brief Method set_SteamTransactionId, addr 0x544061c, size 0xd8, virtual false, abstract: false, final false
inline void set_SteamTransactionId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x544006c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::InitSteamPurchaseResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitSteamPurchaseResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitSteamPurchaseResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitSteamPurchaseResponse(InitSteamPurchaseResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitSteamPurchaseResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitSteamPurchaseResponse(InitSteamPurchaseResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9139};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitSteamPurchaseResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitSteamPurchaseResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
