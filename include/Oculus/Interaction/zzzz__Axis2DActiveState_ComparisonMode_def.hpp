#pragma once
// IWYU pragma private; include "Oculus/Interaction/Axis2DActiveState_ComparisonMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Axis2DActiveState_ComparisonMode)
// Forward declare root types
namespace GlobalNamespace {
struct Axis2DActiveState_ComparisonMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Axis2DActiveState_ComparisonMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Axis2DActiveState_ComparisonMode, "Oculus.Interaction", "Axis2DActiveState/ComparisonMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Axis2DActiveState/ComparisonMode
struct CORDL_TYPE Axis2DActiveState_ComparisonMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Axis2DActiveState_ComparisonMode_Unwrapped
enum struct __Axis2DActiveState_ComparisonMode_Unwrapped : int32_t {
__E_GreaterThan = static_cast<int32_t>(0x0),
__E_LessThan = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Axis2DActiveState_ComparisonMode_Unwrapped () const noexcept {
return static_cast<__Axis2DActiveState_ComparisonMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Axis2DActiveState_ComparisonMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Axis2DActiveState_ComparisonMode(int32_t  value__) noexcept;

/// @brief Field GreaterThan value: I32(0)
static ::GlobalNamespace::Axis2DActiveState_ComparisonMode const GreaterThan;

/// @brief Field LessThan value: I32(1)
static ::GlobalNamespace::Axis2DActiveState_ComparisonMode const LessThan;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15738};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Axis2DActiveState_ComparisonMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Axis2DActiveState_ComparisonMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
