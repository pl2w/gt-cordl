#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceDiscoveryFilterInfoComponents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceDiscoveryFilterInfoComponents)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryFilterInfoComponents;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents, "", "OVRPlugin/SpaceDiscoveryFilterInfoComponents");
// Dependencies OVRPlugin::SpaceComponentType, OVRPlugin::SpaceDiscoveryFilterType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceDiscoveryFilterInfoComponents
struct CORDL_TYPE OVRPlugin_SpaceDiscoveryFilterInfoComponents {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceDiscoveryFilterInfoComponents() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType", modifiers: "", def_value: None, comment: None }, CppParam { name: "Component", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceDiscoveryFilterInfoComponents(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  Type, ::GlobalNamespace::OVRPlugin_SpaceComponentType  Component) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12246};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  Type;

/// @brief Field Component, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceComponentType  Component;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents, Component) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
