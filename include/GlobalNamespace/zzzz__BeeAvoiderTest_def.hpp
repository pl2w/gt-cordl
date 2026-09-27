#pragma once
// IWYU pragma private; include "GlobalNamespace/BeeAvoiderTest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeeAvoiderTest)
// Forward declare root types
namespace GlobalNamespace {
class BeeAvoiderTest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeeAvoiderTest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeeAvoiderTest*, "", "BeeAvoiderTest");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeeAvoiderTest
class CORDL_TYPE BeeAvoiderTest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field acceleration, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_acceleration, put=__cordl_internal_set_acceleration)) float_t  acceleration;

/// @brief Field avoidRadius, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_avoidRadius, put=__cordl_internal_set_avoidRadius)) float_t  avoidRadius;

/// @brief Field avoidancePoints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_avoidancePoints, put=__cordl_internal_set_avoidancePoints)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  avoidancePoints;

/// @brief Field drag, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field instability, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_instability, put=__cordl_internal_set_instability)) float_t  instability;

/// @brief Field instabilityOffRadius, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_instabilityOffRadius, put=__cordl_internal_set_instabilityOffRadius)) float_t  instabilityOffRadius;

/// @brief Field nextPatrolPoint, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPatrolPoint, put=__cordl_internal_set_nextPatrolPoint)) int32_t  nextPatrolPoint;

/// @brief Field patrolArrivedRadius, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolArrivedRadius, put=__cordl_internal_set_patrolArrivedRadius)) float_t  patrolArrivedRadius;

/// @brief Field patrolPoints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolPoints, put=__cordl_internal_set_patrolPoints)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  patrolPoints;

/// @brief Field speed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field velocity, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

static inline ::GlobalNamespace::BeeAvoiderTest* New_ctor() ;

/// @brief Method Update, addr 0x5613404, size 0x654, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_acceleration() const;

constexpr float_t& __cordl_internal_get_acceleration() ;

constexpr float_t const& __cordl_internal_get_avoidRadius() const;

constexpr float_t& __cordl_internal_get_avoidRadius() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_avoidancePoints() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_avoidancePoints() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr float_t const& __cordl_internal_get_instability() const;

constexpr float_t& __cordl_internal_get_instability() ;

constexpr float_t const& __cordl_internal_get_instabilityOffRadius() const;

constexpr float_t& __cordl_internal_get_instabilityOffRadius() ;

constexpr int32_t const& __cordl_internal_get_nextPatrolPoint() const;

constexpr int32_t& __cordl_internal_get_nextPatrolPoint() ;

constexpr float_t const& __cordl_internal_get_patrolArrivedRadius() const;

constexpr float_t& __cordl_internal_get_patrolArrivedRadius() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_patrolPoints() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_patrolPoints() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_acceleration(float_t  value) ;

constexpr void __cordl_internal_set_avoidRadius(float_t  value) ;

constexpr void __cordl_internal_set_avoidancePoints(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_instability(float_t  value) ;

constexpr void __cordl_internal_set_instabilityOffRadius(float_t  value) ;

constexpr void __cordl_internal_set_nextPatrolPoint(int32_t  value) ;

constexpr void __cordl_internal_set_patrolArrivedRadius(float_t  value) ;

constexpr void __cordl_internal_set_patrolPoints(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5613a58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeeAvoiderTest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeeAvoiderTest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BeeAvoiderTest(BeeAvoiderTest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeeAvoiderTest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeeAvoiderTest(BeeAvoiderTest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{548};

/// @brief Field patrolPoints, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___patrolPoints;

/// @brief Field avoidancePoints, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___avoidancePoints;

/// @brief Field speed, offset: 0x30, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field acceleration, offset: 0x34, size: 0x4, def value: None
 float_t  ___acceleration;

/// @brief Field instability, offset: 0x38, size: 0x4, def value: None
 float_t  ___instability;

/// @brief Field instabilityOffRadius, offset: 0x3c, size: 0x4, def value: None
 float_t  ___instabilityOffRadius;

/// @brief Field drag, offset: 0x40, size: 0x4, def value: None
 float_t  ___drag;

/// @brief Field avoidRadius, offset: 0x44, size: 0x4, def value: None
 float_t  ___avoidRadius;

/// @brief Field patrolArrivedRadius, offset: 0x48, size: 0x4, def value: None
 float_t  ___patrolArrivedRadius;

/// @brief Field nextPatrolPoint, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___nextPatrolPoint;

/// @brief Field velocity, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeeAvoiderTest, ___patrolPoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeAvoiderTest, ___avoidancePoints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeAvoiderTest, ___speed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeAvoiderTest, ___acceleration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeAvoiderTest, ___instability) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeAvoiderTest, ___instabilityOffRadius) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeAvoiderTest, ___drag) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeAvoiderTest, ___avoidRadius) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeAvoiderTest, ___patrolArrivedRadius) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeAvoiderTest, ___nextPatrolPoint) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeAvoiderTest, ___velocity) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeeAvoiderTest) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
