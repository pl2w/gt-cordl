#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineInstantiate_InstantiableItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SplineInstantiate_InstantiableItem)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct SplineInstantiate_InstantiableItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineInstantiate_InstantiableItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineInstantiate_InstantiableItem, "UnityEngine.Splines", "SplineInstantiate/InstantiableItem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineInstantiate/InstantiableItem
struct CORDL_TYPE SplineInstantiate_InstantiableItem {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate_InstantiableItem() ;

// Ctor Parameters [CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "probability", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Probability", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SplineInstantiate_InstantiableItem(::UnityW<::UnityEngine::GameObject>  prefab, ::UnityW<::UnityEngine::GameObject>  Prefab, float_t  probability, float_t  Probability) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27974};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [HideInInspector]
/// [Obsolete("Use Prefab instead.", false)]
/// @brief Field prefab, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  prefab;

/// [FormerlySerializedAs("prefab")]
/// @brief Field Prefab, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  Prefab;

/// [HideInInspector]
/// [Obsolete("Use Probability instead.", false)]
/// @brief Field probability, offset: 0x10, size: 0x4, def value: None
 float_t  probability;

/// [FormerlySerializedAs("probability")]
/// @brief Field Probability, offset: 0x14, size: 0x4, def value: None
 float_t  Probability;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineInstantiate_InstantiableItem, prefab) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineInstantiate_InstantiableItem, Prefab) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineInstantiate_InstantiableItem, probability) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineInstantiate_InstantiableItem, Probability) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineInstantiate_InstantiableItem) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
