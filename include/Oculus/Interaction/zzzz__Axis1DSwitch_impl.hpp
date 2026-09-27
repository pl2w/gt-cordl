#pragma once
// IWYU pragma private; include "Oculus/Interaction/Axis1DSwitch.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__Axis1DSwitch_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Axis1DSwitch.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IAxis1D* (::Oculus::Interaction::Axis1DSwitch::*)()>(&::Oculus::Interaction::Axis1DSwitch::get_Current)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa408500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DSwitch.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DSwitch::*)()>(&::Oculus::Interaction::Axis1DSwitch::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4085b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                    {::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DSwitch.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DSwitch::*)()>(&::Oculus::Interaction::Axis1DSwitch::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa40869c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                    {::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DSwitch.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Axis1DSwitch::*)()>(&::Oculus::Interaction::Axis1DSwitch::Value)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4086a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DSwitch.InjectAllAxis1DSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DSwitch::*)(::Oculus::Interaction::IActiveState*, ::Oculus::Interaction::Input::IAxis1D*, ::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Axis1DSwitch::InjectAllAxis1DSwitch)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa408748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"InjectAllAxis1DSwitch", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>(), ::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DSwitch.InjectActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DSwitch::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::Axis1DSwitch::InjectActiveState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa408780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DSwitch.InjectAxisWhenActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DSwitch::*)(::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Axis1DSwitch::InjectAxisWhenActive)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa408850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"InjectAxisWhenActive", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DSwitch.InjectAxisWhenInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DSwitch::*)(::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Axis1DSwitch::InjectAxisWhenInactive)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa40891c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"InjectAxisWhenInactive", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DSwitch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DSwitch::*)()>(&::Oculus::Interaction::Axis1DSwitch::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4089e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::Axis1DSwitch::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get_ActiveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get_ActiveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
constexpr void Oculus::Interaction::Axis1DSwitch::__cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveState = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get__axisWhenActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisWhenActive;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get__axisWhenActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisWhenActive;
}
constexpr void Oculus::Interaction::Axis1DSwitch::__cordl_internal_set__axisWhenActive(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axisWhenActive = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get__axisWhenInactive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisWhenInactive;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get__axisWhenInactive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisWhenInactive;
}
constexpr void Oculus::Interaction::Axis1DSwitch::__cordl_internal_set__axisWhenInactive(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axisWhenInactive = value;
}
constexpr ::Oculus::Interaction::Input::IAxis1D*& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get_AxisWhenActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AxisWhenActive;
}
constexpr ::Oculus::Interaction::Input::IAxis1D* const& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get_AxisWhenActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AxisWhenActive;
}
constexpr void Oculus::Interaction::Axis1DSwitch::__cordl_internal_set_AxisWhenActive(::Oculus::Interaction::Input::IAxis1D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AxisWhenActive = value;
}
constexpr ::Oculus::Interaction::Input::IAxis1D*& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get_AxisWhenInactive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AxisWhenInactive;
}
constexpr ::Oculus::Interaction::Input::IAxis1D* const& Oculus::Interaction::Axis1DSwitch::__cordl_internal_get_AxisWhenInactive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AxisWhenInactive;
}
constexpr void Oculus::Interaction::Axis1DSwitch::__cordl_internal_set_AxisWhenInactive(::Oculus::Interaction::Input::IAxis1D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AxisWhenInactive = value;
}
inline ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::Axis1DSwitch::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IAxis1D*>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis1DSwitch::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis1DSwitch::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Axis1DSwitch::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis1DSwitch::InjectAllAxis1DSwitch(::Oculus::Interaction::IActiveState*  activeState, ::Oculus::Interaction::Input::IAxis1D*  axisWhenActive, ::Oculus::Interaction::Input::IAxis1D*  axisWhenInactive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"InjectAllAxis1DSwitch", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>(), ::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState, axisWhenActive, axisWhenInactive);
}
inline void Oculus::Interaction::Axis1DSwitch::InjectActiveState(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"InjectActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::Axis1DSwitch::InjectAxisWhenActive(::Oculus::Interaction::Input::IAxis1D*  axisWhenActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"InjectAxisWhenActive", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axisWhenActive);
}
inline void Oculus::Interaction::Axis1DSwitch::InjectAxisWhenInactive(::Oculus::Interaction::Input::IAxis1D*  axisWhenInactive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {"InjectAxisWhenInactive", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axisWhenInactive);
}
inline void Oculus::Interaction::Axis1DSwitch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DSwitch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Axis1DSwitch* Oculus::Interaction::Axis1DSwitch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Axis1DSwitch*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr  Oculus::Interaction::Axis1DSwitch::operator ::Oculus::Interaction::Input::IAxis1D*() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::Axis1DSwitch::i___Oculus__Interaction__Input__IAxis1D() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Axis1DSwitch::Axis1DSwitch()   {
}
