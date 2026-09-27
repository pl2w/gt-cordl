#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetServerBackfillTicketRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetServerBackfillTicketRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetServerBackfillTicketRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetServerBackfillTicketRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetServerBackfillTicketRequest*, "PlayFab.MultiplayerModels", "GetServerBackfillTicketRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetServerBackfillTicketRequest
class CORDL_TYPE GetServerBackfillTicketRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field EscapeObject, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_EscapeObject, put=__cordl_internal_set_EscapeObject)) bool  EscapeObject;

/// @brief Field QueueName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_QueueName, put=__cordl_internal_set_QueueName)) ::StringW  QueueName;

/// @brief Field TicketId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TicketId, put=__cordl_internal_set_TicketId)) ::StringW  TicketId;

static inline ::PlayFab::MultiplayerModels::GetServerBackfillTicketRequest* New_ctor() ;

constexpr bool const& __cordl_internal_get_EscapeObject() const;

constexpr bool& __cordl_internal_get_EscapeObject() ;

constexpr ::StringW const& __cordl_internal_get_QueueName() const;

constexpr ::StringW& __cordl_internal_get_QueueName() ;

constexpr ::StringW const& __cordl_internal_get_TicketId() const;

constexpr ::StringW& __cordl_internal_get_TicketId() ;

constexpr void __cordl_internal_set_EscapeObject(bool  value) ;

constexpr void __cordl_internal_set_QueueName(::StringW  value) ;

constexpr void __cordl_internal_set_TicketId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840a08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetServerBackfillTicketRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetServerBackfillTicketRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetServerBackfillTicketRequest(GetServerBackfillTicketRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetServerBackfillTicketRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetServerBackfillTicketRequest(GetServerBackfillTicketRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19667};

/// @brief Field EscapeObject, offset: 0x18, size: 0x1, def value: None
 bool  ___EscapeObject;

/// @brief Field QueueName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___QueueName;

/// @brief Field TicketId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___TicketId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketRequest, ___EscapeObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketRequest, ___QueueName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetServerBackfillTicketRequest, ___TicketId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetServerBackfillTicketRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
