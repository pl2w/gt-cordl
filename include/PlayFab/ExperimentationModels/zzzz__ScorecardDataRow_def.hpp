#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/ScorecardDataRow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScorecardDataRow)
namespace PlayFab::ExperimentationModels {
class MetricData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class ScorecardDataRow;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::ScorecardDataRow*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::ScorecardDataRow*, "PlayFab.ExperimentationModels", "ScorecardDataRow");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.ScorecardDataRow
class CORDL_TYPE ScorecardDataRow : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field IsControl, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsControl, put=__cordl_internal_set_IsControl)) bool  IsControl;

/// @brief Field MetricDataRows, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MetricDataRows, put=__cordl_internal_set_MetricDataRows)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ExperimentationModels::MetricData*>*  MetricDataRows;

/// @brief Field PlayerCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerCount, put=__cordl_internal_set_PlayerCount)) uint32_t  PlayerCount;

/// @brief Field VariantName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_VariantName, put=__cordl_internal_set_VariantName)) ::StringW  VariantName;

static inline ::PlayFab::ExperimentationModels::ScorecardDataRow* New_ctor() ;

constexpr bool const& __cordl_internal_get_IsControl() const;

constexpr bool& __cordl_internal_get_IsControl() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ExperimentationModels::MetricData*>* const& __cordl_internal_get_MetricDataRows() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ExperimentationModels::MetricData*>*& __cordl_internal_get_MetricDataRows() ;

constexpr uint32_t const& __cordl_internal_get_PlayerCount() const;

constexpr uint32_t& __cordl_internal_get_PlayerCount() ;

constexpr ::StringW const& __cordl_internal_get_VariantName() const;

constexpr ::StringW& __cordl_internal_get_VariantName() ;

constexpr void __cordl_internal_set_IsControl(bool  value) ;

constexpr void __cordl_internal_set_MetricDataRows(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ExperimentationModels::MetricData*>*  value) ;

constexpr void __cordl_internal_set_PlayerCount(uint32_t  value) ;

constexpr void __cordl_internal_set_VariantName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840ee8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScorecardDataRow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScorecardDataRow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScorecardDataRow(ScorecardDataRow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScorecardDataRow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScorecardDataRow(ScorecardDataRow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19831};

/// @brief Field IsControl, offset: 0x10, size: 0x1, def value: None
 bool  ___IsControl;

/// @brief Field MetricDataRows, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ExperimentationModels::MetricData*>*  ___MetricDataRows;

/// @brief Field PlayerCount, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___PlayerCount;

/// @brief Field VariantName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___VariantName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::ScorecardDataRow, ___IsControl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::ScorecardDataRow, ___MetricDataRows) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::ScorecardDataRow, ___PlayerCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::ScorecardDataRow, ___VariantName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::ScorecardDataRow) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
