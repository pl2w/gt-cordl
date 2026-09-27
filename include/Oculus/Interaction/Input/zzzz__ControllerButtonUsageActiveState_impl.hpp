#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerButtonUsageActiveState.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsageActiveState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IController_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerButtonUsageActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerButtonUsageActiveState::*)()>(&::Oculus::Interaction::Input::ControllerButtonUsageActiveState::get_Active)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa504b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerButtonUsageActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerButtonUsageActiveState::*)()>(&::Oculus::Interaction::Input::ControllerButtonUsageActiveState::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa504c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerButtonUsageActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerButtonUsageActiveState::*)()>(&::Oculus::Interaction::Input::ControllerButtonUsageActiveState::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa504c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerButtonUsageActiveState.InjectAllControllerButtonUsageActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerButtonUsageActiveState::*)(::Oculus::Interaction::Input::IController*, ::Oculus::Interaction::Input::ControllerButtonUsage)>(&::Oculus::Interaction::Input::ControllerButtonUsageActiveState::InjectAllControllerButtonUsageActiveState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa504c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                        {"InjectAllControllerButtonUsageActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>(), ::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerButtonUsageActiveState.InjectController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerButtonUsageActiveState::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::Input::ControllerButtonUsageActiveState::InjectController)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa504cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerButtonUsageActiveState.InjectControllerButtonUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerButtonUsageActiveState::*)(::Oculus::Interaction::Input::ControllerButtonUsage)>(&::Oculus::Interaction::Input::ControllerButtonUsageActiveState::InjectControllerButtonUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa504d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                        {"InjectControllerButtonUsage", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerButtonUsageActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerButtonUsageActiveState::*)()>(&::Oculus::Interaction::Input::ControllerButtonUsageActiveState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa504d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::ControllerButtonUsageActiveState::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::ControllerButtonUsageActiveState::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::Input::ControllerButtonUsageActiveState::__cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::Oculus::Interaction::Input::IController*& Oculus::Interaction::Input::ControllerButtonUsageActiveState::__cordl_internal_get_Controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controller;
}
constexpr ::Oculus::Interaction::Input::IController* const& Oculus::Interaction::Input::ControllerButtonUsageActiveState::__cordl_internal_get_Controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controller;
}
constexpr void Oculus::Interaction::Input::ControllerButtonUsageActiveState::__cordl_internal_set_Controller(::Oculus::Interaction::Input::IController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Controller = value;
}
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage& Oculus::Interaction::Input::ControllerButtonUsageActiveState::__cordl_internal_get__controllerButtonUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerButtonUsage;
}
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage const& Oculus::Interaction::Input::ControllerButtonUsageActiveState::__cordl_internal_get__controllerButtonUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerButtonUsage;
}
constexpr void Oculus::Interaction::Input::ControllerButtonUsageActiveState::__cordl_internal_set__controllerButtonUsage(::Oculus::Interaction::Input::ControllerButtonUsage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerButtonUsage = value;
}
inline bool Oculus::Interaction::Input::ControllerButtonUsageActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerButtonUsageActiveState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerButtonUsageActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerButtonUsageActiveState::InjectAllControllerButtonUsageActiveState(::Oculus::Interaction::Input::IController*  controller, ::Oculus::Interaction::Input::ControllerButtonUsage  controllerButtonUsage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                        {"InjectAllControllerButtonUsageActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>(), ::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, controllerButtonUsage);
}
inline void Oculus::Interaction::Input::ControllerButtonUsageActiveState::InjectController(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::Input::ControllerButtonUsageActiveState::InjectControllerButtonUsage(::Oculus::Interaction::Input::ControllerButtonUsage  controllerButtonUsage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                        {"InjectControllerButtonUsage", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerButtonUsage);
}
inline void Oculus::Interaction::Input::ControllerButtonUsageActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::ControllerButtonUsageActiveState* Oculus::Interaction::Input::ControllerButtonUsageActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::ControllerButtonUsageActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::Input::ControllerButtonUsageActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::Input::ControllerButtonUsageActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::ControllerButtonUsageActiveState::ControllerButtonUsageActiveState()   {
}
