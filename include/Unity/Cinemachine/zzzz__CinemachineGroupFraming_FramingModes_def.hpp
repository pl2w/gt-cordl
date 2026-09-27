#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineGroupFraming_FramingModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineGroupFraming_FramingModes)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineGroupFraming_FramingModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineGroupFraming_FramingModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineGroupFraming_FramingModes, "Unity.Cinemachine", "CinemachineGroupFraming/FramingModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineGroupFraming/FramingModes
struct CORDL_TYPE CinemachineGroupFraming_FramingModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineGroupFraming_FramingModes_Unwrapped
enum struct __CinemachineGroupFraming_FramingModes_Unwrapped : int32_t {
__E_Horizontal = static_cast<int32_t>(0x0),
__E_Vertical = static_cast<int32_t>(0x1),
__E_HorizontalAndVertical = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineGroupFraming_FramingModes_Unwrapped () const noexcept {
return static_cast<__CinemachineGroupFraming_FramingModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineGroupFraming_FramingModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineGroupFraming_FramingModes(int32_t  value__) noexcept;

/// @brief Field Horizontal value: I32(0)
static ::GlobalNamespace::CinemachineGroupFraming_FramingModes const Horizontal;

/// @brief Field HorizontalAndVertical value: I32(2)
static ::GlobalNamespace::CinemachineGroupFraming_FramingModes const HorizontalAndVertical;

/// @brief Field Vertical value: I32(1)
static ::GlobalNamespace::CinemachineGroupFraming_FramingModes const Vertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22187};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineGroupFraming_FramingModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineGroupFraming_FramingModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
