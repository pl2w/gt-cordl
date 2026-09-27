#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHeadsetEmulator_OpMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHeadsetEmulator_OpMode)
// Forward declare root types
namespace GlobalNamespace {
struct OVRHeadsetEmulator_OpMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRHeadsetEmulator_OpMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRHeadsetEmulator_OpMode, "", "OVRHeadsetEmulator/OpMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRHeadsetEmulator/OpMode
struct CORDL_TYPE OVRHeadsetEmulator_OpMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRHeadsetEmulator_OpMode_Unwrapped
enum struct __OVRHeadsetEmulator_OpMode_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_EditorOnly = static_cast<int32_t>(0x1),
__E_AlwaysOn = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRHeadsetEmulator_OpMode_Unwrapped () const noexcept {
return static_cast<__OVRHeadsetEmulator_OpMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRHeadsetEmulator_OpMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRHeadsetEmulator_OpMode(int32_t  value__) noexcept;

/// @brief Field AlwaysOn value: I32(2)
static ::GlobalNamespace::OVRHeadsetEmulator_OpMode const AlwaysOn;

/// @brief Field EditorOnly value: I32(1)
static ::GlobalNamespace::OVRHeadsetEmulator_OpMode const EditorOnly;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::OVRHeadsetEmulator_OpMode const Off;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11928};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHeadsetEmulator_OpMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRHeadsetEmulator_OpMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
