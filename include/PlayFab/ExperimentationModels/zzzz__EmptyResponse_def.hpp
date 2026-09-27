#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/EmptyResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(EmptyResponse)
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class EmptyResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::EmptyResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::EmptyResponse*, "PlayFab.ExperimentationModels", "EmptyResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.EmptyResponse
class CORDL_TYPE EmptyResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ExperimentationModels::EmptyResponse* New_ctor() ;

/// @brief Method .ctor, addr 0xa840e90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmptyResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmptyResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyResponse(EmptyResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyResponse(EmptyResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ExperimentationModels::EmptyResponse) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
