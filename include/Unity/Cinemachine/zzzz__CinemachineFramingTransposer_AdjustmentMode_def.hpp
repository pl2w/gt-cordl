#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFramingTransposer_AdjustmentMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineFramingTransposer_AdjustmentMode)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineFramingTransposer_AdjustmentMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode, "Unity.Cinemachine", "CinemachineFramingTransposer/AdjustmentMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineFramingTransposer/AdjustmentMode
struct CORDL_TYPE CinemachineFramingTransposer_AdjustmentMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineFramingTransposer_AdjustmentMode_Unwrapped
enum struct __CinemachineFramingTransposer_AdjustmentMode_Unwrapped : int32_t {
__E_ZoomOnly = static_cast<int32_t>(0x0),
__E_DollyOnly = static_cast<int32_t>(0x1),
__E_DollyThenZoom = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineFramingTransposer_AdjustmentMode_Unwrapped () const noexcept {
return static_cast<__CinemachineFramingTransposer_AdjustmentMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFramingTransposer_AdjustmentMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineFramingTransposer_AdjustmentMode(int32_t  value__) noexcept;

/// @brief Field DollyOnly value: I32(1)
static ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode const DollyOnly;

/// @brief Field DollyThenZoom value: I32(2)
static ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode const DollyThenZoom;

/// @brief Field ZoomOnly value: I32(0)
static ::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode const ZoomOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22403};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineFramingTransposer_AdjustmentMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
