#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GrantCharacterToUserResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GrantCharacterToUserResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class GrantCharacterToUserResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GrantCharacterToUserResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GrantCharacterToUserResult*, "PlayFab.ClientModels", "GrantCharacterToUserResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GrantCharacterToUserResult
class CORDL_TYPE GrantCharacterToUserResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field CharacterId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field CharacterType, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterType, put=__cordl_internal_set_CharacterType)) ::StringW  CharacterType;

/// @brief Field Result, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_Result, put=__cordl_internal_set_Result)) bool  Result;

static inline ::PlayFab::ClientModels::GrantCharacterToUserResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::StringW const& __cordl_internal_get_CharacterType() const;

constexpr ::StringW& __cordl_internal_get_CharacterType() ;

constexpr bool const& __cordl_internal_get_Result() const;

constexpr bool& __cordl_internal_get_Result() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterType(::StringW  value) ;

constexpr void __cordl_internal_set_Result(bool  value) ;

/// @brief Method .ctor, addr 0xa84dec8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrantCharacterToUserResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrantCharacterToUserResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrantCharacterToUserResult(GrantCharacterToUserResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrantCharacterToUserResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrantCharacterToUserResult(GrantCharacterToUserResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20104};

/// @brief Field CharacterId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field CharacterType, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___CharacterType;

/// @brief Field Result, offset: 0x30, size: 0x1, def value: None
 bool  ___Result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GrantCharacterToUserResult, ___CharacterId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GrantCharacterToUserResult, ___CharacterType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GrantCharacterToUserResult, ___Result) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GrantCharacterToUserResult) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
