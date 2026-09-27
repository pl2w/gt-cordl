#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelGeneratorV2_TreeLevelConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorLevelGeneratorV2_TreeLevelConfig)
namespace GlobalNamespace {
class GhostReactorLevelSectionConnector;
}
namespace GlobalNamespace {
class GhostReactorLevelSection;
}
namespace GlobalNamespace {
class GhostReactorSpawnConfig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactorLevelGeneratorV2_TreeLevelConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, "", "GhostReactorLevelGeneratorV2/TreeLevelConfig");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactorLevelGeneratorV2/TreeLevelConfig
struct CORDL_TYPE GhostReactorLevelGeneratorV2_TreeLevelConfig {
public:
// Declarations
/// @brief Method ValidateDatetime, addr 0x58483f8, size 0x80, virtual false, abstract: false, final false
inline bool ValidateDatetime(/* [CanBeNull] */ ::StringW  timestamp) ;

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelGeneratorV2_TreeLevelConfig() ;

// Ctor Parameters [CppParam { name: "EnableAfterDatetime", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DisableAfterDatetime", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "minHubs", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxHubs", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minCaps", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxCaps", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sectionSpawnConfigs", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "endCapSpawnConfigs", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "hubs", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "endCaps", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "blockers", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "connectors", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>>*", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactorLevelGeneratorV2_TreeLevelConfig(::StringW  EnableAfterDatetime, ::StringW  DisableAfterDatetime, int32_t  minHubs, int32_t  maxHubs, int32_t  minCaps, int32_t  maxCaps, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  sectionSpawnConfigs, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  endCapSpawnConfigs, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*  hubs, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*  endCaps, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*  blockers, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>>*  connectors) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1810};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// [CanBeNull]
/// @brief Field EnableAfterDatetime, offset: 0x0, size: 0x8, def value: None
 ::StringW  EnableAfterDatetime;

/// [CanBeNull]
/// @brief Field DisableAfterDatetime, offset: 0x8, size: 0x8, def value: None
 ::StringW  DisableAfterDatetime;

/// @brief Field minHubs, offset: 0x10, size: 0x4, def value: None
 int32_t  minHubs;

/// @brief Field maxHubs, offset: 0x14, size: 0x4, def value: None
 int32_t  maxHubs;

/// @brief Field minCaps, offset: 0x18, size: 0x4, def value: None
 int32_t  minCaps;

/// @brief Field maxCaps, offset: 0x1c, size: 0x4, def value: None
 int32_t  maxCaps;

/// @brief Field sectionSpawnConfigs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  sectionSpawnConfigs;

/// @brief Field endCapSpawnConfigs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  endCapSpawnConfigs;

/// @brief Field hubs, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*  hubs;

/// @brief Field endCaps, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*  endCaps;

/// @brief Field blockers, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSection>>*  blockers;

/// @brief Field connectors, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>>*  connectors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, EnableAfterDatetime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, DisableAfterDatetime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, minHubs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, maxHubs) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, minCaps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, maxCaps) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, sectionSpawnConfigs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, endCapSpawnConfigs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, hubs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, endCaps) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, blockers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig, connectors) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
