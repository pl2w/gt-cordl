#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetPendingOperationsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InsightsGetPendingOperationsRequest)
// Forward declare root types
namespace PlayFab::InsightsModels {
class InsightsGetPendingOperationsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*, "PlayFab.InsightsModels", "InsightsGetPendingOperationsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::InsightsModels {
// Is value type: false
// CS Name: PlayFab.InsightsModels.InsightsGetPendingOperationsRequest
class CORDL_TYPE InsightsGetPendingOperationsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field OperationType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationType, put=__cordl_internal_set_OperationType)) ::StringW  OperationType;

static inline ::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_OperationType() const;

constexpr ::StringW& __cordl_internal_get_OperationType() ;

constexpr void __cordl_internal_set_OperationType(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840cc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsightsGetPendingOperationsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetPendingOperationsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsightsGetPendingOperationsRequest(InsightsGetPendingOperationsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetPendingOperationsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsightsGetPendingOperationsRequest(InsightsGetPendingOperationsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19759};

/// @brief Field OperationType, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___OperationType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest, ___OperationType) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::InsightsModels
