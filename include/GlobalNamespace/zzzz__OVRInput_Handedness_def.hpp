#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_Handedness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_Handedness)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_Handedness;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_Handedness);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_Handedness, "", "OVRInput/Handedness");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Handedness
struct CORDL_TYPE OVRInput_Handedness {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_Handedness_Unwrapped
enum struct __OVRInput_Handedness_Unwrapped : int32_t {
__E_Unsupported = static_cast<int32_t>(0x0),
__E_LeftHanded = static_cast<int32_t>(0x1),
__E_RightHanded = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_Handedness_Unwrapped () const noexcept {
return static_cast<__OVRInput_Handedness_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_Handedness() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_Handedness(int32_t  value__) noexcept;

/// @brief Field LeftHanded value: I32(1)
static ::GlobalNamespace::OVRInput_Handedness const LeftHanded;

/// @brief Field RightHanded value: I32(2)
static ::GlobalNamespace::OVRInput_Handedness const RightHanded;

/// @brief Field Unsupported value: I32(0)
static ::GlobalNamespace::OVRInput_Handedness const Unsupported;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Handedness, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_Handedness) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
