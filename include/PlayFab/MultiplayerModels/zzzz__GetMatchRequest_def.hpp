#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMatchRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetMatchRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetMatchRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetMatchRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetMatchRequest*, "PlayFab.MultiplayerModels", "GetMatchRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetMatchRequest
class CORDL_TYPE GetMatchRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field EscapeObject, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_EscapeObject, put=__cordl_internal_set_EscapeObject)) bool  EscapeObject;

/// @brief Field MatchId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchId, put=__cordl_internal_set_MatchId)) ::StringW  MatchId;

/// @brief Field QueueName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

/// @brief Field ReturnMemberAttributes, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_ReturnMemberAttributes, put=__cordl_internal_set_ReturnMemberAttributes)) bool  ReturnMemberAttributes;

static inline ::PlayFab::MultiplayerModels::GetMatchRequest* New_ctor() ;

constexpr bool const& __cordl_internal_get_EscapeObject() const;

constexpr bool& __cordl_internal_get_EscapeObject() ;

constexpr ::StringW const& __cordl_internal_get_MatchId() const;

constexpr ::StringW& __cordl_internal_get_MatchId() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr bool const& __cordl_internal_get_ReturnMemberAttributes() const;

constexpr bool& __cordl_internal_get_ReturnMemberAttributes() ;

constexpr void __cordl_internal_set_EscapeObject(bool  value) ;

constexpr void __cordl_internal_set_MatchId(::StringW  value) ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

constexpr void __cordl_internal_set_ReturnMemberAttributes(bool  value) ;

/// @brief Method .ctor, addr 0xa8409b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetMatchRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetMatchRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetMatchRequest(GetMatchRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetMatchRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetMatchRequest(GetMatchRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19656};

/// @brief Field EscapeObject, offset: 0x18, size: 0x1, def value: None
 bool  ___EscapeObject;

/// @brief Field MatchId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___MatchId;

/// @brief Field QueueName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___QueueName;

/// @brief Field ReturnMemberAttributes, offset: 0x30, size: 0x1, def value: None
 bool  ___ReturnMemberAttributes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchRequest, ___EscapeObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchRequest, ___MatchId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchRequest, ___QueueName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMatchRequest, ___ReturnMemberAttributes) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetMatchRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
