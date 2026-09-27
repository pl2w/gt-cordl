#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardInputStateFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_VirtualKeyboardInputStateFlags)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardInputStateFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputStateFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputStateFlags, "", "OVRPlugin/VirtualKeyboardInputStateFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/VirtualKeyboardInputStateFlags
struct CORDL_TYPE OVRPlugin_VirtualKeyboardInputStateFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint64_t;

/// @brief Nested struct __OVRPlugin_VirtualKeyboardInputStateFlags_Unwrapped
enum struct __OVRPlugin_VirtualKeyboardInputStateFlags_Unwrapped : uint64_t {
__E_IsPressed = static_cast<uint64_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_VirtualKeyboardInputStateFlags_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_VirtualKeyboardInputStateFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint64_t () const noexcept {
return static_cast<uint64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardInputStateFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_VirtualKeyboardInputStateFlags(uint64_t  value__) noexcept;

/// @brief Field IsPressed value: U64(1)
static ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputStateFlags const IsPressed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12189};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 uint64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputStateFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputStateFlags) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
