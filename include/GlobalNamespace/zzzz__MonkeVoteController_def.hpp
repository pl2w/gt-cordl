#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeVoteController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeVoteController)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class MonkeVoteController_FetchPollsRequest;
}
namespace GlobalNamespace {
class MonkeVoteController_FetchPollsResponse;
}
namespace GlobalNamespace {
class MonkeVoteController_VoteRequest;
}
namespace GlobalNamespace {
class MonkeVoteController_VoteResponse;
}
namespace GlobalNamespace {
class MonkeVoteController__DoFetchPolls_d__37;
}
namespace GlobalNamespace {
class MonkeVoteController__DoVote_d__47;
}
namespace GlobalNamespace {
struct MonkeVoteController__RequestPolls_d__34;
}
namespace GlobalNamespace {
struct MonkeVoteController__WaitForSessionToken_d__35;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeVoteController;
}
namespace GlobalNamespace {
class MonkeVoteController_FetchPollsRequest;
}
namespace GlobalNamespace {
class MonkeVoteController_FetchPollsResponse;
}
namespace GlobalNamespace {
class MonkeVoteController_VoteRequest;
}
namespace GlobalNamespace {
class MonkeVoteController_VoteResponse;
}
namespace GlobalNamespace {
class MonkeVoteController__DoFetchPolls_d__37;
}
namespace GlobalNamespace {
class MonkeVoteController__DoVote_d__47;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeVoteController*);
MARK_REF_T(::GlobalNamespace::MonkeVoteController_FetchPollsRequest*);
MARK_REF_T(::GlobalNamespace::MonkeVoteController_FetchPollsResponse*);
MARK_REF_T(::GlobalNamespace::MonkeVoteController_VoteRequest*);
MARK_REF_T(::GlobalNamespace::MonkeVoteController_VoteResponse*);
MARK_REF_T(::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*);
MARK_REF_T(::GlobalNamespace::MonkeVoteController__DoVote_d__47*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteController*, "", "MonkeVoteController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteController_FetchPollsRequest*, "", "MonkeVoteController/FetchPollsRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteController_FetchPollsResponse*, "", "MonkeVoteController/FetchPollsResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteController_VoteRequest*, "", "MonkeVoteController/VoteRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteController_VoteResponse*, "", "MonkeVoteController/VoteResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*, "", "MonkeVoteController/<DoFetchPolls>d__37");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteController__DoVote_d__47*, "", "MonkeVoteController/<DoVote>d__47");
// Dependencies System.DateTime, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteController
class CORDL_TYPE MonkeVoteController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FetchPollsRequest = ::GlobalNamespace::MonkeVoteController_FetchPollsRequest;

using FetchPollsResponse = ::GlobalNamespace::MonkeVoteController_FetchPollsResponse;

using VoteRequest = ::GlobalNamespace::MonkeVoteController_VoteRequest;

using VoteResponse = ::GlobalNamespace::MonkeVoteController_VoteResponse;

using _DoFetchPolls_d__37 = ::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37;

using _DoVote_d__47 = ::GlobalNamespace::MonkeVoteController__DoVote_d__47;

using _RequestPolls_d__34 = ::GlobalNamespace::MonkeVoteController__RequestPolls_d__34;

using _WaitForSessionToken_d__35 = ::GlobalNamespace::MonkeVoteController__WaitForSessionToken_d__35;

/// @brief Field Nonce, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Nonce, put=__cordl_internal_set_Nonce)) ::StringW  Nonce;

/// @brief Field OnCurrentPollEnded, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCurrentPollEnded, put=__cordl_internal_set_OnCurrentPollEnded)) ::System::Action*  OnCurrentPollEnded;

/// @brief Field OnPollsUpdated, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPollsUpdated, put=__cordl_internal_set_OnPollsUpdated)) ::System::Action*  OnPollsUpdated;

/// @brief Field OnVoteAccepted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnVoteAccepted, put=__cordl_internal_set_OnVoteAccepted)) ::System::Action*  OnVoteAccepted;

/// @brief Field OnVoteFailed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnVoteFailed, put=__cordl_internal_set_OnVoteFailed)) ::System::Action*  OnVoteFailed;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GlobalNamespace::MonkeVoteController>  _instance_k__BackingField;

/// @brief Field currentPollCompletionTime, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentPollCompletionTime, put=__cordl_internal_set_currentPollCompletionTime)) ::System::DateTime  currentPollCompletionTime;

/// @brief Field currentPollData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentPollData, put=__cordl_internal_set_currentPollData)) ::GlobalNamespace::MonkeVoteController_FetchPollsResponse*  currentPollData;

/// @brief Field fetchPollsRetryCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fetchPollsRetryCount, put=__cordl_internal_set_fetchPollsRetryCount)) int32_t  fetchPollsRetryCount;

/// @brief Field hasCurrentPollCompleted, offset 0x73, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCurrentPollCompleted, put=__cordl_internal_set_hasCurrentPollCompleted)) bool  hasCurrentPollCompleted;

/// @brief Field hasPoll, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPoll, put=__cordl_internal_set_hasPoll)) bool  hasPoll;

/// @brief Field includeInactive, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeInactive, put=__cordl_internal_set_includeInactive)) bool  includeInactive;

/// @brief Field isCurrentPollActive, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCurrentPollActive, put=__cordl_internal_set_isCurrentPollActive)) bool  isCurrentPollActive;

/// @brief Field isFetchingPoll, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFetchingPoll, put=__cordl_internal_set_isFetchingPoll)) bool  isFetchingPoll;

/// @brief Field isPrediction, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPrediction, put=__cordl_internal_set_isPrediction)) bool  isPrediction;

/// @brief Field isSendingVote, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSendingVote, put=__cordl_internal_set_isSendingVote)) bool  isSendingVote;

/// @brief Field lastPollData, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastPollData, put=__cordl_internal_set_lastPollData)) ::GlobalNamespace::MonkeVoteController_FetchPollsResponse*  lastPollData;

/// @brief Field lastVoteData, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastVoteData, put=__cordl_internal_set_lastVoteData)) ::GlobalNamespace::MonkeVoteController_VoteResponse*  lastVoteData;

/// @brief Field maxRetriesOnFail, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRetriesOnFail, put=__cordl_internal_set_maxRetriesOnFail)) int32_t  maxRetriesOnFail;

/// @brief Field option, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_option, put=__cordl_internal_set_option)) int32_t  option;

/// @brief Field pollId, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_pollId, put=__cordl_internal_set_pollId)) int32_t  pollId;

/// @brief Field voteRetryCount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_voteRetryCount, put=__cordl_internal_set_voteRetryCount)) int32_t  voteRetryCount;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x561de74, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(MonkeVoteController::<DoFetchPolls>d__37))]
/// @brief Method DoFetchPolls, addr 0x561e368, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoFetchPolls(::GlobalNamespace::MonkeVoteController_FetchPollsRequest*  data, ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>*  callback) ;

/// [IteratorStateMachine(typeof(MonkeVoteController::<DoVote>d__47))]
/// @brief Method DoVote, addr 0x561e9f8, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoVote(::GlobalNamespace::MonkeVoteController_VoteRequest*  data, ::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>*  callback) ;

/// @brief Method FetchPolls, addr 0x561e1fc, size 0x164, virtual false, abstract: false, final false
inline void FetchPolls() ;

/// @brief Method GetCurrentPollCompletionTime, addr 0x561eb34, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime GetCurrentPollCompletionTime() ;

/// @brief Method GetCurrentPollData, addr 0x561eb0c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* GetCurrentPollData() ;

/// @brief Method GetLastPollData, addr 0x561eb04, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* GetLastPollData() ;

/// @brief Method GetLastVotePollId, addr 0x561eb1c, size 0x8, virtual false, abstract: false, final false
inline int32_t GetLastVotePollId() ;

/// @brief Method GetLastVoteSelectedOption, addr 0x561eb24, size 0x8, virtual false, abstract: false, final false
inline int32_t GetLastVoteSelectedOption() ;

/// @brief Method GetLastVoteWasPrediction, addr 0x561eb2c, size 0x8, virtual false, abstract: false, final false
inline bool GetLastVoteWasPrediction() ;

/// @brief Method GetNonceForVotingCallback, addr 0x561e7d4, size 0x21c, virtual false, abstract: false, final false
inline void GetNonceForVotingCallback(/* [CanBeNull] */ ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*  message) ;

/// @brief Method GetVoteData, addr 0x561eb14, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonkeVoteController_VoteResponse* GetVoteData() ;

static inline ::GlobalNamespace::MonkeVoteController* New_ctor() ;

/// @brief Method OnDisable, addr 0x561e084, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x561e078, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFetchPollsResponse, addr 0x561e42c, size 0x36c, virtual false, abstract: false, final false
inline void OnFetchPollsResponse(/* [CanBeNull] */ ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*  response) ;

/// @brief Method OnVoteSuccess, addr 0x561eabc, size 0x48, virtual false, abstract: false, final false
inline void OnVoteSuccess(/* [CanBeNull] */ ::GlobalNamespace::MonkeVoteController_VoteResponse*  response) ;

/// [AsyncStateMachine(typeof(MonkeVoteController::<RequestPolls>d__34))]
/// @brief Method RequestPolls, addr 0x561e090, size 0xa8, virtual false, abstract: false, final false
inline void RequestPolls() ;

/// @brief Method SendVote, addr 0x561e7cc, size 0x8, virtual false, abstract: false, final false
inline void SendVote() ;

/// @brief Method SliceUpdate, addr 0x561df74, size 0x104, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Vote, addr 0x561e798, size 0x34, virtual false, abstract: false, final false
inline void Vote(int32_t  pollId, int32_t  option, bool  isPrediction) ;

/// [AsyncStateMachine(typeof(MonkeVoteController::<WaitForSessionToken>d__35))]
/// @brief Method WaitForSessionToken, addr 0x561e138, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForSessionToken() ;

constexpr ::StringW const& __cordl_internal_get_Nonce() const;

constexpr ::StringW& __cordl_internal_get_Nonce() ;

constexpr ::System::Action* const& __cordl_internal_get_OnCurrentPollEnded() const;

constexpr ::System::Action*& __cordl_internal_get_OnCurrentPollEnded() ;

constexpr ::System::Action* const& __cordl_internal_get_OnPollsUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnPollsUpdated() ;

constexpr ::System::Action* const& __cordl_internal_get_OnVoteAccepted() const;

constexpr ::System::Action*& __cordl_internal_get_OnVoteAccepted() ;

constexpr ::System::Action* const& __cordl_internal_get_OnVoteFailed() const;

constexpr ::System::Action*& __cordl_internal_get_OnVoteFailed() ;

constexpr ::System::DateTime const& __cordl_internal_get_currentPollCompletionTime() const;

constexpr ::System::DateTime& __cordl_internal_get_currentPollCompletionTime() ;

constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* const& __cordl_internal_get_currentPollData() const;

constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsResponse*& __cordl_internal_get_currentPollData() ;

constexpr int32_t const& __cordl_internal_get_fetchPollsRetryCount() const;

constexpr int32_t& __cordl_internal_get_fetchPollsRetryCount() ;

constexpr bool const& __cordl_internal_get_hasCurrentPollCompleted() const;

constexpr bool& __cordl_internal_get_hasCurrentPollCompleted() ;

constexpr bool const& __cordl_internal_get_hasPoll() const;

constexpr bool& __cordl_internal_get_hasPoll() ;

constexpr bool const& __cordl_internal_get_includeInactive() const;

constexpr bool& __cordl_internal_get_includeInactive() ;

constexpr bool const& __cordl_internal_get_isCurrentPollActive() const;

constexpr bool& __cordl_internal_get_isCurrentPollActive() ;

constexpr bool const& __cordl_internal_get_isFetchingPoll() const;

constexpr bool& __cordl_internal_get_isFetchingPoll() ;

constexpr bool const& __cordl_internal_get_isPrediction() const;

constexpr bool& __cordl_internal_get_isPrediction() ;

constexpr bool const& __cordl_internal_get_isSendingVote() const;

constexpr bool& __cordl_internal_get_isSendingVote() ;

constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* const& __cordl_internal_get_lastPollData() const;

constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsResponse*& __cordl_internal_get_lastPollData() ;

constexpr ::GlobalNamespace::MonkeVoteController_VoteResponse* const& __cordl_internal_get_lastVoteData() const;

constexpr ::GlobalNamespace::MonkeVoteController_VoteResponse*& __cordl_internal_get_lastVoteData() ;

constexpr int32_t const& __cordl_internal_get_maxRetriesOnFail() const;

constexpr int32_t& __cordl_internal_get_maxRetriesOnFail() ;

constexpr int32_t const& __cordl_internal_get_option() const;

constexpr int32_t& __cordl_internal_get_option() ;

constexpr int32_t const& __cordl_internal_get_pollId() const;

constexpr int32_t& __cordl_internal_get_pollId() ;

constexpr int32_t const& __cordl_internal_get_voteRetryCount() const;

constexpr int32_t& __cordl_internal_get_voteRetryCount() ;

constexpr void __cordl_internal_set_Nonce(::StringW  value) ;

constexpr void __cordl_internal_set_OnCurrentPollEnded(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnPollsUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnVoteAccepted(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnVoteFailed(::System::Action*  value) ;

constexpr void __cordl_internal_set_currentPollCompletionTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_currentPollData(::GlobalNamespace::MonkeVoteController_FetchPollsResponse*  value) ;

constexpr void __cordl_internal_set_fetchPollsRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_hasCurrentPollCompleted(bool  value) ;

constexpr void __cordl_internal_set_hasPoll(bool  value) ;

constexpr void __cordl_internal_set_includeInactive(bool  value) ;

constexpr void __cordl_internal_set_isCurrentPollActive(bool  value) ;

constexpr void __cordl_internal_set_isFetchingPoll(bool  value) ;

constexpr void __cordl_internal_set_isPrediction(bool  value) ;

constexpr void __cordl_internal_set_isSendingVote(bool  value) ;

constexpr void __cordl_internal_set_lastPollData(::GlobalNamespace::MonkeVoteController_FetchPollsResponse*  value) ;

constexpr void __cordl_internal_set_lastVoteData(::GlobalNamespace::MonkeVoteController_VoteResponse*  value) ;

constexpr void __cordl_internal_set_maxRetriesOnFail(int32_t  value) ;

constexpr void __cordl_internal_set_option(int32_t  value) ;

constexpr void __cordl_internal_set_pollId(int32_t  value) ;

constexpr void __cordl_internal_set_voteRetryCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x561eb3c, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCurrentPollEnded, addr 0x561dd3c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnCurrentPollEnded(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPollsUpdated, addr 0x561d994, size 0x9c, virtual false, abstract: false, final false
inline void add_OnPollsUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnVoteAccepted, addr 0x561dacc, size 0x9c, virtual false, abstract: false, final false
inline void add_OnVoteAccepted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnVoteFailed, addr 0x561dc04, size 0x9c, virtual false, abstract: false, final false
inline void add_OnVoteFailed(::System::Action*  value) ;

static inline ::UnityW<::GlobalNamespace::MonkeVoteController> getStaticF__instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x561d8f4, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::MonkeVoteController> get_instance() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnCurrentPollEnded, addr 0x561ddd8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnCurrentPollEnded(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPollsUpdated, addr 0x561da30, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnPollsUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnVoteAccepted, addr 0x561db68, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnVoteAccepted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnVoteFailed, addr 0x561dca0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnVoteFailed(::System::Action*  value) ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::MonkeVoteController>  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x561d93c, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::GlobalNamespace::MonkeVoteController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteController(MonkeVoteController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteController(MonkeVoteController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{578};

/// @brief Field Nonce, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Nonce;

/// @brief Field includeInactive, offset: 0x28, size: 0x1, def value: None
 bool  ___includeInactive;

/// @brief Field fetchPollsRetryCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___fetchPollsRetryCount;

/// @brief Field maxRetriesOnFail, offset: 0x30, size: 0x4, def value: None
 int32_t  ___maxRetriesOnFail;

/// @brief Field voteRetryCount, offset: 0x34, size: 0x4, def value: None
 int32_t  ___voteRetryCount;

/// [CompilerGenerated]
/// @brief Field OnPollsUpdated, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___OnPollsUpdated;

/// [CompilerGenerated]
/// @brief Field OnVoteAccepted, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___OnVoteAccepted;

/// [CompilerGenerated]
/// @brief Field OnVoteFailed, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnVoteFailed;

/// [CompilerGenerated]
/// @brief Field OnCurrentPollEnded, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___OnCurrentPollEnded;

/// @brief Field lastPollData, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::MonkeVoteController_FetchPollsResponse*  ___lastPollData;

/// @brief Field currentPollData, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::MonkeVoteController_FetchPollsResponse*  ___currentPollData;

/// @brief Field lastVoteData, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::MonkeVoteController_VoteResponse*  ___lastVoteData;

/// @brief Field isFetchingPoll, offset: 0x70, size: 0x1, def value: None
 bool  ___isFetchingPoll;

/// @brief Field hasPoll, offset: 0x71, size: 0x1, def value: None
 bool  ___hasPoll;

/// @brief Field isCurrentPollActive, offset: 0x72, size: 0x1, def value: None
 bool  ___isCurrentPollActive;

/// @brief Field hasCurrentPollCompleted, offset: 0x73, size: 0x1, def value: None
 bool  ___hasCurrentPollCompleted;

/// @brief Field currentPollCompletionTime, offset: 0x78, size: 0x8, def value: None
 ::System::DateTime  ___currentPollCompletionTime;

/// @brief Field isSendingVote, offset: 0x80, size: 0x1, def value: None
 bool  ___isSendingVote;

/// @brief Field pollId, offset: 0x84, size: 0x4, def value: None
 int32_t  ___pollId;

/// @brief Field option, offset: 0x88, size: 0x4, def value: None
 int32_t  ___option;

/// @brief Field isPrediction, offset: 0x8c, size: 0x1, def value: None
 bool  ___isPrediction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___Nonce) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___includeInactive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___fetchPollsRetryCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___maxRetriesOnFail) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___voteRetryCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___OnPollsUpdated) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___OnVoteAccepted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___OnVoteFailed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___OnCurrentPollEnded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___lastPollData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___currentPollData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___lastVoteData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___isFetchingPoll) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___hasPoll) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___isCurrentPollActive) == 0x72, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___hasCurrentPollCompleted) == 0x73, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___currentPollCompletionTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___isSendingVote) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___pollId) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___option) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController, ___isPrediction) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteController) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteController/<DoVote>d__47
