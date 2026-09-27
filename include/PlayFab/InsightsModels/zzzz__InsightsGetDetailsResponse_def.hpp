#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetDetailsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InsightsGetDetailsResponse)
namespace PlayFab::InsightsModels {
class InsightsGetLimitsResponse;
}
namespace PlayFab::InsightsModels {
class InsightsGetOperationStatusResponse;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::InsightsModels {
class InsightsGetDetailsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::InsightsModels::InsightsGetDetailsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::InsightsModels::InsightsGetDetailsResponse*, "PlayFab.InsightsModels", "InsightsGetDetailsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::InsightsModels {
// Is value type: false
// CS Name: PlayFab.InsightsModels.InsightsGetDetailsResponse
class CORDL_TYPE InsightsGetDetailsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field DataUsageMb, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_DataUsageMb, put=__cordl_internal_set_DataUsageMb)) uint32_t  DataUsageMb;

/// @brief Field ErrorMessage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorMessage, put=__cordl_internal_set_ErrorMessage)) ::StringW  ErrorMessage;

/// @brief Field Limits, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Limits, put=__cordl_internal_set_Limits)) ::PlayFab::InsightsModels::InsightsGetLimitsResponse*  Limits;

/// @brief Field PendingOperations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PendingOperations, put=__cordl_internal_set_PendingOperations)) ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*  PendingOperations;

/// @brief Field PerformanceLevel, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_PerformanceLevel, put=__cordl_internal_set_PerformanceLevel)) int32_t  PerformanceLevel;

/// @brief Field RetentionDays, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_RetentionDays, put=__cordl_internal_set_RetentionDays)) int32_t  RetentionDays;

static inline ::PlayFab::InsightsModels::InsightsGetDetailsResponse* New_ctor() ;

constexpr uint32_t const& __cordl_internal_get_DataUsageMb() const;

constexpr uint32_t& __cordl_internal_get_DataUsageMb() ;

constexpr ::StringW const& __cordl_internal_get_ErrorMessage() const;

constexpr ::StringW& __cordl_internal_get_ErrorMessage() ;

constexpr ::PlayFab::InsightsModels::InsightsGetLimitsResponse* const& __cordl_internal_get_Limits() const;

constexpr ::PlayFab::InsightsModels::InsightsGetLimitsResponse*& __cordl_internal_get_Limits() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>* const& __cordl_internal_get_PendingOperations() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*& __cordl_internal_get_PendingOperations() ;

constexpr int32_t const& __cordl_internal_get_PerformanceLevel() const;

constexpr int32_t& __cordl_internal_get_PerformanceLevel() ;

constexpr int32_t const& __cordl_internal_get_RetentionDays() const;

constexpr int32_t& __cordl_internal_get_RetentionDays() ;

constexpr void __cordl_internal_set_DataUsageMb(uint32_t  value) ;

constexpr void __cordl_internal_set_ErrorMessage(::StringW  value) ;

constexpr void __cordl_internal_set_Limits(::PlayFab::InsightsModels::InsightsGetLimitsResponse*  value) ;

constexpr void __cordl_internal_set_PendingOperations(::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*  value) ;

constexpr void __cordl_internal_set_PerformanceLevel(int32_t  value) ;

constexpr void __cordl_internal_set_RetentionDays(int32_t  value) ;

/// @brief Method .ctor, addr 0xa840ca8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsightsGetDetailsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetDetailsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsightsGetDetailsResponse(InsightsGetDetailsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetDetailsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsightsGetDetailsResponse(InsightsGetDetailsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19755};

/// @brief Field DataUsageMb, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___DataUsageMb;

/// @brief Field ErrorMessage, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ErrorMessage;

/// @brief Field Limits, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::InsightsModels::InsightsGetLimitsResponse*  ___Limits;

/// @brief Field PendingOperations, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*  ___PendingOperations;

/// @brief Field PerformanceLevel, offset: 0x40, size: 0x4, def value: None
 int32_t  ___PerformanceLevel;

/// @brief Field RetentionDays, offset: 0x44, size: 0x4, def value: None
 int32_t  ___RetentionDays;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetDetailsResponse, ___DataUsageMb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetDetailsResponse, ___ErrorMessage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetDetailsResponse, ___Limits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetDetailsResponse, ___PendingOperations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetDetailsResponse, ___PerformanceLevel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetDetailsResponse, ___RetentionDays) == 0x44, "Offset mismatch!");

static_assert(sizeof(::PlayFab::InsightsModels::InsightsGetDetailsResponse) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::InsightsModels
