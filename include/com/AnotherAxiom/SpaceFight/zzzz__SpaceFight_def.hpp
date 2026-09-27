#pragma once
// IWYU pragma private; include "com/AnotherAxiom/SpaceFight/SpaceFight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArcadeGame_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include "com/AnotherAxiom/SpaceFight/zzzz__SpaceFight_SpaceFlightNetState_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpaceFight)
namespace GlobalNamespace {
struct ArcadeButtons;
}
namespace GlobalNamespace {
struct SpaceFight_SpaceFlightNetState;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace com::AnotherAxiom::SpaceFight {
class SpaceFight;
}
// Write type traits
MARK_REF_T(::com::AnotherAxiom::SpaceFight::SpaceFight*);
DEFINE_IL2CPP_CLASS(::com::AnotherAxiom::SpaceFight::SpaceFight*, "com.AnotherAxiom.SpaceFight", "SpaceFight");
// Dependencies ArcadeGame, UnityEngine.Transform, UnityEngine.Vector2, com.AnotherAxiom.SpaceFight.SpaceFight::SpaceFlightNetState
namespace com::AnotherAxiom::SpaceFight {
// Is value type: false
// CS Name: com.AnotherAxiom.SpaceFight.SpaceFight
class CORDL_TYPE SpaceFight : public ::GlobalNamespace::ArcadeGame {
public:
// Declarations
using SpaceFlightNetState = ::GlobalNamespace::SpaceFight_SpaceFlightNetState;

/// @brief Field netStateCur, offset 0xb0, size 0x28 
 __declspec(property(get=__cordl_internal_get_netStateCur, put=__cordl_internal_set_netStateCur)) ::GlobalNamespace::SpaceFight_SpaceFlightNetState  netStateCur;

/// @brief Field netStateLast, offset 0x88, size 0x28 
 __declspec(property(get=__cordl_internal_get_netStateLast, put=__cordl_internal_set_netStateLast)) ::GlobalNamespace::SpaceFight_SpaceFlightNetState  netStateLast;

/// @brief Field player, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  player;

/// @brief Field projectile, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectile, put=__cordl_internal_set_projectile)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  projectile;

/// @brief Field projectilesFired, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilesFired, put=__cordl_internal_set_projectilesFired)) ::ArrayW<bool>  projectilesFired;

/// @brief Field tableSize, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_tableSize, put=__cordl_internal_set_tableSize)) ::UnityEngine::Vector2  tableSize;

/// @brief Method ButtonDown, addr 0x5cd32f0, size 0x84, virtual true, abstract: false, final false
inline void ButtonDown(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

/// @brief Method ButtonUp, addr 0x5cd3a78, size 0x4, virtual true, abstract: false, final false
inline void ButtonUp(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

/// @brief Method GetNetworkState, addr 0x5cd3374, size 0x2bc, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetNetworkState() ;

static inline ::com::AnotherAxiom::SpaceFight::SpaceFight* New_ctor() ;

/// @brief Method OnTimeout, addr 0x5cd3a7c, size 0x4, virtual true, abstract: false, final false
inline void OnTimeout() ;

/// @brief Method SetNetworkState, addr 0x5cd386c, size 0x20c, virtual true, abstract: false, final false
inline void SetNetworkState(::ArrayW<uint8_t>  b) ;

/// @brief Method Update, addr 0x5cd2da4, size 0x400, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::SpaceFight_SpaceFlightNetState const& __cordl_internal_get_netStateCur() const;

constexpr ::GlobalNamespace::SpaceFight_SpaceFlightNetState& __cordl_internal_get_netStateCur() ;

constexpr ::GlobalNamespace::SpaceFight_SpaceFlightNetState const& __cordl_internal_get_netStateLast() const;

constexpr ::GlobalNamespace::SpaceFight_SpaceFlightNetState& __cordl_internal_get_netStateLast() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_player() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_player() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_projectile() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_projectile() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_projectilesFired() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_projectilesFired() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_tableSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_tableSize() ;

constexpr void __cordl_internal_set_netStateCur(::GlobalNamespace::SpaceFight_SpaceFlightNetState  value) ;

constexpr void __cordl_internal_set_netStateLast(::GlobalNamespace::SpaceFight_SpaceFlightNetState  value) ;

constexpr void __cordl_internal_set_player(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_projectile(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_projectilesFired(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_tableSize(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x5cd3a80, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method clamp, addr 0x5cd3214, size 0x84, virtual false, abstract: false, final false
inline void clamp(::UnityEngine::Transform*  tr) ;

/// @brief Method move, addr 0x5cd31a4, size 0x70, virtual false, abstract: false, final false
inline void move(::UnityEngine::Transform*  p, float_t  speed) ;

/// @brief Method turn, addr 0x5cd3298, size 0x58, virtual false, abstract: false, final false
inline void turn(::UnityEngine::Transform*  p, bool  cw) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpaceFight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceFight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceFight(SpaceFight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceFight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceFight(SpaceFight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4475};

/// [SerializeField]
/// @brief Field player, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___player;

/// [SerializeField]
/// @brief Field projectile, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___projectile;

/// [SerializeField]
/// @brief Field tableSize, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___tableSize;

/// @brief Field projectilesFired, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<bool>  ___projectilesFired;

/// @brief Field netStateLast, offset: 0x88, size: 0x28, def value: None
 ::GlobalNamespace::SpaceFight_SpaceFlightNetState  ___netStateLast;

/// @brief Field netStateCur, offset: 0xb0, size: 0x28, def value: None
 ::GlobalNamespace::SpaceFight_SpaceFlightNetState  ___netStateCur;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::com::AnotherAxiom::SpaceFight::SpaceFight, ___player) == 0x68, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::SpaceFight::SpaceFight, ___projectile) == 0x70, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::SpaceFight::SpaceFight, ___tableSize) == 0x78, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::SpaceFight::SpaceFight, ___projectilesFired) == 0x80, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::SpaceFight::SpaceFight, ___netStateLast) == 0x88, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::SpaceFight::SpaceFight, ___netStateCur) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::com::AnotherAxiom::SpaceFight::SpaceFight) == 0xd8, "Size mismatch!");

} // namespace end def com::AnotherAxiom::SpaceFight
