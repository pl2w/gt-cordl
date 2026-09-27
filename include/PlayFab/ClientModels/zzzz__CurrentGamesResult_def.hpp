#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CurrentGamesResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CurrentGamesResult)
namespace PlayFab::ClientModels {
class GameInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class CurrentGamesResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CurrentGamesResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CurrentGamesResult*, "PlayFab.ClientModels", "CurrentGamesResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CurrentGamesResult
class CORDL_TYPE CurrentGamesResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field GameCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_GameCount, put=__cordl_internal_set_GameCount)) int32_t  GameCount;

/// @brief Field Games, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Games, put=__cordl_internal_set_Games)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameInfo*>*  Games;

/// @brief Field PlayerCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerCount, put=__cordl_internal_set_PlayerCount)) int32_t  PlayerCount;

static inline ::PlayFab::ClientModels::CurrentGamesResult* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_GameCount() const;

constexpr int32_t& __cordl_internal_get_GameCount() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameInfo*>* const& __cordl_internal_get_Games() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameInfo*>*& __cordl_internal_get_Games() ;

constexpr int32_t const& __cordl_internal_get_PlayerCount() const;

constexpr int32_t& __cordl_internal_get_PlayerCount() ;

constexpr void __cordl_internal_set_GameCount(int32_t  value) ;

constexpr void __cordl_internal_set_Games(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameInfo*>*  value) ;

constexpr void __cordl_internal_set_PlayerCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xa84db38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurrentGamesResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurrentGamesResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurrentGamesResult(CurrentGamesResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurrentGamesResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurrentGamesResult(CurrentGamesResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19987};

/// @brief Field GameCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___GameCount;

/// @brief Field Games, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameInfo*>*  ___Games;

/// @brief Field PlayerCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___PlayerCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CurrentGamesResult, ___GameCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CurrentGamesResult, ___Games) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CurrentGamesResult, ___PlayerCount) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CurrentGamesResult) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
