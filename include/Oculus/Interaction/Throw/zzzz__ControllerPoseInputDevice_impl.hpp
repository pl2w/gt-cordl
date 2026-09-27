#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/ControllerPoseInputDevice.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Throw/zzzz__ControllerPoseInputDevice_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IController_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IPoseInputDevice_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Throw::ControllerPoseInputDevice.get_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IController* (::Oculus::Interaction::Throw::ControllerPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::ControllerPoseInputDevice::get_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4928f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"get_Controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::ControllerPoseInputDevice.set_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::ControllerPoseInputDevice::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::Throw::ControllerPoseInputDevice::set_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa492900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::ControllerPoseInputDevice.get_IsInputValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Throw::ControllerPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::ControllerPoseInputDevice::get_IsInputValid)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa492908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"get_IsInputValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::ControllerPoseInputDevice.get_IsHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Throw::ControllerPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::ControllerPoseInputDevice::get_IsHighConfidence)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa492a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::ControllerPoseInputDevice.GetRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Throw::ControllerPoseInputDevice::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Throw::ControllerPoseInputDevice::GetRootPose)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa492a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::ControllerPoseInputDevice.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::ControllerPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::ControllerPoseInputDevice::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa492b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::ControllerPoseInputDevice.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::ControllerPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::ControllerPoseInputDevice::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa492b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::ControllerPoseInputDevice.GetExternalVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> (::Oculus::Interaction::Throw::ControllerPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::ControllerPoseInputDevice::GetExternalVelocities)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa492b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"GetExternalVelocities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::ControllerPoseInputDevice.InjectAllControllerPoseInputDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::ControllerPoseInputDevice::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::Throw::ControllerPoseInputDevice::InjectAllControllerPoseInputDevice)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa492c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"InjectAllControllerPoseInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::ControllerPoseInputDevice.InjectController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::ControllerPoseInputDevice::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::Throw::ControllerPoseInputDevice::InjectController)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa492c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::ControllerPoseInputDevice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::ControllerPoseInputDevice::*)()>(&::Oculus::Interaction::Throw::ControllerPoseInputDevice::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa492d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Throw::ControllerPoseInputDevice::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Throw::ControllerPoseInputDevice::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::Throw::ControllerPoseInputDevice::__cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::Oculus::Interaction::Input::IController*& Oculus::Interaction::Throw::ControllerPoseInputDevice::__cordl_internal_get__Controller_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IController* const& Oculus::Interaction::Throw::ControllerPoseInputDevice::__cordl_internal_get__Controller_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr void Oculus::Interaction::Throw::ControllerPoseInputDevice::__cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Controller_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::IController* Oculus::Interaction::Throw::ControllerPoseInputDevice::get_Controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"get_Controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IController*>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::ControllerPoseInputDevice::set_Controller(::Oculus::Interaction::Input::IController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Throw::ControllerPoseInputDevice::get_IsInputValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"get_IsInputValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Throw::ControllerPoseInputDevice::get_IsHighConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Throw::ControllerPoseInputDevice::GetRootPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::Throw::ControllerPoseInputDevice::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::ControllerPoseInputDevice::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> Oculus::Interaction::Throw::ControllerPoseInputDevice::GetExternalVelocities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"GetExternalVelocities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::ControllerPoseInputDevice::InjectAllControllerPoseInputDevice(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"InjectAllControllerPoseInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::Throw::ControllerPoseInputDevice::InjectController(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::Throw::ControllerPoseInputDevice::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::ControllerPoseInputDevice* Oculus::Interaction::Throw::ControllerPoseInputDevice::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::ControllerPoseInputDevice*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Throw::IPoseInputDevice"
constexpr  Oculus::Interaction::Throw::ControllerPoseInputDevice::operator ::Oculus::Interaction::Throw::IPoseInputDevice*() noexcept {
return static_cast<::Oculus::Interaction::Throw::IPoseInputDevice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Throw::IPoseInputDevice"
constexpr ::Oculus::Interaction::Throw::IPoseInputDevice* Oculus::Interaction::Throw::ControllerPoseInputDevice::i___Oculus__Interaction__Throw__IPoseInputDevice() noexcept {
return static_cast<::Oculus::Interaction::Throw::IPoseInputDevice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::ControllerPoseInputDevice::ControllerPoseInputDevice()   {
}
