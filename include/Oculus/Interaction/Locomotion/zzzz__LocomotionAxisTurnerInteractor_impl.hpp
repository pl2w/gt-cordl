#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionAxisTurnerInteractor.hpp"
#include "Oculus/Interaction/zzzz__Interactor_2_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionAxisTurnerInteractor_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis2D_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionAxisTurnerInteractable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.get_DeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::get_DeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d27a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"get_DeadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.set_DeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::set_DeadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d27a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"set_DeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.get_ShouldHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::get_ShouldHover)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4d27b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.get_ShouldUnhover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::get_ShouldUnhover)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4d27c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.ComputeShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::ComputeShouldSelect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d27ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.ComputeShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::ComputeShouldUnselect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d27fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4d280c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4d289c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4d28f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.DoPreprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::DoPreprocess)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4d2988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable> (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d2a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d2a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.InjectAllLocomotionAxisTurner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)(::Oculus::Interaction::Input::IAxis2D*)>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::InjectAllLocomotionAxisTurner)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4d2a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"InjectAllLocomotionAxisTurner", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor.InjectAxis2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)(::Oculus::Interaction::Input::IAxis2D*)>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::InjectAxis2D)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4d2a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"InjectAxis2D", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4d2b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor._Start_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::_Start_b__15_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4d2b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"<Start>b__15_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_get__axis2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_get__axis2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_set__axis2D(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis2D = value;
}
constexpr ::Oculus::Interaction::Input::IAxis2D*& Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_get_Axis2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis2D;
}
constexpr ::Oculus::Interaction::Input::IAxis2D* const& Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_get_Axis2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis2D;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_set_Axis2D(::Oculus::Interaction::Input::IAxis2D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Axis2D = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_get__deadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZone;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_get__deadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deadZone;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_set__deadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deadZone = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_get__horizontalAxisValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalAxisValue;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_get__horizontalAxisValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalAxisValue;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::__cordl_internal_set__horizontalAxisValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____horizontalAxisValue = value;
}
inline float_t Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::get_DeadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"get_DeadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::set_DeadZone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"set_DeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::get_ShouldHover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::get_ShouldUnhover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::ComputeShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::ComputeShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::DoPreprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable> Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable>>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::InjectAllLocomotionAxisTurner(::Oculus::Interaction::Input::IAxis2D*  axis2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"InjectAllLocomotionAxisTurner", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis2D);
}
inline void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::InjectAxis2D(::Oculus::Interaction::Input::IAxis2D*  axis2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"InjectAxis2D", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis2D);
}
inline void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::_Start_b__15_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>(),
                        {"<Start>b__15_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor* Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr  Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::operator ::Oculus::Interaction::Input::IAxis1D*() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::i___Oculus__Interaction__Input__IAxis1D() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor::LocomotionAxisTurnerInteractor()   {
}
