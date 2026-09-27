#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlatformMenu_eBackButtonAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlatformMenu_eBackButtonAction)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlatformMenu_eBackButtonAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlatformMenu_eBackButtonAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlatformMenu_eBackButtonAction, "", "OVRPlatformMenu/eBackButtonAction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlatformMenu/eBackButtonAction
struct CORDL_TYPE OVRPlatformMenu_eBackButtonAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlatformMenu_eBackButtonAction_Unwrapped
enum struct __OVRPlatformMenu_eBackButtonAction_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_SHORT_PRESS = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlatformMenu_eBackButtonAction_Unwrapped () const noexcept {
return static_cast<__OVRPlatformMenu_eBackButtonAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlatformMenu_eBackButtonAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlatformMenu_eBackButtonAction(int32_t  value__) noexcept;

/// @brief Field NONE value: I32(0)
static ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction const NONE;

/// @brief Field SHORT_PRESS value: I32(1)
static ::GlobalNamespace::OVRPlatformMenu_eBackButtonAction const SHORT_PRESS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12042};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu_eBackButtonAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlatformMenu_eBackButtonAction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
