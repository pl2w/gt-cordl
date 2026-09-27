#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ListUsersCharactersResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ListUsersCharactersResult)
namespace PlayFab::ClientModels {
class CharacterResult;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class ListUsersCharactersResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ListUsersCharactersResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ListUsersCharactersResult*, "PlayFab.ClientModels", "ListUsersCharactersResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ListUsersCharactersResult
class CORDL_TYPE ListUsersCharactersResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Characters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Characters, put=__cordl_internal_set_Characters)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*  Characters;

static inline ::PlayFab::ClientModels::ListUsersCharactersResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>* const& __cordl_internal_get_Characters() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*& __cordl_internal_get_Characters() ;

constexpr void __cordl_internal_set_Characters(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*  value) ;

/// @brief Method .ctor, addr 0xa84dff0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListUsersCharactersResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListUsersCharactersResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListUsersCharactersResult(ListUsersCharactersResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListUsersCharactersResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListUsersCharactersResult(ListUsersCharactersResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20141};

/// @brief Field Characters, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*  ___Characters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ListUsersCharactersResult, ___Characters) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ListUsersCharactersResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
