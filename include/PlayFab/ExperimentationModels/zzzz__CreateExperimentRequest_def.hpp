#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/CreateExperimentRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ExperimentationModels/zzzz__ExperimentType_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateExperimentRequest)
namespace PlayFab::ExperimentationModels {
class Variant;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class CreateExperimentRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::CreateExperimentRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::CreateExperimentRequest*, "PlayFab.ExperimentationModels", "CreateExperimentRequest");
// Dependencies PlayFab.ExperimentationModels.ExperimentType, PlayFab.SharedModels.PlayFabRequestCommon, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.CreateExperimentRequest
class CORDL_TYPE CreateExperimentRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Description, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Description, put=__cordl_internal_set_Description)) ::StringW  Description;

/// @brief Field Duration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Duration, put=__cordl_internal_set_Duration)) uint32_t  Duration;

/// @brief Field ExperimentType, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_ExperimentType, put=__cordl_internal_set_ExperimentType)) ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType>  ExperimentType;

/// @brief Field Name, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field SegmentId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SegmentId, put=__cordl_internal_set_SegmentId)) ::StringW  SegmentId;

/// @brief Field StartDate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartDate, put=__cordl_internal_set_StartDate)) ::System::DateTime  StartDate;

/// @brief Field TitlePlayerAccountTestIds, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitlePlayerAccountTestIds, put=__cordl_internal_set_TitlePlayerAccountTestIds)) ::System::Collections::Generic::List_1<::StringW>*  TitlePlayerAccountTestIds;

/// @brief Field Variants, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Variants, put=__cordl_internal_set_Variants)) ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>*  Variants;

static inline ::PlayFab::ExperimentationModels::CreateExperimentRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Description() const;

constexpr ::StringW& __cordl_internal_get_Description() ;

constexpr uint32_t const& __cordl_internal_get_Duration() const;

constexpr uint32_t& __cordl_internal_get_Duration() ;

constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType> const& __cordl_internal_get_ExperimentType() const;

constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType>& __cordl_internal_get_ExperimentType() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::StringW const& __cordl_internal_get_SegmentId() const;

constexpr ::StringW& __cordl_internal_get_SegmentId() ;

constexpr ::System::DateTime const& __cordl_internal_get_StartDate() const;

constexpr ::System::DateTime& __cordl_internal_get_StartDate() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_TitlePlayerAccountTestIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_TitlePlayerAccountTestIds() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>* const& __cordl_internal_get_Variants() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>*& __cordl_internal_get_Variants() ;

constexpr void __cordl_internal_set_Description(::StringW  value) ;

constexpr void __cordl_internal_set_Duration(uint32_t  value) ;

constexpr void __cordl_internal_set_ExperimentType(::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType>  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_SegmentId(::StringW  value) ;

constexpr void __cordl_internal_set_StartDate(::System::DateTime  value) ;

constexpr void __cordl_internal_set_TitlePlayerAccountTestIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_Variants(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>*  value) ;

/// @brief Method .ctor, addr 0xa840e78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateExperimentRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateExperimentRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateExperimentRequest(CreateExperimentRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateExperimentRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateExperimentRequest(CreateExperimentRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19815};

/// @brief Field Description, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Description;

/// @brief Field Duration, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___Duration;

/// @brief Field ExperimentType, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType>  ___ExperimentType;

/// @brief Field Name, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field SegmentId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___SegmentId;

/// @brief Field StartDate, offset: 0x48, size: 0x8, def value: None
 ::System::DateTime  ___StartDate;

/// @brief Field TitlePlayerAccountTestIds, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___TitlePlayerAccountTestIds;

/// @brief Field Variants, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>*  ___Variants;

/// @brief Size padding 0x58 - 0x60 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::CreateExperimentRequest, ___Description) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::CreateExperimentRequest, ___Duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::CreateExperimentRequest, ___ExperimentType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::CreateExperimentRequest, ___Name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::CreateExperimentRequest, ___SegmentId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::CreateExperimentRequest, ___StartDate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::CreateExperimentRequest, ___TitlePlayerAccountTestIds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ExperimentationModels::CreateExperimentRequest, ___Variants) == 0x58, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::CreateExperimentRequest) == 0x58, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
