#pragma once
// IWYU pragma private; include "GorillaTagScripts/RotationAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotationAxis)
// Forward declare root types
namespace GorillaTagScripts {
struct RotationAxis;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::RotationAxis);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::RotationAxis, "GorillaTagScripts", "RotationAxis");
// Dependencies 
namespace GorillaTagScripts {
// Is value type: true
// CS Name: GorillaTagScripts.RotationAxis
struct CORDL_TYPE RotationAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RotationAxis_Unwrapped
enum struct __RotationAxis_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
__E_Z = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RotationAxis_Unwrapped () const noexcept {
return static_cast<__RotationAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RotationAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RotationAxis(int32_t  value__) noexcept;

/// @brief Field X value: I32(0)
static ::GorillaTagScripts::RotationAxis const X;

/// @brief Field Y value: I32(1)
static ::GorillaTagScripts::RotationAxis const Y;

/// @brief Field Z value: I32(2)
static ::GorillaTagScripts::RotationAxis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3922};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::RotationAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::RotationAxis) == 0x4, "Size mismatch!");

} // namespace end def GorillaTagScripts
