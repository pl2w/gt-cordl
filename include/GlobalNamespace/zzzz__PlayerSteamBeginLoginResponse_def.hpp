#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSteamBeginLoginResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerSteamBeginLoginResponse)
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
class PlayerSteamBeginLoginResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerSteamBeginLoginResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSteamBeginLoginResponse*, "", "PlayerSteamBeginLoginResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSteamBeginLoginResponse
class CORDL_TYPE PlayerSteamBeginLoginResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_Nonce, put=set_Nonce)) ::StringW  Nonce;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x52f6754, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x52f6b50, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PlayerSteamBeginLoginResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::PlayerSteamBeginLoginResponse* New_ctor() ;

static inline ::GlobalNamespace::PlayerSteamBeginLoginResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x52f6a6c, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52f6c68, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52f65c4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52f6678, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::PlayerSteamBeginLoginResponse*  obj) ;

/// @brief Method get_Nonce, addr 0x52f6998, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Nonce() ;

/// @brief Method set_Nonce, addr 0x52f68c0, size 0xd8, virtual false, abstract: false, final false
inline void set_Nonce(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52f66b8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::PlayerSteamBeginLoginResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSteamBeginLoginResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSteamBeginLoginResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSteamBeginLoginResponse(PlayerSteamBeginLoginResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSteamBeginLoginResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSteamBeginLoginResponse(PlayerSteamBeginLoginResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9427};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSteamBeginLoginResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerSteamBeginLoginResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
