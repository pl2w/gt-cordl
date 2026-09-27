#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/BuildRegion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuildRegion)
namespace PlayFab::MultiplayerModels {
class CurrentServerStats;
}
namespace PlayFab::MultiplayerModels {
class DynamicStandbySettings;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class BuildRegion;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::BuildRegion*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::BuildRegion*, "PlayFab.MultiplayerModels", "BuildRegion");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.BuildRegion
class CORDL_TYPE BuildRegion : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CurrentServerStats, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CurrentServerStats, put=__cordl_internal_set_CurrentServerStats)) ::PlayFab::MultiplayerModels::CurrentServerStats*  CurrentServerStats;

/// @brief Field DynamicStandbySettings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DynamicStandbySettings, put=__cordl_internal_set_DynamicStandbySettings)) ::PlayFab::MultiplayerModels::DynamicStandbySettings*  DynamicStandbySettings;

/// @brief Field MaxServers, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxServers, put=__cordl_internal_set_MaxServers)) int32_t  MaxServers;

/// @brief Field Region, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::StringW  Region;

/// @brief Field StandbyServers, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_StandbyServers, put=__cordl_internal_set_StandbyServers)) int32_t  StandbyServers;

/// @brief Field Status, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::StringW  Status;

static inline ::PlayFab::MultiplayerModels::BuildRegion* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::CurrentServerStats* const& __cordl_internal_get_CurrentServerStats() const;

constexpr ::PlayFab::MultiplayerModels::CurrentServerStats*& __cordl_internal_get_CurrentServerStats() ;

constexpr ::PlayFab::MultiplayerModels::DynamicStandbySettings* const& __cordl_internal_get_DynamicStandbySettings() const;

constexpr ::PlayFab::MultiplayerModels::DynamicStandbySettings*& __cordl_internal_get_DynamicStandbySettings() ;

constexpr int32_t const& __cordl_internal_get_MaxServers() const;

constexpr int32_t& __cordl_internal_get_MaxServers() ;

constexpr ::StringW const& __cordl_internal_get_Region() const;

constexpr ::StringW& __cordl_internal_get_Region() ;

constexpr int32_t const& __cordl_internal_get_StandbyServers() const;

constexpr int32_t& __cordl_internal_get_StandbyServers() ;

constexpr ::StringW const& __cordl_internal_get_Status() const;

constexpr ::StringW& __cordl_internal_get_Status() ;

constexpr void __cordl_internal_set_CurrentServerStats(::PlayFab::MultiplayerModels::CurrentServerStats*  value) ;

constexpr void __cordl_internal_set_DynamicStandbySettings(::PlayFab::MultiplayerModels::DynamicStandbySettings*  value) ;

constexpr void __cordl_internal_set_MaxServers(int32_t  value) ;

constexpr void __cordl_internal_set_Region(::StringW  value) ;

constexpr void __cordl_internal_set_StandbyServers(int32_t  value) ;

constexpr void __cordl_internal_set_Status(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8407c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuildRegion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuildRegion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuildRegion(BuildRegion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuildRegion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuildRegion(BuildRegion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19592};

/// @brief Field CurrentServerStats, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::CurrentServerStats*  ___CurrentServerStats;

/// @brief Field DynamicStandbySettings, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::DynamicStandbySettings*  ___DynamicStandbySettings;

/// @brief Field MaxServers, offset: 0x20, size: 0x4, def value: None
 int32_t  ___MaxServers;

/// @brief Field Region, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Region;

/// @brief Field StandbyServers, offset: 0x30, size: 0x4, def value: None
 int32_t  ___StandbyServers;

/// @brief Field Status, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Status;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::BuildRegion, ___CurrentServerStats) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildRegion, ___DynamicStandbySettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildRegion, ___MaxServers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildRegion, ___Region) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildRegion, ___StandbyServers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::BuildRegion, ___Status) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::BuildRegion) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
