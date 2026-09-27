#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PlayerStatisticVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerStatisticVersion)
// Forward declare root types
namespace PlayFab::ClientModels {
class PlayerStatisticVersion;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::PlayerStatisticVersion*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::PlayerStatisticVersion*, "PlayFab.ClientModels", "PlayerStatisticVersion");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.PlayerStatisticVersion
class CORDL_TYPE PlayerStatisticVersion : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ActivationTime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActivationTime, put=__cordl_internal_set_ActivationTime)) ::System::DateTime  ActivationTime;

/// @brief Field DeactivationTime, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_DeactivationTime, put=__cordl_internal_set_DeactivationTime)) ::System::Nullable_1<::System::DateTime>  DeactivationTime;

/// @brief Field ScheduledActivationTime, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_ScheduledActivationTime, put=__cordl_internal_set_ScheduledActivationTime)) ::System::Nullable_1<::System::DateTime>  ScheduledActivationTime;

/// @brief Field ScheduledDeactivationTime, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_ScheduledDeactivationTime, put=__cordl_internal_set_ScheduledDeactivationTime)) ::System::Nullable_1<::System::DateTime>  ScheduledDeactivationTime;

/// @brief Field StatisticName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

/// @brief Field Version, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) uint32_t  Version;

static inline ::PlayFab::ClientModels::PlayerStatisticVersion* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get_ActivationTime() const;

constexpr ::System::DateTime& __cordl_internal_get_ActivationTime() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_DeactivationTime() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_DeactivationTime() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_ScheduledActivationTime() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_ScheduledActivationTime() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_ScheduledDeactivationTime() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_ScheduledDeactivationTime() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr uint32_t const& __cordl_internal_get_Version() const;

constexpr uint32_t& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_ActivationTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_DeactivationTime(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_ScheduledActivationTime(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_ScheduledDeactivationTime(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

constexpr void __cordl_internal_set_Version(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa84e118, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerStatisticVersion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerStatisticVersion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerStatisticVersion(PlayerStatisticVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerStatisticVersion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerStatisticVersion(PlayerStatisticVersion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20180};

/// @brief Field ActivationTime, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ___ActivationTime;

/// @brief Field DeactivationTime, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___DeactivationTime;

/// @brief Field ScheduledActivationTime, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___ScheduledActivationTime;

/// @brief Field ScheduledDeactivationTime, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___ScheduledDeactivationTime;

/// @brief Field StatisticName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___StatisticName;

/// @brief Field Version, offset: 0x50, size: 0x4, def value: None
 uint32_t  ___Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::PlayerStatisticVersion, ___ActivationTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerStatisticVersion, ___DeactivationTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerStatisticVersion, ___ScheduledActivationTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerStatisticVersion, ___ScheduledDeactivationTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerStatisticVersion, ___StatisticName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerStatisticVersion, ___Version) == 0x50, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::PlayerStatisticVersion) == 0x58, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
