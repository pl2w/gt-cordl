#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBusinessStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBusinessStation)
namespace GameObjectScheduling {
class CountdownText;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class MonkeBusinessStation__PerformPointRedemptionSequence_d__36;
}
namespace GlobalNamespace {
class MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class ProgressDisplay;
}
namespace GlobalNamespace {
class QuestDisplay;
}
namespace GlobalNamespace {
class RotatingQuestsManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBusinessStation;
}
namespace GlobalNamespace {
class MonkeBusinessStation__PerformPointRedemptionSequence_d__36;
}
namespace GlobalNamespace {
class MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBusinessStation*);
MARK_REF_T(::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*);
MARK_REF_T(::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBusinessStation*, "", "MonkeBusinessStation");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*, "", "MonkeBusinessStation/<PerformPointRedemptionSequence>d__36");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*, "", "MonkeBusinessStation/<PerformRemotePointRedemptionSequence>d__39");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBusinessStation
class CORDL_TYPE MonkeBusinessStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PerformPointRedemptionSequence_d__36 = ::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36;

using _PerformRemotePointRedemptionSequence_d__39 = ::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39;

/// @brief Field _audioSource, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _badgeMount, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__badgeMount, put=__cordl_internal_set__badgeMount)) ::UnityW<::UnityEngine::Transform>  _badgeMount;

/// @brief Field _claimButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__claimButton, put=__cordl_internal_set__claimButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  _claimButton;

/// @brief Field _claimDelayPerPoint, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__claimDelayPerPoint, put=__cordl_internal_set__claimDelayPerPoint)) float_t  _claimDelayPerPoint;

/// @brief Field _claimPointDefaultSFX, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__claimPointDefaultSFX, put=__cordl_internal_set__claimPointDefaultSFX)) ::UnityW<::UnityEngine::AudioClip>  _claimPointDefaultSFX;

/// @brief Field _claimPointFinalSFX, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__claimPointFinalSFX, put=__cordl_internal_set__claimPointFinalSFX)) ::UnityW<::UnityEngine::AudioClip>  _claimPointFinalSFX;

/// @brief Field _claimablePointsBadgePosition, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__claimablePointsBadgePosition, put=__cordl_internal_set__claimablePointsBadgePosition)) ::UnityW<::UnityEngine::Transform>  _claimablePointsBadgePosition;

/// @brief Field _claimablePointsObject, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__claimablePointsObject, put=__cordl_internal_set__claimablePointsObject)) ::UnityW<::UnityEngine::GameObject>  _claimablePointsObject;

/// @brief Field _dailyCountdown, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__dailyCountdown, put=__cordl_internal_set__dailyCountdown)) ::UnityW<::GameObjectScheduling::CountdownText>  _dailyCountdown;

/// @brief Field _dailyQuestContainer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__dailyQuestContainer, put=__cordl_internal_set__dailyQuestContainer)) ::UnityW<::UnityEngine::RectTransform>  _dailyQuestContainer;

/// @brief Field _hasBuiltQuestList, offset 0xd4, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasBuiltQuestList, put=__cordl_internal_set__hasBuiltQuestList)) bool  _hasBuiltQuestList;

/// @brief Field _isUpdatingPointCount, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isUpdatingPointCount, put=__cordl_internal_set__isUpdatingPointCount)) bool  _isUpdatingPointCount;

/// @brief Field _lastQuestChange, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastQuestChange, put=__cordl_internal_set__lastQuestChange)) int32_t  _lastQuestChange;

/// @brief Field _lastQuestDailyID, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastQuestDailyID, put=__cordl_internal_set__lastQuestDailyID)) int32_t  _lastQuestDailyID;

/// @brief Field _noClaimablePointsBadgePosition, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__noClaimablePointsBadgePosition, put=__cordl_internal_set__noClaimablePointsBadgePosition)) ::UnityW<::UnityEngine::Transform>  _noClaimablePointsBadgePosition;

/// @brief Field _noClaimablePointsObject, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__noClaimablePointsObject, put=__cordl_internal_set__noClaimablePointsObject)) ::UnityW<::UnityEngine::GameObject>  _noClaimablePointsObject;

/// @brief Field _questContainerParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__questContainerParent, put=__cordl_internal_set__questContainerParent)) ::UnityW<::UnityEngine::RectTransform>  _questContainerParent;

/// @brief Field _questDisplayPrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__questDisplayPrefab, put=__cordl_internal_set__questDisplayPrefab)) ::UnityW<::GlobalNamespace::QuestDisplay>  _questDisplayPrefab;

/// @brief Field _questManager, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__questManager, put=__cordl_internal_set__questManager)) ::UnityW<::GlobalNamespace::RotatingQuestsManager>  _questManager;

/// @brief Field _quests, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__quests, put=__cordl_internal_set__quests)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::QuestDisplay>>*  _quests;

/// @brief Field _tempTotalPoints, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__tempTotalPoints, put=__cordl_internal_set__tempTotalPoints)) int32_t  _tempTotalPoints;

/// @brief Field _tempUnclaimedPoints, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__tempUnclaimedPoints, put=__cordl_internal_set__tempUnclaimedPoints)) int32_t  _tempUnclaimedPoints;

/// @brief Field _unclaimedPoints, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__unclaimedPoints, put=__cordl_internal_set__unclaimedPoints)) ::UnityW<::TMPro::TMP_Text>  _unclaimedPoints;

/// @brief Field _weeklyCountdown, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__weeklyCountdown, put=__cordl_internal_set__weeklyCountdown)) ::UnityW<::GameObjectScheduling::CountdownText>  _weeklyCountdown;

/// @brief Field _weeklyProgress, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__weeklyProgress, put=__cordl_internal_set__weeklyProgress)) ::UnityW<::GlobalNamespace::ProgressDisplay>  _weeklyProgress;

/// @brief Field _weeklyQuestContainer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__weeklyQuestContainer, put=__cordl_internal_set__weeklyQuestContainer)) ::UnityW<::UnityEngine::RectTransform>  _weeklyQuestContainer;

/// @brief Field perPlayerRedemptionSequence, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_perPlayerRedemptionSequence, put=__cordl_internal_set_perPlayerRedemptionSequence)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityEngine::Coroutine*>*  perPlayerRedemptionSequence;

/// @brief Method BuildQuestList, addr 0x5625160, size 0x77c, virtual false, abstract: false, final false
inline void BuildQuestList() ;

/// @brief Method DestroyQuestList, addr 0x5625f28, size 0x80, virtual false, abstract: false, final false
inline void DestroyQuestList() ;

/// @brief Method FindQuestManager, addr 0x56244a4, size 0xa8, virtual false, abstract: false, final false
inline void FindQuestManager() ;

static inline ::GlobalNamespace::MonkeBusinessStation* New_ctor() ;

/// @brief Method OnDisable, addr 0x56247b4, size 0x260, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5624230, size 0x274, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayerLeftRoom, addr 0x5625e50, size 0xb0, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnProgress, addr 0x5624bd0, size 0x18, virtual false, abstract: false, final false
inline void OnProgress() ;

/// @brief Method OnQuestSelectionChanged, addr 0x5624bcc, size 0x4, virtual false, abstract: false, final false
inline void OnQuestSelectionChanged() ;

/// @brief Method OnRemotePointsRedeemed, addr 0x5625bec, size 0x1d4, virtual false, abstract: false, final false
inline void OnRemotePointsRedeemed(::GlobalNamespace::NetPlayer*  sender, int32_t  redeemedPointCount) ;

/// [IteratorStateMachine(typeof(MonkeBusinessStation::<PerformPointRedemptionSequence>d__36))]
/// @brief Method PerformPointRedemptionSequence, addr 0x5625b58, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PerformPointRedemptionSequence() ;

/// [IteratorStateMachine(typeof(MonkeBusinessStation::<PerformRemotePointRedemptionSequence>d__39))]
/// @brief Method PerformRemotePointRedemptionSequence, addr 0x5625dc0, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PerformRemotePointRedemptionSequence(::GlobalNamespace::NetPlayer*  player, int32_t  redeemedPointCount) ;

