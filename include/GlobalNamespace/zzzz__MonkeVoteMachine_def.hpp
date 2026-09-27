#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeVoteMachine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonkeVoteMachine_VotingState_def.hpp"
#include "GlobalNamespace/zzzz__MonkeVoteOption_def.hpp"
#include "GlobalNamespace/zzzz__MonkeVoteResult_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeVoteMachine)
namespace GameObjectScheduling {
class CountdownText;
}
namespace GlobalNamespace {
class MonkeVoteController_FetchPollsResponse;
}
namespace GlobalNamespace {
class MonkeVoteMachine_PollEntry;
}
namespace GlobalNamespace {
struct MonkeVoteMachine_VotingState;
}
namespace GlobalNamespace {
struct MonkeVoteMachine__PlayVoteSuccessEffects_d__68;
}
namespace GlobalNamespace {
class MonkeVoteOption;
}
namespace GlobalNamespace {
class MonkeVoteProximityTrigger;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeVoteMachine;
}
namespace GlobalNamespace {
class MonkeVoteMachine_PollEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeVoteMachine*);
MARK_REF_T(::GlobalNamespace::MonkeVoteMachine_PollEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteMachine*, "", "MonkeVoteMachine");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteMachine_PollEntry*, "", "MonkeVoteMachine/PollEntry");
// Dependencies MonkeVoteMachine::VotingState, MonkeVoteOption, MonkeVoteResult, System.DateTime, UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteMachine
class CORDL_TYPE MonkeVoteMachine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PollEntry = ::GlobalNamespace::MonkeVoteMachine_PollEntry;

using VotingState = ::GlobalNamespace::MonkeVoteMachine_VotingState;

using _PlayVoteSuccessEffects_d__68 = ::GlobalNamespace::MonkeVoteMachine__PlayVoteSuccessEffects_d__68;

/// @brief Field _audio, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__audio, put=__cordl_internal_set__audio)) ::UnityW<::UnityEngine::AudioSource>  _audio;

/// @brief Field _completeTitle, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__completeTitle, put=__cordl_internal_set__completeTitle)) ::StringW  _completeTitle;

/// @brief Field _currentPoll, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentPoll, put=__cordl_internal_set__currentPoll)) ::GlobalNamespace::MonkeVoteMachine_PollEntry*  _currentPoll;

/// @brief Field _defaultQuestion, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultQuestion, put=__cordl_internal_set__defaultQuestion)) ::StringW  _defaultQuestion;

/// @brief Field _defaultResultsTitle, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultResultsTitle, put=__cordl_internal_set__defaultResultsTitle)) ::StringW  _defaultResultsTitle;

/// @brief Field _defaultTitle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultTitle, put=__cordl_internal_set__defaultTitle)) ::StringW  _defaultTitle;

/// @brief Field _isTestingPoll, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTestingPoll, put=__cordl_internal_set__isTestingPoll)) bool  _isTestingPoll;

/// @brief Field _nextPollUpdate, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextPollUpdate, put=__cordl_internal_set__nextPollUpdate)) ::System::DateTime  _nextPollUpdate;

/// @brief Field _pollsClosedText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pollsClosedText, put=__cordl_internal_set__pollsClosedText)) ::StringW  _pollsClosedText;

/// @brief Field _predictQuestion, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__predictQuestion, put=__cordl_internal_set__predictQuestion)) ::StringW  _predictQuestion;

/// @brief Field _predictTitle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__predictTitle, put=__cordl_internal_set__predictTitle)) ::StringW  _predictTitle;

/// @brief Field _previousPoll, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousPoll, put=__cordl_internal_set__previousPoll)) ::GlobalNamespace::MonkeVoteMachine_PollEntry*  _previousPoll;

/// @brief Field _proximityTrigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__proximityTrigger, put=__cordl_internal_set__proximityTrigger)) ::UnityW<::GlobalNamespace::MonkeVoteProximityTrigger>  _proximityTrigger;

/// @brief Field _questionText, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__questionText, put=__cordl_internal_set__questionText)) ::UnityW<::TMPro::TMP_Text>  _questionText;

/// @brief Field _results, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__results, put=__cordl_internal_set__results)) ::ArrayW<::UnityW<::GlobalNamespace::MonkeVoteResult>>  _results;

