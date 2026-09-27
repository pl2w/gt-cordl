#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PlayerLeaderboardEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLeaderboardEntry)
namespace PlayFab::ClientModels {
class PlayerProfileModel;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class PlayerLeaderboardEntry;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::PlayerLeaderboardEntry*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::PlayerLeaderboardEntry*, "PlayFab.ClientModels", "PlayerLeaderboardEntry");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.PlayerLeaderboardEntry
class CORDL_TYPE PlayerLeaderboardEntry : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field DisplayName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field PlayFabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field Position, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Position, put=__cordl_internal_set_Position)) int32_t  Position;

/// @brief Field Profile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Profile, put=__cordl_internal_set_Profile)) ::PlayFab::ClientModels::PlayerProfileModel*  Profile;

/// @brief Field StatValue, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatValue, put=__cordl_internal_set_StatValue)) int32_t  StatValue;

static inline ::PlayFab::ClientModels::PlayerLeaderboardEntry* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr int32_t const& __cordl_internal_get_Position() const;

constexpr int32_t& __cordl_internal_get_Position() ;

constexpr ::PlayFab::ClientModels::PlayerProfileModel* const& __cordl_internal_get_Profile() const;

constexpr ::PlayFab::ClientModels::PlayerProfileModel*& __cordl_internal_get_Profile() ;

constexpr int32_t const& __cordl_internal_get_StatValue() const;

constexpr int32_t& __cordl_internal_get_StatValue() ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_Position(int32_t  value) ;

constexpr void __cordl_internal_set_Profile(::PlayFab::ClientModels::PlayerProfileModel*  value) ;

constexpr void __cordl_internal_set_StatValue(int32_t  value) ;

/// @brief Method .ctor, addr 0xa84e100, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLeaderboardEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLeaderboardEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLeaderboardEntry(PlayerLeaderboardEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLeaderboardEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLeaderboardEntry(PlayerLeaderboardEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20177};

/// @brief Field DisplayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field PlayFabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field Position, offset: 0x20, size: 0x4, def value: None
 int32_t  ___Position;

/// @brief Field Profile, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::PlayerProfileModel*  ___Profile;

/// @brief Field StatValue, offset: 0x30, size: 0x4, def value: None
 int32_t  ___StatValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::PlayerLeaderboardEntry, ___DisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerLeaderboardEntry, ___PlayFabId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerLeaderboardEntry, ___Position) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerLeaderboardEntry, ___Profile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PlayerLeaderboardEntry, ___StatValue) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::PlayerLeaderboardEntry) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
