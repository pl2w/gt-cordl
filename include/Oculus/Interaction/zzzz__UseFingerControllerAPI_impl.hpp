#pragma once
// IWYU pragma private; include "Oculus/Interaction/UseFingerControllerAPI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__UseFingerControllerAPI_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IController_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerUseAPI_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UseFingerControllerAPI.get_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IController* (::Oculus::Interaction::UseFingerControllerAPI::*)()>(&::Oculus::Interaction::UseFingerControllerAPI::get_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46a4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {"get_Controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerControllerAPI.set_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerControllerAPI::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::UseFingerControllerAPI::set_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46a4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerControllerAPI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerControllerAPI::*)()>(&::Oculus::Interaction::UseFingerControllerAPI::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa46a4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                    {::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerControllerAPI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerControllerAPI::*)()>(&::Oculus::Interaction::UseFingerControllerAPI::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa46a550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                    {::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerControllerAPI.GetFingerUseStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::UseFingerControllerAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::UseFingerControllerAPI::GetFingerUseStrength)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa46a57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {"GetFingerUseStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerControllerAPI.InjectAllUseFingerRawPinchAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerControllerAPI::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::UseFingerControllerAPI::InjectAllUseFingerRawPinchAPI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46a7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {"InjectAllUseFingerRawPinchAPI", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerControllerAPI.InjectController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerControllerAPI::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::UseFingerControllerAPI::InjectController)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa46a7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UseFingerControllerAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UseFingerControllerAPI::*)()>(&::Oculus::Interaction::UseFingerControllerAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46a890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::UseFingerControllerAPI::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::UseFingerControllerAPI::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::UseFingerControllerAPI::__cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::Oculus::Interaction::Input::IController*& Oculus::Interaction::UseFingerControllerAPI::__cordl_internal_get__Controller_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IController* const& Oculus::Interaction::UseFingerControllerAPI::__cordl_internal_get__Controller_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr void Oculus::Interaction::UseFingerControllerAPI::__cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Controller_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::UseFingerControllerAPI::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::UseFingerControllerAPI::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::UseFingerControllerAPI::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IController* Oculus::Interaction::UseFingerControllerAPI::get_Controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {"get_Controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IController*>(this, ___internal_method);
}
inline void Oculus::Interaction::UseFingerControllerAPI::set_Controller(::Oculus::Interaction::Input::IController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::UseFingerControllerAPI::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UseFingerControllerAPI::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::UseFingerControllerAPI::GetFingerUseStrength(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {"GetFingerUseStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::UseFingerControllerAPI::InjectAllUseFingerRawPinchAPI(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {"InjectAllUseFingerRawPinchAPI", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::UseFingerControllerAPI::InjectController(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::UseFingerControllerAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UseFingerControllerAPI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UseFingerControllerAPI* Oculus::Interaction::UseFingerControllerAPI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UseFingerControllerAPI*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IFingerUseAPI"
constexpr  Oculus::Interaction::UseFingerControllerAPI::operator ::Oculus::Interaction::IFingerUseAPI*() noexcept {
return static_cast<::Oculus::Interaction::IFingerUseAPI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IFingerUseAPI"
constexpr ::Oculus::Interaction::IFingerUseAPI* Oculus::Interaction::UseFingerControllerAPI::i___Oculus__Interaction__IFingerUseAPI() noexcept {
return static_cast<::Oculus::Interaction::IFingerUseAPI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UseFingerControllerAPI::UseFingerControllerAPI()   {
}
