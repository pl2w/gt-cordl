#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/StepLocomotionBroadcaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__StepLocomotionBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__StepLocomotionBroadcaster_def.hpp"
#include "Oculus/Interaction/zzzz__UniqueIdentifier_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.get_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::get_Origin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cad84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"get_Origin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.set_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::set_Origin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cad8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"set_Origin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.get_StepLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::get_StepLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cad94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"get_StepLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.set_StepLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)(float_t)>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::set_StepLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cad9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"set_StepLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::get_Identifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4cada4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.add_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::add_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4cadbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.remove_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::remove_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4cae6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4caf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4cb000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.StepLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::StepLeft)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4cb02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"StepLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.StepRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::StepRight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4cb370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"StepRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.StepForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::StepForward)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4cb3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"StepForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.StepBackward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::StepBackward)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4cb410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"StepBackward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster.Step
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)(::UnityEngine::Vector2Int)>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::Step)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xa4cb07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"Step", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4cb460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_get__origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_get__origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origin;
}
constexpr void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_set__origin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____origin = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_get__stepLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stepLength;
}
constexpr float_t const& Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_get__stepLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stepLength;
}
constexpr void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_set__stepLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stepLength = value;
}
constexpr bool& Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::Oculus::Interaction::UniqueIdentifier*& Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_get__identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr ::Oculus::Interaction::UniqueIdentifier* const& Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_get__identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____identifier = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_get_WhenLocomotionPerformed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLocomotionPerformed;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_get_WhenLocomotionPerformed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLocomotionPerformed;
}
constexpr void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::__cordl_internal_set_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenLocomotionPerformed = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::get_Origin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"get_Origin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::set_Origin(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"set_Origin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::get_StepLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"get_StepLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::set_StepLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"set_StepLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::StepLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"StepLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::StepRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"StepRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::StepForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"StepForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::StepBackward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"StepBackward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::Step(::UnityEngine::Vector2Int  relativeDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {"Step", {}, {::i2c::type_of<::UnityEngine::Vector2Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relativeDirection);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster* Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr  Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::operator ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster::StepLocomotionBroadcaster()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::*)()>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cb5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c.__ctor_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::__ctor_b__22_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4cb5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*>(),
                        {"<.ctor>b__22_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::setStaticF___9(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*>(std::forward<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c* Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::setStaticF___9__22_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__22_0", ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*>(std::forward<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__22_0", ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::__ctor_b__22_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*>(),
                        {"<.ctor>b__22_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c* Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c::StepLocomotionBroadcaster___c()   {
}
