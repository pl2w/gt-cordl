#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/TeamTicketSizeSimilarityRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TeamTicketSizeSimilarityRule)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class TeamTicketSizeSimilarityRule;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule*, "PlayFab.MultiplayerModels", "TeamTicketSizeSimilarityRule");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.TeamTicketSizeSimilarityRule
class CORDL_TYPE TeamTicketSizeSimilarityRule : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field SecondsUntilOptional, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_SecondsUntilOptional, put=__cordl_internal_set_SecondsUntilOptional)) ::System::Nullable_1<uint32_t>  SecondsUntilOptional;

static inline ::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_SecondsUntilOptional() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_SecondsUntilOptional() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value) ;

/// @brief Method .ctor, addr 0xa840c50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeamTicketSizeSimilarityRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeamTicketSizeSimilarityRule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeamTicketSizeSimilarityRule(TeamTicketSizeSimilarityRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeamTicketSizeSimilarityRule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeamTicketSizeSimilarityRule(TeamTicketSizeSimilarityRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19743};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field SecondsUntilOptional, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___SecondsUntilOptional;

/// @brief Size padding 0x20 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule, ___SecondsUntilOptional) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