/// @brief Field _resultsQuestionText, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__resultsQuestionText, put=__cordl_internal_set__resultsQuestionText)) ::UnityW<::TMPro::TMP_Text>  _resultsQuestionText;

/// @brief Field _resultsStreakText, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__resultsStreakText, put=__cordl_internal_set__resultsStreakText)) ::UnityW<::TMPro::TMP_Text>  _resultsStreakText;

/// @brief Field _resultsTitleText, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__resultsTitleText, put=__cordl_internal_set__resultsTitleText)) ::UnityW<::TMPro::TMP_Text>  _resultsTitleText;

/// @brief Field _state, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::MonkeVoteMachine_VotingState  _state;

/// @brief Field _streakBlurb, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__streakBlurb, put=__cordl_internal_set__streakBlurb)) ::StringW  _streakBlurb;

/// @brief Field _streakLostBlurb, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__streakLostBlurb, put=__cordl_internal_set__streakLostBlurb)) ::StringW  _streakLostBlurb;

/// @brief Field _timerText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__timerText, put=__cordl_internal_set__timerText)) ::UnityW<::GameObjectScheduling::CountdownText>  _timerText;

/// @brief Field _titleText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__titleText, put=__cordl_internal_set__titleText)) ::UnityW<::TMPro::TMP_Text>  _titleText;

/// @brief Field _voteCooldown, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__voteCooldown, put=__cordl_internal_set__voteCooldown)) float_t  _voteCooldown;

/// @brief Field _voteCooldownEnd, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get__voteCooldownEnd, put=__cordl_internal_set__voteCooldownEnd)) float_t  _voteCooldownEnd;

/// @brief Field _voteFailSound, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__voteFailSound, put=__cordl_internal_set__voteFailSound)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  _voteFailSound;

/// @brief Field _voteProcessingSound, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__voteProcessingSound, put=__cordl_internal_set__voteProcessingSound)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  _voteProcessingSound;

/// @brief Field _voteSuccessDing, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__voteSuccessDing, put=__cordl_internal_set__voteSuccessDing)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  _voteSuccessDing;

/// @brief Field _voteTitle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__voteTitle, put=__cordl_internal_set__voteTitle)) ::StringW  _voteTitle;

/// @brief Field _voteTubeAudio, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__voteTubeAudio, put=__cordl_internal_set__voteTubeAudio)) ::UnityW<::UnityEngine::AudioSource>  _voteTubeAudio;

/// @brief Field _votingOptions, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__votingOptions, put=__cordl_internal_set__votingOptions)) ::ArrayW<::UnityW<::GlobalNamespace::MonkeVoteOption>>  _votingOptions;

/// @brief Field _waitingOnVote, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__waitingOnVote, put=__cordl_internal_set__waitingOnVote)) bool  _waitingOnVote;

/// @brief Method Awake, addr 0x561fd68, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearLocalData, addr 0x56219b4, size 0x18, virtual false, abstract: false, final false
inline void ClearLocalData() ;

/// @brief Method ClearLocalVoteAndPredictionData, addr 0x56219cc, size 0x13c, virtual false, abstract: false, final false
inline void ClearLocalVoteAndPredictionData() ;

/// @brief Method Configure, addr 0x561fc94, size 0xd4, virtual false, abstract: false, final false
inline void Configure() ;

/// @brief Method ConvertToPercentages, addr 0x5621d68, size 0x530, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* ConvertToPercentages(::ArrayW<int32_t>  votes) ;

/// @brief Method CreateNextDummyPoll, addr 0x56213b4, size 0x25c, virtual false, abstract: false, final false
inline void CreateNextDummyPoll() ;

/// @brief Method GetPostPollStreak, addr 0x5622368, size 0xac, virtual false, abstract: false, final false
inline int32_t GetPostPollStreak(::GlobalNamespace::MonkeVoteMachine_PollEntry*  entry) ;

/// @brief Method GetPrePollStreak, addr 0x5622298, size 0xd0, virtual false, abstract: false, final false
inline int32_t GetPrePollStreak(int32_t  id) ;

/// @brief Method GetVote, addr 0x5620f2c, size 0x164, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,int32_t> GetVote(int32_t  voteId) ;

