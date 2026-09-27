#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RewardAdActivityResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RewardAdActivityResult)
namespace PlayFab::ClientModels {
class AdRewardResults;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class RewardAdActivityResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RewardAdActivityResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RewardAdActivityResult*, "PlayFab.ClientModels", "RewardAdActivityResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RewardAdActivityResult
class CORDL_TYPE RewardAdActivityResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field AdActivityEventId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AdActivityEventId, put=__cordl_internal_set_AdActivityEventId)) ::StringW  AdActivityEventId;

/// @brief Field DebugResults, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DebugResults, put=__cordl_internal_set_DebugResults)) ::System::Collections::Generic::List_1<::StringW>*  DebugResults;

/// @brief Field PlacementId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlacementId, put=__cordl_internal_set_PlacementId)) ::StringW  PlacementId;

/// @brief Field PlacementName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlacementName, put=__cordl_internal_set_PlacementName)) ::StringW  PlacementName;

/// @brief Field PlacementViewsRemaining, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_PlacementViewsRemaining, put=__cordl_internal_set_PlacementViewsRemaining)) ::System::Nullable_1<int32_t>  PlacementViewsRemaining;

/// @brief Field PlacementViewsResetMinutes, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_PlacementViewsResetMinutes, put=__cordl_internal_set_PlacementViewsResetMinutes)) ::System::Nullable_1<double_t>  PlacementViewsResetMinutes;

/// @brief Field RewardResults, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_RewardResults, put=__cordl_internal_set_RewardResults)) ::PlayFab::ClientModels::AdRewardResults*  RewardResults;

static inline ::PlayFab::ClientModels::RewardAdActivityResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AdActivityEventId() const;

constexpr ::StringW& __cordl_internal_get_AdActivityEventId() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_DebugResults() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_DebugResults() ;

constexpr ::StringW const& __cordl_internal_get_PlacementId() const;

constexpr ::StringW& __cordl_internal_get_PlacementId() ;

constexpr ::StringW const& __cordl_internal_get_PlacementName() const;

constexpr ::StringW& __cordl_internal_get_PlacementName() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_PlacementViewsRemaining() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_PlacementViewsRemaining() ;

constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get_PlacementViewsResetMinutes() const;

constexpr ::System::Nullable_1<double_t>& __cordl_internal_get_PlacementViewsResetMinutes() ;

constexpr ::PlayFab::ClientModels::AdRewardResults* const& __cordl_internal_get_RewardResults() const;

constexpr ::PlayFab::ClientModels::AdRewardResults*& __cordl_internal_get_RewardResults() ;

constexpr void __cordl_internal_set_AdActivityEventId(::StringW  value) ;

constexpr void __cordl_internal_set_DebugResults(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PlacementId(::StringW  value) ;

constexpr void __cordl_internal_set_PlacementName(::StringW  value) ;

constexpr void __cordl_internal_set_PlacementViewsRemaining(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_PlacementViewsResetMinutes(::System::Nullable_1<double_t>  value) ;

constexpr void __cordl_internal_set_RewardResults(::PlayFab::ClientModels::AdRewardResults*  value) ;

/// @brief Method .ctor, addr 0xa84e208, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewardAdActivityResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewardAdActivityResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RewardAdActivityResult(RewardAdActivityResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewardAdActivityResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewardAdActivityResult(RewardAdActivityResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20212};

/// @brief Field AdActivityEventId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AdActivityEventId;

/// @brief Field DebugResults, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___DebugResults;

/// @brief Field PlacementId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___PlacementId;

/// @brief Field PlacementName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___PlacementName;

/// @brief Field PlacementViewsRemaining, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___PlacementViewsRemaining;

/// @brief Field PlacementViewsResetMinutes, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<double_t>  ___PlacementViewsResetMinutes;

/// @brief Field RewardResults, offset: 0x60, size: 0x8, def value: None
 ::PlayFab::ClientModels::AdRewardResults*  ___RewardResults;

/// @brief Size padding 0x60 - 0x68 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RewardAdActivityResult, ___AdActivityEventId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RewardAdActivityResult, ___DebugResults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RewardAdActivityResult, ___PlacementId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RewardAdActivityResult, ___PlacementName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RewardAdActivityResult, ___PlacementViewsRemaining) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RewardAdActivityResult, ___PlacementViewsResetMinutes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::RewardAdActivityResult, ___RewardResults) == 0x60, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RewardAdActivityResult) == 0x60, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
