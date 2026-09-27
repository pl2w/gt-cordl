#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PassthroughCapabilityFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_PassthroughCapabilityFlags)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_PassthroughCapabilityFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags, "", "OVRPlugin/PassthroughCapabilityFlags");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/PassthroughCapabilityFlags
struct CORDL_TYPE OVRPlugin_PassthroughCapabilityFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_PassthroughCapabilityFlags_Unwrapped
enum struct __OVRPlugin_PassthroughCapabilityFlags_Unwrapped : int32_t {
__E_Passthrough = static_cast<int32_t>(0x1),
__E_Color = static_cast<int32_t>(0x2),
__E_Depth = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_PassthroughCapabilityFlags_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_PassthroughCapabilityFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_PassthroughCapabilityFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_PassthroughCapabilityFlags(int32_t  value__) noexcept;

/// @brief Field Color value: I32(2)
static ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags const Color;

/// @brief Field Depth value: I32(4)
static ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags const Depth;

/// @brief Field Passthrough value: I32(1)
static ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags const Passthrough;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12205};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
