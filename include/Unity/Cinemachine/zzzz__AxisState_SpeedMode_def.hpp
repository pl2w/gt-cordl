#pragma once
// IWYU pragma private; include "Unity/Cinemachine/AxisState_SpeedMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisState_SpeedMode)
// Forward declare root types
namespace GlobalNamespace {
struct AxisState_SpeedMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AxisState_SpeedMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AxisState_SpeedMode, "Unity.Cinemachine", "AxisState/SpeedMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.AxisState/SpeedMode
struct CORDL_TYPE AxisState_SpeedMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AxisState_SpeedMode_Unwrapped
enum struct __AxisState_SpeedMode_Unwrapped : int32_t {
__E_MaxSpeed = static_cast<int32_t>(0x0),
__E_InputValueGain = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AxisState_SpeedMode_Unwrapped () const noexcept {
return static_cast<__AxisState_SpeedMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AxisState_SpeedMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AxisState_SpeedMode(int32_t  value__) noexcept;

/// @brief Field InputValueGain value: I32(1)
static ::GlobalNamespace::AxisState_SpeedMode const InputValueGain;

/// @brief Field MaxSpeed value: I32(0)
static ::GlobalNamespace::AxisState_SpeedMode const MaxSpeed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22385};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AxisState_SpeedMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AxisState_SpeedMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
