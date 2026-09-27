#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRPointerPoseSelector.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__OVRPointerPoseSelector_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRPointerPoseSelector.get_LocalPointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::OVRPointerPoseSelector::*)()>(&::Oculus::Interaction::Input::OVRPointerPoseSelector::get_LocalPointerPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa41bfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRPointerPoseSelector>(),
                        {"get_LocalPointerPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRPointerPoseSelector.set_LocalPointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRPointerPoseSelector::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Input::OVRPointerPoseSelector::set_LocalPointerPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa41bfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRPointerPoseSelector>(),
                        {"set_LocalPointerPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRPointerPoseSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRPointerPoseSelector::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::Input::OVRPointerPoseSelector::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa41bfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRPointerPoseSelector>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::OVRPointerPoseSelector::setStaticF_QUEST1_POINTERS(::ArrayW<::UnityEngine::Pose>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Pose>, "QUEST1_POINTERS", ::Oculus::Interaction::Input::OVRPointerPoseSelector>(std::forward<::ArrayW<::UnityEngine::Pose>>(value));
}
inline ::ArrayW<::UnityEngine::Pose> Oculus::Interaction::Input::OVRPointerPoseSelector::getStaticF_QUEST1_POINTERS()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Pose>, "QUEST1_POINTERS", ::Oculus::Interaction::Input::OVRPointerPoseSelector>();
}
inline void Oculus::Interaction::Input::OVRPointerPoseSelector::setStaticF_QUEST2_POINTERS(::ArrayW<::UnityEngine::Pose>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Pose>, "QUEST2_POINTERS", ::Oculus::Interaction::Input::OVRPointerPoseSelector>(std::forward<::ArrayW<::UnityEngine::Pose>>(value));
}
inline ::ArrayW<::UnityEngine::Pose> Oculus::Interaction::Input::OVRPointerPoseSelector::getStaticF_QUEST2_POINTERS()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Pose>, "QUEST2_POINTERS", ::Oculus::Interaction::Input::OVRPointerPoseSelector>();
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::OVRPointerPoseSelector::get_LocalPointerPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRPointerPoseSelector>(),
                        {"get_LocalPointerPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(*this, ___internal_method);
}
inline void Oculus::Interaction::Input::OVRPointerPoseSelector::set_LocalPointerPose(::UnityEngine::Pose  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRPointerPoseSelector>(),
                        {"set_LocalPointerPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::OVRPointerPoseSelector::_ctor(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRPointerPoseSelector>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handedness);
}
// Ctor Parameters [CppParam { name: "_LocalPointerPose_k__BackingField", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::OVRPointerPoseSelector::OVRPointerPoseSelector(::UnityEngine::Pose  _LocalPointerPose_k__BackingField) noexcept  {
this->_LocalPointerPose_k__BackingField = _LocalPointerPose_k__BackingField;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::OVRPointerPoseSelector::OVRPointerPoseSelector()   {
}
