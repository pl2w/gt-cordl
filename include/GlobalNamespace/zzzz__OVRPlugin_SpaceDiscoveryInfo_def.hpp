#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceDiscoveryInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceDiscoveryInfo)
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryFilterInfoHeader;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceDiscoveryInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceDiscoveryInfo, "", "OVRPlugin/SpaceDiscoveryInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceDiscoveryInfo
struct CORDL_TYPE OVRPlugin_SpaceDiscoveryInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceDiscoveryInfo() ;

// Ctor Parameters [CppParam { name: "NumFilters", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Filters", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoHeader*", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceDiscoveryInfo(uint32_t  NumFilters, ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoHeader*  Filters) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12247};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field NumFilters, offset: 0x0, size: 0x4, def value: None
 uint32_t  NumFilters;

/// @brief Field Filters, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoHeader*  Filters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryInfo, NumFilters) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryInfo, Filters) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
