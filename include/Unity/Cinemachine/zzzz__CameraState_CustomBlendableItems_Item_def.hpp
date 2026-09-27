#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraState_CustomBlendableItems_Item.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CameraState_CustomBlendableItems_Item)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct CustomBlendableItems_CameraState_Item;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomBlendableItems_CameraState_Item);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomBlendableItems_CameraState_Item, "Unity.Cinemachine", "CameraState/CustomBlendableItems/Item");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CameraState/CustomBlendableItems/Item
struct CORDL_TYPE CustomBlendableItems_CameraState_Item {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CustomBlendableItems_CameraState_Item() ;

// Ctor Parameters [CppParam { name: "Custom", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Weight", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CustomBlendableItems_CameraState_Item(::UnityW<::UnityEngine::Object>  Custom, float_t  Weight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22256};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Custom, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  Custom;

/// @brief Field Weight, offset: 0x8, size: 0x4, def value: None
 float_t  Weight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomBlendableItems_CameraState_Item, Custom) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomBlendableItems_CameraState_Item, Weight) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomBlendableItems_CameraState_Item) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
