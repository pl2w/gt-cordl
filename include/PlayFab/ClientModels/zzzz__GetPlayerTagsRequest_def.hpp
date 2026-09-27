#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerTagsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayerTagsRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerTagsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerTagsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerTagsRequest*, "PlayFab.ClientModels", "GetPlayerTagsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerTagsRequest
class CORDL_TYPE GetPlayerTagsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Namespace, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Namespace, put=__cordl_internal_set_Namespace)) ::StringW  Namespace;

/// @brief Field PlayFabId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

static inline ::PlayFab::ClientModels::GetPlayerTagsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Namespace() const;

constexpr ::StringW& __cordl_internal_get_Namespace() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr void __cordl_internal_set_Namespace(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dd20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerTagsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerTagsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerTagsRequest(GetPlayerTagsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerTagsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerTagsRequest(GetPlayerTagsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20051};

/// @brief Field Namespace, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Namespace;

/// @brief Field PlayFabId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerTagsRequest, ___Namespace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerTagsRequest, ___PlayFabId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerTagsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
