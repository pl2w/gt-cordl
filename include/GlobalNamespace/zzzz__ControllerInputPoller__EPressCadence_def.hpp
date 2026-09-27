#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerInputPoller__EPressCadence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerInputPoller__EPressCadence)
// Forward declare root types
namespace GlobalNamespace {
struct ControllerInputPoller__EPressCadence;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ControllerInputPoller__EPressCadence);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerInputPoller__EPressCadence, "", "ControllerInputPoller/_EPressCadence");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ControllerInputPoller/_EPressCadence
struct CORDL_TYPE ControllerInputPoller__EPressCadence {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControllerInputPoller__EPressCadence_Unwrapped
enum struct __ControllerInputPoller__EPressCadence_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_End = static_cast<int32_t>(0x1),
__E_Held = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControllerInputPoller__EPressCadence_Unwrapped () const noexcept {
return static_cast<__ControllerInputPoller__EPressCadence_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControllerInputPoller__EPressCadence() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ControllerInputPoller__EPressCadence(int32_t  value__) noexcept;

/// @brief Field End value: I32(1)
static ::GlobalNamespace::ControllerInputPoller__EPressCadence const End;

/// @brief Field Held value: I32(2)
static ::GlobalNamespace::ControllerInputPoller__EPressCadence const Held;

/// @brief Field Start value: I32(0)
static ::GlobalNamespace::ControllerInputPoller__EPressCadence const Start;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1657};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerInputPoller__EPressCadence, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerInputPoller__EPressCadence) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