/// @brief Method RedeemProgress, addr 0x56259cc, size 0xdc, virtual false, abstract: false, final false
inline void RedeemProgress() ;

/// @brief Method UpdateCountdownTimers, addr 0x562476c, size 0x48, virtual false, abstract: false, final false
inline void UpdateCountdownTimers() ;

/// @brief Method UpdateProgressDisplays, addr 0x5624dcc, size 0x1a0, virtual false, abstract: false, final false
inline void UpdateProgressDisplays() ;

/// @brief Method UpdateQuestStatus, addr 0x5624be8, size 0x1e4, virtual false, abstract: false, final false
inline void UpdateQuestStatus() ;

/// [CompilerGenerated]
/// @brief Method <DestroyQuestList>g__DestroyChildren|41_0, addr 0x5625fa8, size 0xb4, virtual false, abstract: false, final false
static inline void _DestroyQuestList_g__DestroyChildren_41_0(::UnityEngine::Transform*  parent) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__badgeMount() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__badgeMount() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get__claimButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get__claimButton() ;

constexpr float_t const& __cordl_internal_get__claimDelayPerPoint() const;

constexpr float_t& __cordl_internal_get__claimDelayPerPoint() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__claimPointDefaultSFX() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__claimPointDefaultSFX() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__claimPointFinalSFX() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__claimPointFinalSFX() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__claimablePointsBadgePosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__claimablePointsBadgePosition() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__claimablePointsObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__claimablePointsObject() ;

constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& __cordl_internal_get__dailyCountdown() const;

constexpr ::UnityW<::GameObjectScheduling::CountdownText>& __cordl_internal_get__dailyCountdown() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__dailyQuestContainer() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__dailyQuestContainer() ;

constexpr bool const& __cordl_internal_get__hasBuiltQuestList() const;

constexpr bool& __cordl_internal_get__hasBuiltQuestList() ;

constexpr bool const& __cordl_internal_get__isUpdatingPointCount() const;

constexpr bool& __cordl_internal_get__isUpdatingPointCount() ;

constexpr int32_t const& __cordl_internal_get__lastQuestChange() const;

constexpr int32_t& __cordl_internal_get__lastQuestChange() ;

constexpr int32_t const& __cordl_internal_get__lastQuestDailyID() const;

constexpr int32_t& __cordl_internal_get__lastQuestDailyID() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__noClaimablePointsBadgePosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__noClaimablePointsBadgePosition() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__noClaimablePointsObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__noClaimablePointsObject() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__questContainerParent() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__questContainerParent() ;

constexpr ::UnityW<::GlobalNamespace::QuestDisplay> const& __cordl_internal_get__questDisplayPrefab() const;

constexpr ::UnityW<::GlobalNamespace::QuestDisplay>& __cordl_internal_get__questDisplayPrefab() ;

constexpr ::UnityW<::GlobalNamespace::RotatingQuestsManager> const& __cordl_internal_get__questManager() const;

constexpr ::UnityW<::GlobalNamespace::RotatingQuestsManager>& __cordl_internal_get__questManager() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::QuestDisplay>>* const& __cordl_internal_get__quests() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::QuestDisplay>>*& __cordl_internal_get__quests() ;

constexpr int32_t const& __cordl_internal_get__tempTotalPoints() const;

constexpr int32_t& __cordl_internal_get__tempTotalPoints() ;

constexpr int32_t const& __cordl_internal_get__tempUnclaimedPoints() const;

constexpr int32_t& __cordl_internal_get__tempUnclaimedPoints() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__unclaimedPoints() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__unclaimedPoints() ;

constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& __cordl_internal_get__weeklyCountdown() const;

constexpr ::UnityW<::GameObjectScheduling::CountdownText>& __cordl_internal_get__weeklyCountdown() ;

constexpr ::UnityW<::GlobalNamespace::ProgressDisplay> const& __cordl_internal_get__weeklyProgress() const;