/// @brief Method HandleCurrentPollEnded, addr 0x5621240, size 0x60, virtual false, abstract: false, final false
inline void HandleCurrentPollEnded() ;

/// @brief Method HandleOnPollsUpdated, addr 0x5620694, size 0x4, virtual false, abstract: false, final false
inline void HandleOnPollsUpdated() ;

/// @brief Method HandleOnVoteAccepted, addr 0x5621090, size 0x64, virtual false, abstract: false, final false
inline void HandleOnVoteAccepted() ;

/// @brief Method HandleOnVoteFailed, addr 0x56211e0, size 0x60, virtual false, abstract: false, final false
inline void HandleOnVoteFailed() ;

/// [Tooltip("Hide dynamic child meshes to avoid them getting combined into the parent mesh on awake")]
/// @brief Method HideDynamicMeshes, addr 0x56212a0, size 0x8, virtual false, abstract: false, final false
inline void HideDynamicMeshes() ;

/// @brief Method Init, addr 0x561fffc, size 0x12c, virtual false, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::MonkeVoteMachine* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5620128, size 0x244, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPlayerEnteredVoteProximity, addr 0x562064c, size 0x48, virtual false, abstract: false, final false
inline void OnPlayerEnteredVoteProximity() ;

/// @brief Method OnVoteEntered, addr 0x5621830, size 0xe0, virtual false, abstract: false, final false
inline void OnVoteEntered(::GlobalNamespace::MonkeVoteOption*  option, ::UnityEngine::Collider*  votingCollider) ;

/// @brief Method OnVoteResponseReceived, addr 0x56210f4, size 0xec, virtual false, abstract: false, final false
inline void OnVoteResponseReceived(int32_t  id, int32_t  option, bool  isPrediction, bool  success) ;

/// @brief Method PlayVoteFailEffects, addr 0x5622868, size 0x3c, virtual false, abstract: false, final false
inline void PlayVoteFailEffects() ;

/// [AsyncStateMachine(typeof(MonkeVoteMachine::<PlayVoteSuccessEffects>d__68))]
/// @brief Method PlayVoteSuccessEffects, addr 0x562297c, size 0xa8, virtual false, abstract: false, final false
inline void PlayVoteSuccessEffects() ;

/// @brief Method Reset, addr 0x561fc90, size 0x4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SavePrePollStreak, addr 0x5622a24, size 0xd0, virtual false, abstract: false, final false
inline void SavePrePollStreak(int32_t  id, int32_t  streak) ;

/// @brief Method SaveVote, addr 0x5621b08, size 0x1d0, virtual false, abstract: false, final false
inline void SaveVote(int32_t  id, int32_t  voteOption, int32_t  predictionOption) ;

/// @brief Method SetDynamicMeshesVisible, addr 0x56212a8, size 0xb8, virtual false, abstract: false, final false
inline void SetDynamicMeshesVisible(bool  enabled) ;

/// @brief Method SetState, addr 0x5620698, size 0x394, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::MonkeVoteMachine_VotingState  newState, bool  instant) ;

/// [Tooltip("Show dynamic child meshes to allow easy visualization")]
/// @brief Method ShowDynamicMeshes, addr 0x5621360, size 0x8, virtual false, abstract: false, final false
inline void ShowDynamicMeshes() ;

/// @brief Method ShowResults, addr 0x5620a2c, size 0x3ec, virtual false, abstract: false, final false
inline void ShowResults(::GlobalNamespace::MonkeVoteMachine_PollEntry*  entry) ;

/// @brief Method Start, addr 0x561fdf8, size 0x204, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdatePollDisplays, addr 0x5620448, size 0x204, virtual false, abstract: false, final false
inline void UpdatePollDisplays() ;

/// @brief Method Vote, addr 0x56228a4, size 0xd8, virtual false, abstract: false, final false
inline void Vote(int32_t  id, int32_t  option, bool  isPrediction) ;

/// @brief Method VoteLeft, addr 0x5621808, size 0x28, virtual false, abstract: false, final false
inline void VoteLeft() ;

/// @brief Method VoteRight, addr 0x5621910, size 0x2c, virtual false, abstract: false, final false
inline void VoteRight() ;

/// @brief Method VoteWinner, addr 0x562193c, size 0x78, virtual false, abstract: false, final false
inline void VoteWinner() ;

