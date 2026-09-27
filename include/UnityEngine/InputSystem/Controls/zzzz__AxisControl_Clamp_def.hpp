#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/AxisControl_Clamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisControl_Clamp)
// Forward declare root types
namespace GlobalNamespace {
struct AxisControl_Clamp;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AxisControl_Clamp);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AxisControl_Clamp, "UnityEngine.InputSystem.Controls", "AxisControl/Clamp");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Controls.AxisControl/Clamp
struct CORDL_TYPE AxisControl_Clamp {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AxisControl_Clamp_Unwrapped
enum struct __AxisControl_Clamp_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_BeforeNormalize = static_cast<int32_t>(0x1),
__E_AfterNormalize = static_cast<int32_t>(0x2),
__E_ToConstantBeforeNormalize = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AxisControl_Clamp_Unwrapped () const noexcept {
return static_cast<__AxisControl_Clamp_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AxisControl_Clamp() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AxisControl_Clamp(int32_t  value__) noexcept;

/// @brief Field AfterNormalize value: I32(2)
static ::GlobalNamespace::AxisControl_Clamp const AfterNormalize;

/// @brief Field BeforeNormalize value: I32(1)
static ::GlobalNamespace::AxisControl_Clamp const BeforeNormalize;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::AxisControl_Clamp const None;

/// @brief Field ToConstantBeforeNormalize value: I32(3)
static ::GlobalNamespace::AxisControl_Clamp const ToConstantBeforeNormalize;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13851};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AxisControl_Clamp, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AxisControl_Clamp) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
