#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SetFriendTagsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetFriendTagsRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class SetFriendTagsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::SetFriendTagsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::SetFriendTagsRequest*, "PlayFab.ClientModels", "SetFriendTagsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.SetFriendTagsRequest
class CORDL_TYPE SetFriendTagsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field FriendPlayFabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FriendPlayFabId, put=__cordl_internal_set_FriendPlayFabId)) ::StringW  FriendPlayFabId;

/// @brief Field Tags, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tags, put=__cordl_internal_set_Tags)) ::System::Collections::Generic::List_1<::StringW>*  Tags;

static inline ::PlayFab::ClientModels::SetFriendTagsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FriendPlayFabId() const;

constexpr ::StringW& __cordl_internal_get_FriendPlayFabId() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Tags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Tags() ;

constexpr void __cordl_internal_set_FriendPlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_Tags(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84e228, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetFriendTagsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetFriendTagsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetFriendTagsRequest(SetFriendTagsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetFriendTagsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetFriendTagsRequest(SetFriendTagsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20216};

/// @brief Field FriendPlayFabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FriendPlayFabId;

/// @brief Field Tags, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Tags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::SetFriendTagsRequest, ___FriendPlayFabId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::SetFriendTagsRequest, ___Tags) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::SetFriendTagsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
