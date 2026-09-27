#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBug_AudioState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowableBug_AudioState)
// Forward declare root types
namespace GlobalNamespace {
struct ThrowableBug_AudioState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ThrowableBug_AudioState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableBug_AudioState, "", "ThrowableBug/AudioState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ThrowableBug/AudioState
struct CORDL_TYPE ThrowableBug_AudioState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ThrowableBug_AudioState_Unwrapped
enum struct __ThrowableBug_AudioState_Unwrapped : int32_t {
__E_JustGrabbed = static_cast<int32_t>(0x0),
__E_ContinuallyGrabbed = static_cast<int32_t>(0x1),
__E_JustReleased = static_cast<int32_t>(0x2),
__E_NotHeld = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ThrowableBug_AudioState_Unwrapped () const noexcept {
return static_cast<__ThrowableBug_AudioState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ThrowableBug_AudioState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ThrowableBug_AudioState(int32_t  value__) noexcept;

/// @brief Field ContinuallyGrabbed value: I32(1)
static ::GlobalNamespace::ThrowableBug_AudioState const ContinuallyGrabbed;

/// @brief Field JustGrabbed value: I32(0)
static ::GlobalNamespace::ThrowableBug_AudioState const JustGrabbed;

/// @brief Field JustReleased value: I32(2)
static ::GlobalNamespace::ThrowableBug_AudioState const JustReleased;

/// @brief Field NotHeld value: I32(3)
static ::GlobalNamespace::ThrowableBug_AudioState const NotHeld;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3661};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThrowableBug_AudioState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThrowableBug_AudioState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
