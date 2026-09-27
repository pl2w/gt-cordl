#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallBallEjectZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonkeBallBallEjectZone)
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallBallEjectZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallBallEjectZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallBallEjectZone*, "", "MonkeBallBallEjectZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallBallEjectZone
class CORDL_TYPE MonkeBallBallEjectZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ejectVelocity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ejectVelocity, put=__cordl_internal_set_ejectVelocity)) float_t  ejectVelocity;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

static inline ::GlobalNamespace::MonkeBallBallEjectZone* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x57aa418, size 0x1d8, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

constexpr float_t const& __cordl_internal_get_ejectVelocity() const;

constexpr float_t& __cordl_internal_get_ejectVelocity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_ejectVelocity(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x57aa5f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallBallEjectZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallBallEjectZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallBallEjectZone(MonkeBallBallEjectZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallBallEjectZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallBallEjectZone(MonkeBallBallEjectZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1546};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field ejectVelocity, offset: 0x28, size: 0x4, def value: None
 float_t  ___ejectVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallBallEjectZone, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallBallEjectZone, ___ejectVelocity) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallBallEjectZone) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
