#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchmakingQueueTeam.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingQueueTeam)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class MatchmakingQueueTeam;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::MatchmakingQueueTeam*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::MatchmakingQueueTeam*, "PlayFab.MultiplayerModels", "MatchmakingQueueTeam");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.MatchmakingQueueTeam
class CORDL_TYPE MatchmakingQueueTeam : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field MaxTeamSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxTeamSize, put=__cordl_internal_set_MaxTeamSize)) uint32_t  MaxTeamSize;

/// @brief Field MinTeamSize, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinTeamSize, put=__cordl_internal_set_MinTeamSize)) uint32_t  MinTeamSize;

/// @brief Field Name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

static inline ::PlayFab::MultiplayerModels::MatchmakingQueueTeam* New_ctor() ;

constexpr uint32_t const& __cordl_internal_get_MaxTeamSize() const;

constexpr uint32_t& __cordl_internal_get_MaxTeamSize() ;

constexpr uint32_t const& __cordl_internal_get_MinTeamSize() const;

constexpr uint32_t& __cordl_internal_get_MinTeamSize() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr void __cordl_internal_set_MaxTeamSize(uint32_t  value) ;

constexpr void __cordl_internal_set_MinTeamSize(uint32_t  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840b70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakingQueueTeam() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingQueueTeam", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakingQueueTeam(MatchmakingQueueTeam && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingQueueTeam", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakingQueueTeam(MatchmakingQueueTeam const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19712};

/// @brief Field MaxTeamSize, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___MaxTeamSize;

/// @brief Field MinTeamSize, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___MinTeamSize;

/// @brief Field Name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueTeam, ___MaxTeamSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueTeam, ___MinTeamSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::MatchmakingQueueTeam, ___Name) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::MatchmakingQueueTeam) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
