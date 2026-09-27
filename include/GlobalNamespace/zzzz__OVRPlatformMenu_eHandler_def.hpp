#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlatformMenu_eHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlatformMenu_eHandler)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlatformMenu_eHandler;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlatformMenu_eHandler);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlatformMenu_eHandler, "", "OVRPlatformMenu/eHandler");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlatformMenu/eHandler
struct CORDL_TYPE OVRPlatformMenu_eHandler {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlatformMenu_eHandler_Unwrapped
enum struct __OVRPlatformMenu_eHandler_Unwrapped : int32_t {
__E_ShowConfirmQuit = static_cast<int32_t>(0x0),
__E_RetreatOneLevel = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlatformMenu_eHandler_Unwrapped () const noexcept {
return static_cast<__OVRPlatformMenu_eHandler_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlatformMenu_eHandler() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlatformMenu_eHandler(int32_t  value__) noexcept;

/// @brief Field RetreatOneLevel value: I32(1)
static ::GlobalNamespace::OVRPlatformMenu_eHandler const RetreatOneLevel;

/// @brief Field ShowConfirmQuit value: I32(0)
static ::GlobalNamespace::OVRPlatformMenu_eHandler const ShowConfirmQuit;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlatformMenu_eHandler, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlatformMenu_eHandler) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
