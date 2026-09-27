#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetPendingOperationsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(InsightsGetPendingOperationsResponse)
namespace PlayFab::InsightsModels {
class InsightsGetOperationStatusResponse;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::InsightsModels {
class InsightsGetPendingOperationsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*, "PlayFab.InsightsModels", "InsightsGetPendingOperationsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::InsightsModels {
// Is value type: false
// CS Name: PlayFab.InsightsModels.InsightsGetPendingOperationsResponse
class CORDL_TYPE InsightsGetPendingOperationsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field PendingOperations, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PendingOperations, put=__cordl_internal_set_PendingOperations)) ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*  PendingOperations;

static inline ::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>* const& __cordl_internal_get_PendingOperations() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*& __cordl_internal_get_PendingOperations() ;

constexpr void __cordl_internal_set_PendingOperations(::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*  value) ;

/// @brief Method .ctor, addr 0xa840cd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsightsGetPendingOperationsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetPendingOperationsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsightsGetPendingOperationsResponse(InsightsGetPendingOperationsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsightsGetPendingOperationsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsightsGetPendingOperationsResponse(InsightsGetPendingOperationsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19760};

/// @brief Field PendingOperations, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*  ___PendingOperations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse, ___PendingOperations) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::InsightsModels
