#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginIdentityProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoginIdentityProvider)
// Forward declare root types
namespace PlayFab::ClientModels {
struct LoginIdentityProvider;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::LoginIdentityProvider);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LoginIdentityProvider, "PlayFab.ClientModels", "LoginIdentityProvider");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.LoginIdentityProvider
struct CORDL_TYPE LoginIdentityProvider {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoginIdentityProvider_Unwrapped
enum struct __LoginIdentityProvider_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_PlayFab = static_cast<int32_t>(0x1),
__E_Custom = static_cast<int32_t>(0x2),
__E_GameCenter = static_cast<int32_t>(0x3),
__E_GooglePlay = static_cast<int32_t>(0x4),
__E_Steam = static_cast<int32_t>(0x5),
__E_XBoxLive = static_cast<int32_t>(0x6),
__E_PSN = static_cast<int32_t>(0x7),
__E_Kongregate = static_cast<int32_t>(0x8),
__E_Facebook = static_cast<int32_t>(0x9),
__E_IOSDevice = static_cast<int32_t>(0xa),
__E_AndroidDevice = static_cast<int32_t>(0xb),
__E_Twitch = static_cast<int32_t>(0xc),
__E_WindowsHello = static_cast<int32_t>(0xd),
__E_GameServer = static_cast<int32_t>(0xe),
__E_CustomServer = static_cast<int32_t>(0xf),
__E_NintendoSwitch = static_cast<int32_t>(0x10),
__E_FacebookInstantGames = static_cast<int32_t>(0x11),
__E_OpenIdConnect = static_cast<int32_t>(0x12),
__E_Apple = static_cast<int32_t>(0x13),
__E_NintendoSwitchAccount = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoginIdentityProvider_Unwrapped () const noexcept {
return static_cast<__LoginIdentityProvider_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoginIdentityProvider() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LoginIdentityProvider(int32_t  value__) noexcept;

/// @brief Field AndroidDevice value: I32(11)
static ::PlayFab::ClientModels::LoginIdentityProvider const AndroidDevice;

/// @brief Field Apple value: I32(19)
static ::PlayFab::ClientModels::LoginIdentityProvider const Apple;

/// @brief Field Custom value: I32(2)
static ::PlayFab::ClientModels::LoginIdentityProvider const Custom;

/// @brief Field CustomServer value: I32(15)
static ::PlayFab::ClientModels::LoginIdentityProvider const CustomServer;

/// @brief Field Facebook value: I32(9)
static ::PlayFab::ClientModels::LoginIdentityProvider const Facebook;

/// @brief Field FacebookInstantGames value: I32(17)
static ::PlayFab::ClientModels::LoginIdentityProvider const FacebookInstantGames;

/// @brief Field GameCenter value: I32(3)
static ::PlayFab::ClientModels::LoginIdentityProvider const GameCenter;

/// @brief Field GameServer value: I32(14)
static ::PlayFab::ClientModels::LoginIdentityProvider const GameServer;

/// @brief Field GooglePlay value: I32(4)
static ::PlayFab::ClientModels::LoginIdentityProvider const GooglePlay;

/// @brief Field IOSDevice value: I32(10)
static ::PlayFab::ClientModels::LoginIdentityProvider const IOSDevice;

/// @brief Field Kongregate value: I32(8)
static ::PlayFab::ClientModels::LoginIdentityProvider const Kongregate;

/// @brief Field NintendoSwitch value: I32(16)
static ::PlayFab::ClientModels::LoginIdentityProvider const NintendoSwitch;

/// @brief Field NintendoSwitchAccount value: I32(20)
static ::PlayFab::ClientModels::LoginIdentityProvider const NintendoSwitchAccount;

/// @brief Field OpenIdConnect value: I32(18)
static ::PlayFab::ClientModels::LoginIdentityProvider const OpenIdConnect;

/// @brief Field PSN value: I32(7)
static ::PlayFab::ClientModels::LoginIdentityProvider const PSN;

/// @brief Field PlayFab value: I32(1)
static ::PlayFab::ClientModels::LoginIdentityProvider const PlayFab;

/// @brief Field Steam value: I32(5)
static ::PlayFab::ClientModels::LoginIdentityProvider const Steam;

/// @brief Field Twitch value: I32(12)
static ::PlayFab::ClientModels::LoginIdentityProvider const Twitch;

/// @brief Field Unknown value: I32(0)
static ::PlayFab::ClientModels::LoginIdentityProvider const Unknown;

/// @brief Field WindowsHello value: I32(13)
static ::PlayFab::ClientModels::LoginIdentityProvider const WindowsHello;

/// @brief Field XBoxLive value: I32(6)
static ::PlayFab::ClientModels::LoginIdentityProvider const XBoxLive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20143};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LoginIdentityProvider, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LoginIdentityProvider) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
