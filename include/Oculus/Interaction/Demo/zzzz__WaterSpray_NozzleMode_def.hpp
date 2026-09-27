#pragma once
// IWYU pragma private; include "Oculus/Interaction/Demo/WaterSpray_NozzleMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterSpray_NozzleMode)
// Forward declare root types
namespace GlobalNamespace {
struct WaterSpray_NozzleMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WaterSpray_NozzleMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WaterSpray_NozzleMode, "Oculus.Interaction.Demo", "WaterSpray/NozzleMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Demo.WaterSpray/NozzleMode
struct CORDL_TYPE WaterSpray_NozzleMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WaterSpray_NozzleMode_Unwrapped
enum struct __WaterSpray_NozzleMode_Unwrapped : int32_t {
__E_Spray = static_cast<int32_t>(0x0),
__E_Stream = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WaterSpray_NozzleMode_Unwrapped () const noexcept {
return static_cast<__WaterSpray_NozzleMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WaterSpray_NozzleMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WaterSpray_NozzleMode(int32_t  value__) noexcept;

/// @brief Field Spray value: I32(0)
static ::GlobalNamespace::WaterSpray_NozzleMode const Spray;

/// @brief Field Stream value: I32(1)
static ::GlobalNamespace::WaterSpray_NozzleMode const Stream;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28275};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaterSpray_NozzleMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WaterSpray_NozzleMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
