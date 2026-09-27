#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceQueryInfo2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceFilterInfoComponents_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceFilterInfoIds_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryActionType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryFilterType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceStorageLocation_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceQueryInfo2)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo2;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, "", "OVRPlugin/SpaceQueryInfo2");
// Dependencies OVRPlugin::SpaceFilterInfoComponents, OVRPlugin::SpaceFilterInfoIds, OVRPlugin::SpaceQueryActionType, OVRPlugin::SpaceQueryFilterType, OVRPlugin::SpaceQueryType, OVRPlugin::SpaceStorageLocation, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceQueryInfo2
struct CORDL_TYPE OVRPlugin_SpaceQueryInfo2 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceQueryInfo2() ;

// Ctor Parameters [CppParam { name: "QueryType", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryType", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxQuerySpaces", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Timeout", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Location", ty: "::GlobalNamespace::OVRPlugin_SpaceStorageLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "ActionType", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryActionType", modifiers: "", def_value: None, comment: None }, CppParam { name: "FilterType", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryFilterType", modifiers: "", def_value: None, comment: None }, CppParam { name: "IdInfo", ty: "::GlobalNamespace::OVRPlugin_SpaceFilterInfoIds", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComponentsInfo", ty: "::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents", modifiers: "", def_value: None, comment: None }, CppParam { name: "GroupUuidInfo", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceQueryInfo2(::GlobalNamespace::OVRPlugin_SpaceQueryType  QueryType, int32_t  MaxQuerySpaces, double_t  Timeout, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  Location, ::GlobalNamespace::OVRPlugin_SpaceQueryActionType  ActionType, ::GlobalNamespace::OVRPlugin_SpaceQueryFilterType  FilterType, ::GlobalNamespace::OVRPlugin_SpaceFilterInfoIds  IdInfo, ::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents  ComponentsInfo, ::System::Guid  GroupUuidInfo) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12218};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field QueryType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceQueryType  QueryType;

/// @brief Field MaxQuerySpaces, offset: 0x4, size: 0x4, def value: None
 int32_t  MaxQuerySpaces;

/// @brief Field Timeout, offset: 0x8, size: 0x8, def value: None
 double_t  Timeout;

/// @brief Field Location, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  Location;

/// @brief Field ActionType, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceQueryActionType  ActionType;

/// @brief Field FilterType, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceQueryFilterType  FilterType;

/// @brief Field IdInfo, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceFilterInfoIds  IdInfo;

/// @brief Field ComponentsInfo, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents  ComponentsInfo;

/// @brief Field GroupUuidInfo, offset: 0x40, size: 0x10, def value: None
 ::System::Guid  GroupUuidInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, QueryType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, MaxQuerySpaces) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, Timeout) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, Location) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, ActionType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, FilterType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, IdInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, ComponentsInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, GroupUuidInfo) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
