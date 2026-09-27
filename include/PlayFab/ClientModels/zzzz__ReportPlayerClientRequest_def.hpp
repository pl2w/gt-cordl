#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ReportPlayerClientRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReportPlayerClientRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class ReportPlayerClientRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ReportPlayerClientRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ReportPlayerClientRequest*, "PlayFab.ClientModels", "ReportPlayerClientRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ReportPlayerClientRequest
class CORDL_TYPE ReportPlayerClientRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Comment, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Comment, put=__cordl_internal_set_Comment)) ::StringW  Comment;

/// @brief Field ReporteeId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReporteeId, put=__cordl_internal_set_ReporteeId)) ::StringW  ReporteeId;

static inline ::PlayFab::ClientModels::ReportPlayerClientRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Comment() const;

constexpr ::StringW& __cordl_internal_get_Comment() ;

constexpr ::StringW const& __cordl_internal_get_ReporteeId() const;

constexpr ::StringW& __cordl_internal_get_ReporteeId() ;

constexpr void __cordl_internal_set_Comment(::StringW  value) ;

constexpr void __cordl_internal_set_ReporteeId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e1e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReportPlayerClientRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReportPlayerClientRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReportPlayerClientRequest(ReportPlayerClientRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReportPlayerClientRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReportPlayerClientRequest(ReportPlayerClientRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20207};

/// @brief Field Comment, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Comment;

/// @brief Field ReporteeId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ReporteeId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ReportPlayerClientRequest, ___Comment) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ReportPlayerClientRequest, ___ReporteeId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ReportPlayerClientRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
