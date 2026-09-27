#pragma once
// IWYU pragma private; include "GlobalNamespace/ReleaseFoodWhenUpsideDown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ReleaseFoodWhenUpsideDown)
namespace Critters::Scripts {
class CrittersFoodDispenser;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ReleaseFoodWhenUpsideDown;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ReleaseFoodWhenUpsideDown*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReleaseFoodWhenUpsideDown*, "", "ReleaseFoodWhenUpsideDown");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ReleaseFoodWhenUpsideDown
class CORDL_TYPE ReleaseFoodWhenUpsideDown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field angle, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_angle, put=__cordl_internal_set_angle)) float_t  angle;

/// @brief Field dispenser, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenser, put=__cordl_internal_set_dispenser)) ::UnityW<::Critters::Scripts::CrittersFoodDispenser>  dispenser;

/// @brief Field foodSubIndex, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_foodSubIndex, put=__cordl_internal_set_foodSubIndex)) int32_t  foodSubIndex;

/// @brief Field latch, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_latch, put=__cordl_internal_set_latch)) bool  latch;

/// @brief Field maxFood, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFood, put=__cordl_internal_set_maxFood)) float_t  maxFood;

/// @brief Field nextSpawnTime, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextSpawnTime, put=__cordl_internal_set_nextSpawnTime)) double_t  nextSpawnTime;

/// @brief Field spawnDelay, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnDelay, put=__cordl_internal_set_spawnDelay)) float_t  spawnDelay;

/// @brief Field spawnPoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPoint, put=__cordl_internal_set_spawnPoint)) ::UnityW<::UnityEngine::Transform>  spawnPoint;

/// @brief Field startingFood, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingFood, put=__cordl_internal_set_startingFood)) float_t  startingFood;

/// @brief Field startingSize, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingSize, put=__cordl_internal_set_startingSize)) float_t  startingSize;

/// @brief Method Awake, addr 0x56fd154, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ReleaseFoodWhenUpsideDown* New_ctor() ;

/// @brief Method Update, addr 0x56fd15c, size 0x40c, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_angle() const;

constexpr float_t& __cordl_internal_get_angle() ;

constexpr ::UnityW<::Critters::Scripts::CrittersFoodDispenser> const& __cordl_internal_get_dispenser() const;

constexpr ::UnityW<::Critters::Scripts::CrittersFoodDispenser>& __cordl_internal_get_dispenser() ;

constexpr int32_t const& __cordl_internal_get_foodSubIndex() const;

constexpr int32_t& __cordl_internal_get_foodSubIndex() ;

constexpr bool const& __cordl_internal_get_latch() const;

constexpr bool& __cordl_internal_get_latch() ;

constexpr float_t const& __cordl_internal_get_maxFood() const;

constexpr float_t& __cordl_internal_get_maxFood() ;

constexpr double_t const& __cordl_internal_get_nextSpawnTime() const;

constexpr double_t& __cordl_internal_get_nextSpawnTime() ;

constexpr float_t const& __cordl_internal_get_spawnDelay() const;

constexpr float_t& __cordl_internal_get_spawnDelay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnPoint() ;

constexpr float_t const& __cordl_internal_get_startingFood() const;

constexpr float_t& __cordl_internal_get_startingFood() ;

constexpr float_t const& __cordl_internal_get_startingSize() const;

constexpr float_t& __cordl_internal_get_startingSize() ;

constexpr void __cordl_internal_set_angle(float_t  value) ;

constexpr void __cordl_internal_set_dispenser(::UnityW<::Critters::Scripts::CrittersFoodDispenser>  value) ;

constexpr void __cordl_internal_set_foodSubIndex(int32_t  value) ;

constexpr void __cordl_internal_set_latch(bool  value) ;

constexpr void __cordl_internal_set_maxFood(float_t  value) ;

constexpr void __cordl_internal_set_nextSpawnTime(double_t  value) ;

constexpr void __cordl_internal_set_spawnDelay(float_t  value) ;

constexpr void __cordl_internal_set_spawnPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startingFood(float_t  value) ;

constexpr void __cordl_internal_set_startingSize(float_t  value) ;

/// @brief Method .ctor, addr 0x56fd568, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReleaseFoodWhenUpsideDown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReleaseFoodWhenUpsideDown", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReleaseFoodWhenUpsideDown(ReleaseFoodWhenUpsideDown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReleaseFoodWhenUpsideDown", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReleaseFoodWhenUpsideDown(ReleaseFoodWhenUpsideDown const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{146};

/// @brief Field dispenser, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Critters::Scripts::CrittersFoodDispenser>  ___dispenser;

/// @brief Field angle, offset: 0x28, size: 0x4, def value: None
 float_t  ___angle;

/// @brief Field latch, offset: 0x2c, size: 0x1, def value: None
 bool  ___latch;

/// @brief Field spawnPoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnPoint;

/// @brief Field maxFood, offset: 0x38, size: 0x4, def value: None
 float_t  ___maxFood;

/// @brief Field startingFood, offset: 0x3c, size: 0x4, def value: None
 float_t  ___startingFood;

/// @brief Field startingSize, offset: 0x40, size: 0x4, def value: None
 float_t  ___startingSize;

/// @brief Field foodSubIndex, offset: 0x44, size: 0x4, def value: None
 int32_t  ___foodSubIndex;

/// @brief Field spawnDelay, offset: 0x48, size: 0x4, def value: None
 float_t  ___spawnDelay;

/// @brief Field nextSpawnTime, offset: 0x50, size: 0x8, def value: None
 double_t  ___nextSpawnTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReleaseFoodWhenUpsideDown, ___dispenser) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseFoodWhenUpsideDown, ___angle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseFoodWhenUpsideDown, ___latch) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseFoodWhenUpsideDown, ___spawnPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseFoodWhenUpsideDown, ___maxFood) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseFoodWhenUpsideDown, ___startingFood) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseFoodWhenUpsideDown, ___startingSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseFoodWhenUpsideDown, ___foodSubIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseFoodWhenUpsideDown, ___spawnDelay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReleaseFoodWhenUpsideDown, ___nextSpawnTime) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReleaseFoodWhenUpsideDown) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
