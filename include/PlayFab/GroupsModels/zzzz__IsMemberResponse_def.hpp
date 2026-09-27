#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/IsMemberResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(IsMemberResponse)
// Forward declare root types
namespace PlayFab::GroupsModels {
class IsMemberResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::IsMemberResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::IsMemberResponse*, "PlayFab.GroupsModels", "IsMemberResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.IsMemberResponse
class CORDL_TYPE IsMemberResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field IsMember, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsMember, put=__cordl_internal_set_IsMember)) bool  IsMember;

static inline ::PlayFab::GroupsModels::IsMemberResponse* New_ctor() ;

constexpr bool const& __cordl_internal_get_IsMember() const;

constexpr bool& __cordl_internal_get_IsMember() ;

constexpr void __cordl_internal_set_IsMember(bool  value) ;

/// @brief Method .ctor, addr 0xa840dd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IsMemberResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IsMemberResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IsMemberResponse(IsMemberResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IsMemberResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IsMemberResponse(IsMemberResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19792};

/// @brief Field IsMember, offset: 0x20, size: 0x1, def value: None
 bool  ___IsMember;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::IsMemberResponse, ___IsMember) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::IsMemberResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels
