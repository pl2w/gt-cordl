#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/ListGroupBlocksResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ListGroupBlocksResponse)
namespace PlayFab::GroupsModels {
class GroupBlock;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::GroupsModels {
class ListGroupBlocksResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::ListGroupBlocksResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::ListGroupBlocksResponse*, "PlayFab.GroupsModels", "ListGroupBlocksResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.ListGroupBlocksResponse
class CORDL_TYPE ListGroupBlocksResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field BlockedEntities, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlockedEntities, put=__cordl_internal_set_BlockedEntities)) ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupBlock*>*  BlockedEntities;

static inline ::PlayFab::GroupsModels::ListGroupBlocksResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupBlock*>* const& __cordl_internal_get_BlockedEntities() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupBlock*>*& __cordl_internal_get_BlockedEntities() ;

constexpr void __cordl_internal_set_BlockedEntities(::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupBlock*>*  value) ;

/// @brief Method .ctor, addr 0xa840df0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListGroupBlocksResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListGroupBlocksResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListGroupBlocksResponse(ListGroupBlocksResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListGroupBlocksResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListGroupBlocksResponse(ListGroupBlocksResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19796};

/// @brief Field BlockedEntities, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::GroupsModels::GroupBlock*>*  ___BlockedEntities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::ListGroupBlocksResponse, ___BlockedEntities) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::ListGroupBlocksResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels
