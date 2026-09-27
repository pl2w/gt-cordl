#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_OpenVRController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_OpenVRController)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_OpenVRController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_OpenVRController);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_OpenVRController, "", "OVRInput/OpenVRController");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/OpenVRController
struct CORDL_TYPE OVRInput_OpenVRController {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint64_t;

/// @brief Nested struct __OVRInput_OpenVRController_Unwrapped
enum struct __OVRInput_OpenVRController_Unwrapped : uint64_t {
__E_Unknown = static_cast<uint64_t>(0x0u),
__E_OculusTouch = static_cast<uint64_t>(0x1u),
__E_ViveController = static_cast<uint64_t>(0x2u),
__E_WindowsMRController = static_cast<uint64_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_OpenVRController_Unwrapped () const noexcept {
return static_cast<__OVRInput_OpenVRController_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint64_t () const noexcept {
return static_cast<uint64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_OpenVRController() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_OpenVRController(uint64_t  value__) noexcept;

/// @brief Field OculusTouch value: U64(1)
static ::GlobalNamespace::OVRInput_OpenVRController const OculusTouch;

/// @brief Field Unknown value: U64(0)
static ::GlobalNamespace::OVRInput_OpenVRController const Unknown;

/// @brief Field ViveController value: U64(2)
static ::GlobalNamespace::OVRInput_OpenVRController const ViveController;

/// @brief Field WindowsMRController value: U64(3)
static ::GlobalNamespace::OVRInput_OpenVRController const WindowsMRController;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11950};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 uint64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRController, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_OpenVRController) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
