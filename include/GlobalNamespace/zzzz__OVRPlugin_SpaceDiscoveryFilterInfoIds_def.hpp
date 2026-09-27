#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceDiscoveryFilterInfoIds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceDiscoveryFilterInfoIds)
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryFilterInfoIds;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds, "", "OVRPlugin/SpaceDiscoveryFilterInfoIds");
// Dependencies OVRPlugin::SpaceDiscoveryFilterType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceDiscoveryFilterInfoIds
struct CORDL_TYPE OVRPlugin_SpaceDiscoveryFilterInfoIds {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceDiscoveryFilterInfoIds() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumIds", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Ids", ty: "::System::Guid*", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceDiscoveryFilterInfoIds(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  Type, int32_t  NumIds, ::System::Guid*  Ids) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12245};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  Type;

/// @brief Field NumIds, offset: 0x4, size: 0x4, def value: None
 int32_t  NumIds;

/// @brief Field Ids, offset: 0x8, size: 0x8, def value: None
 ::System::Guid*  Ids;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds, NumIds) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds, Ids) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
