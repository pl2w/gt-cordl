#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterBakerPositionOverrides_OverridePosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(BetterBakerPositionOverrides_OverridePosition)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct BetterBakerPositionOverrides_OverridePosition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition, "", "BetterBakerPositionOverrides/OverridePosition");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BetterBakerPositionOverrides/OverridePosition
struct CORDL_TYPE BetterBakerPositionOverrides_OverridePosition {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BetterBakerPositionOverrides_OverridePosition() ;

// Ctor Parameters [CppParam { name: "go", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bakingTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }]
constexpr BetterBakerPositionOverrides_OverridePosition(::UnityW<::UnityEngine::GameObject>  go, ::UnityW<::UnityEngine::Transform>  bakingTransform, ::UnityW<::UnityEngine::Transform>  gameTransform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3467};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field go, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  go;

/// @brief Field bakingTransform, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  bakingTransform;

/// @brief Field gameTransform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  gameTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition, go) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition, bakingTransform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition, gameTransform) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
