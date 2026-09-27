#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/PlayerLocomotor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__PlayerLocomotor_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventHandler_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_RotationType_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_TranslationType_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__PlayerLocomotor_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.add_WhenLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*)>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::add_WhenLocomotionEventHandled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4c9638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"add_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.remove_WhenLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*)>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::remove_WhenLocomotionEventHandled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4c96e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"remove_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)()>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4c9788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)()>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::OnEnable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4c97b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)()>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::OnDisable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4c9868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.HandleLocomotionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::HandleLocomotionEvent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa4c98fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.MovePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)()>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::MovePlayer)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa4c9970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"MovePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.MovePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::UnityEngine::Vector3, ::GlobalNamespace::LocomotionEvent_TranslationType)>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::MovePlayer)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa4c9b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"MovePlayer", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_TranslationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.RotatePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::UnityEngine::Quaternion, ::GlobalNamespace::LocomotionEvent_RotationType)>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::RotatePlayer)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0xa4c9cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"RotatePlayer", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_RotationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.InjectAllPlayerLocomotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::InjectAllPlayerLocomotor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4ca214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"InjectAllPlayerLocomotor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.InjectPlayerOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::InjectPlayerOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ca244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"InjectPlayerOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor.InjectPlayerHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::InjectPlayerHead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ca24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"InjectPlayerHead", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor::*)()>(&::Oculus::Interaction::Locomotion::PlayerLocomotor::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4ca254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_get__playerOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_get__playerOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerOrigin;
}
constexpr void Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_set__playerOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_get__playerHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerHead;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_get__playerHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerHead;
}
constexpr void Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_set__playerHead(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerHead = value;
}
constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*& Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_get__whenLocomotionEventHandled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionEventHandled;
}
constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* const& Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_get__whenLocomotionEventHandled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionEventHandled;
}
constexpr void Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_set__whenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenLocomotionEventHandled = value;
}
constexpr bool& Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_get__deferredEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredEvent;
}
constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_get__deferredEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deferredEvent;
}
constexpr void Oculus::Interaction::Locomotion::PlayerLocomotor::__cordl_internal_set__deferredEvent(::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deferredEvent = value;
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"add_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"remove_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionEvent);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::MovePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"MovePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::MovePlayer(::UnityEngine::Vector3  targetPosition, ::GlobalNamespace::LocomotionEvent_TranslationType  translationMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"MovePlayer", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_TranslationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPosition, translationMode);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::RotatePlayer(::UnityEngine::Quaternion  targetRotation, ::GlobalNamespace::LocomotionEvent_RotationType  rotationMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"RotatePlayer", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_RotationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetRotation, rotationMode);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::InjectAllPlayerLocomotor(::UnityEngine::Transform*  playerOrigin, ::UnityEngine::Transform*  playerHead)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"InjectAllPlayerLocomotor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerOrigin, playerHead);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::InjectPlayerOrigin(::UnityEngine::Transform*  playerOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"InjectPlayerOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerOrigin);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::InjectPlayerHead(::UnityEngine::Transform*  playerHead)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {"InjectPlayerHead", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerHead);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::PlayerLocomotor* Oculus::Interaction::Locomotion::PlayerLocomotor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::PlayerLocomotor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr  Oculus::Interaction::Locomotion::PlayerLocomotor::operator ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* Oculus::Interaction::Locomotion::PlayerLocomotor::i___Oculus__Interaction__Locomotion__ILocomotionEventHandler() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::PlayerLocomotor::PlayerLocomotor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor___c::*)()>(&::Oculus::Interaction::Locomotion::PlayerLocomotor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ca400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::PlayerLocomotor___c.__ctor_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::PlayerLocomotor___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::PlayerLocomotor___c::__ctor_b__18_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4ca408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor___c*>(),
                        {"<.ctor>b__18_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::PlayerLocomotor___c::setStaticF___9(::Oculus::Interaction::Locomotion::PlayerLocomotor___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::PlayerLocomotor___c*, "<>9", ::Oculus::Interaction::Locomotion::PlayerLocomotor___c*>(std::forward<::Oculus::Interaction::Locomotion::PlayerLocomotor___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::PlayerLocomotor___c* Oculus::Interaction::Locomotion::PlayerLocomotor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::PlayerLocomotor___c*, "<>9", ::Oculus::Interaction::Locomotion::PlayerLocomotor___c*>();
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor___c::setStaticF___9__18_0(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*, "<>9__18_0", ::Oculus::Interaction::Locomotion::PlayerLocomotor___c*>(std::forward<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>(value));
}
inline ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* Oculus::Interaction::Locomotion::PlayerLocomotor___c::getStaticF___9__18_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*, "<>9__18_0", ::Oculus::Interaction::Locomotion::PlayerLocomotor___c*>();
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::PlayerLocomotor___c::__ctor_b__18_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_, ::UnityEngine::Pose  _p1_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::PlayerLocomotor___c*>(),
                        {"<.ctor>b__18_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_, _p1_);
}
inline ::Oculus::Interaction::Locomotion::PlayerLocomotor___c* Oculus::Interaction::Locomotion::PlayerLocomotor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::PlayerLocomotor___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::PlayerLocomotor___c::PlayerLocomotor___c()   {
}
