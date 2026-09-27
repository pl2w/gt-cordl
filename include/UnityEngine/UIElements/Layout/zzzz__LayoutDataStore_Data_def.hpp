#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDataStore_Data.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutDataStore_Data)
namespace GlobalNamespace {
struct LayoutDataStore_ComponentDataStore;
}
// Forward declare root types
namespace GlobalNamespace {
struct LayoutDataStore_Data;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LayoutDataStore_Data);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LayoutDataStore_Data, "UnityEngine.UIElements.Layout", "LayoutDataStore/Data");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutDataStore/Data
struct CORDL_TYPE LayoutDataStore_Data {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LayoutDataStore_Data() ;

// Ctor Parameters [CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NextFreeIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComponentCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Versions", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Components", ty: "::GlobalNamespace::LayoutDataStore_ComponentDataStore*", modifiers: "", def_value: None, comment: None }]
constexpr LayoutDataStore_Data(int32_t  Capacity, int32_t  NextFreeIndex, int32_t  ComponentCount, int32_t*  Versions, ::GlobalNamespace::LayoutDataStore_ComponentDataStore*  Components) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8651};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Capacity, offset: 0x0, size: 0x4, def value: None
 int32_t  Capacity;

/// @brief Field NextFreeIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  NextFreeIndex;

/// @brief Field ComponentCount, offset: 0x8, size: 0x4, def value: None
 int32_t  ComponentCount;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field Versions, offset: 0x10, size: 0x8, def value: None
 int32_t*  Versions;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field Components, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::LayoutDataStore_ComponentDataStore*  Components;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LayoutDataStore_Data, Capacity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LayoutDataStore_Data, NextFreeIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LayoutDataStore_Data, ComponentCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LayoutDataStore_Data, Versions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LayoutDataStore_Data, Components) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LayoutDataStore_Data) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
