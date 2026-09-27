#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PassthroughCapabilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_PassthroughCapabilityFields_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_PassthroughCapabilityFlags_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_PassthroughCapabilities)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_PassthroughCapabilities;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_PassthroughCapabilities);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_PassthroughCapabilities, "", "OVRPlugin/PassthroughCapabilities");
// Dependencies OVRPlugin::PassthroughCapabilityFields, OVRPlugin::PassthroughCapabilityFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/PassthroughCapabilities
struct CORDL_TYPE OVRPlugin_PassthroughCapabilities {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_PassthroughCapabilities() ;

// Ctor Parameters [CppParam { name: "Fields", ty: "::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields", modifiers: "", def_value: None, comment: None }, CppParam { name: "Flags", ty: "::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxColorLutResolution", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_PassthroughCapabilities(::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields  Fields, ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags  Flags, uint32_t  MaxColorLutResolution) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Fields, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields  Fields;

/// @brief Field Flags, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags  Flags;

/// @brief Field MaxColorLutResolution, offset: 0x8, size: 0x4, def value: None
 uint32_t  MaxColorLutResolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_PassthroughCapabilities, Fields) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_PassthroughCapabilities, Flags) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_PassthroughCapabilities, MaxColorLutResolution) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_PassthroughCapabilities) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
