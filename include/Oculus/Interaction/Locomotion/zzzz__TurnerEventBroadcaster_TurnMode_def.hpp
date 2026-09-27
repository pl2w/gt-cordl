#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TurnerEventBroadcaster_TurnMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TurnerEventBroadcaster_TurnMode)
// Forward declare root types
namespace GlobalNamespace {
struct TurnerEventBroadcaster_TurnMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TurnerEventBroadcaster_TurnMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TurnerEventBroadcaster_TurnMode, "Oculus.Interaction.Locomotion", "TurnerEventBroadcaster/TurnMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Locomotion.TurnerEventBroadcaster/TurnMode
struct CORDL_TYPE TurnerEventBroadcaster_TurnMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TurnerEventBroadcaster_TurnMode_Unwrapped
enum struct __TurnerEventBroadcaster_TurnMode_Unwrapped : int32_t {
__E_Snap = static_cast<int32_t>(0x0),
__E_Smooth = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TurnerEventBroadcaster_TurnMode_Unwrapped () const noexcept {
return static_cast<__TurnerEventBroadcaster_TurnMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TurnerEventBroadcaster_TurnMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TurnerEventBroadcaster_TurnMode(int32_t  value__) noexcept;

/// @brief Field Smooth value: I32(1)
static ::GlobalNamespace::TurnerEventBroadcaster_TurnMode const Smooth;

/// @brief Field Snap value: I32(0)
static ::GlobalNamespace::TurnerEventBroadcaster_TurnMode const Snap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16303};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TurnerEventBroadcaster_TurnMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TurnerEventBroadcaster_TurnMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
