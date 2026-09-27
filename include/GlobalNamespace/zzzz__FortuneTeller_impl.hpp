#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneTeller.hpp"
#include "GlobalNamespace/zzzz__AnimHashId_impl.hpp"
#include "GlobalNamespace/zzzz__FXType_impl.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneResult_impl.hpp"
#include "GlobalNamespace/zzzz__FortuneTeller_FortuneTellerResultFanfare_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FortuneTeller_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategoryType_def.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneResult_def.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_def.hpp"
#include "GlobalNamespace/zzzz__FortuneTellerButton_def.hpp"
#include "GlobalNamespace/zzzz__FortuneTeller_FortuneTellerResultFanfare_def.hpp"
#include "GlobalNamespace/zzzz__FortuneTeller_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::Awake)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x580a728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::OnDestroy)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x580a91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::OnEnable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x580ab08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                    {::i2c::class_of<::GlobalNamespace::FortuneTeller*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::OnDisable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x580abf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                    {::i2c::class_of<::GlobalNamespace::FortuneTeller*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.GreyZoneActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::GreyZoneActivated)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x580accc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"GreyZoneActivated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.GreyZoneDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::GreyZoneDeactivated)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x580ad18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"GreyZoneDeactivated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::FortuneTeller::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x580ad64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                    {::i2c::class_of<::GlobalNamespace::FortuneTeller*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::FortuneTeller::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x580af28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                    {::i2c::class_of<::GlobalNamespace::FortuneTeller*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x580afe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                    {::i2c::class_of<::GlobalNamespace::FortuneTeller*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.HandlePressedButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GlobalNamespace::FortuneTeller::HandlePressedButton)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x580b050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"HandlePressedButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.RequestFortuneRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FortuneTeller::RequestFortuneRPC)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x580b374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"RequestFortuneRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.SendNewFortune
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::SendNewFortune)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x580b188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"SendNewFortune", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.TriggerUpdateFortuneRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FortuneTeller::TriggerUpdateFortuneRPC)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x580b69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"TriggerUpdateFortuneRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.TriggerNewFortuneRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FortuneTeller::TriggerNewFortuneRPC)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x580b828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"TriggerNewFortuneRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.StartAttractModeMonitor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::StartAttractModeMonitor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x580af94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"StartAttractModeMonitor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.AttractModeMonitor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::AttractModeMonitor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x580b9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"AttractModeMonitor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.SendAttractAnim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::SendAttractAnim)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x580ba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"SendAttractAnim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.TriggerAttractAnimRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FortuneTeller::TriggerAttractAnimRPC)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x580bb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"TriggerAttractAnimRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.UpdateFortune
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)(::GlobalNamespace::FortuneResults_FortuneResult, bool)>(&::GlobalNamespace::FortuneTeller::UpdateFortune)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x580b580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"UpdateFortune", {}, {::i2c::type_of<::GlobalNamespace::FortuneResults_FortuneResult>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.ApplyFortuneText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::ApplyFortuneText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x580bd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"ApplyFortuneText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller.GetResultFanfare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Playables::PlayableAsset> (::GlobalNamespace::FortuneTeller::*)(::GlobalNamespace::FortuneResults_FortuneCategoryType)>(&::GlobalNamespace::FortuneTeller::GetResultFanfare)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x580bcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"GetResultFanfare", {}, {::i2c::type_of<::GlobalNamespace::FortuneResults_FortuneCategoryType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller::*)()>(&::GlobalNamespace::FortuneTeller::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x580bda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FXType& GlobalNamespace::FortuneTeller::__cordl_internal_get_limiterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limiterType;
}
constexpr ::GlobalNamespace::FXType const& GlobalNamespace::FortuneTeller::__cordl_internal_get_limiterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limiterType;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_limiterType(::GlobalNamespace::FXType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limiterType = value;
}
constexpr ::UnityW<::GlobalNamespace::FortuneTellerButton>& GlobalNamespace::FortuneTeller::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::GlobalNamespace::FortuneTellerButton> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_button(::UnityW<::GlobalNamespace::FortuneTellerButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::FortuneTeller::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_text(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::UnityW<::GlobalNamespace::FortuneResults>& GlobalNamespace::FortuneTeller::__cordl_internal_get_results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr ::UnityW<::GlobalNamespace::FortuneResults> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_results(::UnityW<::GlobalNamespace::FortuneResults>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___results = value;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::FortuneTeller::__cordl_internal_get_playable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playable;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_playable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playable;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_playable(::UnityW<::UnityEngine::Playables::PlayableDirector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playable = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::FortuneTeller::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr float_t& GlobalNamespace::FortuneTeller::__cordl_internal_get_waitDurationBeforeAttractAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitDurationBeforeAttractAnim;
}
constexpr float_t const& GlobalNamespace::FortuneTeller::__cordl_internal_get_waitDurationBeforeAttractAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitDurationBeforeAttractAnim;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_waitDurationBeforeAttractAnim(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitDurationBeforeAttractAnim = value;
}
constexpr ::ArrayW<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare>& GlobalNamespace::FortuneTeller::__cordl_internal_get_resultFanfares()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultFanfares;
}
constexpr ::ArrayW<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_resultFanfares() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultFanfares;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_resultFanfares(::ArrayW<::GlobalNamespace::FortuneTeller_FortuneTellerResultFanfare>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultFanfares = value;
}
constexpr bool& GlobalNamespace::FortuneTeller::__cordl_internal_get_changeMaterialsInGreyZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeMaterialsInGreyZone;
}
constexpr bool const& GlobalNamespace::FortuneTeller::__cordl_internal_get_changeMaterialsInGreyZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeMaterialsInGreyZone;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_changeMaterialsInGreyZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changeMaterialsInGreyZone = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::FortuneTeller::__cordl_internal_get_boothRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boothRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_boothRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boothRenderer;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_boothRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boothRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::FortuneTeller::__cordl_internal_get_boothDefaultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boothDefaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_boothDefaultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boothDefaultMaterial;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_boothDefaultMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boothDefaultMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::FortuneTeller::__cordl_internal_get_boothGreyZoneMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boothGreyZoneMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_boothGreyZoneMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boothGreyZoneMaterial;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_boothGreyZoneMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boothGreyZoneMaterial = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::FortuneTeller::__cordl_internal_get_beardRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beardRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_beardRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beardRenderer;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_beardRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beardRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::FortuneTeller::__cordl_internal_get_beardDefaultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beardDefaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_beardDefaultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beardDefaultMaterial;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_beardDefaultMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beardDefaultMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::FortuneTeller::__cordl_internal_get_beardGreyZoneMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beardGreyZoneMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_beardGreyZoneMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beardGreyZoneMaterial;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_beardGreyZoneMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beardGreyZoneMaterial = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::FortuneTeller::__cordl_internal_get_tellerRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellerRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::FortuneTeller::__cordl_internal_get_tellerRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellerRenderer;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_tellerRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tellerRenderer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& GlobalNamespace::FortuneTeller::__cordl_internal_get_tellerDefaultMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellerDefaultMaterials;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& GlobalNamespace::FortuneTeller::__cordl_internal_get_tellerDefaultMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellerDefaultMaterials;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_tellerDefaultMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tellerDefaultMaterials = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& GlobalNamespace::FortuneTeller::__cordl_internal_get_tellerGreyZoneMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellerGreyZoneMaterials;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& GlobalNamespace::FortuneTeller::__cordl_internal_get_tellerGreyZoneMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tellerGreyZoneMaterials;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_tellerGreyZoneMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tellerGreyZoneMaterials = value;
}
constexpr ::GlobalNamespace::FortuneResults_FortuneResult& GlobalNamespace::FortuneTeller::__cordl_internal_get_latestFortune()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestFortune;
}
constexpr ::GlobalNamespace::FortuneResults_FortuneResult const& GlobalNamespace::FortuneTeller::__cordl_internal_get_latestFortune() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestFortune;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_latestFortune(::GlobalNamespace::FortuneResults_FortuneResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latestFortune = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::FortuneTeller::__cordl_internal_get_triggerNewFortuneLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerNewFortuneLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::FortuneTeller::__cordl_internal_get_triggerNewFortuneLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerNewFortuneLimiter;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_triggerNewFortuneLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerNewFortuneLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::FortuneTeller::__cordl_internal_get_triggerUpdateFortuneLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerUpdateFortuneLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::FortuneTeller::__cordl_internal_get_triggerUpdateFortuneLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerUpdateFortuneLimiter;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_triggerUpdateFortuneLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerUpdateFortuneLimiter = value;
}
constexpr ::GlobalNamespace::AnimHashId& GlobalNamespace::FortuneTeller::__cordl_internal_get_trigger_attract()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger_attract;
}
constexpr ::GlobalNamespace::AnimHashId const& GlobalNamespace::FortuneTeller::__cordl_internal_get_trigger_attract() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger_attract;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_trigger_attract(::GlobalNamespace::AnimHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trigger_attract = value;
}
constexpr ::GlobalNamespace::AnimHashId& GlobalNamespace::FortuneTeller::__cordl_internal_get_trigger_prediction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger_prediction;
}
constexpr ::GlobalNamespace::AnimHashId const& GlobalNamespace::FortuneTeller::__cordl_internal_get_trigger_prediction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger_prediction;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_trigger_prediction(::GlobalNamespace::AnimHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trigger_prediction = value;
}
constexpr float_t& GlobalNamespace::FortuneTeller::__cordl_internal_get_nextAttractAnimTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextAttractAnimTimestamp;
}
constexpr float_t const& GlobalNamespace::FortuneTeller::__cordl_internal_get_nextAttractAnimTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextAttractAnimTimestamp;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_nextAttractAnimTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextAttractAnimTimestamp = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::FortuneTeller::__cordl_internal_get_attractModeMonitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractModeMonitor;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::FortuneTeller::__cordl_internal_get_attractModeMonitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attractModeMonitor;
}
constexpr void GlobalNamespace::FortuneTeller::__cordl_internal_set_attractModeMonitor(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attractModeMonitor = value;
}
inline void GlobalNamespace::FortuneTeller::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTeller::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTeller::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FortuneTeller*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTeller::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FortuneTeller*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTeller::GreyZoneActivated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"GreyZoneActivated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTeller::GreyZoneDeactivated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"GreyZoneDeactivated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTeller::OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FortuneTeller*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::FortuneTeller::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FortuneTeller*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GlobalNamespace::FortuneTeller::OnJoinedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FortuneTeller*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTeller::HandlePressedButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"HandlePressedButton", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeft);
}
inline void GlobalNamespace::FortuneTeller::RequestFortuneRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"RequestFortuneRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::FortuneTeller::SendNewFortune()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"SendNewFortune", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTeller::TriggerUpdateFortuneRPC(int32_t  fortuneType, int32_t  resultIndex, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"TriggerUpdateFortuneRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fortuneType, resultIndex, info);
}
inline void GlobalNamespace::FortuneTeller::TriggerNewFortuneRPC(int32_t  fortuneType, int32_t  resultIndex, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"TriggerNewFortuneRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fortuneType, resultIndex, info);
}
inline void GlobalNamespace::FortuneTeller::StartAttractModeMonitor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"StartAttractModeMonitor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FortuneTeller::AttractModeMonitor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"AttractModeMonitor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTeller::SendAttractAnim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"SendAttractAnim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTeller::TriggerAttractAnimRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"TriggerAttractAnimRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::FortuneTeller::UpdateFortune(::GlobalNamespace::FortuneResults_FortuneResult  result, bool  newFortune)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"UpdateFortune", {}, {::i2c::type_of<::GlobalNamespace::FortuneResults_FortuneResult>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, newFortune);
}
inline void GlobalNamespace::FortuneTeller::ApplyFortuneText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"ApplyFortuneText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> GlobalNamespace::FortuneTeller::GetResultFanfare(::GlobalNamespace::FortuneResults_FortuneCategoryType  fortuneType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {"GetResultFanfare", {}, {::i2c::type_of<::GlobalNamespace::FortuneResults_FortuneCategoryType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Playables::PlayableAsset>>(this, ___internal_method, fortuneType);
}
inline void GlobalNamespace::FortuneTeller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FortuneTeller* GlobalNamespace::FortuneTeller::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FortuneTeller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FortuneTeller::FortuneTeller()   {
}
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::*)(int32_t)>(&::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x580ba38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::*)()>(&::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x580bec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::*)()>(&::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x580bec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::*)()>(&::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580bff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::*)()>(&::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x580bff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::*)()>(&::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580c030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::FortuneTeller>& GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::FortuneTeller> const& GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FortuneTeller>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41* GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FortuneTeller__AttractModeMonitor_d__41::FortuneTeller__AttractModeMonitor_d__41()   {
}
