#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsSetStorageRetentionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InsightsSetStorageRetentionRequest)
// Forward declare root types
namespace PlayFab::InsightsModels {
class InsightsSetStorageRetentionRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*, "PlayFab.InsightsModels", "InsightsSetStorageRetentionRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::InsightsModels {
// Is value type: false
// CS Name: PlayFab.InsightsModels.InsightsSetStorageRetentionRequest
class CORDL_TYPE InsightsSetStorageRetentionRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field RetentionDays, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_RetentionDays, put=__cordl_internal_set_RetentionDays)) int32_t  RetentionDays;

static inline ::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_RetentionDays() const;

constexpr int32_t& __cordl_internal_get_RetentionDays() ;

constexpr void __cordl_internal_set_RetentionDays(int32_t  value) ;

/// @brief Method .ctor, addr 0xa840cf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsightsSetStorageRetentionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsightsSetStorageRetentionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsightsSetStorageRetentionRequest(InsightsSetStorageRetentionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsightsSetStorageRetentionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsightsSetStorageRetentionRequest(InsightsSetStorageRetentionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19764};

/// @brief Field RetentionDays, offset: 0x18, size: 0x4, def value: None
 int32_t  ___RetentionDays;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest, ___RetentionDays) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::InsightsModels
