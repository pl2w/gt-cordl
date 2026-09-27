#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_OpenVRButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_OpenVRButton)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_OpenVRButton;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_OpenVRButton);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OpenVRButton, "", "OVRInput/OpenVRButton");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/OpenVRButton
struct CORDL_TYPE OVRInput_OpenVRButton {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint64_t;

/// @brief Nested struct __OVRInput_OpenVRButton_Unwrapped
enum struct __OVRInput_OpenVRButton_Unwrapped : uint64_t {
__E_None = static_cast<uint64_t>(0x0u),
__E_Two = static_cast<uint64_t>(0x2u),
__E_Thumbstick = static_cast<uint64_t>(0x100000000u),
__E_Grip = static_cast<uint64_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_OpenVRButton_Unwrapped () const noexcept {
return static_cast<__OVRInput_OpenVRButton_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint64_t () const noexcept {
return static_cast<uint64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OpenVRButton() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_OpenVRButton(uint64_t  value__) noexcept;

/// @brief Field Grip value: U64(4)
static ::GlobalNamespace::OVRInput_OpenVRButton const Grip;

/// @brief Field None value: U64(0)
static ::GlobalNamespace::OVRInput_OpenVRButton const None;

/// @brief Field Thumbstick value: U64(4294967296)
static ::GlobalNamespace::OVRInput_OpenVRButton const Thumbstick;

/// @brief Field Two value: U64(2)
static ::GlobalNamespace::OVRInput_OpenVRButton const Two;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11940};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 uint64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRButton, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_OpenVRButton) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
