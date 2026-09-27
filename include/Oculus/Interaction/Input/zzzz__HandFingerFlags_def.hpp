#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandFingerFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandFingerFlags)
// Forward declare root types
namespace Oculus::Interaction::Input {
struct HandFingerFlags;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::HandFingerFlags);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandFingerFlags, "Oculus.Interaction.Input", "HandFingerFlags");
// [Flags]
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: true
// CS Name: Oculus.Interaction.Input.HandFingerFlags
struct CORDL_TYPE HandFingerFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandFingerFlags_Unwrapped
enum struct __HandFingerFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Thumb = static_cast<int32_t>(0x1),
__E_Index = static_cast<int32_t>(0x2),
__E_Middle = static_cast<int32_t>(0x4),
__E_Ring = static_cast<int32_t>(0x8),
__E_Pinky = static_cast<int32_t>(0x10),
__E_All = static_cast<int32_t>(0x1f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandFingerFlags_Unwrapped () const noexcept {
return static_cast<__HandFingerFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandFingerFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandFingerFlags(int32_t  value__) noexcept;

/// @brief Field All value: I32(31)
static ::Oculus::Interaction::Input::HandFingerFlags const All;

/// @brief Field Index value: I32(2)
static ::Oculus::Interaction::Input::HandFingerFlags const Index;

/// @brief Field Middle value: I32(4)
static ::Oculus::Interaction::Input::HandFingerFlags const Middle;

/// @brief Field None value: I32(0)
static ::Oculus::Interaction::Input::HandFingerFlags const None;

/// @brief Field Pinky value: I32(16)
static ::Oculus::Interaction::Input::HandFingerFlags const Pinky;

/// @brief Field Ring value: I32(8)
static ::Oculus::Interaction::Input::HandFingerFlags const Ring;

/// @brief Field Thumb value: I32(1)
static ::Oculus::Interaction::Input::HandFingerFlags const Thumb;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandFingerFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandFingerFlags) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