/// [CompilerGenerated]
/// @brief Method <ConvertToPercentages>g__LargestFractionIndex|64_1, addr 0x56226b8, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t _ConvertToPercentages_g__LargestFractionIndex_64_1(::System::Collections::Generic::IList_1<float_t>*  fractions) ;

/// [CompilerGenerated]
/// @brief Method <ConvertToPercentages>g__Sum|64_0, addr 0x5622414, size 0x2a4, virtual false, abstract: false, final false
static inline int32_t _ConvertToPercentages_g__Sum_64_0(::System::Collections::Generic::IList_1<int32_t>*  items) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audio() ;

constexpr ::StringW const& __cordl_internal_get__completeTitle() const;

constexpr ::StringW& __cordl_internal_get__completeTitle() ;

constexpr ::GlobalNamespace::MonkeVoteMachine_PollEntry* const& __cordl_internal_get__currentPoll() const;

constexpr ::GlobalNamespace::MonkeVoteMachine_PollEntry*& __cordl_internal_get__currentPoll() ;

constexpr ::StringW const& __cordl_internal_get__defaultQuestion() const;

constexpr ::StringW& __cordl_internal_get__defaultQuestion() ;

constexpr ::StringW const& __cordl_internal_get__defaultResultsTitle() const;

constexpr ::StringW& __cordl_internal_get__defaultResultsTitle() ;

constexpr ::StringW const& __cordl_internal_get__defaultTitle() const;

constexpr ::StringW& __cordl_internal_get__defaultTitle() ;

constexpr bool const& __cordl_internal_get__isTestingPoll() const;

constexpr bool& __cordl_internal_get__isTestingPoll() ;

constexpr ::System::DateTime const& __cordl_internal_get__nextPollUpdate() const;

constexpr ::System::DateTime& __cordl_internal_get__nextPollUpdate() ;

constexpr ::StringW const& __cordl_internal_get__pollsClosedText() const;

constexpr ::StringW& __cordl_internal_get__pollsClosedText() ;

constexpr ::StringW const& __cordl_internal_get__predictQuestion() const;

constexpr ::StringW& __cordl_internal_get__predictQuestion() ;

constexpr ::StringW const& __cordl_internal_get__predictTitle() const;

constexpr ::StringW& __cordl_internal_get__predictTitle() ;

constexpr ::GlobalNamespace::MonkeVoteMachine_PollEntry* const& __cordl_internal_get__previousPoll() const;

constexpr ::GlobalNamespace::MonkeVoteMachine_PollEntry*& __cordl_internal_get__previousPoll() ;

constexpr ::UnityW<::GlobalNamespace::MonkeVoteProximityTrigger> const& __cordl_internal_get__proximityTrigger() const;

constexpr ::UnityW<::GlobalNamespace::MonkeVoteProximityTrigger>& __cordl_internal_get__proximityTrigger() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__questionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__questionText() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MonkeVoteResult>> const& __cordl_internal_get__results() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MonkeVoteResult>>& __cordl_internal_get__results() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__resultsQuestionText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__resultsQuestionText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__resultsStreakText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__resultsStreakText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__resultsTitleText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__resultsTitleText() ;

constexpr ::GlobalNamespace::MonkeVoteMachine_VotingState const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::MonkeVoteMachine_VotingState& __cordl_internal_get__state() ;

constexpr ::StringW const& __cordl_internal_get__streakBlurb() const;

constexpr ::StringW& __cordl_internal_get__streakBlurb() ;

constexpr ::StringW const& __cordl_internal_get__streakLostBlurb() const;

constexpr ::StringW& __cordl_internal_get__streakLostBlurb() ;

constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& __cordl_internal_get__timerText() const;

constexpr ::UnityW<::GameObjectScheduling::CountdownText>& __cordl_internal_get__timerText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__titleText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__titleText() ;

constexpr float_t const& __cordl_internal_get__voteCooldown() const;

constexpr float_t& __cordl_internal_get__voteCooldown() ;

constexpr float_t const& __cordl_internal_get__voteCooldownEnd() const;

constexpr float_t& __cordl_internal_get__voteCooldownEnd() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get__voteFailSound() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get__voteFailSound() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get__voteProcessingSound() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get__voteProcessingSound() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get__voteSuccessDing() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get__voteSuccessDing() ;

constexpr ::StringW const& __cordl_internal_get__voteTitle() const;

constexpr ::StringW& __cordl_internal_get__voteTitle() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__voteTubeAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__voteTubeAudio() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MonkeVoteOption>> const& __cordl_internal_get__votingOptions() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MonkeVoteOption>>& __cordl_internal_get__votingOptions() ;

constexpr bool const& __cordl_internal_get__waitingOnVote() const;

constexpr bool& __cordl_internal_get__waitingOnVote() ;

constexpr void __cordl_internal_set__audio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__completeTitle(::StringW  value) ;

constexpr void __cordl_internal_set__currentPoll(::GlobalNamespace::MonkeVoteMachine_PollEntry*  value) ;

constexpr void __cordl_internal_set__defaultQuestion(::StringW  value) ;

constexpr void __cordl_internal_set__defaultResultsTitle(::StringW  value) ;

constexpr void __cordl_internal_set__defaultTitle(::StringW  value) ;

constexpr void __cordl_internal_set__isTestingPoll(bool  value) ;

constexpr void __cordl_internal_set__nextPollUpdate(::System::DateTime  value) ;

constexpr void __cordl_internal_set__pollsClosedText(::StringW  value) ;

constexpr void __cordl_internal_set__predictQuestion(::StringW  value) ;

constexpr void __cordl_internal_set__predictTitle(::StringW  value) ;

constexpr void __cordl_internal_set__previousPoll(::GlobalNamespace::MonkeVoteMachine_PollEntry*  value) ;

constexpr void __cordl_internal_set__proximityTrigger(::UnityW<::GlobalNamespace::MonkeVoteProximityTrigger>  value) ;

constexpr void __cordl_internal_set__questionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__results(::ArrayW<::UnityW<::GlobalNamespace::MonkeVoteResult>>  value) ;

constexpr void __cordl_internal_set__resultsQuestionText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__resultsStreakText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__resultsTitleText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::MonkeVoteMachine_VotingState  value) ;

constexpr void __cordl_internal_set__streakBlurb(::StringW  value) ;

constexpr void __cordl_internal_set__streakLostBlurb(::StringW  value) ;

constexpr void __cordl_internal_set__timerText(::UnityW<::GameObjectScheduling::CountdownText>  value) ;

constexpr void __cordl_internal_set__titleText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__voteCooldown(float_t  value) ;

constexpr void __cordl_internal_set__voteCooldownEnd(float_t  value) ;

