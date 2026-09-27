#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerStatisticVersionsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayerStatisticVersionsRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerStatisticVersionsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerStatisticVersionsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerStatisticVersionsRequest*, "PlayFab.ClientModels", "GetPlayerStatisticVersionsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerStatisticVersionsRequest
class CORDL_TYPE GetPlayerStatisticVersionsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field StatisticName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

static inline ::PlayFab::ClientModels::GetPlayerStatisticVersionsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dd10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerStatisticVersionsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerStatisticVersionsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerStatisticVersionsRequest(GetPlayerStatisticVersionsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerStatisticVersionsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerStatisticVersionsRequest(GetPlayerStatisticVersionsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20049};

/// @brief Field StatisticName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___StatisticName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerStatisticVersionsRequest, ___StatisticName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerStatisticVersionsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
