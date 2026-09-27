#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetPositionCache_CacheEntry_RecordingItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__TargetPositionCache_CacheCurve_Item_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TargetPositionCache_CacheEntry_RecordingItem)
// Forward declare root types
namespace GlobalNamespace {
struct CacheEntry_TargetPositionCache_RecordingItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem, "Unity.Cinemachine", "TargetPositionCache/CacheEntry/RecordingItem");
// Dependencies Unity.Cinemachine.TargetPositionCache::CacheCurve::Item
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
struct CORDL_TYPE CacheEntry_TargetPositionCache_RecordingItem {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CacheEntry_TargetPositionCache_RecordingItem() ;

// Ctor Parameters [CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsCut", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Item", ty: "::GlobalNamespace::CacheCurve_TargetPositionCache_Item", modifiers: "", def_value: None, comment: None }]
constexpr CacheEntry_TargetPositionCache_RecordingItem(float_t  Time, bool  IsCut, ::GlobalNamespace::CacheCurve_TargetPositionCache_Item  Item) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22372};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field Time, offset: 0x0, size: 0x4, def value: None
 float_t  Time;

/// @brief Field IsCut, offset: 0x4, size: 0x1, def value: None
 bool  IsCut;

/// @brief Field Item, offset: 0x8, size: 0x1c, def value: None
 ::GlobalNamespace::CacheCurve_TargetPositionCache_Item  Item;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem, Time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem, IsCut) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem, Item) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
