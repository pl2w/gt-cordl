#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListGroupApplicationsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ListGroupApplicationsResponse)
namespace PlayFab::GroupsModels {
class GroupApplication;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class ListGroupApplicationsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::ListGroupApplicationsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::ListGroupApplicationsResponse*, "PlayFab.GroupsModels", "ListGroupApplicationsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.ListGroupApplicationsResponse
class CORDL_TYPE ListGroupApplicationsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Applications, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Applications, put=__cordl_internal_set_Applications)) ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*  Applications;

static inline ::PlayFab::GroupsModels::ListGroupApplicationsResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>* const& __cordl_internal_get_Applications() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*& __cordl_internal_get_Applications() ;

constexpr void __cordl_internal_set_Applications(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*  value) ;

/// @brief Method .ctor, addr 0xa840de0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListGroupApplicationsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListGroupApplicationsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListGroupApplicationsResponse(ListGroupApplicationsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListGroupApplicationsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListGroupApplicationsResponse(ListGroupApplicationsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19794};

/// @brief Field Applications, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupApplication*>*  ___Applications;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::ListGroupApplicationsResponse, ___Applications) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::ListGroupApplicationsResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels
