#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetAdPlacementsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetAdPlacementsResult)
namespace PlayFab::ClientModels {
class AdPlacementDetails;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetAdPlacementsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetAdPlacementsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetAdPlacementsResult*, "PlayFab.ClientModels", "GetAdPlacementsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetAdPlacementsResult
class CORDL_TYPE GetAdPlacementsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field AdPlacements, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AdPlacements, put=__cordl_internal_set_AdPlacements)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdPlacementDetails*>*  AdPlacements;

static inline ::PlayFab::ClientModels::GetAdPlacementsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdPlacementDetails*>* const& __cordl_internal_get_AdPlacements() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdPlacementDetails*>*& __cordl_internal_get_AdPlacements() ;

constexpr void __cordl_internal_set_AdPlacements(::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdPlacementDetails*>*  value) ;

/// @brief Method .ctor, addr 0xa84dbd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetAdPlacementsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetAdPlacementsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetAdPlacementsResult(GetAdPlacementsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetAdPlacementsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetAdPlacementsResult(GetAdPlacementsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20009};

/// @brief Field AdPlacements, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdPlacementDetails*>*  ___AdPlacements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetAdPlacementsResult, ___AdPlacements) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetAdPlacementsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
