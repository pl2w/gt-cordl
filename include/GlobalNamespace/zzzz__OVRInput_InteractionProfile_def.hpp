#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_InteractionProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_InteractionProfile)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_InteractionProfile;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_InteractionProfile);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_InteractionProfile, "", "OVRInput/InteractionProfile");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/InteractionProfile
struct CORDL_TYPE OVRInput_InteractionProfile {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_InteractionProfile_Unwrapped
enum struct __OVRInput_InteractionProfile_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Touch = static_cast<int32_t>(0x1),
__E_TouchPro = static_cast<int32_t>(0x2),
__E_TouchPlus = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_InteractionProfile_Unwrapped () const noexcept {
return static_cast<__OVRInput_InteractionProfile_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_InteractionProfile() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_InteractionProfile(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRInput_InteractionProfile const None;

/// @brief Field Touch value: I32(1)
static ::GlobalNamespace::OVRInput_InteractionProfile const Touch;

/// @brief Field TouchPlus value: I32(4)
static ::GlobalNamespace::OVRInput_InteractionProfile const TouchPlus;

/// @brief Field TouchPro value: I32(2)
static ::GlobalNamespace::OVRInput_InteractionProfile const TouchPro;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_InteractionProfile, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_InteractionProfile) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
