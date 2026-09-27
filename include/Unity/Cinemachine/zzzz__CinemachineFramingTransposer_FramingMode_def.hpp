#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFramingTransposer_FramingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineFramingTransposer_FramingMode)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineFramingTransposer_FramingMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineFramingTransposer_FramingMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineFramingTransposer_FramingMode, "Unity.Cinemachine", "CinemachineFramingTransposer/FramingMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineFramingTransposer/FramingMode
struct CORDL_TYPE CinemachineFramingTransposer_FramingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineFramingTransposer_FramingMode_Unwrapped
enum struct __CinemachineFramingTransposer_FramingMode_Unwrapped : int32_t {
__E_Horizontal = static_cast<int32_t>(0x0),
__E_Vertical = static_cast<int32_t>(0x1),
__E_HorizontalAndVertical = static_cast<int32_t>(0x2),
__E_None = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineFramingTransposer_FramingMode_Unwrapped () const noexcept {
return static_cast<__CinemachineFramingTransposer_FramingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFramingTransposer_FramingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineFramingTransposer_FramingMode(int32_t  value__) noexcept;

/// @brief Field Horizontal value: I32(0)
static ::GlobalNamespace::CinemachineFramingTransposer_FramingMode const Horizontal;

/// @brief Field HorizontalAndVertical value: I32(2)
static ::GlobalNamespace::CinemachineFramingTransposer_FramingMode const HorizontalAndVertical;

/// @brief Field None value: I32(3)
static ::GlobalNamespace::CinemachineFramingTransposer_FramingMode const None;

/// @brief Field Vertical value: I32(1)
static ::GlobalNamespace::CinemachineFramingTransposer_FramingMode const Vertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22402};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineFramingTransposer_FramingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineFramingTransposer_FramingMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
