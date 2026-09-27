#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CharacterResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CharacterResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class CharacterResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CharacterResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CharacterResult*, "PlayFab.ClientModels", "CharacterResult");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CharacterResult
class CORDL_TYPE CharacterResult : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CharacterId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field CharacterName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterName, put=__cordl_internal_set_CharacterName)) ::StringW  CharacterName;

/// @brief Field CharacterType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterType, put=__cordl_internal_set_CharacterType)) ::StringW  CharacterType;

static inline ::PlayFab::ClientModels::CharacterResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::StringW const& __cordl_internal_get_CharacterName() const;

constexpr ::StringW& __cordl_internal_get_CharacterName() ;

constexpr ::StringW const& __cordl_internal_get_CharacterType() const;

constexpr ::StringW& __cordl_internal_get_CharacterType() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterName(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterType(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dac0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterResult(CharacterResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterResult(CharacterResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19968};

/// @brief Field CharacterId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field CharacterName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CharacterName;

/// @brief Field CharacterType, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CharacterResult, ___CharacterId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CharacterResult, ___CharacterName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CharacterResult, ___CharacterType) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CharacterResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
