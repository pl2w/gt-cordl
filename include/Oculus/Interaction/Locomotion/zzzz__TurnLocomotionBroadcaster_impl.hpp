#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TurnLocomotionBroadcaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnLocomotionBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnLocomotionBroadcaster_def.hpp"
#include "Oculus/Interaction/zzzz__UniqueIdentifier_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.get_SnapTurnDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::get_SnapTurnDegrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d6cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"get_SnapTurnDegrees", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.set_SnapTurnDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)(float_t)>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::set_SnapTurnDegrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d6cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"set_SnapTurnDegrees", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.get_SmoothTurnCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::get_SmoothTurnCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d6ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"get_SmoothTurnCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.set_SmoothTurnCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::set_SmoothTurnCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d6cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"set_SmoothTurnCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::get_Identifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4d6cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.add_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::add_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4d6d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.remove_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::remove_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4d6dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4d6e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.SnapTurnLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::SnapTurnLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d6f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"SnapTurnLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.SnapTurnRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::SnapTurnRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d6ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"SnapTurnRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.SnapTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)(float_t)>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::SnapTurn)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4d6f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"SnapTurn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster.SmoothTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)(float_t)>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::SmoothTurn)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4d6ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"SmoothTurn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4d70ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_get__snapTurnDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapTurnDegrees;
}
constexpr float_t const& Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_get__snapTurnDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapTurnDegrees;
}
constexpr void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_set__snapTurnDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapTurnDegrees = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_get__smoothTurnCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothTurnCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_get__smoothTurnCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothTurnCurve;
}
constexpr void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_set__smoothTurnCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothTurnCurve = value;
}
constexpr ::Oculus::Interaction::UniqueIdentifier*& Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_get__identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr ::Oculus::Interaction::UniqueIdentifier* const& Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_get__identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____identifier = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_get_WhenLocomotionPerformed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLocomotionPerformed;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_get_WhenLocomotionPerformed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLocomotionPerformed;
}
constexpr void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::__cordl_internal_set_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenLocomotionPerformed = value;
}
inline float_t Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::get_SnapTurnDegrees()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"get_SnapTurnDegrees", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::set_SnapTurnDegrees(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"set_SnapTurnDegrees", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::get_SmoothTurnCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"get_SmoothTurnCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::set_SmoothTurnCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"set_SmoothTurnCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::SnapTurnLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"SnapTurnLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::SnapTurnRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"SnapTurnRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::SnapTurn(float_t  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"SnapTurn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::SmoothTurn(float_t  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {"SmoothTurn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster* Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr  Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::operator ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster::TurnLocomotionBroadcaster()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::*)()>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c.__ctor_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::__ctor_b__19_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4d7240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*>(),
                        {"<.ctor>b__19_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::setStaticF___9(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*>(std::forward<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c* Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::setStaticF___9__19_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__19_0", ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*>(std::forward<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::getStaticF___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__19_0", ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::__ctor_b__19_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*>(),
                        {"<.ctor>b__19_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c* Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c::TurnLocomotionBroadcaster___c()   {
}
