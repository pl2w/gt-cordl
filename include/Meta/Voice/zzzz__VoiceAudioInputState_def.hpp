#pragma once
// IWYU pragma private; include "Meta/Voice/VoiceAudioInputState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceAudioInputState)
// Forward declare root types
namespace Meta::Voice {
struct VoiceAudioInputState;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::VoiceAudioInputState);
DEFINE_IL2CPP_CLASS(::Meta::Voice::VoiceAudioInputState, "Meta.Voice", "VoiceAudioInputState");
// Dependencies 
namespace Meta::Voice {
// Is value type: true
// CS Name: Meta.Voice.VoiceAudioInputState
struct CORDL_TYPE VoiceAudioInputState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VoiceAudioInputState_Unwrapped
enum struct __VoiceAudioInputState_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Activating = static_cast<int32_t>(0x1),
__E_On = static_cast<int32_t>(0x2),
__E_Deactivating = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoiceAudioInputState_Unwrapped () const noexcept {
return static_cast<__VoiceAudioInputState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VoiceAudioInputState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VoiceAudioInputState(int32_t  value__) noexcept;

/// @brief Field Activating value: I32(1)
static ::Meta::Voice::VoiceAudioInputState const Activating;

/// @brief Field Deactivating value: I32(3)
static ::Meta::Voice::VoiceAudioInputState const Deactivating;

/// @brief Field Off value: I32(0)
static ::Meta::Voice::VoiceAudioInputState const Off;

/// @brief Field On value: I32(2)
static ::Meta::Voice::VoiceAudioInputState const On;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::VoiceAudioInputState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::VoiceAudioInputState) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice
