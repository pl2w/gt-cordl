#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/GetTreatmentAssignmentRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetTreatmentAssignmentRequest)
namespace PlayFab::ExperimentationModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class GetTreatmentAssignmentRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*, "PlayFab.ExperimentationModels", "GetTreatmentAssignmentRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.GetTreatmentAssignmentRequest
class CORDL_TYPE GetTreatmentAssignmentRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::ExperimentationModels::EntityKey*  Entity;

static inline ::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest* New_ctor() ;

constexpr ::PlayFab::ExperimentationModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::ExperimentationModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::ExperimentationModels::EntityKey*  value) ;

/// @brief Method .ctor, addr 0xa840ec8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTreatmentAssignmentRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTreatmentAssignmentRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTreatmentAssignmentRequest(GetTreatmentAssignmentRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTreatmentAssignmentRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTreatmentAssignmentRequest(GetTreatmentAssignmentRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19827};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::ExperimentationModels::EntityKey*  ___Entity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