constexpr void __cordl_internal_set__voteFailSound(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set__voteProcessingSound(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set__voteSuccessDing(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set__voteTitle(::StringW  value) ;

constexpr void __cordl_internal_set__voteTubeAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__votingOptions(::ArrayW<::UnityW<::GlobalNamespace::MonkeVoteOption>>  value) ;

constexpr void __cordl_internal_set__waitingOnVote(bool  value) ;

/// @brief Method .ctor, addr 0x5622b44, size 0x1c4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteMachine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteMachine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteMachine(MonkeVoteMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteMachine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteMachine(MonkeVoteMachine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{582};

/// @brief Field kVoteCurrentIdKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kVoteCurrentIdKey{u"Vote_Current_Id"};

/// @brief Field kVoteCurrentOptionKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kVoteCurrentOptionKey{u"Vote_Current_Option"};

/// @brief Field kVoteCurrentPredictionKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kVoteCurrentPredictionKey{u"Vote_Current_Prediction"};

/// @brief Field kVoteCurrentStreak offset 0xffffffff size 0x8
static constexpr ::ConstString  kVoteCurrentStreak{u"Vote_Current_Streak"};

/// @brief Field kVotePreviousIdKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kVotePreviousIdKey{u"Vote_Previous_Id"};

/// @brief Field kVotePreviousOptionKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kVotePreviousOptionKey{u"Vote_Previous_Option"};

/// @brief Field kVotePreviousPredictionKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kVotePreviousPredictionKey{u"Vote_Previous_Prediction"};

/// @brief Field kVotePreviousStreak offset 0xffffffff size 0x8
static constexpr ::ConstString  kVotePreviousStreak{u"Vote_Previous_Streak"};

/// [SerializeField]
/// @brief Field _proximityTrigger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeVoteProximityTrigger>  ____proximityTrigger;

/// [Header("VOTING")]
/// [SerializeField]
/// @brief Field _pollsClosedText, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____pollsClosedText;

/// [SerializeField]
/// @brief Field _defaultTitle, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____defaultTitle;

/// [SerializeField]
/// @brief Field _voteTitle, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____voteTitle;

/// [SerializeField]
/// @brief Field _predictTitle, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____predictTitle;

/// [SerializeField]
/// @brief Field _completeTitle, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____completeTitle;

/// [SerializeField]
/// @brief Field _defaultQuestion, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____defaultQuestion;

/// [SerializeField]
/// @brief Field _predictQuestion, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____predictQuestion;

/// [Tooltip("Must be in the format \"STREAK: {0}\"")]
/// [SerializeField]
/// @brief Field _streakBlurb, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____streakBlurb;

/// [Tooltip("Must be in the format \"LOST {0} PREDICTION STREAK! STREAK: {1}\"")]
/// [SerializeField]
/// @brief Field _streakLostBlurb, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____streakLostBlurb;

/// [SerializeField]
/// @brief Field _voteCooldown, offset: 0x70, size: 0x4, def value: None
 float_t  ____voteCooldown;

/// [SerializeField]
/// @brief Field _votingOptions, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::MonkeVoteOption>>  ____votingOptions;

/// [SerializeField]
/// @brief Field _timerText, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::CountdownText>  ____timerText;

/// [SerializeField]
/// @brief Field _titleText, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____titleText;

/// [SerializeField]
/// @brief Field _questionText, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____questionText;

/// [Header("RESULTS")]
/// [SerializeField]
/// @brief Field _defaultResultsTitle, offset: 0x98, size: 0x8, def value: None
 ::StringW  ____defaultResultsTitle;

/// [SerializeField]
/// @brief Field _resultsTitleText, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____resultsTitleText;

/// [SerializeField]
/// @brief Field _resultsQuestionText, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____resultsQuestionText;

/// [SerializeField]
/// @brief Field _resultsStreakText, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____resultsStreakText;

/// [SerializeField]
/// @brief Field _results, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::MonkeVoteResult>>  ____results;

/// [FormerlySerializedAs("_sound")]
/// [Header("FX")]
/// [SerializeField]
/// @brief Field _audio, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audio;

/// [FormerlySerializedAs("_voteProcessingAudio")]
/// [SerializeField]
/// @brief Field _voteTubeAudio, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____voteTubeAudio;

/// [SerializeField]
/// @brief Field _voteFailSound, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ____voteFailSound;

/// [SerializeField]
/// @brief Field _voteSuccessDing, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ____voteSuccessDing;

/// [FormerlySerializedAs("_voteSuccessSound")]
/// [SerializeField]
/// @brief Field _voteProcessingSound, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ____voteProcessingSound;

/// @brief Field _state, offset: 0xe8, size: 0x4, def value: None
 ::GlobalNamespace::MonkeVoteMachine_VotingState  ____state;

/// @brief Field _voteCooldownEnd, offset: 0xec, size: 0x4, def value: None
 float_t  ____voteCooldownEnd;

/// @brief Field _waitingOnVote, offset: 0xf0, size: 0x1, def value: None
 bool  ____waitingOnVote;

/// @brief Field _currentPoll, offset: 0xf8, size: 0x8, def value: None
 ::GlobalNamespace::MonkeVoteMachine_PollEntry*  ____currentPoll;

/// @brief Field _previousPoll, offset: 0x100, size: 0x8, def value: None
 ::GlobalNamespace::MonkeVoteMachine_PollEntry*  ____previousPoll;

/// @brief Field _nextPollUpdate, offset: 0x108, size: 0x8, def value: None
 ::System::DateTime  ____nextPollUpdate;

/// @brief Field _isTestingPoll, offset: 0x110, size: 0x1, def value: None
 bool  ____isTestingPoll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____proximityTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____pollsClosedText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____defaultTitle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____voteTitle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____predictTitle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____completeTitle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____defaultQuestion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____predictQuestion) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____streakBlurb) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____streakLostBlurb) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____voteCooldown) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____votingOptions) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____timerText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____titleText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____questionText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____defaultResultsTitle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____resultsTitleText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____resultsQuestionText) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____resultsStreakText) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____results) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____audio) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____voteTubeAudio) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____voteFailSound) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____voteSuccessDing) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____voteProcessingSound) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____state) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____voteCooldownEnd) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____waitingOnVote) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____currentPoll) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____previousPoll) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____nextPollUpdate) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine, ____isTestingPoll) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteMachine) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.DateTime, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteMachine/PollEntry
