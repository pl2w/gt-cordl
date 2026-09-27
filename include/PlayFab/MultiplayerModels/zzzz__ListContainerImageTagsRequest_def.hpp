#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListContainerImageTagsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ListContainerImageTagsRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ListContainerImageTagsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ListContainerImageTagsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ListContainerImageTagsRequest*, "PlayFab.MultiplayerModels", "ListContainerImageTagsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ListContainerImageTagsRequest
class CORDL_TYPE ListContainerImageTagsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ImageName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ImageName, put=__cordl_internal_set_ImageName)) ::StringW  ImageName;

static inline ::PlayFab::MultiplayerModels::ListContainerImageTagsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ImageName() const;

constexpr ::StringW& __cordl_internal_get_ImageName() ;

constexpr void __cordl_internal_set_ImageName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840ac0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListContainerImageTagsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListContainerImageTagsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListContainerImageTagsRequest(ListContainerImageTagsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListContainerImageTagsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListContainerImageTagsRequest(ListContainerImageTagsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19690};

/// @brief Field ImageName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ImageName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ListContainerImageTagsRequest, ___ImageName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ListContainerImageTagsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
