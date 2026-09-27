#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetOperationStatusRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InsightsGetOperationStatusRequest)
// Forward declare root types
namespace PlayFab::InsightsModels {
class InsightsGetOperationStatusRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*, "PlayFab.InsightsModels", "InsightsGetOperationStatusRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::InsightsModels {
// Is value type: false
// CS Name: PlayFab.InsightsModels.InsightsGetOperationStatusRequest
class CORDL_TYPE InsightsGetOperationStatusRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field OperationId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationId, put=__cordl_internal_set_OperationId)) ::StringW  OperationId;

static inline ::PlayFab::InsightsModels::InsightsGetOperationStatusRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_OperationId() const;

constexpr ::StringW& __cordl_internal_get_OperationId() ;

constexpr void __cordl_internal_set_OperationId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840cb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsightsGetOperationStatusRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetOperationStatusRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsightsGetOperationStatusRequest(InsightsGetOperationStatusRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetOperationStatusRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsightsGetOperationStatusRequest(InsightsGetOperationStatusRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19757};

/// @brief Field OperationId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___OperationId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetOperationStatusRequest, ___OperationId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::InsightsModels::InsightsGetOperationStatusRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::InsightsModels
