#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsEmptyRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(InsightsEmptyRequest)
// Forward declare root types
namespace PlayFab::InsightsModels {
class InsightsEmptyRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::InsightsModels::InsightsEmptyRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::InsightsModels::InsightsEmptyRequest*, "PlayFab.InsightsModels", "InsightsEmptyRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::InsightsModels {
// Is value type: false
// CS Name: PlayFab.InsightsModels.InsightsEmptyRequest
class CORDL_TYPE InsightsEmptyRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::InsightsModels::InsightsEmptyRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa840ca0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsightsEmptyRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsightsEmptyRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsightsEmptyRequest(InsightsEmptyRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsightsEmptyRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsightsEmptyRequest(InsightsEmptyRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19754};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::InsightsModels::InsightsEmptyRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::InsightsModels
