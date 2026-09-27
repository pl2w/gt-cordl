#pragma once
// IWYU pragma private; include "Oculus/Interaction/ControllerActiveState.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ControllerActiveState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IController_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ControllerActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::ControllerActiveState::*)()>(&::Oculus::Interaction::ControllerActiveState::get_Active)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa411930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerActiveState::*)()>(&::Oculus::Interaction::ControllerActiveState::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4119d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerActiveState::*)()>(&::Oculus::Interaction::ControllerActiveState::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa411a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerActiveState.InjectAllControllerActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerActiveState::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::ControllerActiveState::InjectAllControllerActiveState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa411a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(),
                        {"InjectAllControllerActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerActiveState.InjectController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerActiveState::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::ControllerActiveState::InjectController)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa411a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerActiveState::*)()>(&::Oculus::Interaction::ControllerActiveState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa411b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::ControllerActiveState::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::ControllerActiveState::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::ControllerActiveState::__cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::Oculus::Interaction::Input::IController*& Oculus::Interaction::ControllerActiveState::__cordl_internal_get_Controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controller;
}
constexpr ::Oculus::Interaction::Input::IController* const& Oculus::Interaction::ControllerActiveState::__cordl_internal_get_Controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controller;
}
constexpr void Oculus::Interaction::ControllerActiveState::__cordl_internal_set_Controller(::Oculus::Interaction::Input::IController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Controller = value;
}
inline bool Oculus::Interaction::ControllerActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::ControllerActiveState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ControllerActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ControllerActiveState::InjectAllControllerActiveState(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(),
                        {"InjectAllControllerActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::ControllerActiveState::InjectController(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::ControllerActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ControllerActiveState* Oculus::Interaction::ControllerActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ControllerActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::ControllerActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::ControllerActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ControllerActiveState::ControllerActiveState()   {
}
