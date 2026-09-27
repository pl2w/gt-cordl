#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceDiscoveryFilterInfoHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceDiscoveryFilterInfoHeader)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryFilterInfoHeader;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoHeader);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoHeader, "", "OVRPlugin/SpaceDiscoveryFilterInfoHeader");
// Dependencies OVRPlugin::SpaceDiscoveryFilterType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceDiscoveryFilterInfoHeader
struct CORDL_TYPE OVRPlugin_SpaceDiscoveryFilterInfoHeader {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceDiscoveryFilterInfoHeader() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceDiscoveryFilterInfoHeader(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  Type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12244};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoHeader, Type) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoHeader) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
