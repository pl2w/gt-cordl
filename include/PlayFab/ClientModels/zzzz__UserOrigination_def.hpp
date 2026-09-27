#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserOrigination.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserOrigination)
// Forward declare root types
namespace PlayFab::ClientModels {
struct UserOrigination;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::UserOrigination);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserOrigination, "PlayFab.ClientModels", "UserOrigination");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.UserOrigination
struct CORDL_TYPE UserOrigination {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UserOrigination_Unwrapped
enum struct __UserOrigination_Unwrapped : int32_t {
__E_Organic = static_cast<int32_t>(0x0),
__E_Steam = static_cast<int32_t>(0x1),
__E_Google = static_cast<int32_t>(0x2),
__E_Amazon = static_cast<int32_t>(0x3),
__E_Facebook = static_cast<int32_t>(0x4),
__E_Kongregate = static_cast<int32_t>(0x5),
__E_GamersFirst = static_cast<int32_t>(0x6),
__E_Unknown = static_cast<int32_t>(0x7),
__E_IOS = static_cast<int32_t>(0x8),
__E_LoadTest = static_cast<int32_t>(0x9),
__E_Android = static_cast<int32_t>(0xa),
__E_PSN = static_cast<int32_t>(0xb),
__E_GameCenter = static_cast<int32_t>(0xc),
__E_CustomId = static_cast<int32_t>(0xd),
__E_XboxLive = static_cast<int32_t>(0xe),
__E_Parse = static_cast<int32_t>(0xf),
__E_Twitch = static_cast<int32_t>(0x10),
__E_WindowsHello = static_cast<int32_t>(0x11),
__E_ServerCustomId = static_cast<int32_t>(0x12),
__E_NintendoSwitchDeviceId = static_cast<int32_t>(0x13),
__E_FacebookInstantGamesId = static_cast<int32_t>(0x14),
__E_OpenIdConnect = static_cast<int32_t>(0x15),
__E_Apple = static_cast<int32_t>(0x16),
__E_NintendoSwitchAccount = static_cast<int32_t>(0x17),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserOrigination_Unwrapped () const noexcept {
return static_cast<__UserOrigination_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UserOrigination() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UserOrigination(int32_t  value__) noexcept;

/// @brief Field Amazon value: I32(3)
static ::PlayFab::ClientModels::UserOrigination const Amazon;

/// @brief Field Android value: I32(10)
static ::PlayFab::ClientModels::UserOrigination const Android;

/// @brief Field Apple value: I32(22)
static ::PlayFab::ClientModels::UserOrigination const Apple;

/// @brief Field CustomId value: I32(13)
static ::PlayFab::ClientModels::UserOrigination const CustomId;

/// @brief Field Facebook value: I32(4)
static ::PlayFab::ClientModels::UserOrigination const Facebook;

/// @brief Field FacebookInstantGamesId value: I32(20)
static ::PlayFab::ClientModels::UserOrigination const FacebookInstantGamesId;

/// @brief Field GameCenter value: I32(12)
static ::PlayFab::ClientModels::UserOrigination const GameCenter;

/// @brief Field GamersFirst value: I32(6)
static ::PlayFab::ClientModels::UserOrigination const GamersFirst;

/// @brief Field Google value: I32(2)
static ::PlayFab::ClientModels::UserOrigination const Google;

/// @brief Field IOS value: I32(8)
static ::PlayFab::ClientModels::UserOrigination const IOS;

/// @brief Field Kongregate value: I32(5)
static ::PlayFab::ClientModels::UserOrigination const Kongregate;

/// @brief Field LoadTest value: I32(9)
static ::PlayFab::ClientModels::UserOrigination const LoadTest;

/// @brief Field NintendoSwitchAccount value: I32(23)
static ::PlayFab::ClientModels::UserOrigination const NintendoSwitchAccount;

/// @brief Field NintendoSwitchDeviceId value: I32(19)
static ::PlayFab::ClientModels::UserOrigination const NintendoSwitchDeviceId;

/// @brief Field OpenIdConnect value: I32(21)
static ::PlayFab::ClientModels::UserOrigination const OpenIdConnect;

/// @brief Field Organic value: I32(0)
static ::PlayFab::ClientModels::UserOrigination const Organic;

/// @brief Field PSN value: I32(11)
static ::PlayFab::ClientModels::UserOrigination const PSN;

/// @brief Field Parse value: I32(15)
static ::PlayFab::ClientModels::UserOrigination const Parse;

/// @brief Field ServerCustomId value: I32(18)
static ::PlayFab::ClientModels::UserOrigination const ServerCustomId;

/// @brief Field Steam value: I32(1)
static ::PlayFab::ClientModels::UserOrigination const Steam;

/// @brief Field Twitch value: I32(16)
static ::PlayFab::ClientModels::UserOrigination const Twitch;

/// @brief Field Unknown value: I32(7)
static ::PlayFab::ClientModels::UserOrigination const Unknown;

/// @brief Field WindowsHello value: I32(17)
static ::PlayFab::ClientModels::UserOrigination const WindowsHello;

/// @brief Field XboxLive value: I32(14)
static ::PlayFab::ClientModels::UserOrigination const XboxLive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20306};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserOrigination, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserOrigination) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