constexpr ::UnityW<::GlobalNamespace::ProgressDisplay>& __cordl_internal_get__weeklyProgress() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__weeklyQuestContainer() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__weeklyQuestContainer() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityEngine::Coroutine*>* const& __cordl_internal_get_perPlayerRedemptionSequence() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityEngine::Coroutine*>*& __cordl_internal_get_perPlayerRedemptionSequence() ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__badgeMount(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__claimButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set__claimDelayPerPoint(float_t  value) ;

constexpr void __cordl_internal_set__claimPointDefaultSFX(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__claimPointFinalSFX(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__claimablePointsBadgePosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__claimablePointsObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__dailyCountdown(::UnityW<::GameObjectScheduling::CountdownText>  value) ;

constexpr void __cordl_internal_set__dailyQuestContainer(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__hasBuiltQuestList(bool  value) ;

constexpr void __cordl_internal_set__isUpdatingPointCount(bool  value) ;

constexpr void __cordl_internal_set__lastQuestChange(int32_t  value) ;

constexpr void __cordl_internal_set__lastQuestDailyID(int32_t  value) ;

constexpr void __cordl_internal_set__noClaimablePointsBadgePosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__noClaimablePointsObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__questContainerParent(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__questDisplayPrefab(::UnityW<::GlobalNamespace::QuestDisplay>  value) ;

constexpr void __cordl_internal_set__questManager(::UnityW<::GlobalNamespace::RotatingQuestsManager>  value) ;

constexpr void __cordl_internal_set__quests(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::QuestDisplay>>*  value) ;

constexpr void __cordl_internal_set__tempTotalPoints(int32_t  value) ;

constexpr void __cordl_internal_set__tempUnclaimedPoints(int32_t  value) ;

constexpr void __cordl_internal_set__unclaimedPoints(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__weeklyCountdown(::UnityW<::GameObjectScheduling::CountdownText>  value) ;

constexpr void __cordl_internal_set__weeklyProgress(::UnityW<::GlobalNamespace::ProgressDisplay>  value) ;

constexpr void __cordl_internal_set__weeklyQuestContainer(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_perPlayerRedemptionSequence(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityEngine::Coroutine*>*  value) ;

/// @brief Method .ctor, addr 0x562605c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBusinessStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBusinessStation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBusinessStation(MonkeBusinessStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBusinessStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBusinessStation(MonkeBusinessStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{592};

/// [SerializeField]
/// @brief Field _questContainerParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____questContainerParent;

/// [SerializeField]
/// @brief Field _dailyQuestContainer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____dailyQuestContainer;

/// [SerializeField]
/// @brief Field _weeklyQuestContainer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____weeklyQuestContainer;

/// [SerializeField]
/// @brief Field _questDisplayPrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::QuestDisplay>  ____questDisplayPrefab;

/// [SerializeField]
/// @brief Field _quests, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::QuestDisplay>>*  ____quests;

/// [SerializeField]
/// @brief Field _weeklyProgress, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressDisplay>  ____weeklyProgress;

/// [SerializeField]
/// @brief Field _unclaimedPoints, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____unclaimedPoints;

/// [SerializeField]
/// @brief Field _claimButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ____claimButton;

/// [SerializeField]
/// @brief Field _audioSource, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// [SerializeField]
/// @brief Field _claimablePointsObject, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____claimablePointsObject;

/// [SerializeField]
/// @brief Field _noClaimablePointsObject, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____noClaimablePointsObject;

/// [SerializeField]
/// @brief Field _claimablePointsBadgePosition, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____claimablePointsBadgePosition;

/// [SerializeField]
/// @brief Field _noClaimablePointsBadgePosition, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____noClaimablePointsBadgePosition;

/// [SerializeField]
/// @brief Field _badgeMount, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____badgeMount;

/// [Space]
/// [SerializeField]
/// @brief Field _claimDelayPerPoint, offset: 0x90, size: 0x4, def value: None
 float_t  ____claimDelayPerPoint;

/// [SerializeField]
/// @brief Field _claimPointDefaultSFX, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____claimPointDefaultSFX;

/// [SerializeField]
/// @brief Field _claimPointFinalSFX, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____claimPointFinalSFX;

/// [Header("Quest Timers")]
/// [SerializeField]
/// @brief Field _dailyCountdown, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::CountdownText>  ____dailyCountdown;

/// [SerializeField]
/// @brief Field _weeklyCountdown, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::CountdownText>  ____weeklyCountdown;

/// @brief Field _questManager, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RotatingQuestsManager>  ____questManager;

/// @brief Field _lastQuestChange, offset: 0xc0, size: 0x4, def value: None
 int32_t  ____lastQuestChange;

/// @brief Field _lastQuestDailyID, offset: 0xc4, size: 0x4, def value: None
 int32_t  ____lastQuestDailyID;

/// @brief Field _isUpdatingPointCount, offset: 0xc8, size: 0x1, def value: None
 bool  ____isUpdatingPointCount;

/// @brief Field _tempUnclaimedPoints, offset: 0xcc, size: 0x4, def value: None
 int32_t  ____tempUnclaimedPoints;

/// @brief Field _tempTotalPoints, offset: 0xd0, size: 0x4, def value: None
 int32_t  ____tempTotalPoints;

/// @brief Field _hasBuiltQuestList, offset: 0xd4, size: 0x1, def value: None
 bool  ____hasBuiltQuestList;

/// @brief Field perPlayerRedemptionSequence, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityEngine::Coroutine*>*  ___perPlayerRedemptionSequence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____questContainerParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____dailyQuestContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____weeklyQuestContainer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____questDisplayPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____quests) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____weeklyProgress) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____unclaimedPoints) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____claimButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____audioSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____claimablePointsObject) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____noClaimablePointsObject) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____claimablePointsBadgePosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____noClaimablePointsBadgePosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____badgeMount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____claimDelayPerPoint) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____claimPointDefaultSFX) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____claimPointFinalSFX) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____dailyCountdown) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____weeklyCountdown) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____questManager) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____lastQuestChange) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____lastQuestDailyID) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____isUpdatingPointCount) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____tempUnclaimedPoints) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____tempTotalPoints) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ____hasBuiltQuestList) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation, ___perPlayerRedemptionSequence) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBusinessStation) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBusinessStation/<PerformRemotePointRedemptionSequence>d__39
class CORDL_TYPE MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MonkeBusinessStation>  __4__this;

/// @brief Field player, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::GlobalNamespace::NetPlayer*  player;

/// @brief Field redeemedPointCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_redeemedPointCount, put=__cordl_internal_set_redeemedPointCount)) int32_t  redeemedPointCount;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x562626c, size 0x114, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5626380, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5626388, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x56263c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5626268, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MonkeBusinessStation> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MonkeBusinessStation>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_player() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_player() ;

constexpr int32_t const& __cordl_internal_get_redeemedPointCount() const;

constexpr int32_t& __cordl_internal_get_redeemedPointCount() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MonkeBusinessStation>  value) ;

constexpr void __cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_redeemedPointCount(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5625f00, size 0x28, virtual false, abstract: false, final false
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
constexpr MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39(MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39(MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{591};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field redeemedPointCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___redeemedPointCount;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeBusinessStation>  _____4__this;

/// @brief Field player, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___player;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39, ___redeemedPointCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39, ___player) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBusinessStation/<PerformPointRedemptionSequence>d__36
class CORDL_TYPE MonkeBusinessStation__PerformPointRedemptionSequence_d__36 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MonkeBusinessStation>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x56260fc, size 0x124, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5626220, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5626228, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5626260, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x56260f8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MonkeBusinessStation> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MonkeBusinessStation>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MonkeBusinessStation>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5625bc4, size 0x28, virtual false, abstract: false, final false
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
constexpr MonkeBusinessStation__PerformPointRedemptionSequence_d__36() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBusinessStation__PerformPointRedemptionSequence_d__36", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBusinessStation__PerformPointRedemptionSequence_d__36(MonkeBusinessStation__PerformPointRedemptionSequence_d__36 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBusinessStation__PerformPointRedemptionSequence_d__36", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBusinessStation__PerformPointRedemptionSequence_d__36(MonkeBusinessStation__PerformPointRedemptionSequence_d__36 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{590};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeBusinessStation>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
