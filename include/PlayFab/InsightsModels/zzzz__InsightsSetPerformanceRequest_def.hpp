#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsSetPerformanceRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InsightsSetPerformanceRequest)
// Forward declare root types
namespace PlayFab::InsightsModels {
class InsightsSetPerformanceRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::InsightsModels::InsightsSetPerformanceRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::InsightsModels::InsightsSetPerformanceRequest*, "PlayFab.InsightsModels", "InsightsSetPerformanceRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::InsightsModels {
// Is value type: false
// CS Name: PlayFab.InsightsModels.InsightsSetPerformanceRequest
class CORDL_TYPE InsightsSetPerformanceRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field PerformanceLevel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_PerformanceLevel, put=__cordl_internal_set_PerformanceLevel)) int32_t  PerformanceLevel;

static inline ::PlayFab::InsightsModels::InsightsSetPerformanceRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_PerformanceLevel() const;

constexpr int32_t& __cordl_internal_get_PerformanceLevel() ;

constexpr void __cordl_internal_set_PerformanceLevel(int32_t  value) ;

/// @brief Method .ctor, addr 0xa840ce8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsightsSetPerformanceRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsightsSetPerformanceRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsightsSetPerformanceRequest(InsightsSetPerformanceRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsightsSetPerformanceRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsightsSetPerformanceRequest(InsightsSetPerformanceRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19763};

/// @brief Field PerformanceLevel, offset: 0x18, size: 0x4, def value: None
 int32_t  ___PerformanceLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::InsightsModels::InsightsSetPerformanceRequest, ___PerformanceLevel) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::InsightsModels::InsightsSetPerformanceRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::InsightsModels
