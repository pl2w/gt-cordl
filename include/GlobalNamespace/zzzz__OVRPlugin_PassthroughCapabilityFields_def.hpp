#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PassthroughCapabilityFields.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_PassthroughCapabilityFields)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_PassthroughCapabilityFields;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields, "", "OVRPlugin/PassthroughCapabilityFields");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/PassthroughCapabilityFields
struct CORDL_TYPE OVRPlugin_PassthroughCapabilityFields {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_PassthroughCapabilityFields_Unwrapped
enum struct __OVRPlugin_PassthroughCapabilityFields_Unwrapped : int32_t {
__E_Flags = static_cast<int32_t>(0x1),
__E_MaxColorLutResolution = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_PassthroughCapabilityFields_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_PassthroughCapabilityFields_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_PassthroughCapabilityFields() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_PassthroughCapabilityFields(int32_t  value__) noexcept;

/// @brief Field Flags value: I32(1)
static ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields const Flags;

/// @brief Field MaxColorLutResolution value: I32(2)
static ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields const MaxColorLutResolution;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12206};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