class CORDL_TYPE MonkeVoteMachine_PollEntry : public ::System::Object {
public:
// Declarations
/// @brief Field EndTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_EndTime, put=__cordl_internal_set_EndTime)) ::System::DateTime  EndTime;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field PollId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PollId, put=__cordl_internal_set_PollId)) int32_t  PollId;

/// @brief Field PredictionCount, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PredictionCount, put=__cordl_internal_set_PredictionCount)) ::ArrayW<int32_t>  PredictionCount;

/// @brief Field Question, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Question, put=__cordl_internal_set_Question)) ::StringW  Question;

/// @brief Field StartTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartTime, put=__cordl_internal_set_StartTime)) ::System::DateTime  StartTime;

/// @brief Field VoteCount, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoteCount, put=__cordl_internal_set_VoteCount)) ::ArrayW<int32_t>  VoteCount;

/// @brief Field VoteOptions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoteOptions, put=__cordl_internal_set_VoteOptions)) ::ArrayW<::StringW>  VoteOptions;

/// @brief Method GetWinner, addr 0x5622af4, size 0x50, virtual false, abstract: false, final false
inline int32_t GetWinner() ;

static inline ::GlobalNamespace::MonkeVoteMachine_PollEntry* New_ctor(::GlobalNamespace::MonkeVoteController_FetchPollsResponse*  poll) ;

static inline ::GlobalNamespace::MonkeVoteMachine_PollEntry* New_ctor(int32_t  pollId, ::StringW  question, ::ArrayW<::StringW>  voteOptions) ;

constexpr ::System::DateTime const& __cordl_internal_get_EndTime() const;

constexpr ::System::DateTime& __cordl_internal_get_EndTime() ;

constexpr int32_t const& __cordl_internal_get_PollId() const;

constexpr int32_t& __cordl_internal_get_PollId() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_PredictionCount() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_PredictionCount() ;

constexpr ::StringW const& __cordl_internal_get_Question() const;

constexpr ::StringW& __cordl_internal_get_Question() ;

constexpr ::System::DateTime const& __cordl_internal_get_StartTime() const;

constexpr ::System::DateTime& __cordl_internal_get_StartTime() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_VoteCount() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_VoteCount() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_VoteOptions() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_VoteOptions() ;

constexpr void __cordl_internal_set_EndTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_PollId(int32_t  value) ;

constexpr void __cordl_internal_set_PredictionCount(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_Question(::StringW  value) ;

constexpr void __cordl_internal_set_StartTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_VoteCount(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_VoteOptions(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x5620e18, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MonkeVoteController_FetchPollsResponse*  poll) ;

/// @brief Method .ctor, addr 0x5621610, size 0x1f8, virtual false, abstract: false, final false
inline void _ctor(int32_t  pollId, ::StringW  question, ::ArrayW<::StringW>  voteOptions) ;

/// @brief Method get_IsValid, addr 0x5620f0c, size 0x20, virtual false, abstract: false, final false
inline bool get_IsValid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteMachine_PollEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteMachine_PollEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteMachine_PollEntry(MonkeVoteMachine_PollEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteMachine_PollEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteMachine_PollEntry(MonkeVoteMachine_PollEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{580};

/// @brief Field PollId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___PollId;

/// @brief Field Question, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Question;

/// @brief Field VoteOptions, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___VoteOptions;

/// @brief Field VoteCount, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___VoteCount;

/// @brief Field PredictionCount, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___PredictionCount;

/// @brief Field StartTime, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  ___StartTime;

/// @brief Field EndTime, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ___EndTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine_PollEntry, ___PollId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine_PollEntry, ___Question) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine_PollEntry, ___VoteOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine_PollEntry, ___VoteCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine_PollEntry, ___PredictionCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine_PollEntry, ___StartTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine_PollEntry, ___EndTime) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteMachine_PollEntry) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
