#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Recorder/HandGrabPoseLiveRecorder_RecorderStep.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/HandGrab/Recorder/zzzz__HandGrabPoseLiveRecorder_RecorderStep_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep.get_RawHandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::HandPose* (::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::*)()>(&::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::get_RawHandPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43373c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"get_RawHandPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep.set_RawHandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::*)(::Oculus::Interaction::HandGrab::HandPose*)>(&::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::set_RawHandPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa433744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"set_RawHandPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep.get_GrabPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::*)()>(&::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::get_GrabPoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa43374c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"get_GrabPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep.set_GrabPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::*)(::UnityEngine::Pose)>(&::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::set_GrabPoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa433760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"set_GrabPoint", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::*)()>(&::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43377c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"get_Item", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::*)(::UnityEngine::Rigidbody*)>(&::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa433784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"set_Item", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep.get_HandScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::*)()>(&::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::get_HandScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43378c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"get_HandScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep.set_HandScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::*)(float_t)>(&::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::set_HandScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa433794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"set_HandScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::*)(::Oculus::Interaction::HandGrab::HandPose*, ::UnityEngine::Pose, float_t, ::UnityEngine::Rigidbody*)>(&::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4335a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep.ClearInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::*)()>(&::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::ClearInteractable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa432eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"ClearInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::HandGrab::HandPose* GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::get_RawHandPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"get_RawHandPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::HandPose*>(*this, ___internal_method);
}
inline void GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::set_RawHandPose(::Oculus::Interaction::HandGrab::HandPose*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"set_RawHandPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Pose GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::get_GrabPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"get_GrabPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(*this, ___internal_method);
}
inline void GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::set_GrabPoint(::UnityEngine::Pose  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"set_GrabPoint", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rigidbody> GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::get_Item()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"get_Item", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(*this, ___internal_method);
}
inline void GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::set_Item(::UnityEngine::Rigidbody*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"set_Item", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::get_HandScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"get_HandScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::set_HandScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"set_HandScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::_ctor(::Oculus::Interaction::HandGrab::HandPose*  rawPose, ::UnityEngine::Pose  grabPoint, float_t  scale, ::UnityEngine::Rigidbody*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rawPose, grabPoint, scale, item);
}
inline void GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::ClearInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep>(),
                        {"ClearInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_RawHandPose_k__BackingField", ty: "::Oculus::Interaction::HandGrab::HandPose*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GrabPoint_k__BackingField", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Item_k__BackingField", ty: "::UnityW<::UnityEngine::Rigidbody>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_HandScale_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interactable", ty: "::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::HandGrabPoseLiveRecorder_RecorderStep(::Oculus::Interaction::HandGrab::HandPose*  _RawHandPose_k__BackingField, ::UnityEngine::Pose  _GrabPoint_k__BackingField, ::UnityW<::UnityEngine::Rigidbody>  _Item_k__BackingField, float_t  _HandScale_k__BackingField, ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  interactable) noexcept  {
this->_RawHandPose_k__BackingField = _RawHandPose_k__BackingField;
this->_GrabPoint_k__BackingField = _GrabPoint_k__BackingField;
this->_Item_k__BackingField = _Item_k__BackingField;
this->_HandScale_k__BackingField = _HandScale_k__BackingField;
this->interactable = interactable;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandGrabPoseLiveRecorder_RecorderStep::HandGrabPoseLiveRecorder_RecorderStep()   {
}
