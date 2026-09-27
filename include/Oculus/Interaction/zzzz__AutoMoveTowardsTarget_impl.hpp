#pragma once
// IWYU pragma private; include "Oculus/Interaction/AutoMoveTowardsTarget.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/zzzz__AutoMoveTowardsTarget_def.hpp"
#include "Oculus/Interaction/zzzz__AutoMoveTowardsTarget_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__IPointableElement_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEventType_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_def.hpp"
#include "Oculus/Interaction/zzzz__Tween_def.hpp"
#include "Oculus/Interaction/zzzz__UniqueIdentifier_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::AutoMoveTowardsTarget::*)()>(&::Oculus::Interaction::AutoMoveTowardsTarget::get_Pose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4731c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.get_Stopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::AutoMoveTowardsTarget::*)()>(&::Oculus::Interaction::AutoMoveTowardsTarget::get_Stopped)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa472b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"get_Stopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.get_Aborting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::AutoMoveTowardsTarget::*)()>(&::Oculus::Interaction::AutoMoveTowardsTarget::get_Aborting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4731e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"get_Aborting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.set_Aborting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTarget::*)(bool)>(&::Oculus::Interaction::AutoMoveTowardsTarget::set_Aborting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4731ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"set_Aborting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::AutoMoveTowardsTarget::*)()>(&::Oculus::Interaction::AutoMoveTowardsTarget::get_Identifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4731f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTarget::*)(::Oculus::Interaction::PoseTravelData, ::Oculus::Interaction::IPointableElement*)>(&::Oculus::Interaction::AutoMoveTowardsTarget::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa472ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>(), ::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.MoveTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::AutoMoveTowardsTarget::MoveTo)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa473340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::AutoMoveTowardsTarget::UpdateTarget)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4735a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.StopAndSetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::AutoMoveTowardsTarget::StopAndSetPose)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa4735fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTarget::*)()>(&::Oculus::Interaction::AutoMoveTowardsTarget::Tick)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa472b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.HandlePointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTarget::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::AutoMoveTowardsTarget::HandlePointerEventRaised)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4738bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"HandlePointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.AbortSelfAligment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTarget::*)()>(&::Oculus::Interaction::AutoMoveTowardsTarget::AbortSelfAligment)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa473484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"AbortSelfAligment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget.GeneratePointerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTarget::*)(::Oculus::Interaction::PointerEventType)>(&::Oculus::Interaction::AutoMoveTowardsTarget::GeneratePointerEvent)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa473778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"GeneratePointerEvent", {}, {::i2c::type_of<::Oculus::Interaction::PointerEventType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::PoseTravelData& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__travellingData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____travellingData;
}
constexpr ::Oculus::Interaction::PoseTravelData const& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__travellingData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____travellingData;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_set__travellingData(::Oculus::Interaction::PoseTravelData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____travellingData = value;
}
constexpr ::Oculus::Interaction::IPointableElement*& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__pointableElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointableElement;
}
constexpr ::Oculus::Interaction::IPointableElement* const& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__pointableElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointableElement;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_set__pointableElement(::Oculus::Interaction::IPointableElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointableElement = value;
}
constexpr bool& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__Aborting_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Aborting_k__BackingField;
}
constexpr bool const& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__Aborting_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Aborting_k__BackingField;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_set__Aborting_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Aborting_k__BackingField = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get_WhenAborted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenAborted;
}
constexpr ::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>* const& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get_WhenAborted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenAborted;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_set_WhenAborted(::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenAborted = value;
}
constexpr ::Oculus::Interaction::UniqueIdentifier*& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr ::Oculus::Interaction::UniqueIdentifier* const& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____identifier = value;
}
constexpr ::Oculus::Interaction::Tween*& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__tween()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tween;
}
constexpr ::Oculus::Interaction::Tween* const& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__tween() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tween;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_set__tween(::Oculus::Interaction::Tween*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tween = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_set__target(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_set__source(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr bool& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__eventRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventRegistered;
}
constexpr bool const& Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_get__eventRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventRegistered;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTarget::__cordl_internal_set__eventRegistered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventRegistered = value;
}
inline ::UnityEngine::Pose Oculus::Interaction::AutoMoveTowardsTarget::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline bool Oculus::Interaction::AutoMoveTowardsTarget::get_Stopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"get_Stopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::AutoMoveTowardsTarget::get_Aborting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"get_Aborting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::AutoMoveTowardsTarget::set_Aborting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"set_Aborting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::AutoMoveTowardsTarget::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::AutoMoveTowardsTarget::_ctor(::Oculus::Interaction::PoseTravelData  travellingData, ::Oculus::Interaction::IPointableElement*  pointableElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>(), ::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, travellingData, pointableElement);
}
inline void Oculus::Interaction::AutoMoveTowardsTarget::MoveTo(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::AutoMoveTowardsTarget::UpdateTarget(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::AutoMoveTowardsTarget::StopAndSetPose(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::AutoMoveTowardsTarget::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::AutoMoveTowardsTarget::HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"HandlePointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::AutoMoveTowardsTarget::AbortSelfAligment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"AbortSelfAligment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::AutoMoveTowardsTarget::GeneratePointerEvent(::Oculus::Interaction::PointerEventType  pointerEventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget*>(),
                        {"GeneratePointerEvent", {}, {::i2c::type_of<::Oculus::Interaction::PointerEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEventType);
}
inline ::Oculus::Interaction::AutoMoveTowardsTarget* Oculus::Interaction::AutoMoveTowardsTarget::New_ctor(::Oculus::Interaction::PoseTravelData  travellingData, ::Oculus::Interaction::IPointableElement*  pointableElement)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::AutoMoveTowardsTarget*>(travellingData, pointableElement));
}
/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr  Oculus::Interaction::AutoMoveTowardsTarget::operator ::Oculus::Interaction::IMovement*() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* Oculus::Interaction::AutoMoveTowardsTarget::i___Oculus__Interaction__IMovement() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::AutoMoveTowardsTarget::AutoMoveTowardsTarget()   {
}
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTarget___c::*)()>(&::Oculus::Interaction::AutoMoveTowardsTarget___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47393c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTarget___c.__ctor_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTarget___c::*)(::Oculus::Interaction::AutoMoveTowardsTarget*)>(&::Oculus::Interaction::AutoMoveTowardsTarget___c::__ctor_b__18_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa473944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget___c*>(),
                        {"<.ctor>b__18_0", {}, {::i2c::type_of<::Oculus::Interaction::AutoMoveTowardsTarget*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::AutoMoveTowardsTarget___c::setStaticF___9(::Oculus::Interaction::AutoMoveTowardsTarget___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::AutoMoveTowardsTarget___c*, "<>9", ::Oculus::Interaction::AutoMoveTowardsTarget___c*>(std::forward<::Oculus::Interaction::AutoMoveTowardsTarget___c*>(value));
}
inline ::Oculus::Interaction::AutoMoveTowardsTarget___c* Oculus::Interaction::AutoMoveTowardsTarget___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::AutoMoveTowardsTarget___c*, "<>9", ::Oculus::Interaction::AutoMoveTowardsTarget___c*>();
}
inline void Oculus::Interaction::AutoMoveTowardsTarget___c::setStaticF___9__18_0(::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*, "<>9__18_0", ::Oculus::Interaction::AutoMoveTowardsTarget___c*>(std::forward<::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>* Oculus::Interaction::AutoMoveTowardsTarget___c::getStaticF___9__18_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*, "<>9__18_0", ::Oculus::Interaction::AutoMoveTowardsTarget___c*>();
}
inline void Oculus::Interaction::AutoMoveTowardsTarget___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::AutoMoveTowardsTarget___c::__ctor_b__18_0(::Oculus::Interaction::AutoMoveTowardsTarget*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTarget___c*>(),
                        {"<.ctor>b__18_0", {}, {::i2c::type_of<::Oculus::Interaction::AutoMoveTowardsTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::AutoMoveTowardsTarget___c* Oculus::Interaction::AutoMoveTowardsTarget___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::AutoMoveTowardsTarget___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::AutoMoveTowardsTarget___c::AutoMoveTowardsTarget___c()   {
}
