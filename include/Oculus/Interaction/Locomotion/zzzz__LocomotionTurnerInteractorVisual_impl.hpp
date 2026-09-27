#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionTurnerInteractorVisual.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionTurnerInteractorVisual_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionTurnerInteractor_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnArrowVisuals_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnerEventBroadcaster_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.get_Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IAxis1D* (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::get_Progress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d4580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"get_Progress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.set_Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)(::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::set_Progress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d4588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"set_Progress", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.get_VerticalOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::get_VerticalOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d4590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"get_VerticalOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.set_VerticalOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::set_VerticalOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d4598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"set_VerticalOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4d45a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4d45f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::OnEnable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa4d46a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::OnDisable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa4d47fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.HandleTurnerStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::HandleTurnerStateChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4d4958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"HandleTurnerStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.HandleTurnerPostprocessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::HandleTurnerPostprocessed)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa4d4a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"HandleTurnerPostprocessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.UpdatePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::UpdatePose)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0xa4d4bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"UpdatePose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.InjectAllLocomotionTurnerInteractorArrowsVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*, ::Oculus::Interaction::Locomotion::TurnArrowVisuals*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectAllLocomotionTurnerInteractorArrowsVisual)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4d4f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectAllLocomotionTurnerInteractorArrowsVisual", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::TurnArrowVisuals*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.InjectTurner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectTurner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d4f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectTurner", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.InjectOptionalRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectOptionalRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d4f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectOptionalRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.InjectVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)(::Oculus::Interaction::Locomotion::TurnArrowVisuals*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectVisuals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d4f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectVisuals", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TurnArrowVisuals*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.InjectOptionalLookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectOptionalLookAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d4f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectOptionalLookAt", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual.InjectOptionalProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)(::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectOptionalProgress)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4d4f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectOptionalProgress", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4d5038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__turner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____turner;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor> const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__turner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____turner;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_set__turner(::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____turner = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__broadcaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadcaster;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster> const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__broadcaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadcaster;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_set__broadcaster(::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____broadcaster = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__lookAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookAt;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__lookAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookAt;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_set__lookAt(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lookAt = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_set__root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__visuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals> const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__visuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_set__visuals(::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visuals = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_set__progress(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progress = value;
}
constexpr ::Oculus::Interaction::Input::IAxis1D*& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__Progress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Progress_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IAxis1D* const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__Progress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Progress_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_set__Progress_k__BackingField(::Oculus::Interaction::Input::IAxis1D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Progress_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__verticalOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalOffset;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__verticalOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalOffset;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_set__verticalOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____verticalOffset = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"get_Progress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IAxis1D*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::set_Progress(::Oculus::Interaction::Input::IAxis1D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"set_Progress", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::get_VerticalOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"get_VerticalOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::set_VerticalOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"set_VerticalOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::HandleTurnerStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateArgs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"HandleTurnerStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateArgs);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::HandleTurnerPostprocessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"HandleTurnerPostprocessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::UpdatePose(::UnityEngine::Pose  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"UpdatePose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectAllLocomotionTurnerInteractorArrowsVisual(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*  turner, ::Oculus::Interaction::Locomotion::TurnArrowVisuals*  visuals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectAllLocomotionTurnerInteractorArrowsVisual", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::TurnArrowVisuals*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turner, visuals);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectTurner(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*  turner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectTurner", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turner);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectOptionalRoot(::UnityEngine::Transform*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectOptionalRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectVisuals(::Oculus::Interaction::Locomotion::TurnArrowVisuals*  visuals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectVisuals", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TurnArrowVisuals*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visuals);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectOptionalLookAt(::UnityEngine::Transform*  lookAt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectOptionalLookAt", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookAt);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::InjectOptionalProgress(::Oculus::Interaction::Input::IAxis1D*  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {"InjectOptionalProgress", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual* Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorVisual::LocomotionTurnerInteractorVisual()   {
}
