#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/UI/CustomMapLoadProgressBar_FillAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapLoadProgressBar_FillAxis)
// Forward declare root types
namespace GlobalNamespace {
struct CustomMapLoadProgressBar_FillAxis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapLoadProgressBar_FillAxis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoadProgressBar_FillAxis, "GorillaTagScripts.VirtualStumpCustomMaps.UI", "CustomMapLoadProgressBar/FillAxis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapLoadProgressBar/FillAxis
struct CORDL_TYPE CustomMapLoadProgressBar_FillAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomMapLoadProgressBar_FillAxis_Unwrapped
enum struct __CustomMapLoadProgressBar_FillAxis_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
__E_Z = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomMapLoadProgressBar_FillAxis_Unwrapped () const noexcept {
return static_cast<__CustomMapLoadProgressBar_FillAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapLoadProgressBar_FillAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapLoadProgressBar_FillAxis(int32_t  value__) noexcept;

/// @brief Field X value: I32(0)
static ::GlobalNamespace::CustomMapLoadProgressBar_FillAxis const X;

/// @brief Field Y value: I32(1)
static ::GlobalNamespace::CustomMapLoadProgressBar_FillAxis const Y;

/// @brief Field Z value: I32(2)
static ::GlobalNamespace::CustomMapLoadProgressBar_FillAxis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4064};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoadProgressBar_FillAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoadProgressBar_FillAxis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
