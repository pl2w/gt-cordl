#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerTradesRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__TradeStatus_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(GetPlayerTradesRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerTradesRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerTradesRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerTradesRequest*, "PlayFab.ClientModels", "GetPlayerTradesRequest");
// Dependencies PlayFab.ClientModels.TradeStatus, PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerTradesRequest
class CORDL_TYPE GetPlayerTradesRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field StatusFilter, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_StatusFilter, put=__cordl_internal_set_StatusFilter)) ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>  StatusFilter;

static inline ::PlayFab::ClientModels::GetPlayerTradesRequest* New_ctor() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus> const& __cordl_internal_get_StatusFilter() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>& __cordl_internal_get_StatusFilter() ;

constexpr void __cordl_internal_set_StatusFilter(::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>  value) ;

/// @brief Method .ctor, addr 0xa84dd30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerTradesRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerTradesRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerTradesRequest(GetPlayerTradesRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerTradesRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerTradesRequest(GetPlayerTradesRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20053};

/// @brief Field StatusFilter, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>  ___StatusFilter;

/// @brief Size padding 0x20 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerTradesRequest, ___StatusFilter) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerTradesRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
