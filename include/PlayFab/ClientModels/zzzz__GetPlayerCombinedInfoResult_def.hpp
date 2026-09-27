#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerCombinedInfoResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayerCombinedInfoResult)
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoResultPayload;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerCombinedInfoResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerCombinedInfoResult*, "PlayFab.ClientModels", "GetPlayerCombinedInfoResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerCombinedInfoResult
class CORDL_TYPE GetPlayerCombinedInfoResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field InfoResultPayload, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_InfoResultPayload, put=__cordl_internal_set_InfoResultPayload)) ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*  InfoResultPayload;

/// @brief Field PlayFabId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

static inline ::PlayFab::ClientModels::GetPlayerCombinedInfoResult* New_ctor() ;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload* const& __cordl_internal_get_InfoResultPayload() const;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*& __cordl_internal_get_InfoResultPayload() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr void __cordl_internal_set_InfoResultPayload(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dcd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerCombinedInfoResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerCombinedInfoResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerCombinedInfoResult(GetPlayerCombinedInfoResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerCombinedInfoResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerCombinedInfoResult(GetPlayerCombinedInfoResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20041};

/// @brief Field InfoResultPayload, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*  ___InfoResultPayload;

/// @brief Field PlayFabId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResult, ___InfoResultPayload) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoResult, ___PlayFabId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerCombinedInfoResult) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
