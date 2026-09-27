#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutList`1_Data.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutList`1_Data)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct LayoutList_1_Data;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::LayoutList_1_Data);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::LayoutList_1_Data, "UnityEngine.UIElements.Layout", "LayoutList`1/Data");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutList`1/Data<T>
struct CORDL_TYPE LayoutList_1_Data {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LayoutList_1_Data() ;

// Ctor Parameters [CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Values", ty: "T*", modifiers: "", def_value: None, comment: None }]
constexpr LayoutList_1_Data(int32_t  Capacity, int32_t  Count, T*  Values) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8666};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Capacity, offset: 0x0, size: 0x4, def value: None
 int32_t  Capacity;

/// @brief Field Count, offset: 0x4, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field Values, offset: 0x8, size: 0x8, def value: None
 T*  Values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
