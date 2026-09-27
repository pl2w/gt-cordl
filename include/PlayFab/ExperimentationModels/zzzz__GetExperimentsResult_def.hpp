#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/GetExperimentsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetExperimentsResult)
namespace PlayFab::ExperimentationModels {
class Experiment;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class GetExperimentsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::GetExperimentsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::GetExperimentsResult*, "PlayFab.ExperimentationModels", "GetExperimentsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.GetExperimentsResult
class CORDL_TYPE GetExperimentsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Experiments, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Experiments, put=__cordl_internal_set_Experiments)) ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Experiment*>*  Experiments;

static inline ::PlayFab::ExperimentationModels::GetExperimentsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Experiment*>* const& __cordl_internal_get_Experiments() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Experiment*>*& __cordl_internal_get_Experiments() ;

constexpr void __cordl_internal_set_Experiments(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Experiment*>*  value) ;

/// @brief Method .ctor, addr 0xa840eb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetExperimentsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetExperimentsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetExperimentsResult(GetExperimentsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetExperimentsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetExperimentsResult(GetExperimentsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19824};

/// @brief Field Experiments, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Experiment*>*  ___Experiments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::GetExperimentsResult, ___Experiments) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::GetExperimentsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
