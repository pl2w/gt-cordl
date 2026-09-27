#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetBuildRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetBuildRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetBuildRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetBuildRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetBuildRequest*, "PlayFab.MultiplayerModels", "GetBuildRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetBuildRequest
class CORDL_TYPE GetBuildRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field BuildId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildId, put=__cordl_internal_set_BuildId)) ::StringW  BuildId;

static inline ::PlayFab::MultiplayerModels::GetBuildRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BuildId() const;

constexpr ::StringW& __cordl_internal_get_BuildId() ;

constexpr void __cordl_internal_set_BuildId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840970, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetBuildRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetBuildRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetBuildRequest(GetBuildRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetBuildRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetBuildRequest(GetBuildRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19648};

/// @brief Field BuildId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BuildId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetBuildRequest, ___BuildId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetBuildRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
