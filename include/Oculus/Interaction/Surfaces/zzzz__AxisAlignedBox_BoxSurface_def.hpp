#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/AxisAlignedBox_BoxSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisAlignedBox_BoxSurface)
// Forward declare root types
namespace GlobalNamespace {
struct AxisAlignedBox_BoxSurface;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AxisAlignedBox_BoxSurface);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AxisAlignedBox_BoxSurface, "Oculus.Interaction.Surfaces", "AxisAlignedBox/BoxSurface");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Surfaces.AxisAlignedBox/BoxSurface
struct CORDL_TYPE AxisAlignedBox_BoxSurface {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AxisAlignedBox_BoxSurface_Unwrapped
enum struct __AxisAlignedBox_BoxSurface_Unwrapped : int32_t {
__E_XMin = static_cast<int32_t>(0x0),
__E_YMin = static_cast<int32_t>(0x1),
__E_ZMin = static_cast<int32_t>(0x2),
__E_XMax = static_cast<int32_t>(0x3),
__E_YMax = static_cast<int32_t>(0x4),
__E_ZMax = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AxisAlignedBox_BoxSurface_Unwrapped () const noexcept {
return static_cast<__AxisAlignedBox_BoxSurface_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AxisAlignedBox_BoxSurface() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AxisAlignedBox_BoxSurface(int32_t  value__) noexcept;

/// @brief Field XMax value: I32(3)
static ::GlobalNamespace::AxisAlignedBox_BoxSurface const XMax;

/// @brief Field XMin value: I32(0)
static ::GlobalNamespace::AxisAlignedBox_BoxSurface const XMin;

/// @brief Field YMax value: I32(4)
static ::GlobalNamespace::AxisAlignedBox_BoxSurface const YMax;

/// @brief Field YMin value: I32(1)
static ::GlobalNamespace::AxisAlignedBox_BoxSurface const YMin;

/// @brief Field ZMax value: I32(5)
static ::GlobalNamespace::AxisAlignedBox_BoxSurface const ZMax;

/// @brief Field ZMin value: I32(2)
static ::GlobalNamespace::AxisAlignedBox_BoxSurface const ZMin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16213};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AxisAlignedBox_BoxSurface, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AxisAlignedBox_BoxSurface) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