class CORDL_TYPE MonkeVoteController__DoVote_d__47 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MonkeVoteController>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::MonkeVoteController_VoteRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x561f0b4, size 0x4ec, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MonkeVoteController__DoVote_d__47* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x561f5a0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x561f5a8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x561f5e0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x561f0b0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MonkeVoteController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MonkeVoteController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::MonkeVoteController_VoteRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::MonkeVoteController_VoteRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MonkeVoteController>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::MonkeVoteController_VoteRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x561ea94, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteController__DoVote_d__47() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController__DoVote_d__47", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteController__DoVote_d__47(MonkeVoteController__DoVote_d__47 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController__DoVote_d__47", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteController__DoVote_d__47(MonkeVoteController__DoVote_d__47 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{575};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::MonkeVoteController_VoteRequest*  ___data;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>*  ___callback;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeVoteController>  _____4__this;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoVote_d__47, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoVote_d__47, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoVote_d__47, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoVote_d__47, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoVote_d__47, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoVote_d__47, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoVote_d__47, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteController__DoVote_d__47) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteController/<DoFetchPolls>d__37
class CORDL_TYPE MonkeVoteController__DoFetchPolls_d__37 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MonkeVoteController>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::MonkeVoteController_FetchPollsRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x561ec10, size 0x458, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x561f068, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x561f070, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x561f0a8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x561ec0c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MonkeVoteController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MonkeVoteController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MonkeVoteController>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::MonkeVoteController_FetchPollsRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x561e404, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteController__DoFetchPolls_d__37() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController__DoFetchPolls_d__37", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteController__DoFetchPolls_d__37(MonkeVoteController__DoFetchPolls_d__37 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController__DoFetchPolls_d__37", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteController__DoFetchPolls_d__37(MonkeVoteController__DoFetchPolls_d__37 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{574};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::MonkeVoteController_FetchPollsRequest*  ___data;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>*  ___callback;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeVoteController>  _____4__this;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteController/VoteResponse
class CORDL_TYPE MonkeVoteController_VoteResponse : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PollId, put=set_PollId)) int32_t  PollId;

 __declspec(property(get=get_PredictionCount, put=set_PredictionCount)) ::System::Collections::Generic::List_1<int32_t>*  PredictionCount;

 __declspec(property(get=get_TitleId, put=set_TitleId)) ::StringW  TitleId;

 __declspec(property(get=get_VoteCount, put=set_VoteCount)) ::System::Collections::Generic::List_1<int32_t>*  VoteCount;

 __declspec(property(get=get_VoteOptions, put=set_VoteOptions)) ::System::Collections::Generic::List_1<::StringW>*  VoteOptions;

/// @brief Field <PollId>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__PollId_k__BackingField, put=__cordl_internal_set__PollId_k__BackingField)) int32_t  _PollId_k__BackingField;

/// @brief Field <PredictionCount>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__PredictionCount_k__BackingField, put=__cordl_internal_set__PredictionCount_k__BackingField)) ::System::Collections::Generic::List_1<int32_t>*  _PredictionCount_k__BackingField;

/// @brief Field <TitleId>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__TitleId_k__BackingField, put=__cordl_internal_set__TitleId_k__BackingField)) ::StringW  _TitleId_k__BackingField;

/// @brief Field <VoteCount>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__VoteCount_k__BackingField, put=__cordl_internal_set__VoteCount_k__BackingField)) ::System::Collections::Generic::List_1<int32_t>*  _VoteCount_k__BackingField;

/// @brief Field <VoteOptions>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__VoteOptions_k__BackingField, put=__cordl_internal_set__VoteOptions_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _VoteOptions_k__BackingField;

static inline ::GlobalNamespace::MonkeVoteController_VoteResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__PollId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PollId_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__PredictionCount_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__PredictionCount_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__TitleId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TitleId_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__VoteCount_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__VoteCount_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__VoteOptions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__VoteOptions_k__BackingField() ;

constexpr void __cordl_internal_set__PollId_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__PredictionCount_k__BackingField(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__TitleId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__VoteCount_k__BackingField(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__VoteOptions_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x561ec04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PollId, addr 0x561ebb4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PollId() ;

/// [CompilerGenerated]
/// @brief Method get_PredictionCount, addr 0x561ebf4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_PredictionCount() ;

/// [CompilerGenerated]
/// @brief Method get_TitleId, addr 0x561ebc4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TitleId() ;

/// [CompilerGenerated]
/// @brief Method get_VoteCount, addr 0x561ebe4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_VoteCount() ;

/// [CompilerGenerated]
/// @brief Method get_VoteOptions, addr 0x561ebd4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_VoteOptions() ;

/// [CompilerGenerated]
/// @brief Method set_PollId, addr 0x561ebbc, size 0x8, virtual false, abstract: false, final false
inline void set_PollId(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_PredictionCount, addr 0x561ebfc, size 0x8, virtual false, abstract: false, final false
inline void set_PredictionCount(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TitleId, addr 0x561ebcc, size 0x8, virtual false, abstract: false, final false
inline void set_TitleId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_VoteCount, addr 0x561ebec, size 0x8, virtual false, abstract: false, final false
inline void set_VoteCount(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_VoteOptions, addr 0x561ebdc, size 0x8, virtual false, abstract: false, final false
inline void set_VoteOptions(::System::Collections::Generic::List_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteController_VoteResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController_VoteResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteController_VoteResponse(MonkeVoteController_VoteResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController_VoteResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteController_VoteResponse(MonkeVoteController_VoteResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{573};

/// [CompilerGenerated]
/// @brief Field <PollId>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____PollId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TitleId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____TitleId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <VoteOptions>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____VoteOptions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <VoteCount>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____VoteCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PredictionCount>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____PredictionCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteResponse, ____PollId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteResponse, ____TitleId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteResponse, ____VoteOptions_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteResponse, ____VoteCount_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteResponse, ____PredictionCount_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteController_VoteResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteController/VoteRequest
class CORDL_TYPE MonkeVoteController_VoteRequest : public ::System::Object {
public:
// Declarations
/// @brief Field IsPrediction, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsPrediction, put=__cordl_internal_set_IsPrediction)) bool  IsPrediction;

/// @brief Field OculusId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OculusId, put=__cordl_internal_set_OculusId)) ::StringW  OculusId;

/// @brief Field OptionIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_OptionIndex, put=__cordl_internal_set_OptionIndex)) int32_t  OptionIndex;

/// @brief Field PlayFabId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field PlayFabTicket, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabTicket, put=__cordl_internal_set_PlayFabTicket)) ::StringW  PlayFabTicket;

/// @brief Field PollId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PollId, put=__cordl_internal_set_PollId)) int32_t  PollId;

/// @brief Field TitleId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

/// @brief Field UserNonce, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserNonce, put=__cordl_internal_set_UserNonce)) ::StringW  UserNonce;

/// @brief Field UserPlatform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserPlatform, put=__cordl_internal_set_UserPlatform)) ::StringW  UserPlatform;

static inline ::GlobalNamespace::MonkeVoteController_VoteRequest* New_ctor() ;

constexpr bool const& __cordl_internal_get_IsPrediction() const;

constexpr bool& __cordl_internal_get_IsPrediction() ;

constexpr ::StringW const& __cordl_internal_get_OculusId() const;

constexpr ::StringW& __cordl_internal_get_OculusId() ;

constexpr int32_t const& __cordl_internal_get_OptionIndex() const;

constexpr int32_t& __cordl_internal_get_OptionIndex() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabTicket() const;

constexpr ::StringW& __cordl_internal_get_PlayFabTicket() ;

constexpr int32_t const& __cordl_internal_get_PollId() const;

constexpr int32_t& __cordl_internal_get_PollId() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr ::StringW const& __cordl_internal_get_UserNonce() const;

constexpr ::StringW& __cordl_internal_get_UserNonce() ;

constexpr ::StringW const& __cordl_internal_get_UserPlatform() const;

constexpr ::StringW& __cordl_internal_get_UserPlatform() ;

constexpr void __cordl_internal_set_IsPrediction(bool  value) ;

constexpr void __cordl_internal_set_OculusId(::StringW  value) ;

constexpr void __cordl_internal_set_OptionIndex(int32_t  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabTicket(::StringW  value) ;

constexpr void __cordl_internal_set_PollId(int32_t  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

constexpr void __cordl_internal_set_UserNonce(::StringW  value) ;

constexpr void __cordl_internal_set_UserPlatform(::StringW  value) ;

/// @brief Method .ctor, addr 0x561e9f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteController_VoteRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController_VoteRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteController_VoteRequest(MonkeVoteController_VoteRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController_VoteRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteController_VoteRequest(MonkeVoteController_VoteRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{572};

/// @brief Field PollId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___PollId;

/// @brief Field TitleId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field PlayFabId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field OculusId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___OculusId;

/// @brief Field UserNonce, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___UserNonce;

/// @brief Field UserPlatform, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___UserPlatform;

/// @brief Field OptionIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ___OptionIndex;

/// @brief Field IsPrediction, offset: 0x44, size: 0x1, def value: None
 bool  ___IsPrediction;

/// @brief Field PlayFabTicket, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___PlayFabTicket;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteRequest, ___PollId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteRequest, ___TitleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteRequest, ___PlayFabId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteRequest, ___OculusId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteRequest, ___UserNonce) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteRequest, ___UserPlatform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteRequest, ___OptionIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteRequest, ___IsPrediction) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_VoteRequest, ___PlayFabTicket) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteController_VoteRequest) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.DateTime, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteController/FetchPollsResponse
class CORDL_TYPE MonkeVoteController_FetchPollsResponse : public ::System::Object {
public:
// Declarations
/// @brief Field EndTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_EndTime, put=__cordl_internal_set_EndTime)) ::System::DateTime  EndTime;

/// @brief Field PollId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PollId, put=__cordl_internal_set_PollId)) int32_t  PollId;

/// @brief Field PredictionCount, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PredictionCount, put=__cordl_internal_set_PredictionCount)) ::System::Collections::Generic::List_1<int32_t>*  PredictionCount;

/// @brief Field Question, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Question, put=__cordl_internal_set_Question)) ::StringW  Question;

/// @brief Field StartTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartTime, put=__cordl_internal_set_StartTime)) ::System::DateTime  StartTime;

/// @brief Field VoteCount, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoteCount, put=__cordl_internal_set_VoteCount)) ::System::Collections::Generic::List_1<int32_t>*  VoteCount;

/// @brief Field VoteOptions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoteOptions, put=__cordl_internal_set_VoteOptions)) ::System::Collections::Generic::List_1<::StringW>*  VoteOptions;

/// @brief Field isActive, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

static inline ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get_EndTime() const;

constexpr ::System::DateTime& __cordl_internal_get_EndTime() ;

constexpr int32_t const& __cordl_internal_get_PollId() const;

constexpr int32_t& __cordl_internal_get_PollId() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_PredictionCount() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_PredictionCount() ;

constexpr ::StringW const& __cordl_internal_get_Question() const;

constexpr ::StringW& __cordl_internal_get_Question() ;

constexpr ::System::DateTime const& __cordl_internal_get_StartTime() const;

constexpr ::System::DateTime& __cordl_internal_get_StartTime() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_VoteCount() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_VoteCount() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_VoteOptions() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_VoteOptions() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr void __cordl_internal_set_EndTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_PollId(int32_t  value) ;

constexpr void __cordl_internal_set_PredictionCount(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_Question(::StringW  value) ;

constexpr void __cordl_internal_set_StartTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_VoteCount(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_VoteOptions(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

/// @brief Method .ctor, addr 0x561ebac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteController_FetchPollsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController_FetchPollsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteController_FetchPollsResponse(MonkeVoteController_FetchPollsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController_FetchPollsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteController_FetchPollsResponse(MonkeVoteController_FetchPollsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{571};

/// @brief Field PollId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___PollId;

/// @brief Field Question, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Question;

/// @brief Field VoteOptions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___VoteOptions;

/// @brief Field VoteCount, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___VoteCount;

/// @brief Field PredictionCount, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___PredictionCount;

/// @brief Field StartTime, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  ___StartTime;

/// @brief Field EndTime, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ___EndTime;

/// @brief Field isActive, offset: 0x48, size: 0x1, def value: None
 bool  ___isActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsResponse, ___PollId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsResponse, ___Question) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsResponse, ___VoteOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsResponse, ___VoteCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsResponse, ___PredictionCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsResponse, ___StartTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsResponse, ___EndTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsResponse, ___isActive) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteController_FetchPollsResponse) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteController/FetchPollsRequest
class CORDL_TYPE MonkeVoteController_FetchPollsRequest : public ::System::Object {
public:
// Declarations
/// @brief Field IncludeInactive, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_IncludeInactive, put=__cordl_internal_set_IncludeInactive)) bool  IncludeInactive;

/// @brief Field PlayFabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field PlayFabTicket, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabTicket, put=__cordl_internal_set_PlayFabTicket)) ::StringW  PlayFabTicket;

/// @brief Field TitleId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

static inline ::GlobalNamespace::MonkeVoteController_FetchPollsRequest* New_ctor() ;

constexpr bool const& __cordl_internal_get_IncludeInactive() const;

constexpr bool& __cordl_internal_get_IncludeInactive() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabTicket() const;

constexpr ::StringW& __cordl_internal_get_PlayFabTicket() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr void __cordl_internal_set_IncludeInactive(bool  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabTicket(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

/// @brief Method .ctor, addr 0x561e360, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteController_FetchPollsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController_FetchPollsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteController_FetchPollsRequest(MonkeVoteController_FetchPollsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteController_FetchPollsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteController_FetchPollsRequest(MonkeVoteController_FetchPollsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{570};

/// @brief Field TitleId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___TitleId;

/// @brief Field PlayFabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field PlayFabTicket, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PlayFabTicket;

/// @brief Field IncludeInactive, offset: 0x28, size: 0x1, def value: None
 bool  ___IncludeInactive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsRequest, ___TitleId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsRequest, ___PlayFabId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsRequest, ___PlayFabTicket) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteController_FetchPollsRequest, ___IncludeInactive) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteController_FetchPollsRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
