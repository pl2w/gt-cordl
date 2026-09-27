#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/Scorecard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ExperimentationModels/zzzz__AnalysisTaskState_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Scorecard)
namespace PlayFab::ExperimentationModels {
class ScorecardDataRow;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class Scorecard;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::Scorecard*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::Scorecard*, "PlayFab.ExperimentationModels", "Scorecard");
// Dependencies PlayFab.ExperimentationModels.AnalysisTaskState, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.Scorecard
class CORDL_TYPE Scorecard : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field DateGenerated, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DateGenerated, put=__cordl_internal_set_DateGenerated)) ::StringW  DateGenerated;

/// @brief Field Duration, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Duration, put=__cordl_internal_set_Duration)) ::StringW  Duration;

/// @brief Field EventsProcessed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_EventsProcessed, put=__cordl_internal_set_EventsProcessed)) double_t  EventsProcessed;

/// @brief Field ExperimentId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExperimentId, put=__cordl_internal_set_ExperimentId)) ::StringW  ExperimentId;

/// @brief Field ExperimentName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExperimentName, put=__cordl_internal_set_ExperimentName)) ::StringW  ExperimentName;

/// @brief Field LatestJobStatus, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_LatestJobStatus, put=__cordl_internal_set_LatestJobStatus)) ::System::Nullable_1<::PlayFab::ExperimentationModels::AnalysisTaskState>  LatestJobStatus;

/// @brief Field SampleRatioMismatch, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_SampleRatioMismatch, put=__cordl_internal_set_SampleRatioMismatch)) bool  SampleRatioMismatch;

/// @brief Field ScorecardDataRows, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScorecardDataRows, put=__cordl_internal_set_ScorecardDataRows)) ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::ScorecardDataRow*>*  ScorecardDataRows;

static inline ::PlayFab::ExperimentationModels::Scorecard* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_DateGenerated() const;

constexpr ::StringW& __cordl_internal_get_DateGenerated() ;

constexpr ::StringW const& __cordl_internal_get_Duration() const;

constexpr ::StringW& __cordl_internal_get_Duration() ;

constexpr double_t const& __cordl_internal_get_EventsProcessed() const;

constexpr double_t& __cordl_internal_get_EventsProcessed() ;

constexpr ::StringW const& __cordl_internal_get_ExperimentId() const;

constexpr ::StringW& __cordl_internal_get_ExperimentId() ;

constexpr ::StringW const& __cordl_internal_get_ExperimentName() const;

constexpr ::StringW& __cordl_internal_get_ExperimentName() ;

constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::AnalysisTaskState> const& __cordl_internal_get_LatestJobStatus() const;

constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::AnalysisTaskState>& __cordl_internal_get_LatestJobStatus() ;

constexpr bool const& __cordl_internal_get_SampleRatioMismatch() const;

constexpr bool& __cordl_internal_get_SampleRatioMismatch() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::ScorecardDataRow*>* const& __cordl_internal_get_ScorecardDataRows() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::ScorecardDataRow*>*& __cordl_internal_get_ScorecardDataRows() ;

constexpr void __cordl_internal_set_DateGenerated(::StringW  value) ;

constexpr void __cordl_internal_set_Duration(::StringW  value) ;

constexpr void __cordl_internal_set_EventsProcessed(double_t  value) ;

constexpr void __cordl_internal_set_ExperimentId(::StringW  value) ;

constexpr void __cordl_internal_set_ExperimentName(::StringW  value) ;

constexpr void __cordl_internal_set_LatestJobStatus(::System::Nullable_1<::PlayFab::ExperimentationModels::AnalysisTaskState>  value) ;

constexpr void __cordl_internal_set_SampleRatioMismatch(bool  value) ;

constexpr void __cordl_internal_set_ScorecardDataRows(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::ScorecardDataRow*>*  value) ;

/// @brief Method .ctor, addr 0xa840ee0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Scorecard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Scorecard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Scorecard(Scorecard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Scorecard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Scorecard(Scorecard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19830};

/// @brief Field DateGenerated, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___DateGenerated;

/// @brief Field Duration, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Duration;

/// @brief Field EventsProcessed, offset: 0x20, size: 0x8, def value: None
 double_t  ___EventsProcessed;

/// @brief Field ExperimentId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ExperimentId;

/// @brief Field ExperimentName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___ExperimentName;

/// @brief Field LatestJobStatus, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ExperimentationModels::AnalysisTaskState>  ___LatestJobStatus;

/// @brief Field SampleRatioMismatch, offset: 0x48, size: 0x1, def value: None
 bool  ___SampleRatioMismatch;

/// @brief Field ScorecardDataRows, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::ScorecardDataRow*>*  ___ScorecardDataRows;

/// @brief Size padding 0x50 - 0x58 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::Scorecard, ___DateGenerated) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Scorecard, ___Duration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Scorecard, ___EventsProcessed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Scorecard, ___ExperimentId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Scorecard, ___ExperimentName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Scorecard, ___LatestJobStatus) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Scorecard, ___SampleRatioMismatch) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Scorecard, ___ScorecardDataRows) == 0x50, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::Scorecard) == 0x50, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
