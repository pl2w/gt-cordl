#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeAdjustmentVolume_RenderingLayerMaskOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeAdjustmentVolume_RenderingLayerMaskOperation)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeAdjustmentVolume_RenderingLayerMaskOperation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation, "UnityEngine.Rendering", "ProbeAdjustmentVolume/RenderingLayerMaskOperation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeAdjustmentVolume/RenderingLayerMaskOperation
struct CORDL_TYPE ProbeAdjustmentVolume_RenderingLayerMaskOperation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProbeAdjustmentVolume_RenderingLayerMaskOperation_Unwrapped
enum struct __ProbeAdjustmentVolume_RenderingLayerMaskOperation_Unwrapped : int32_t {
__E_Override = static_cast<int32_t>(0x0),
__E_Add = static_cast<int32_t>(0x1),
__E_Remove = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProbeAdjustmentVolume_RenderingLayerMaskOperation_Unwrapped () const noexcept {
return static_cast<__ProbeAdjustmentVolume_RenderingLayerMaskOperation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProbeAdjustmentVolume_RenderingLayerMaskOperation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeAdjustmentVolume_RenderingLayerMaskOperation(int32_t  value__) noexcept;

/// @brief Field Add value: I32(1)
static ::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation const Add;

/// @brief Field Override value: I32(0)
static ::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation const Override;

/// @brief Field Remove value: I32(2)
static ::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation const Remove;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16795};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeAdjustmentVolume_RenderingLayerMaskOperation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
