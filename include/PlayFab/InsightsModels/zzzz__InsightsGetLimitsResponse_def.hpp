#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetLimitsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InsightsGetLimitsResponse)
namespace PlayFab::InsightsModels {
class InsightsPerformanceLevel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::InsightsModels {
class InsightsGetLimitsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::InsightsModels::InsightsGetLimitsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::InsightsModels::InsightsGetLimitsResponse*, "PlayFab.InsightsModels", "InsightsGetLimitsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::InsightsModels {
// Is value type: false
// CS Name: PlayFab.InsightsModels.InsightsGetLimitsResponse
class CORDL_TYPE InsightsGetLimitsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field DefaultPerformanceLevel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_DefaultPerformanceLevel, put=__cordl_internal_set_DefaultPerformanceLevel)) int32_t  DefaultPerformanceLevel;

/// @brief Field DefaultStorageRetentionDays, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_DefaultStorageRetentionDays, put=__cordl_internal_set_DefaultStorageRetentionDays)) int32_t  DefaultStorageRetentionDays;

/// @brief Field StorageMaxRetentionDays, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_StorageMaxRetentionDays, put=__cordl_internal_set_StorageMaxRetentionDays)) int32_t  StorageMaxRetentionDays;

/// @brief Field StorageMinRetentionDays, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_StorageMinRetentionDays, put=__cordl_internal_set_StorageMinRetentionDays)) int32_t  StorageMinRetentionDays;

/// @brief Field SubMeters, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SubMeters, put=__cordl_internal_set_SubMeters)) ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsPerformanceLevel*>*  SubMeters;

static inline ::PlayFab::InsightsModels::InsightsGetLimitsResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_DefaultPerformanceLevel() const;

constexpr int32_t& __cordl_internal_get_DefaultPerformanceLevel() ;

constexpr int32_t const& __cordl_internal_get_DefaultStorageRetentionDays() const;

constexpr int32_t& __cordl_internal_get_DefaultStorageRetentionDays() ;

constexpr int32_t const& __cordl_internal_get_StorageMaxRetentionDays() const;

constexpr int32_t& __cordl_internal_get_StorageMaxRetentionDays() ;

constexpr int32_t const& __cordl_internal_get_StorageMinRetentionDays() const;

constexpr int32_t& __cordl_internal_get_StorageMinRetentionDays() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsPerformanceLevel*>* const& __cordl_internal_get_SubMeters() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsPerformanceLevel*>*& __cordl_internal_get_SubMeters() ;

constexpr void __cordl_internal_set_DefaultPerformanceLevel(int32_t  value) ;

constexpr void __cordl_internal_set_DefaultStorageRetentionDays(int32_t  value) ;

constexpr void __cordl_internal_set_StorageMaxRetentionDays(int32_t  value) ;

constexpr void __cordl_internal_set_StorageMinRetentionDays(int32_t  value) ;

constexpr void __cordl_internal_set_SubMeters(::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsPerformanceLevel*>*  value) ;

/// @brief Method .ctor, addr 0xa840cb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsightsGetLimitsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetLimitsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsightsGetLimitsResponse(InsightsGetLimitsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetLimitsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsightsGetLimitsResponse(InsightsGetLimitsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19756};

/// @brief Field DefaultPerformanceLevel, offset: 0x20, size: 0x4, def value: None
 int32_t  ___DefaultPerformanceLevel;

/// @brief Field DefaultStorageRetentionDays, offset: 0x24, size: 0x4, def value: None
 int32_t  ___DefaultStorageRetentionDays;

/// @brief Field StorageMaxRetentionDays, offset: 0x28, size: 0x4, def value: None
 int32_t  ___StorageMaxRetentionDays;

/// @brief Field StorageMinRetentionDays, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___StorageMinRetentionDays;

/// @brief Field SubMeters, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsPerformanceLevel*>*  ___SubMeters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetLimitsResponse, ___DefaultPerformanceLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetLimitsResponse, ___DefaultStorageRetentionDays) == 0x24, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetLimitsResponse, ___StorageMaxRetentionDays) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetLimitsResponse, ___StorageMinRetentionDays) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetLimitsResponse, ___SubMeters) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::InsightsModels::InsightsGetLimitsResponse) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::InsightsModels
