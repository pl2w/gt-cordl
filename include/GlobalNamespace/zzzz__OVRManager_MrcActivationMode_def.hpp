#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_MrcActivationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRManager_MrcActivationMode)
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_MrcActivationMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_MrcActivationMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRManager_MrcActivationMode, "", "OVRManager/MrcActivationMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/MrcActivationMode
struct CORDL_TYPE OVRManager_MrcActivationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRManager_MrcActivationMode_Unwrapped
enum struct __OVRManager_MrcActivationMode_Unwrapped : int32_t {
__E_Automatic = static_cast<int32_t>(0x0),
__E_Disabled = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRManager_MrcActivationMode_Unwrapped () const noexcept {
return static_cast<__OVRManager_MrcActivationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_MrcActivationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRManager_MrcActivationMode(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(0)
static ::GlobalNamespace::OVRManager_MrcActivationMode const Automatic;

/// @brief Field Disabled value: I32(1)
static ::GlobalNamespace::OVRManager_MrcActivationMode const Disabled;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11988};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_MrcActivationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRManager_MrcActivationMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
