#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Media_MrcActivationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Media_MrcActivationMode)
// Forward declare root types
namespace GlobalNamespace {
struct Media_OVRPlugin_MrcActivationMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Media_OVRPlugin_MrcActivationMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Media_OVRPlugin_MrcActivationMode, "", "OVRPlugin/Media/MrcActivationMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Media/MrcActivationMode
struct CORDL_TYPE Media_OVRPlugin_MrcActivationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Media_OVRPlugin_MrcActivationMode_Unwrapped
enum struct __Media_OVRPlugin_MrcActivationMode_Unwrapped : int32_t {
__E_Automatic = static_cast<int32_t>(0x0),
__E_Disabled = static_cast<int32_t>(0x1),
__E_EnumSize = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Media_OVRPlugin_MrcActivationMode_Unwrapped () const noexcept {
return static_cast<__Media_OVRPlugin_MrcActivationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Media_OVRPlugin_MrcActivationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Media_OVRPlugin_MrcActivationMode(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(0)
static ::GlobalNamespace::Media_OVRPlugin_MrcActivationMode const Automatic;

/// @brief Field Disabled value: I32(1)
static ::GlobalNamespace::Media_OVRPlugin_MrcActivationMode const Disabled;

/// @brief Field EnumSize value: I32(2147483647)
static ::GlobalNamespace::Media_OVRPlugin_MrcActivationMode const EnumSize;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12226};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Media_OVRPlugin_MrcActivationMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Media_OVRPlugin_MrcActivationMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
