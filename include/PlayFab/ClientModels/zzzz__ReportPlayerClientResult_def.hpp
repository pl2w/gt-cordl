#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ReportPlayerClientResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReportPlayerClientResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class ReportPlayerClientResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ReportPlayerClientResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ReportPlayerClientResult*, "PlayFab.ClientModels", "ReportPlayerClientResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ReportPlayerClientResult
class CORDL_TYPE ReportPlayerClientResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field SubmissionsRemaining, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SubmissionsRemaining, put=__cordl_internal_set_SubmissionsRemaining)) int32_t  SubmissionsRemaining;

static inline ::PlayFab::ClientModels::ReportPlayerClientResult* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_SubmissionsRemaining() const;

constexpr int32_t& __cordl_internal_get_SubmissionsRemaining() ;

constexpr void __cordl_internal_set_SubmissionsRemaining(int32_t  value) ;

/// @brief Method .ctor, addr 0xa84e1e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReportPlayerClientResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReportPlayerClientResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReportPlayerClientResult(ReportPlayerClientResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReportPlayerClientResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReportPlayerClientResult(ReportPlayerClientResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20208};

/// @brief Field SubmissionsRemaining, offset: 0x20, size: 0x4, def value: None
 int32_t  ___SubmissionsRemaining;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ReportPlayerClientResult, ___SubmissionsRemaining) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ReportPlayerClientResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
