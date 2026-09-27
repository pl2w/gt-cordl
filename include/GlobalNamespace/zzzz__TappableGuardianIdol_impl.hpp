#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableGuardianIdol.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol_IdolActivationSound_impl.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol_StageActivatedObject_impl.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol___c__DisplayClass54_0_impl.hpp"
#include "GlobalNamespace/zzzz__Tappable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGuardianZoneManager_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol_IdolActivationSound_def.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol_StageActivatedObject_def.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol___c__DisplayClass54_0_def.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.get_isChangingPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TappableGuardianIdol::*)()>(&::GlobalNamespace::TappableGuardianIdol::get_isChangingPositions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598d708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"get_isChangingPositions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.set_isChangingPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)(bool)>(&::GlobalNamespace::TappableGuardianIdol::set_isChangingPositions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598d710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"set_isChangingPositions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)()>(&::GlobalNamespace::TappableGuardianIdol::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x598d718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                    {::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)()>(&::GlobalNamespace::TappableGuardianIdol::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x598d748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                    {::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.OnZoneActiveStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)(bool)>(&::GlobalNamespace::TappableGuardianIdol::OnZoneActiveStateChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x598d788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"OnZoneActiveStateChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)(float_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::TappableGuardianIdol::OnTapLocal)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x598d7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                    {::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.SetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::TappableGuardianIdol::SetPosition)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x598da2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"SetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.MovePositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::TappableGuardianIdol::MovePositions)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x598dbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"MovePositions", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.UpdateActivationProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)(float_t, bool)>(&::GlobalNamespace::TappableGuardianIdol::UpdateActivationProgress)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x598dc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"UpdateActivationProgress", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.StartLookingAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)()>(&::GlobalNamespace::TappableGuardianIdol::StartLookingAround)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x598dee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"StartLookingAround", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.StopLookingAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)()>(&::GlobalNamespace::TappableGuardianIdol::StopLookingAround)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x598df98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"StopLookingAround", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.DoLookingAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::TappableGuardianIdol::*)()>(&::GlobalNamespace::TappableGuardianIdol::DoLookingAround)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x598df2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"DoLookingAround", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.UpdateStageActivatedObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)()>(&::GlobalNamespace::TappableGuardianIdol::UpdateStageActivatedObjects)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x598dad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"UpdateStageActivatedObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.ShowActivationEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::TappableGuardianIdol::*)()>(&::GlobalNamespace::TappableGuardianIdol::ShowActivationEffect)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x598de78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"ShowActivationEffect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.TransitionToNextIdol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::TappableGuardianIdol::*)()>(&::GlobalNamespace::TappableGuardianIdol::TransitionToNextIdol)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x598dc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"TransitionToNextIdol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol.EaseInOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TappableGuardianIdol::*)(float_t)>(&::GlobalNamespace::TappableGuardianIdol::EaseInOut)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x598e12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"EaseInOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)()>(&::GlobalNamespace::TappableGuardianIdol::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x598e17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol._SetPosition_g__Unshrink_49_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::TappableGuardianIdol::*)()>(&::GlobalNamespace::TappableGuardianIdol::_SetPosition_g__Unshrink_49_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x598db50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"<SetPosition>g__Unshrink|49_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol._DoLookingAround_g__PickLookTarget_54_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)(::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>)>(&::GlobalNamespace::TappableGuardianIdol::_DoLookingAround_g__PickLookTarget_54_0)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x598e378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"<DoLookingAround>g__PickLookTarget|54_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol._DoLookingAround_g__SetLookTime_54_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol::*)(::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>)>(&::GlobalNamespace::TappableGuardianIdol::_DoLookingAround_g__SetLookTime_54_1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x598e96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"<DoLookingAround>g__SetLookTime|54_1", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol._DoLookingAround_g__GetClosestPlayerPosition_54_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::TappableGuardianIdol::*)(::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>)>(&::GlobalNamespace::TappableGuardianIdol::_DoLookingAround_g__GetClosestPlayerPosition_54_2)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x598e514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"<DoLookingAround>g__GetClosestPlayerPosition|54_2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_zoneManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneManager;
}
constexpr ::UnityW<::GlobalNamespace::GorillaGuardianZoneManager> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_zoneManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneManager;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_zoneManager(::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneManager = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_floatDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatDuration;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_floatDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floatDuration;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_floatDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floatDuration = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_fallDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallDuration;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_fallDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallDuration;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_fallDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallDuration = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_inactiveDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactiveDuration;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_inactiveDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactiveDuration;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_inactiveDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inactiveDuration = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_activationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationDuration;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_activationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationDuration;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_activationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationDuration = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_activeHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeHeight;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_activeHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeHeight;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_activeHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeHeight = value;
}
constexpr bool& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_knockbackOnTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackOnTrigger;
}
constexpr bool const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_knockbackOnTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackOnTrigger;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_knockbackOnTrigger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackOnTrigger = value;
}
constexpr bool& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_knockbackOnLand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackOnLand;
}
constexpr bool const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_knockbackOnLand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackOnLand;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_knockbackOnLand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackOnLand = value;
}
constexpr bool& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_knockbackOnActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackOnActivate;
}
constexpr bool const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_knockbackOnActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackOnActivate;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_knockbackOnActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackOnActivate = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_fallStartOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallStartOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_fallStartOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallStartOffset;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_fallStartOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallStartOffset = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_trailFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_trailFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailFX;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_trailFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailFX = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_tapFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_tapFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapFX;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_tapFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_explodeFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explodeFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_explodeFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explodeFX;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_explodeFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___explodeFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_startFallFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startFallFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_startFallFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startFallFX;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_startFallFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startFallFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_landedFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landedFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_landedFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landedFX;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_landedFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landedFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_activatedFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_activatedFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedFX;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_activatedFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activatedFX = value;
}
constexpr ::UnityW<::UnityEngine::SphereCollider>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_tapCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapCollision;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_tapCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapCollision;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_tapCollision(::UnityW<::UnityEngine::SphereCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapCollision = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_idolVisualRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolVisualRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_idolVisualRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolVisualRoot;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_idolVisualRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idolVisualRoot = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_idolMeshRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolMeshRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_idolMeshRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolMeshRoot;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_idolMeshRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idolMeshRoot = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_bulgeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bulgeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_bulgeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bulgeCurve;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_bulgeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bulgeCurve = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_bulgeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bulgeScale;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_bulgeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bulgeScale;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_bulgeScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bulgeScale = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__audio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__audio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audio;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__audio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audio = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__descentSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____descentSound;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__descentSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____descentSound;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__descentSound(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____descentSound = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__activateSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateSound;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__activateSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateSound;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__activateSound(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateSound = value;
}
constexpr ::ArrayW<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__activationStageSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationStageSounds;
}
constexpr ::ArrayW<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__activationStageSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationStageSounds;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__activationStageSounds(::ArrayW<::GlobalNamespace::TappableGuardianIdol_IdolActivationSound>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activationStageSounds = value;
}
constexpr ::ArrayW<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__stageActivatedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stageActivatedObjects;
}
constexpr ::ArrayW<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__stageActivatedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stageActivatedObjects;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__stageActivatedObjects(::ArrayW<::GlobalNamespace::TappableGuardianIdol_StageActivatedObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stageActivatedObjects = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__lookRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__lookRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookRoot;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__lookRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lookRoot = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__lookInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookInterval;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__lookInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookInterval;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__lookInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lookInterval = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__baseLookRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseLookRate;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__baseLookRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseLookRate;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__baseLookRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseLookRate = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__randomLookChance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomLookChance;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__randomLookChance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____randomLookChance;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__randomLookChance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____randomLookChance = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__lookRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookRoutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__lookRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookRoutine;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__lookRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lookRoutine = value;
}
constexpr bool& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__isChangingPositions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isChangingPositions_k__BackingField;
}
constexpr bool const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__isChangingPositions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isChangingPositions_k__BackingField;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__isChangingPositions_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isChangingPositions_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_transitionPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_transitionPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionPos;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_transitionPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transitionPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_finalPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_finalPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalPos;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_finalPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalPos = value;
}
constexpr int32_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__activationState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationState;
}
constexpr int32_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__activationState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationState;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__activationState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activationState = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__activationRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationRoutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__activationRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationRoutine;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__activationRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activationRoutine = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__colliderBaseRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliderBaseRadius;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__colliderBaseRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliderBaseRadius;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__colliderBaseRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliderBaseRadius = value;
}
constexpr bool& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__zoneIsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zoneIsActive;
}
constexpr bool const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get__zoneIsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zoneIsActive;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set__zoneIsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zoneIsActive = value;
}
constexpr bool& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_isActivationReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActivationReady;
}
constexpr bool const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_isActivationReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActivationReady;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_isActivationReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActivationReady = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_requiredTapDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredTapDistance;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol::__cordl_internal_get_requiredTapDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredTapDistance;
}
constexpr void GlobalNamespace::TappableGuardianIdol::__cordl_internal_set_requiredTapDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredTapDistance = value;
}
inline bool GlobalNamespace::TappableGuardianIdol::get_isChangingPositions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"get_isChangingPositions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TappableGuardianIdol::set_isChangingPositions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"set_isChangingPositions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TappableGuardianIdol::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TappableGuardianIdol::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TappableGuardianIdol::OnZoneActiveStateChanged(bool  zoneActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"OnZoneActiveStateChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zoneActive);
}
inline void GlobalNamespace::TappableGuardianIdol::OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength, tapTime, info);
}
inline void GlobalNamespace::TappableGuardianIdol::SetPosition(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"SetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void GlobalNamespace::TappableGuardianIdol::MovePositions(::UnityEngine::Vector3  finalPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"MovePositions", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finalPosition);
}
inline void GlobalNamespace::TappableGuardianIdol::UpdateActivationProgress(float_t  rawProgress, bool  progressing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"UpdateActivationProgress", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawProgress, progressing);
}
inline void GlobalNamespace::TappableGuardianIdol::StartLookingAround()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"StartLookingAround", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TappableGuardianIdol::StopLookingAround()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"StopLookingAround", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::TappableGuardianIdol::DoLookingAround()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"DoLookingAround", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::TappableGuardianIdol::UpdateStageActivatedObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"UpdateStageActivatedObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::TappableGuardianIdol::ShowActivationEffect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"ShowActivationEffect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::TappableGuardianIdol::TransitionToNextIdol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"TransitionToNextIdol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline float_t GlobalNamespace::TappableGuardianIdol::EaseInOut(float_t  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"EaseInOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, input);
}
inline void GlobalNamespace::TappableGuardianIdol::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::TappableGuardianIdol::_SetPosition_g__Unshrink_49_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"<SetPosition>g__Unshrink|49_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::TappableGuardianIdol::_DoLookingAround_g__PickLookTarget_54_0(::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"<DoLookingAround>g__PickLookTarget|54_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::TappableGuardianIdol::_DoLookingAround_g__SetLookTime_54_1(::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"<DoLookingAround>g__SetLookTime|54_1", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::TappableGuardianIdol::_DoLookingAround_g__GetClosestPlayerPosition_54_2(::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol*>(),
                        {"<DoLookingAround>g__GetClosestPlayerPosition|54_2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::TappableGuardianIdol* GlobalNamespace::TappableGuardianIdol::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TappableGuardianIdol*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TappableGuardianIdol::TappableGuardianIdol()   {
}
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::*)(int32_t)>(&::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x598e104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::*)()>(&::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598ef64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::*)()>(&::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x598ef68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::*)()>(&::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598f634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::*)()>(&::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x598f63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::*)()>(&::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598f674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol>& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol> const& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TappableGuardianIdol>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get__fall_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fall_5__2;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get__fall_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fall_5__2;
}
constexpr void GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_set__fall_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fall_5__2 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get__startPos_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPos_5__3;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get__startPos_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPos_5__3;
}
constexpr void GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_set__startPos_5__3(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startPos_5__3 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get__destinationPos_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destinationPos_5__4;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get__destinationPos_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destinationPos_5__4;
}
constexpr void GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_set__destinationPos_5__4(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destinationPos_5__4 = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get__activateLerp_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateLerp_5__5;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get__activateLerp_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateLerp_5__5;
}
constexpr void GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_set__activateLerp_5__5(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateLerp_5__5 = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get__animCurve_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animCurve_5__6;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_get__animCurve_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animCurve_5__6;
}
constexpr void GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::__cordl_internal_set__animCurve_5__6(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animCurve_5__6 = value;
}
inline void GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57* GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TappableGuardianIdol__TransitionToNextIdol_d__57::TappableGuardianIdol__TransitionToNextIdol_d__57()   {
}
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::*)(int32_t)>(&::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x598e0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::*)()>(&::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598ed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::*)()>(&::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::MoveNext)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x598ed94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::*)()>(&::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598ef1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::*)()>(&::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x598ef24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::*)()>(&::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598ef5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol>& GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol> const& GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TappableGuardianIdol>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_get__bulgeDuration_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bulgeDuration_5__2;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_get__bulgeDuration_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bulgeDuration_5__2;
}
constexpr void GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_set__bulgeDuration_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bulgeDuration_5__2 = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_get__lerpVal_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpVal_5__3;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_get__lerpVal_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpVal_5__3;
}
constexpr void GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::__cordl_internal_set__lerpVal_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lerpVal_5__3 = value;
}
inline void GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56* GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TappableGuardianIdol__ShowActivationEffect_d__56::TappableGuardianIdol__ShowActivationEffect_d__56()   {
}
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::*)(int32_t)>(&::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x598e028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::*)()>(&::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598ebb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::*)()>(&::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x598ebbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::*)()>(&::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598ed48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::*)()>(&::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x598ed50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::*)()>(&::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598ed88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol>& GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol> const& GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TappableGuardianIdol>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0& GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0 const& GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::__cordl_internal_set___8__1(::GlobalNamespace::TappableGuardianIdol___c__DisplayClass54_0  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54* GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TappableGuardianIdol__DoLookingAround_d__54::TappableGuardianIdol__DoLookingAround_d__54()   {
}
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::*)(int32_t)>(&::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x598e350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::*)()>(&::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::*)()>(&::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x598e9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::*)()>(&::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598eb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::*)()>(&::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x598eb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::*)()>(&::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598ebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol>& GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol> const& GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TappableGuardianIdol>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_get__lerpVal_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpVal_5__2;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_get__lerpVal_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpVal_5__2;
}
constexpr void GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_set__lerpVal_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lerpVal_5__2 = value;
}
constexpr float_t& GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_get__growDuration_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____growDuration_5__3;
}
constexpr float_t const& GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_get__growDuration_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____growDuration_5__3;
}
constexpr void GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::__cordl_internal_set__growDuration_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____growDuration_5__3 = value;
}
inline void GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d* GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d::TappableGuardianIdol___SetPosition_g__Unshrink_49_0_d()   {
}
