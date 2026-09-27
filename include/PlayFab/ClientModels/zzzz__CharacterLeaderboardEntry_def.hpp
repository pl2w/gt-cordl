#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CharacterLeaderboardEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CharacterLeaderboardEntry)
// Forward declare root types
namespace PlayFab::ClientModels {
class CharacterLeaderboardEntry;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CharacterLeaderboardEntry*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CharacterLeaderboardEntry*, "PlayFab.ClientModels", "CharacterLeaderboardEntry");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CharacterLeaderboardEntry
class CORDL_TYPE CharacterLeaderboardEntry : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CharacterId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field CharacterName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterName, put=__cordl_internal_set_CharacterName)) ::StringW  CharacterName;

/// @brief Field CharacterType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterType, put=__cordl_internal_set_CharacterType)) ::StringW  CharacterType;

/// @brief Field DisplayName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field PlayFabId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field Position, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Position, put=__cordl_internal_set_Position)) int32_t  Position;

/// @brief Field StatValue, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatValue, put=__cordl_internal_set_StatValue)) int32_t  StatValue;

static inline ::PlayFab::ClientModels::CharacterLeaderboardEntry* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::StringW const& __cordl_internal_get_CharacterName() const;

constexpr ::StringW& __cordl_internal_get_CharacterName() ;

constexpr ::StringW const& __cordl_internal_get_CharacterType() const;

constexpr ::StringW& __cordl_internal_get_CharacterType() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr int32_t const& __cordl_internal_get_Position() const;

constexpr int32_t& __cordl_internal_get_Position() ;

constexpr int32_t const& __cordl_internal_get_StatValue() const;

constexpr int32_t& __cordl_internal_get_StatValue() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterName(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterType(::StringW  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_Position(int32_t  value) ;

constexpr void __cordl_internal_set_StatValue(int32_t  value) ;

/// @brief Method .ctor, addr 0xa84dab8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterLeaderboardEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterLeaderboardEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterLeaderboardEntry(CharacterLeaderboardEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterLeaderboardEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterLeaderboardEntry(CharacterLeaderboardEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19967};

/// @brief Field CharacterId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field CharacterName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CharacterName;

/// @brief Field CharacterType, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterType;

/// @brief Field DisplayName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field PlayFabId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field Position, offset: 0x38, size: 0x4, def value: None
 int32_t  ___Position;

/// @brief Field StatValue, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___StatValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CharacterLeaderboardEntry, ___CharacterId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CharacterLeaderboardEntry, ___CharacterName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CharacterLeaderboardEntry, ___CharacterType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CharacterLeaderboardEntry, ___DisplayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CharacterLeaderboardEntry, ___PlayFabId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CharacterLeaderboardEntry, ___Position) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CharacterLeaderboardEntry, ___StatValue) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CharacterLeaderboardEntry) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
