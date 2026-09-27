#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShieldCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRShieldCollider)
namespace GlobalNamespace {
class GRToolDirectionalShield;
}
namespace GlobalNamespace {
class GameHittable;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRShieldCollider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRShieldCollider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRShieldCollider*, "", "GRShieldCollider");
// Dependencies GameEntityId, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRShieldCollider
class CORDL_TYPE GRShieldCollider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_KnockbackVelocity)) float_t  KnockbackVelocity;

 __declspec(property(get=get_ShieldTool)) ::UnityW<::GlobalNamespace::GRToolDirectionalShield>  ShieldTool;

/// @brief Field knockbackVelocity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackVelocity, put=__cordl_internal_set_knockbackVelocity)) float_t  knockbackVelocity;

/// @brief Field lastBlockHittableEntityId, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastBlockHittableEntityId, put=__cordl_internal_set_lastBlockHittableEntityId)) ::GlobalNamespace::GameEntityId  lastBlockHittableEntityId;

/// @brief Field lastBlockHittableTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastBlockHittableTime, put=__cordl_internal_set_lastBlockHittableTime)) double_t  lastBlockHittableTime;

/// @brief Field shieldTool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldTool, put=__cordl_internal_set_shieldTool)) ::UnityW<::GlobalNamespace::GRToolDirectionalShield>  shieldTool;

/// @brief Method Awake, addr 0x58b3730, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BlockHittable, addr 0x58b3890, size 0x17c, virtual false, abstract: false, final false
inline void BlockHittable(::UnityEngine::Vector3  enemyPosition, ::UnityEngine::Vector3  enemyAttackDirection, ::GlobalNamespace::GameHittable*  hittable) ;

static inline ::GlobalNamespace::GRShieldCollider* New_ctor() ;

/// @brief Method OnEnemyBlocked, addr 0x58b3794, size 0xb0, virtual false, abstract: false, final false
inline void OnEnemyBlocked(::UnityEngine::Vector3  enemyPosition) ;

constexpr float_t const& __cordl_internal_get_knockbackVelocity() const;

constexpr float_t& __cordl_internal_get_knockbackVelocity() ;

constexpr ::GlobalNamespace::GameEntityId const& __cordl_internal_get_lastBlockHittableEntityId() const;

constexpr ::GlobalNamespace::GameEntityId& __cordl_internal_get_lastBlockHittableEntityId() ;

constexpr double_t const& __cordl_internal_get_lastBlockHittableTime() const;

constexpr double_t& __cordl_internal_get_lastBlockHittableTime() ;

constexpr ::UnityW<::GlobalNamespace::GRToolDirectionalShield> const& __cordl_internal_get_shieldTool() const;

constexpr ::UnityW<::GlobalNamespace::GRToolDirectionalShield>& __cordl_internal_get_shieldTool() ;

constexpr void __cordl_internal_set_knockbackVelocity(float_t  value) ;

constexpr void __cordl_internal_set_lastBlockHittableEntityId(::GlobalNamespace::GameEntityId  value) ;

constexpr void __cordl_internal_set_lastBlockHittableTime(double_t  value) ;

constexpr void __cordl_internal_set_shieldTool(::UnityW<::GlobalNamespace::GRToolDirectionalShield>  value) ;

/// @brief Method .ctor, addr 0x58b3cfc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_KnockbackVelocity, addr 0x58b3720, size 0x8, virtual false, abstract: false, final false
inline float_t get_KnockbackVelocity() ;

/// @brief Method get_ShieldTool, addr 0x58b3728, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRToolDirectionalShield> get_ShieldTool() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRShieldCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRShieldCollider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRShieldCollider(GRShieldCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRShieldCollider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRShieldCollider(GRShieldCollider const& ) = delete;

/// @brief Field BLOCK_SAME_HITTABLE_COOLDOWN offset 0xffffffff size 0x4
static constexpr float_t  BLOCK_SAME_HITTABLE_COOLDOWN{static_cast<float_t>(1.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2036};

/// [SerializeField]
/// @brief Field knockbackVelocity, offset: 0x20, size: 0x4, def value: None
 float_t  ___knockbackVelocity;

/// [SerializeField]
/// @brief Field shieldTool, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolDirectionalShield>  ___shieldTool;

/// @brief Field lastBlockHittableEntityId, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::GameEntityId  ___lastBlockHittableEntityId;

/// @brief Field lastBlockHittableTime, offset: 0x38, size: 0x8, def value: None
 double_t  ___lastBlockHittableTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRShieldCollider, ___knockbackVelocity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShieldCollider, ___shieldTool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShieldCollider, ___lastBlockHittableEntityId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShieldCollider, ___lastBlockHittableTime) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRShieldCollider) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
