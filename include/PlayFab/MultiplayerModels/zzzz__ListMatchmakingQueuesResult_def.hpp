#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListMatchmakingQueuesResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ListMatchmakingQueuesResult)
namespace PlayFab::MultiplayerModels {
class MatchmakingQueueConfig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ListMatchmakingQueuesResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult*, "PlayFab.MultiplayerModels", "ListMatchmakingQueuesResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ListMatchmakingQueuesResult
class CORDL_TYPE ListMatchmakingQueuesResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field MatchMakingQueues, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchMakingQueues, put=__cordl_internal_set_MatchMakingQueues)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueConfig*>*  MatchMakingQueues;

static inline ::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueConfig*>* const& __cordl_internal_get_MatchMakingQueues() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueConfig*>*& __cordl_internal_get_MatchMakingQueues() ;

constexpr void __cordl_internal_set_MatchMakingQueues(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueConfig*>*  value) ;

/// @brief Method .ctor, addr 0xa840ad8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListMatchmakingQueuesResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListMatchmakingQueuesResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListMatchmakingQueuesResult(ListMatchmakingQueuesResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListMatchmakingQueuesResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListMatchmakingQueuesResult(ListMatchmakingQueuesResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19693};

/// @brief Field MatchMakingQueues, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueConfig*>*  ___MatchMakingQueues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult, ___MatchMakingQueues) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
