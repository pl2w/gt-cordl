#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListMembershipResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ListMembershipResponse)
namespace PlayFab::GroupsModels {
class GroupWithRoles;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class ListMembershipResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::ListMembershipResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::ListMembershipResponse*, "PlayFab.GroupsModels", "ListMembershipResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.ListMembershipResponse
class CORDL_TYPE ListMembershipResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Groups, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Groups, put=__cordl_internal_set_Groups)) ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupWithRoles*>*  Groups;

static inline ::PlayFab::GroupsModels::ListMembershipResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupWithRoles*>* const& __cordl_internal_get_Groups() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupWithRoles*>*& __cordl_internal_get_Groups() ;

constexpr void __cordl_internal_set_Groups(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupWithRoles*>*  value) ;

/// @brief Method .ctor, addr 0xa840e30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListMembershipResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListMembershipResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListMembershipResponse(ListMembershipResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListMembershipResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListMembershipResponse(ListMembershipResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19804};

/// @brief Field Groups, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupWithRoles*>*  ___Groups;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::ListMembershipResponse, ___Groups) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::ListMembershipResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels
