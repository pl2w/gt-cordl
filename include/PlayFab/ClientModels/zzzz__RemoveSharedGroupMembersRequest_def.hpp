#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveSharedGroupMembersRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RemoveSharedGroupMembersRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class RemoveSharedGroupMembersRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RemoveSharedGroupMembersRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RemoveSharedGroupMembersRequest*, "PlayFab.ClientModels", "RemoveSharedGroupMembersRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RemoveSharedGroupMembersRequest
class CORDL_TYPE RemoveSharedGroupMembersRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field PlayFabIds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabIds, put=__cordl_internal_set_PlayFabIds)) ::System::Collections::Generic::List_1<::StringW>*  PlayFabIds;

/// @brief Field SharedGroupId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SharedGroupId, put=__cordl_internal_set_SharedGroupId)) ::StringW  SharedGroupId;

static inline ::PlayFab::ClientModels::RemoveSharedGroupMembersRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_PlayFabIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_PlayFabIds() ;

constexpr ::StringW const& __cordl_internal_get_SharedGroupId() const;

constexpr ::StringW& __cordl_internal_get_SharedGroupId() ;

constexpr void __cordl_internal_set_PlayFabIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_SharedGroupId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e1c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoveSharedGroupMembersRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoveSharedGroupMembersRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoveSharedGroupMembersRequest(RemoveSharedGroupMembersRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoveSharedGroupMembersRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoveSharedGroupMembersRequest(RemoveSharedGroupMembersRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20203};

/// @brief Field PlayFabIds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___PlayFabIds;

/// @brief Field SharedGroupId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___SharedGroupId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RemoveSharedGroupMembersRequest, ___PlayFabIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RemoveSharedGroupMembersRequest, ___SharedGroupId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RemoveSharedGroupMembersRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
