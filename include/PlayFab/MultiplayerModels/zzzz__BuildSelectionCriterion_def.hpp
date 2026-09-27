#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/BuildSelectionCriterion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuildSelectionCriterion)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class BuildSelectionCriterion;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::BuildSelectionCriterion*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::BuildSelectionCriterion*, "PlayFab.MultiplayerModels", "BuildSelectionCriterion");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.BuildSelectionCriterion
class CORDL_TYPE BuildSelectionCriterion : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field BuildWeightDistribution, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildWeightDistribution, put=__cordl_internal_set_BuildWeightDistribution)) ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  BuildWeightDistribution;

static inline ::PlayFab::MultiplayerModels::BuildSelectionCriterion* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& __cordl_internal_get_BuildWeightDistribution() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& __cordl_internal_get_BuildWeightDistribution() ;

constexpr void __cordl_internal_set_BuildWeightDistribution(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value) ;

/// @brief Method .ctor, addr 0xa8407d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuildSelectionCriterion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuildSelectionCriterion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuildSelectionCriterion(BuildSelectionCriterion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuildSelectionCriterion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuildSelectionCriterion(BuildSelectionCriterion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19594};

/// @brief Field BuildWeightDistribution, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  ___BuildWeightDistribution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::BuildSelectionCriterion, ___BuildWeightDistribution) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::BuildSelectionCriterion) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
