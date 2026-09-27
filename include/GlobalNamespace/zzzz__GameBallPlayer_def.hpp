#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameBallPlayer_HandData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameBallPlayer)
namespace GlobalNamespace {
struct GameBallId;
}
namespace GlobalNamespace {
struct GameBallPlayer_HandData;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GameBallPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameBallPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameBallPlayer*, "", "GameBallPlayer");
// Dependencies GameBallPlayer::HandData, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameBallPlayer
class CORDL_TYPE GameBallPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandData = ::GlobalNamespace::GameBallPlayer_HandData;

/// @brief Field hands, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hands, put=__cordl_internal_set_hands)) ::ArrayW<::GlobalNamespace::GameBallPlayer_HandData>  hands;

/// @brief Field inGoalZone, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_inGoalZone, put=__cordl_internal_set_inGoalZone)) int32_t  inGoalZone;

/// @brief Field rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field teamId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_teamId, put=__cordl_internal_set_teamId)) int32_t  teamId;

/// @brief Method Awake, addr 0x57a6da0, size 0x7c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CleanupPlayer, addr 0x57a6e8c, size 0x134, virtual false, abstract: false, final false
inline void CleanupPlayer() ;

/// @brief Method ClearAllGrabbed, addr 0x57a717c, size 0x4c, virtual false, abstract: false, final false
inline void ClearAllGrabbed() ;

/// @brief Method ClearGrabbed, addr 0x57a6e1c, size 0x70, virtual false, abstract: false, final false
inline void ClearGrabbed(int32_t  handIndex) ;

/// @brief Method ClearGrabbedIfHeld, addr 0x57a70bc, size 0xc0, virtual false, abstract: false, final false
inline void ClearGrabbedIfHeld(::GlobalNamespace::GameBallId  gameBallId) ;

/// @brief Method FindHandIndex, addr 0x57a7368, size 0xb4, virtual false, abstract: false, final false
inline int32_t FindHandIndex(::GlobalNamespace::GameBallId  gameBallId) ;

/// @brief Method GetGameBallId, addr 0x57a725c, size 0xdc, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameBallId GetGameBallId() ;

/// @brief Method GetGameBallId, addr 0x57a7338, size 0x30, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameBallId GetGameBallId(int32_t  handIndex) ;

/// @brief Method GetGamePlayer, addr 0x57a7640, size 0xac, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GameBallPlayer> GetGamePlayer(int32_t  actorNumber) ;

/// @brief Method GetGamePlayer, addr 0x57a76ec, size 0xfc, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GameBallPlayer> GetGamePlayer(::UnityEngine::Collider*  collider, bool  bodyOnly) ;

/// @brief Method GetHandIndex, addr 0x57a7504, size 0xc, virtual false, abstract: false, final false
static inline int32_t GetHandIndex(bool  leftHand) ;

/// @brief Method GetRig, addr 0x57a7510, size 0x130, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::VRRig> GetRig(int32_t  actorNumber) ;

/// @brief Method IsHoldingBall, addr 0x57a71e0, size 0x7c, virtual false, abstract: false, final false
inline bool IsHoldingBall() ;

/// @brief Method IsLeftHand, addr 0x57a74f8, size 0xc, virtual false, abstract: false, final false
static inline bool IsLeftHand(int32_t  handIndex) ;

/// @brief Method IsLocalPlayer, addr 0x57a741c, size 0xdc, virtual false, abstract: false, final false
inline bool IsLocalPlayer() ;

static inline ::GlobalNamespace::GameBallPlayer* New_ctor() ;

/// @brief Method SetGrabbed, addr 0x57a7018, size 0xa4, virtual false, abstract: false, final false
inline void SetGrabbed(::GlobalNamespace::GameBallId  gameBallId, int32_t  handIndex) ;

/// @brief Method SetInGoalZone, addr 0x57a71c8, size 0x18, virtual false, abstract: false, final false
inline void SetInGoalZone(bool  inZone) ;

constexpr ::ArrayW<::GlobalNamespace::GameBallPlayer_HandData> const& __cordl_internal_get_hands() const;

constexpr ::ArrayW<::GlobalNamespace::GameBallPlayer_HandData>& __cordl_internal_get_hands() ;

constexpr int32_t const& __cordl_internal_get_inGoalZone() const;

constexpr int32_t& __cordl_internal_get_inGoalZone() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr int32_t const& __cordl_internal_get_teamId() const;

constexpr int32_t& __cordl_internal_get_teamId() ;

constexpr void __cordl_internal_set_hands(::ArrayW<::GlobalNamespace::GameBallPlayer_HandData>  value) ;

constexpr void __cordl_internal_set_inGoalZone(int32_t  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_teamId(int32_t  value) ;

/// @brief Method .ctor, addr 0x57a77e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameBallPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameBallPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameBallPlayer(GameBallPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameBallPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameBallPlayer(GameBallPlayer const& ) = delete;

/// @brief Field LEFT_HAND offset 0xffffffff size 0x4
static constexpr int32_t  LEFT_HAND{static_cast<int32_t>(0x0)};

/// @brief Field MAX_HANDS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_HANDS{static_cast<int32_t>(0x2)};

/// @brief Field RIGHT_HAND offset 0xffffffff size 0x4
static constexpr int32_t  RIGHT_HAND{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1539};

/// @brief Field rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field teamId, offset: 0x28, size: 0x4, def value: None
 int32_t  ___teamId;

/// @brief Field hands, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GameBallPlayer_HandData>  ___hands;

/// @brief Field inGoalZone, offset: 0x38, size: 0x4, def value: None
 int32_t  ___inGoalZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameBallPlayer, ___rig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayer, ___teamId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayer, ___hands) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayer, ___inGoalZone) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameBallPlayer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
