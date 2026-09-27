#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty_InterpolationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousProperty_InterpolationMode)
// Forward declare root types
namespace GlobalNamespace {
struct ContinuousProperty_InterpolationMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContinuousProperty_InterpolationMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinuousProperty_InterpolationMode, "GorillaTag.Cosmetics", "ContinuousProperty/InterpolationMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ContinuousProperty/InterpolationMode
struct CORDL_TYPE ContinuousProperty_InterpolationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContinuousProperty_InterpolationMode_Unwrapped
enum struct __ContinuousProperty_InterpolationMode_Unwrapped : int32_t {
__E_Position = static_cast<int32_t>(0x400000),
__E_Rotation = static_cast<int32_t>(0x800000),
__E_PositionAndRotation = static_cast<int32_t>(0xc00000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContinuousProperty_InterpolationMode_Unwrapped () const noexcept {
return static_cast<__ContinuousProperty_InterpolationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContinuousProperty_InterpolationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContinuousProperty_InterpolationMode(int32_t  value__) noexcept;

/// @brief Field Position value: I32(4194304)
static ::GlobalNamespace::ContinuousProperty_InterpolationMode const Position;

/// @brief Field PositionAndRotation value: I32(12582912)
static ::GlobalNamespace::ContinuousProperty_InterpolationMode const PositionAndRotation;

/// @brief Field Rotation value: I32(8388608)
static ::GlobalNamespace::ContinuousProperty_InterpolationMode const Rotation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4887};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinuousProperty_InterpolationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinuousProperty_InterpolationMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
