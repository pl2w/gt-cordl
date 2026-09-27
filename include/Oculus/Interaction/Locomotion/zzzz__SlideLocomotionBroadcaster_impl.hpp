#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/SlideLocomotionBroadcaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__SlideLocomotionBroadcaster_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis2D_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__SlideLocomotionBroadcaster_def.hpp"
#include "Oculus/Interaction/zzzz__UniqueIdentifier_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.get_Aiming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::get_Aiming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ca40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"get_Aiming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.set_Aiming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::set_Aiming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ca414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"set_Aiming", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.get_VerticalDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::get_VerticalDeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ca41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"get_VerticalDeadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.set_VerticalDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::set_VerticalDeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ca424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"set_VerticalDeadZone", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.get_HorizontalDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::get_HorizontalDeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ca42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"get_HorizontalDeadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.set_HorizontalDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::set_HorizontalDeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ca434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"set_HorizontalDeadZone", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.add_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::add_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4ca43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.remove_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::remove_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4ca4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::get_Identifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4ca58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::Awake)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4ca5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4ca6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::Update)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa4ca6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.ProcessAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::ProcessAxisSensitivity)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa4ca864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"ProcessAxisSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.StepDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::StepDirection)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa4ca950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"StepDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.InjectAllSlideLocomotionBroadcaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)(::Oculus::Interaction::Input::IAxis2D*)>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::InjectAllSlideLocomotionBroadcaster)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4caafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"InjectAllSlideLocomotionBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster.InjectAxis2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)(::Oculus::Interaction::Input::IAxis2D*)>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::InjectAxis2D)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4cab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"InjectAxis2D", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa4cabd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__axis2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__axis2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_set__axis2D(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis2D = value;
}
constexpr ::Oculus::Interaction::Input::IAxis2D*& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get_Axis2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis2D;
}
constexpr ::Oculus::Interaction::Input::IAxis2D* const& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get_Axis2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis2D;
}
constexpr void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_set_Axis2D(::Oculus::Interaction::Input::IAxis2D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Axis2D = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__aiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aiming;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__aiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aiming;
}
constexpr void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_set__aiming(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aiming = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__verticalDeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalDeadZone;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__verticalDeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalDeadZone;
}
constexpr void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_set__verticalDeadZone(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____verticalDeadZone = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__horizontalDeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalDeadZone;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__horizontalDeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalDeadZone;
}
constexpr void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_set__horizontalDeadZone(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____horizontalDeadZone = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__whenLocomotionPerformed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionPerformed;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__whenLocomotionPerformed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionPerformed;
}
constexpr void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_set__whenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenLocomotionPerformed = value;
}
constexpr ::Oculus::Interaction::UniqueIdentifier*& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr ::Oculus::Interaction::UniqueIdentifier* const& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____identifier = value;
}
constexpr bool& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::get_Aiming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"get_Aiming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::set_Aiming(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"set_Aiming", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::get_VerticalDeadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"get_VerticalDeadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::set_VerticalDeadZone(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"set_VerticalDeadZone", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::get_HorizontalDeadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"get_HorizontalDeadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::set_HorizontalDeadZone(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"set_HorizontalDeadZone", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::ProcessAxisSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"ProcessAxisSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::StepDirection(::UnityEngine::Vector3  axisValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"StepDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, axisValue);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::InjectAllSlideLocomotionBroadcaster(::Oculus::Interaction::Input::IAxis2D*  axis2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"InjectAllSlideLocomotionBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis2D);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::InjectAxis2D(::Oculus::Interaction::Input::IAxis2D*  axis2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {"InjectAxis2D", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis2D);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster* Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr  Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::operator ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster::SlideLocomotionBroadcaster()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::*)()>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cad78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c.__ctor_b__29_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::__ctor_b__29_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4cad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*>(),
                        {"<.ctor>b__29_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::setStaticF___9(::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*>(std::forward<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c* Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::setStaticF___9__29_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__29_0", ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*>(std::forward<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::getStaticF___9__29_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__29_0", ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::__ctor_b__29_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*>(),
                        {"<.ctor>b__29_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c* Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::SlideLocomotionBroadcaster___c::SlideLocomotionBroadcaster___c()   {
}
