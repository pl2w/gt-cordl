#pragma once
// IWYU pragma private; include "Pathfinding/OrientationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OrientationMode)
// Forward declare root types
namespace Pathfinding {
struct OrientationMode;
}
// Write type traits
MARK_VAL_T(::Pathfinding::OrientationMode);
DEFINE_IL2CPP_CLASS(::Pathfinding::OrientationMode, "Pathfinding", "OrientationMode");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.OrientationMode
struct CORDL_TYPE OrientationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OrientationMode_Unwrapped
enum struct __OrientationMode_Unwrapped : int32_t {
__E_ZAxisForward = static_cast<int32_t>(0x0),
__E_YAxisForward = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OrientationMode_Unwrapped () const noexcept {
return static_cast<__OrientationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OrientationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OrientationMode(int32_t  value__) noexcept;

/// @brief Field YAxisForward value: I32(1)
static ::Pathfinding::OrientationMode const YAxisForward;

/// @brief Field ZAxisForward value: I32(0)
static ::Pathfinding::OrientationMode const ZAxisForward;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::OrientationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::OrientationMode) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
