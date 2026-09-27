#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKListenerBinding_StoppedListeningReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceSDKListenerBinding_StoppedListeningReason)
// Forward declare root types
namespace GlobalNamespace {
struct VoiceSDKListenerBinding_StoppedListeningReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason, "Oculus.Voice.Bindings.Android", "VoiceSDKListenerBinding/StoppedListeningReason");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding/StoppedListeningReason
struct CORDL_TYPE VoiceSDKListenerBinding_StoppedListeningReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VoiceSDKListenerBinding_StoppedListeningReason_Unwrapped
enum struct __VoiceSDKListenerBinding_StoppedListeningReason_Unwrapped : int32_t {
__E_NoReasonProvided = static_cast<int32_t>(0x0),
__E_Inactivity = static_cast<int32_t>(0x1),
__E_Timeout = static_cast<int32_t>(0x2),
__E_Deactivation = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoiceSDKListenerBinding_StoppedListeningReason_Unwrapped () const noexcept {
return static_cast<__VoiceSDKListenerBinding_StoppedListeningReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKListenerBinding_StoppedListeningReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VoiceSDKListenerBinding_StoppedListeningReason(int32_t  value__) noexcept;

/// @brief Field Deactivation value: I32(3)
static ::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason const Deactivation;

/// @brief Field Inactivity value: I32(1)
static ::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason const Inactivity;

/// @brief Field NoReasonProvided value: I32(0)
static ::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason const NoReasonProvided;

/// @brief Field Timeout value: I32(2)
static ::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason const Timeout;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceSDKListenerBinding_StoppedListeningReason) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
