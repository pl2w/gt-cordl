#pragma once
// IWYU pragma private; include "GlobalNamespace/FXType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FXType)
// Forward declare root types
namespace GlobalNamespace {
struct FXType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FXType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FXType, "", "FXType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FXType
struct CORDL_TYPE FXType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FXType_Unwrapped
enum struct __FXType_Unwrapped : int32_t {
__E_BalloonPop = static_cast<int32_t>(0x0),
__E_PlayHandTap = static_cast<int32_t>(0x1),
__E_HWIngredients = static_cast<int32_t>(0x2),
__E_Impact = static_cast<int32_t>(0x3),
__E_Projectile = static_cast<int32_t>(0x4),
__E_OnHandTap = static_cast<int32_t>(0x5),
__E_RequestFortune = static_cast<int32_t>(0x6),
__E_PlayerLaunch = static_cast<int32_t>(0x7),
__E_RequestOwnership = static_cast<int32_t>(0x8),
__E_RequestCosmetics = static_cast<int32_t>(0x9),
__E_PlayRemotePointRedemption = static_cast<int32_t>(0xa),
__E_CMS_RequestTrigger = static_cast<int32_t>(0xb),
__E_Friending = static_cast<int32_t>(0xc),
__E_TeleportToVStumpVFX = static_cast<int32_t>(0xd),
__E_ReturnFromVStumpVFX = static_cast<int32_t>(0xe),
__E_VerifyPartyMember = static_cast<int32_t>(0xf),
__E_VS_SetTerminalControlStatus = static_cast<int32_t>(0x10),
__E_VS_UpdateScreen = static_cast<int32_t>(0x11),
__E_VS_RefreshDriverNickname = static_cast<int32_t>(0x12),
__E_VS_RequestTerminalControlStatusChange = static_cast<int32_t>(0x13),
__E_PlayerHitEvent = static_cast<int32_t>(0x14),
__E_MaterialCycler = static_cast<int32_t>(0x15),
__E_RequestOwnershipFromAuthority = static_cast<int32_t>(0x16),
__E_GroupJoin = static_cast<int32_t>(0x17),
__E_EnvironmentProximityReactor = static_cast<int32_t>(0x18),
__E_BroadcastCosmeticSignal = static_cast<int32_t>(0x19),
__E_RedeemCelebration = static_cast<int32_t>(0x1a),
__E_Length = static_cast<int32_t>(0x1b),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FXType_Unwrapped () const noexcept {
return static_cast<__FXType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FXType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FXType(int32_t  value__) noexcept;

/// @brief Field BalloonPop value: I32(0)
static ::GlobalNamespace::FXType const BalloonPop;

/// @brief Field BroadcastCosmeticSignal value: I32(25)
static ::GlobalNamespace::FXType const BroadcastCosmeticSignal;

/// @brief Field CMS_RequestTrigger value: I32(11)
static ::GlobalNamespace::FXType const CMS_RequestTrigger;

/// @brief Field EnvironmentProximityReactor value: I32(24)
static ::GlobalNamespace::FXType const EnvironmentProximityReactor;

/// @brief Field Friending value: I32(12)
static ::GlobalNamespace::FXType const Friending;

/// @brief Field GroupJoin value: I32(23)
static ::GlobalNamespace::FXType const GroupJoin;

/// @brief Field HWIngredients value: I32(2)
static ::GlobalNamespace::FXType const HWIngredients;

/// @brief Field Impact value: I32(3)
static ::GlobalNamespace::FXType const Impact;

/// @brief Field Length value: I32(27)
static ::GlobalNamespace::FXType const Length;

/// @brief Field MaterialCycler value: I32(21)
static ::GlobalNamespace::FXType const MaterialCycler;

/// @brief Field OnHandTap value: I32(5)
static ::GlobalNamespace::FXType const OnHandTap;

/// @brief Field PlayHandTap value: I32(1)
static ::GlobalNamespace::FXType const PlayHandTap;

/// @brief Field PlayRemotePointRedemption value: I32(10)
static ::GlobalNamespace::FXType const PlayRemotePointRedemption;

/// @brief Field PlayerHitEvent value: I32(20)
static ::GlobalNamespace::FXType const PlayerHitEvent;

/// @brief Field PlayerLaunch value: I32(7)
static ::GlobalNamespace::FXType const PlayerLaunch;

/// @brief Field Projectile value: I32(4)
static ::GlobalNamespace::FXType const Projectile;

/// @brief Field RedeemCelebration value: I32(26)
static ::GlobalNamespace::FXType const RedeemCelebration;

/// @brief Field RequestCosmetics value: I32(9)
static ::GlobalNamespace::FXType const RequestCosmetics;

/// @brief Field RequestFortune value: I32(6)
static ::GlobalNamespace::FXType const RequestFortune;

/// @brief Field RequestOwnership value: I32(8)
static ::GlobalNamespace::FXType const RequestOwnership;

/// @brief Field RequestOwnershipFromAuthority value: I32(22)
static ::GlobalNamespace::FXType const RequestOwnershipFromAuthority;

/// @brief Field ReturnFromVStumpVFX value: I32(14)
static ::GlobalNamespace::FXType const ReturnFromVStumpVFX;

/// @brief Field TeleportToVStumpVFX value: I32(13)
static ::GlobalNamespace::FXType const TeleportToVStumpVFX;

/// @brief Field VS_RefreshDriverNickname value: I32(18)
static ::GlobalNamespace::FXType const VS_RefreshDriverNickname;

/// @brief Field VS_RequestTerminalControlStatusChange value: I32(19)
static ::GlobalNamespace::FXType const VS_RequestTerminalControlStatusChange;

/// @brief Field VS_SetTerminalControlStatus value: I32(16)
static ::GlobalNamespace::FXType const VS_SetTerminalControlStatus;

/// @brief Field VS_UpdateScreen value: I32(17)
static ::GlobalNamespace::FXType const VS_UpdateScreen;

/// @brief Field VerifyPartyMember value: I32(15)
static ::GlobalNamespace::FXType const VerifyPartyMember;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3368};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FXType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FXType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
