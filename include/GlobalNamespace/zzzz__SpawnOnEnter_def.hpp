#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnOnEnter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpawnOnEnter)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnOnEnter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpawnOnEnter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpawnOnEnter*, "", "SpawnOnEnter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpawnOnEnter
class CORDL_TYPE SpawnOnEnter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cooldown, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field lastSpawnTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSpawnTime, put=__cordl_internal_set_lastSpawnTime)) float_t  lastSpawnTime;

/// @brief Field prefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

static inline ::GlobalNamespace::SpawnOnEnter* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5dfdeec, size 0xc8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr float_t const& __cordl_internal_get_lastSpawnTime() const;

constexpr float_t& __cordl_internal_get_lastSpawnTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_lastSpawnTime(float_t  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5dfdfb4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnOnEnter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnOnEnter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnOnEnter(SpawnOnEnter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnOnEnter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnOnEnter(SpawnOnEnter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{512};

/// @brief Field prefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

/// @brief Field cooldown, offset: 0x28, size: 0x4, def value: None
 float_t  ___cooldown;

/// @brief Field lastSpawnTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___lastSpawnTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpawnOnEnter, ___prefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnOnEnter, ___cooldown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnOnEnter, ___lastSpawnTime) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpawnOnEnter) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
