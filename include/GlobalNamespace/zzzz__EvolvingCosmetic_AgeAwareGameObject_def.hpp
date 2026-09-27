#pragma once
// IWYU pragma private; include "GlobalNamespace/EvolvingCosmetic_AgeAwareGameObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EvolvingCosmetic_AgeAwareGameObject)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct EvolvingCosmetic_AgeAwareGameObject;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject, "", "EvolvingCosmetic/AgeAwareGameObject");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EvolvingCosmetic/AgeAwareGameObject
struct CORDL_TYPE EvolvingCosmetic_AgeAwareGameObject {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EvolvingCosmetic_AgeAwareGameObject() ;

// Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "minActiveDays", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxActiveDays", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "requireCurrentSubscription", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr EvolvingCosmetic_AgeAwareGameObject(::UnityW<::UnityEngine::GameObject>  gameObject, int32_t  minActiveDays, int32_t  maxActiveDays, bool  requireCurrentSubscription) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{159};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field gameObject, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field minActiveDays, offset: 0x8, size: 0x4, def value: None
 int32_t  minActiveDays;

/// @brief Field maxActiveDays, offset: 0xc, size: 0x4, def value: None
 int32_t  maxActiveDays;

/// @brief Field requireCurrentSubscription, offset: 0x10, size: 0x1, def value: None
 bool  requireCurrentSubscription;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject, gameObject) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject, minActiveDays) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject, maxActiveDays) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject, requireCurrentSubscription) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
