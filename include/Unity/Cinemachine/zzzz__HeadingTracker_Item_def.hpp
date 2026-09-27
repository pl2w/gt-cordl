#pragma once
// IWYU pragma private; include "Unity/Cinemachine/HeadingTracker_Item.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HeadingTracker_Item)
// Forward declare root types
namespace GlobalNamespace {
struct HeadingTracker_Item;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HeadingTracker_Item);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HeadingTracker_Item, "Unity.Cinemachine", "HeadingTracker/Item");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.HeadingTracker/Item
struct CORDL_TYPE HeadingTracker_Item {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HeadingTracker_Item() ;

// Ctor Parameters [CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr HeadingTracker_Item(::UnityEngine::Vector3  velocity, float_t  weight, float_t  time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22422};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field velocity, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  velocity;

/// @brief Field weight, offset: 0xc, size: 0x4, def value: None
 float_t  weight;

/// @brief Field time, offset: 0x10, size: 0x4, def value: None
 float_t  time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HeadingTracker_Item, velocity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadingTracker_Item, weight) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadingTracker_Item, time) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HeadingTracker_Item) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
