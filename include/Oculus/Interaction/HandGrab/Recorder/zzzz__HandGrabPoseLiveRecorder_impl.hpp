#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Recorder/HandGrabPoseLiveRecorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/HandGrab/Recorder/zzzz__HandGrabPoseLiveRecorder_def.hpp"
#include "Oculus/Interaction/HandGrab/Recorder/zzzz__HandGrabPoseLiveRecorder_RecorderStep_def.hpp"
#include "Oculus/Interaction/HandGrab/Recorder/zzzz__HandGrabPoseLiveRecorder_def.hpp"
#include "Oculus/Interaction/HandGrab/Recorder/zzzz__RigidbodyDetector_def.hpp"
#include "Oculus/Interaction/HandGrab/Recorder/zzzz__TimerUIControl_def.hpp"
#include "Oculus/Interaction/HandGrab/Visuals/zzzz__HandGhostProvider_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabPose_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.get_GhostProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider> (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::get_GhostProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa432210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"get_GhostProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.get_CurrentStepIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::get_CurrentStepIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa432218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"get_CurrentStepIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.set_CurrentStepIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)(int32_t)>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::set_CurrentStepIndex)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa432220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"set_CurrentStepIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::get_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4322c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4322cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Start)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa432334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.Record
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Record)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4325c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Record", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.ClearSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::ClearSnapshot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa43244c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"ClearSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.DelayedSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)(int32_t)>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::DelayedSnapshot)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa432674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"DelayedSnapshot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.TakeSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::TakeSnapshot)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa4326f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"TakeSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.FindNearestItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)(::UnityEngine::Rigidbody*, ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*, ::by_ref<float_t>)>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::FindNearestItem)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa432878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"FindNearestItem", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.Undo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Undo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa432e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Undo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.Redo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Redo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa432f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Redo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.EnableGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)(bool)>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::EnableGrabbing)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa43259c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"EnableGrabbing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.Record
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)(::Oculus::Interaction::Input::IHand*, ::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Record)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xa432a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Record", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.TrackedPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::HandPose* (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::TrackedPose)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa43338c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"TrackedPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.AddHandGrabPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)(::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabInteractable*>, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>)>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::AddHandGrabPose)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa433078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"AddHandGrabPose", {}, {::i2c::type_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabInteractable*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder.AttachGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)(::Oculus::Interaction::HandGrab::HandGrabPose*, float_t)>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::AttachGhost)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa4331e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"AttachGhost", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa433670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__leftHand(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHand = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__rightHand(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHand = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__ghostProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ghostProvider;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider> const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__ghostProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ghostProvider;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__ghostProvider(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ghostProvider = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__handGhostProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGhostProvider;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider> const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__handGhostProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGhostProvider;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__handGhostProvider(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGhostProvider = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::TimerUIControl>& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__timerControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timerControl;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::TimerUIControl> const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__timerControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timerControl;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__timerControl(::UnityW<::Oculus::Interaction::HandGrab::Recorder::TimerUIControl>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timerControl = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__delayLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__delayLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayLabel;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__delayLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayLabel = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__leftDetector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftDetector;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector> const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__leftDetector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftDetector;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__leftDetector(::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftDetector = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__rightDetector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightDetector;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector> const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__rightDetector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightDetector;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__rightDetector(::UnityW<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightDetector = value;
}
constexpr ::UnityEngine::WaitForSeconds*& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__waitOneSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitOneSeconds;
}
constexpr ::UnityEngine::WaitForSeconds* const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__waitOneSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitOneSeconds;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__waitOneSeconds(::UnityEngine::WaitForSeconds*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitOneSeconds = value;
}
constexpr ::UnityEngine::Coroutine*& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__delayedSnapRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedSnapRoutine;
}
constexpr ::UnityEngine::Coroutine* const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__delayedSnapRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedSnapRoutine;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__delayedSnapRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayedSnapRoutine = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenTimeStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenTimeStep;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenTimeStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenTimeStep;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set_WhenTimeStep(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenTimeStep = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSnapshot;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSnapshot;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set_WhenSnapshot(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenSnapshot = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenError;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenError;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set_WhenError(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenError = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenCanUndo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenCanUndo;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenCanUndo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenCanUndo;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set_WhenCanUndo(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenCanUndo = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenCanRedo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenCanRedo;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenCanRedo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenCanRedo;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set_WhenCanRedo(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenCanRedo = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenGrabAllowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenGrabAllowed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenGrabAllowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenGrabAllowed;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set_WhenGrabAllowed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenGrabAllowed = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenGrabDisallowed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenGrabDisallowed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get_WhenGrabDisallowed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenGrabDisallowed;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set_WhenGrabDisallowed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenGrabDisallowed = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>*& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__recorderSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorderSteps;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>* const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__recorderSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorderSteps;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__recorderSteps(::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recorderSteps = value;
}
constexpr int32_t& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__currentStepIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStepIndex;
}
constexpr int32_t const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__currentStepIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStepIndex;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__currentStepIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentStepIndex = value;
}
constexpr bool& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__grabbingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbingEnabled;
}
constexpr bool const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_get__grabbingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbingEnabled;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::__cordl_internal_set__grabbingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbingEnabled = value;
}
inline ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider> Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::get_GhostProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"get_GhostProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandGhostProvider>>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::get_CurrentStepIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"get_CurrentStepIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::set_CurrentStepIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"set_CurrentStepIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Record()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Record", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::ClearSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"ClearSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::DelayedSnapshot(int32_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"DelayedSnapshot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, seconds);
}
inline bool Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::TakeSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"TakeSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::FindNearestItem(::UnityEngine::Rigidbody*  handBody, ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*  detector, ::by_ref<float_t>  bestDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"FindNearestItem", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method, handBody, detector, bestDistance);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Undo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Undo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Redo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Redo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::EnableGrabbing(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"EnableGrabbing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline bool Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::Record(::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::Rigidbody*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"Record", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hand, item);
}
inline ::Oculus::Interaction::HandGrab::HandPose* Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::TrackedPose(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"TrackedPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::HandPose*>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::AddHandGrabPose(::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep  recorderStep, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabInteractable*>  interactable, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>  handGrabPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"AddHandGrabPose", {}, {::i2c::type_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabInteractable*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recorderStep, interactable, handGrabPose);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::AttachGhost(::Oculus::Interaction::HandGrab::HandGrabPose*  point, float_t  referenceScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {"AttachGhost", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point, referenceScale);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder* Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder::HandGrabPoseLiveRecorder()   {
}
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::*)(int32_t)>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa432850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa43379c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa4337a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43395c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa433964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::*)()>(&::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43399c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_get_seconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seconds;
}
constexpr int32_t const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_get_seconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seconds;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_set_seconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seconds = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder>& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder> const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32* Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::Recorder::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32::HandGrabPoseLiveRecorder__DelayedSnapshot_d__32()   {
}
