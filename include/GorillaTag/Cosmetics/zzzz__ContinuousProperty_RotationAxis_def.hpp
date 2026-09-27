#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty_RotationAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousProperty_RotationAxis)
// Forward declare root types
namespace GlobalNamespace {
struct ContinuousProperty_RotationAxis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContinuousProperty_RotationAxis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinuousProperty_RotationAxis, "GorillaTag.Cosmetics", "ContinuousProperty/RotationAxis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ContinuousProperty/RotationAxis
struct CORDL_TYPE ContinuousProperty_RotationAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContinuousProperty_RotationAxis_Unwrapped
enum struct __ContinuousProperty_RotationAxis_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x400000),
__E_Y = static_cast<int32_t>(0x800000),
__E_Z = static_cast<int32_t>(0xc00000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContinuousProperty_RotationAxis_Unwrapped () const noexcept {
return static_cast<__ContinuousProperty_RotationAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContinuousProperty_RotationAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContinuousProperty_RotationAxis(int32_t  value__) noexcept;

/// @brief Field X value: I32(4194304)
static ::GlobalNamespace::ContinuousProperty_RotationAxis const X;

/// @brief Field Y value: I32(8388608)
static ::GlobalNamespace::ContinuousProperty_RotationAxis const Y;

/// @brief Field Z value: I32(12582912)
static ::GlobalNamespace::ContinuousProperty_RotationAxis const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4886};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinuousProperty_RotationAxis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinuousProperty_RotationAxis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
