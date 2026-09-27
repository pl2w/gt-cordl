#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutComputedData__MeasuredDimensions_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LayoutComputedData__MeasuredDimensions_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct LayoutComputedData__MeasuredDimensions_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LayoutComputedData__MeasuredDimensions_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LayoutComputedData__MeasuredDimensions_e__FixedBuffer, "UnityEngine.UIElements.Layout", "LayoutComputedData/<MeasuredDimensions>e__FixedBuffer");
// [UnsafeValueType]
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutComputedData/<MeasuredDimensions>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LayoutComputedData__MeasuredDimensions_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LayoutComputedData__MeasuredDimensions_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr LayoutComputedData__MeasuredDimensions_e__FixedBuffer(float_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
 float_t  FixedElementField;

/// @brief Size padding 0x8 - 0x4 = 0x4, packed as 0x4
 uint8_t  _cordl_size_padding[0x4];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LayoutComputedData__MeasuredDimensions_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LayoutComputedData__MeasuredDimensions_e__FixedBuffer) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
