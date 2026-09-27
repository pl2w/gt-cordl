#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/Experiment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ExperimentationModels/zzzz__ExperimentState_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__ExperimentType_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Experiment)
namespace PlayFab::ExperimentationModels {
class Variant;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class Experiment;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::Experiment*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::Experiment*, "PlayFab.ExperimentationModels", "Experiment");
// Dependencies PlayFab.ExperimentationModels.ExperimentState, PlayFab.ExperimentationModels.ExperimentType, PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.Experiment
class CORDL_TYPE Experiment : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Description, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Description, put=__cordl_internal_set_Description)) ::StringW  Description;

/// @brief Field Duration, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Duration, put=__cordl_internal_set_Duration)) uint32_t  Duration;

/// @brief Field ExperimentType, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ExperimentType, put=__cordl_internal_set_ExperimentType)) ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType>  ExperimentType;

/// @brief Field Id, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field Name, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field SegmentId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SegmentId, put=__cordl_internal_set_SegmentId)) ::StringW  SegmentId;

/// @brief Field StartDate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartDate, put=__cordl_internal_set_StartDate)) ::System::DateTime  StartDate;

/// @brief Field State, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_State, put=__cordl_internal_set_State)) ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentState>  State;

/// @brief Field TitlePlayerAccountTestIds, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitlePlayerAccountTestIds, put=__cordl_internal_set_TitlePlayerAccountTestIds)) ::System::Collections::Generic::List_1<::StringW>*  TitlePlayerAccountTestIds;

/// @brief Field Variants, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_Variants, put=__cordl_internal_set_Variants)) ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>*  Variants;

static inline ::PlayFab::ExperimentationModels::Experiment* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Description() const;

constexpr ::StringW& __cordl_internal_get_Description() ;

constexpr uint32_t const& __cordl_internal_get_Duration() const;

constexpr uint32_t& __cordl_internal_get_Duration() ;

constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType> const& __cordl_internal_get_ExperimentType() const;

constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType>& __cordl_internal_get_ExperimentType() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::StringW const& __cordl_internal_get_SegmentId() const;

constexpr ::StringW& __cordl_internal_get_SegmentId() ;

constexpr ::System::DateTime const& __cordl_internal_get_StartDate() const;

constexpr ::System::DateTime& __cordl_internal_get_StartDate() ;

constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentState> const& __cordl_internal_get_State() const;

constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentState>& __cordl_internal_get_State() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_TitlePlayerAccountTestIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_TitlePlayerAccountTestIds() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>* const& __cordl_internal_get_Variants() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>*& __cordl_internal_get_Variants() ;

constexpr void __cordl_internal_set_Description(::StringW  value) ;

constexpr void __cordl_internal_set_Duration(uint32_t  value) ;

constexpr void __cordl_internal_set_ExperimentType(::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType>  value) ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_SegmentId(::StringW  value) ;

constexpr void __cordl_internal_set_StartDate(::System::DateTime  value) ;

constexpr void __cordl_internal_set_State(::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentState>  value) ;

constexpr void __cordl_internal_set_TitlePlayerAccountTestIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_Variants(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>*  value) ;

/// @brief Method .ctor, addr 0xa840ea0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Experiment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Experiment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Experiment(Experiment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Experiment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Experiment(Experiment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19820};

/// @brief Field Description, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Description;

/// @brief Field Duration, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___Duration;

/// @brief Field ExperimentType, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType>  ___ExperimentType;

/// @brief Field Id, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field Name, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field SegmentId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___SegmentId;

/// @brief Field StartDate, offset: 0x48, size: 0x8, def value: None
 ::System::DateTime  ___StartDate;

/// @brief Field State, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentState>  ___State;

/// @brief Field TitlePlayerAccountTestIds, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___TitlePlayerAccountTestIds;

/// @brief Size padding 0x60 - 0x70 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field Variants, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>*  ___Variants;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::Experiment, ___Description) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Experiment, ___Duration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Experiment, ___ExperimentType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Experiment, ___Id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Experiment, ___Name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Experiment, ___SegmentId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Experiment, ___StartDate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Experiment, ___State) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Experiment, ___TitlePlayerAccountTestIds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::Experiment, ___Variants) == 0x68, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::Experiment) == 0x60, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
