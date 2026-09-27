#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/MetricData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MetricData)
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class MetricData;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::MetricData*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::MetricData*, "PlayFab.ExperimentationModels", "MetricData");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.MetricData
class CORDL_TYPE MetricData : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ConfidenceIntervalEnd, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConfidenceIntervalEnd, put=__cordl_internal_set_ConfidenceIntervalEnd)) double_t  ConfidenceIntervalEnd;

/// @brief Field ConfidenceIntervalStart, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConfidenceIntervalStart, put=__cordl_internal_set_ConfidenceIntervalStart)) double_t  ConfidenceIntervalStart;

/// @brief Field DeltaAbsoluteChange, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_DeltaAbsoluteChange, put=__cordl_internal_set_DeltaAbsoluteChange)) float_t  DeltaAbsoluteChange;

/// @brief Field DeltaRelativeChange, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_DeltaRelativeChange, put=__cordl_internal_set_DeltaRelativeChange)) float_t  DeltaRelativeChange;

/// @brief Field InternalName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_InternalName, put=__cordl_internal_set_InternalName)) ::StringW  InternalName;

/// @brief Field Movement, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Movement, put=__cordl_internal_set_Movement)) ::StringW  Movement;

/// @brief Field Name, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field PMove, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_PMove, put=__cordl_internal_set_PMove)) float_t  PMove;

/// @brief Field PValue, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_PValue, put=__cordl_internal_set_PValue)) float_t  PValue;

/// @brief Field PValueThreshold, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_PValueThreshold, put=__cordl_internal_set_PValueThreshold)) float_t  PValueThreshold;

/// @brief Field StatSigLevel, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatSigLevel, put=__cordl_internal_set_StatSigLevel)) ::StringW  StatSigLevel;

/// @brief Field StdDev, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_StdDev, put=__cordl_internal_set_StdDev)) float_t  StdDev;

/// @brief Field Value, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) float_t  Value;

static inline ::PlayFab::ExperimentationModels::MetricData* New_ctor() ;

constexpr double_t const& __cordl_internal_get_ConfidenceIntervalEnd() const;

constexpr double_t& __cordl_internal_get_ConfidenceIntervalEnd() ;

constexpr double_t const& __cordl_internal_get_ConfidenceIntervalStart() const;

constexpr double_t& __cordl_internal_get_ConfidenceIntervalStart() ;

constexpr float_t const& __cordl_internal_get_DeltaAbsoluteChange() const;

constexpr float_t& __cordl_internal_get_DeltaAbsoluteChange() ;

constexpr float_t const& __cordl_internal_get_DeltaRelativeChange() const;

constexpr float_t& __cordl_internal_get_DeltaRelativeChange() ;

constexpr ::StringW const& __cordl_internal_get_InternalName() const;

constexpr ::StringW& __cordl_internal_get_InternalName() ;

constexpr ::StringW const& __cordl_internal_get_Movement() const;

constexpr ::StringW& __cordl_internal_get_Movement() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr float_t const& __cordl_internal_get_PMove() const;

constexpr float_t& __cordl_internal_get_PMove() ;

constexpr float_t const& __cordl_internal_get_PValue() const;

constexpr float_t& __cordl_internal_get_PValue() ;

constexpr float_t const& __cordl_internal_get_PValueThreshold() const;

constexpr float_t& __cordl_internal_get_PValueThreshold() ;

constexpr ::StringW const& __cordl_internal_get_StatSigLevel() const;

constexpr ::StringW& __cordl_internal_get_StatSigLevel() ;

constexpr float_t const& __cordl_internal_get_StdDev() const;

constexpr float_t& __cordl_internal_get_StdDev() ;

constexpr float_t const& __cordl_internal_get_Value() const;

constexpr float_t& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_ConfidenceIntervalEnd(double_t  value) ;

constexpr void __cordl_internal_set_ConfidenceIntervalStart(double_t  value) ;

constexpr void __cordl_internal_set_DeltaAbsoluteChange(float_t  value) ;

constexpr void __cordl_internal_set_DeltaRelativeChange(float_t  value) ;

constexpr void __cordl_internal_set_InternalName(::StringW  value) ;

constexpr void __cordl_internal_set_Movement(::StringW  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_PMove(float_t  value) ;

constexpr void __cordl_internal_set_PValue(float_t  value) ;

constexpr void __cordl_internal_set_PValueThreshold(float_t  value) ;

constexpr void __cordl_internal_set_StatSigLevel(::StringW  value) ;

constexpr void __cordl_internal_set_StdDev(float_t  value) ;

constexpr void __cordl_internal_set_Value(float_t  value) ;

/// @brief Method .ctor, addr 0xa840ed8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetricData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetricData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetricData(MetricData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetricData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetricData(MetricData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19829};

/// @brief Field ConfidenceIntervalEnd, offset: 0x10, size: 0x8, def value: None
 double_t  ___ConfidenceIntervalEnd;

/// @brief Field ConfidenceIntervalStart, offset: 0x18, size: 0x8, def value: None
 double_t  ___ConfidenceIntervalStart;

/// @brief Field DeltaAbsoluteChange, offset: 0x20, size: 0x4, def value: None
 float_t  ___DeltaAbsoluteChange;

/// @brief Field DeltaRelativeChange, offset: 0x24, size: 0x4, def value: None
 float_t  ___DeltaRelativeChange;

/// @brief Field InternalName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___InternalName;

/// @brief Field Movement, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Movement;

/// @brief Field Name, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field PMove, offset: 0x40, size: 0x4, def value: None
 float_t  ___PMove;

/// @brief Field PValue, offset: 0x44, size: 0x4, def value: None
 float_t  ___PValue;

/// @brief Field PValueThreshold, offset: 0x48, size: 0x4, def value: None
 float_t  ___PValueThreshold;

/// @brief Field StatSigLevel, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___StatSigLevel;

/// @brief Field StdDev, offset: 0x58, size: 0x4, def value: None
 float_t  ___StdDev;

/// @brief Field Value, offset: 0x5c, size: 0x4, def value: None
 float_t  ___Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___ConfidenceIntervalEnd) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___ConfidenceIntervalStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___DeltaAbsoluteChange) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___DeltaRelativeChange) == 0x24, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___InternalName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___Movement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___Name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___PMove) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___PValue) == 0x44, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___PValueThreshold) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___StatSigLevel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___StdDev) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::MetricData, ___Value) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::MetricData) == 0x60, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
