#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/ControllerPinchInjector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__ControllerPinchInjector_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__ControllerPinchInjector_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__HandGrabAPI_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IController_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerAPI_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector.get_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IController* (::Oculus::Interaction::GrabAPI::ControllerPinchInjector::*)()>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector::get_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fb65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {"get_Controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector.set_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::ControllerPinchInjector::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector::set_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fb664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::ControllerPinchInjector::*)()>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4fb66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::ControllerPinchInjector::*)()>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector::Start)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4fb6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector.InjectAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::ControllerPinchInjector::*)(::Oculus::Interaction::GrabAPI::HandGrabAPI*, ::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector::InjectAll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4fb864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {"InjectAll", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(), ::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector.InjectHandGrabAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::ControllerPinchInjector::*)(::Oculus::Interaction::GrabAPI::HandGrabAPI*)>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector::InjectHandGrabAPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fb960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {"InjectHandGrabAPI", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector.InjectController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::ControllerPinchInjector::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector::InjectController)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4fb890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::ControllerPinchInjector::*)()>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fb968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>& Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_get__handGrabAPI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabAPI;
}
constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> const& Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_get__handGrabAPI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabAPI;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_set__handGrabAPI(::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabAPI = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::Oculus::Interaction::Input::IController*& Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_get__Controller_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IController* const& Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_get__Controller_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Controller_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IController* Oculus::Interaction::GrabAPI::ControllerPinchInjector::get_Controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {"get_Controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IController*>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::ControllerPinchInjector::set_Controller(::Oculus::Interaction::Input::IController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::GrabAPI::ControllerPinchInjector::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::ControllerPinchInjector::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::ControllerPinchInjector::InjectAll(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabAPI, ::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {"InjectAll", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(), ::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabAPI, controller);
}
inline void Oculus::Interaction::GrabAPI::ControllerPinchInjector::InjectHandGrabAPI(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabAPI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {"InjectHandGrabAPI", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabAPI);
}
inline void Oculus::Interaction::GrabAPI::ControllerPinchInjector::InjectController(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::GrabAPI::ControllerPinchInjector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::ControllerPinchInjector* Oculus::Interaction::GrabAPI::ControllerPinchInjector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::ControllerPinchInjector*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::ControllerPinchInjector::ControllerPinchInjector()   {
}
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa4fb790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI.GetFingerGrabScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::GetFingerGrabScore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4fb970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI.GetFingerIsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::GetFingerIsGrabbing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4fb99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI.GetFingerIsGrabbingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::*)(::Oculus::Interaction::Input::HandFinger, bool)>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::GetFingerIsGrabbingChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4fb9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI.GetWristOffsetLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::*)()>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::GetWristOffsetLocal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4fba68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::Update)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa4fba74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::IController*& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::Oculus::Interaction::Input::IController* const& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_set__controller(::Oculus::Interaction::Input::IController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__triggerStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerStrength;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__triggerStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerStrength;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_set__triggerStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerStrength = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__gripStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripStrength;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__gripStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripStrength;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_set__gripStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripStrength = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__triggerDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerDown;
}
constexpr bool const& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__triggerDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerDown;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_set__triggerDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerDown = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__gripDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripDown;
}
constexpr bool const& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__gripDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripDown;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_set__gripDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripDown = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__prevTriggerDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevTriggerDown;
}
constexpr bool const& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__prevTriggerDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevTriggerDown;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_set__prevTriggerDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevTriggerDown = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__prevGripDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevGripDown;
}
constexpr bool const& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__prevGripDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevGripDown;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_set__prevGripDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevGripDown = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__indexPinchPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indexPinchPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__indexPinchPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indexPinchPose;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_set__indexPinchPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____indexPinchPose = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__middlePinchPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____middlePinchPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__middlePinchPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____middlePinchPose;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_set__middlePinchPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____middlePinchPose = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__pinchPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_get__pinchPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchPose;
}
constexpr void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::__cordl_internal_set__pinchPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pinchPose = value;
}
inline void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::_ctor(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline float_t Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetPinchState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, targetPinchState);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::GetWristOffsetLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::Update(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline ::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI* Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::New_ctor(::Oculus::Interaction::Input::IController*  controller)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI*>(controller));
}
/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr  Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::operator ::Oculus::Interaction::IFingerAPI*() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::i___Oculus__Interaction__IFingerAPI() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::ControllerPinchInjector_ControllerPinchAPI::ControllerPinchInjector_ControllerPinchAPI()   {
}
