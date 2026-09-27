#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBusinessStation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBusinessStation_def.hpp"
#include "GameObjectScheduling/zzzz__CountdownText_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBusinessStation_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ProgressDisplay_def.hpp"
#include "GlobalNamespace/zzzz__QuestDisplay_def.hpp"
#include "GlobalNamespace/zzzz__RotatingQuestsManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::OnEnable)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5624230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::OnDisable)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x56247b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.FindQuestManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::FindQuestManager)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56244a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"FindQuestManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.UpdateCountdownTimers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::UpdateCountdownTimers)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x562476c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"UpdateCountdownTimers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.OnQuestSelectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::OnQuestSelectionChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5624bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnQuestSelectionChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.OnProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::OnProgress)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5624bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.UpdateProgressDisplays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::UpdateProgressDisplays)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5624dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"UpdateProgressDisplays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.UpdateQuestStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::UpdateQuestStatus)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5624be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"UpdateQuestStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.RedeemProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::RedeemProgress)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56259cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"RedeemProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.PerformPointRedemptionSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::PerformPointRedemptionSequence)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5625b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"PerformPointRedemptionSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.OnRemotePointsRedeemed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)(::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::MonkeBusinessStation::OnRemotePointsRedeemed)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5625bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnRemotePointsRedeemed", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::MonkeBusinessStation::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5625e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.PerformRemotePointRedemptionSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MonkeBusinessStation::*)(::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::MonkeBusinessStation::PerformRemotePointRedemptionSequence)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5625dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"PerformRemotePointRedemptionSequence", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.BuildQuestList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::BuildQuestList)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x5625160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"BuildQuestList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation.DestroyQuestList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::DestroyQuestList)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5625f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"DestroyQuestList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation::*)()>(&::GlobalNamespace::MonkeBusinessStation::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x562605c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation._DestroyQuestList_g__DestroyChildren_41_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::MonkeBusinessStation::_DestroyQuestList_g__DestroyChildren_41_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5625fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"<DestroyQuestList>g__DestroyChildren|41_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__questContainerParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questContainerParent;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__questContainerParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questContainerParent;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__questContainerParent(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____questContainerParent = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__dailyQuestContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dailyQuestContainer;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__dailyQuestContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dailyQuestContainer;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__dailyQuestContainer(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dailyQuestContainer = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__weeklyQuestContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weeklyQuestContainer;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__weeklyQuestContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weeklyQuestContainer;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__weeklyQuestContainer(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____weeklyQuestContainer = value;
}
constexpr ::UnityW<::GlobalNamespace::QuestDisplay>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__questDisplayPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questDisplayPrefab;
}
constexpr ::UnityW<::GlobalNamespace::QuestDisplay> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__questDisplayPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questDisplayPrefab;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__questDisplayPrefab(::UnityW<::GlobalNamespace::QuestDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____questDisplayPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::QuestDisplay>>*& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__quests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quests;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::QuestDisplay>>* const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__quests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____quests;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__quests(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::QuestDisplay>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____quests = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressDisplay>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__weeklyProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weeklyProgress;
}
constexpr ::UnityW<::GlobalNamespace::ProgressDisplay> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__weeklyProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weeklyProgress;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__weeklyProgress(::UnityW<::GlobalNamespace::ProgressDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____weeklyProgress = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__unclaimedPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unclaimedPoints;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__unclaimedPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unclaimedPoints;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__unclaimedPoints(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unclaimedPoints = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimButton;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__claimButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____claimButton = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSource = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimablePointsObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimablePointsObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimablePointsObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimablePointsObject;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__claimablePointsObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____claimablePointsObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__noClaimablePointsObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noClaimablePointsObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__noClaimablePointsObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noClaimablePointsObject;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__noClaimablePointsObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noClaimablePointsObject = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimablePointsBadgePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimablePointsBadgePosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimablePointsBadgePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimablePointsBadgePosition;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__claimablePointsBadgePosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____claimablePointsBadgePosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__noClaimablePointsBadgePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noClaimablePointsBadgePosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__noClaimablePointsBadgePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noClaimablePointsBadgePosition;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__noClaimablePointsBadgePosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noClaimablePointsBadgePosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__badgeMount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____badgeMount;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__badgeMount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____badgeMount;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__badgeMount(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____badgeMount = value;
}
constexpr float_t& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimDelayPerPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimDelayPerPoint;
}
constexpr float_t const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimDelayPerPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimDelayPerPoint;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__claimDelayPerPoint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____claimDelayPerPoint = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimPointDefaultSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimPointDefaultSFX;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimPointDefaultSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimPointDefaultSFX;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__claimPointDefaultSFX(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____claimPointDefaultSFX = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimPointFinalSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimPointFinalSFX;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__claimPointFinalSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____claimPointFinalSFX;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__claimPointFinalSFX(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____claimPointFinalSFX = value;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__dailyCountdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dailyCountdown;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__dailyCountdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dailyCountdown;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__dailyCountdown(::UnityW<::GameObjectScheduling::CountdownText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dailyCountdown = value;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__weeklyCountdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weeklyCountdown;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__weeklyCountdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weeklyCountdown;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__weeklyCountdown(::UnityW<::GameObjectScheduling::CountdownText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____weeklyCountdown = value;
}
constexpr ::UnityW<::GlobalNamespace::RotatingQuestsManager>& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__questManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questManager;
}
constexpr ::UnityW<::GlobalNamespace::RotatingQuestsManager> const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__questManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questManager;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__questManager(::UnityW<::GlobalNamespace::RotatingQuestsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____questManager = value;
}
constexpr int32_t& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__lastQuestChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastQuestChange;
}
constexpr int32_t const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__lastQuestChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastQuestChange;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__lastQuestChange(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastQuestChange = value;
}
constexpr int32_t& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__lastQuestDailyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastQuestDailyID;
}
constexpr int32_t const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__lastQuestDailyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastQuestDailyID;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__lastQuestDailyID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastQuestDailyID = value;
}
constexpr bool& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__isUpdatingPointCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUpdatingPointCount;
}
constexpr bool const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__isUpdatingPointCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUpdatingPointCount;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__isUpdatingPointCount(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isUpdatingPointCount = value;
}
constexpr int32_t& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__tempUnclaimedPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempUnclaimedPoints;
}
constexpr int32_t const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__tempUnclaimedPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempUnclaimedPoints;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__tempUnclaimedPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempUnclaimedPoints = value;
}
constexpr int32_t& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__tempTotalPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempTotalPoints;
}
constexpr int32_t const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__tempTotalPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempTotalPoints;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__tempTotalPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempTotalPoints = value;
}
constexpr bool& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__hasBuiltQuestList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasBuiltQuestList;
}
constexpr bool const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get__hasBuiltQuestList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasBuiltQuestList;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set__hasBuiltQuestList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasBuiltQuestList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityEngine::Coroutine*>*& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get_perPlayerRedemptionSequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perPlayerRedemptionSequence;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityEngine::Coroutine*>* const& GlobalNamespace::MonkeBusinessStation::__cordl_internal_get_perPlayerRedemptionSequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perPlayerRedemptionSequence;
}
constexpr void GlobalNamespace::MonkeBusinessStation::__cordl_internal_set_perPlayerRedemptionSequence(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityEngine::Coroutine*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perPlayerRedemptionSequence = value;
}
inline void GlobalNamespace::MonkeBusinessStation::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::FindQuestManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"FindQuestManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::UpdateCountdownTimers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"UpdateCountdownTimers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::OnQuestSelectionChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnQuestSelectionChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::OnProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::UpdateProgressDisplays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"UpdateProgressDisplays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::UpdateQuestStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"UpdateQuestStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::RedeemProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"RedeemProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MonkeBusinessStation::PerformPointRedemptionSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"PerformPointRedemptionSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::OnRemotePointsRedeemed(::GlobalNamespace::NetPlayer*  sender, int32_t  redeemedPointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnRemotePointsRedeemed", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, redeemedPointCount);
}
inline void GlobalNamespace::MonkeBusinessStation::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MonkeBusinessStation::PerformRemotePointRedemptionSequence(::GlobalNamespace::NetPlayer*  player, int32_t  redeemedPointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"PerformRemotePointRedemptionSequence", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, player, redeemedPointCount);
}
inline void GlobalNamespace::MonkeBusinessStation::BuildQuestList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"BuildQuestList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::DestroyQuestList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"DestroyQuestList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation::_DestroyQuestList_g__DestroyChildren_41_0(::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation*>(),
                        {"<DestroyQuestList>g__DestroyChildren|41_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parent);
}
inline ::GlobalNamespace::MonkeBusinessStation* GlobalNamespace::MonkeBusinessStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBusinessStation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBusinessStation::MonkeBusinessStation()   {
}
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::*)(int32_t)>(&::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5625f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::*)()>(&::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5626268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::*)()>(&::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x562626c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::*)()>(&::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5626380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::*)()>(&::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5626388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::*)()>(&::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56263c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_get_redeemedPointCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redeemedPointCount;
}
constexpr int32_t const& GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_get_redeemedPointCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redeemedPointCount;
}
constexpr void GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_set_redeemedPointCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redeemedPointCount = value;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBusinessStation>& GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBusinessStation> const& GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MonkeBusinessStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::__cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
inline void GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39* GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39::MonkeBusinessStation__PerformRemotePointRedemptionSequence_d__39()   {
}
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::*)(int32_t)>(&::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5625bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::*)()>(&::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56260f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::*)()>(&::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56260fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::*)()>(&::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5626220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::*)()>(&::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5626228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::*)()>(&::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5626260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBusinessStation>& GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBusinessStation> const& GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MonkeBusinessStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36* GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBusinessStation__PerformPointRedemptionSequence_d__36::MonkeBusinessStation__PerformPointRedemptionSequence_d__36()   {
}
