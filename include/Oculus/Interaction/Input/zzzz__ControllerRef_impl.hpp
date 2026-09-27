#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerRef.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerInput_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IController_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerRef::*)()>(&::Oculus::Interaction::Input::ControllerRef::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa505a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerRef::*)()>(&::Oculus::Interaction::Input::ControllerRef::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa505ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.get_Handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Handedness (::Oculus::Interaction::Input::ControllerRef::*)()>(&::Oculus::Interaction::Input::ControllerRef::get_Handedness)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa505abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_Handedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerRef::*)()>(&::Oculus::Interaction::Input::ControllerRef::get_IsConnected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa505b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.get_IsPoseValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerRef::*)()>(&::Oculus::Interaction::Input::ControllerRef::get_IsPoseValid)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa505c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_IsPoseValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.get_ControllerInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ControllerInput (::Oculus::Interaction::Input::ControllerRef::*)()>(&::Oculus::Interaction::Input::ControllerRef::get_ControllerInput)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa505ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_ControllerInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.add_WhenUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerRef::*)(::System::Action*)>(&::Oculus::Interaction::Input::ControllerRef::add_WhenUpdated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa505d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"add_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.remove_WhenUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerRef::*)(::System::Action*)>(&::Oculus::Interaction::Input::ControllerRef::remove_WhenUpdated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa505e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"remove_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerRef::*)()>(&::Oculus::Interaction::Input::ControllerRef::get_Active)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa505ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.TryGetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerRef::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::ControllerRef::TryGetPose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa505ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"TryGetPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.TryGetPointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerRef::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::ControllerRef::TryGetPointerPose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa505f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"TryGetPointerPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::ControllerRef::*)()>(&::Oculus::Interaction::Input::ControllerRef::get_Scale)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa506020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.IsButtonUsageAnyActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerRef::*)(::Oculus::Interaction::Input::ControllerButtonUsage)>(&::Oculus::Interaction::Input::ControllerRef::IsButtonUsageAnyActive)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa5060c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"IsButtonUsageAnyActive", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.IsButtonUsageAllActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::ControllerRef::*)(::Oculus::Interaction::Input::ControllerButtonUsage)>(&::Oculus::Interaction::Input::ControllerRef::IsButtonUsageAllActive)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa506170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"IsButtonUsageAllActive", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.InjectAllControllerRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerRef::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::Input::ControllerRef::InjectAllControllerRef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa50621c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"InjectAllControllerRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef.InjectController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerRef::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::Input::ControllerRef::InjectController)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa506220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerRef::*)()>(&::Oculus::Interaction::Input::ControllerRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5062f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::ControllerRef::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::ControllerRef::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::Input::ControllerRef::__cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::Oculus::Interaction::Input::IController*& Oculus::Interaction::Input::ControllerRef::__cordl_internal_get_Controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controller;
}
constexpr ::Oculus::Interaction::Input::IController* const& Oculus::Interaction::Input::ControllerRef::__cordl_internal_get_Controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Controller;
}
constexpr void Oculus::Interaction::Input::ControllerRef::__cordl_internal_set_Controller(::Oculus::Interaction::Input::IController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Controller = value;
}
inline void Oculus::Interaction::Input::ControllerRef::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerRef::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Handedness Oculus::Interaction::Input::ControllerRef::get_Handedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_Handedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Handedness>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerRef::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerRef::get_IsPoseValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_IsPoseValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::ControllerInput Oculus::Interaction::Input::ControllerRef::get_ControllerInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_ControllerInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ControllerInput>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::ControllerRef::add_WhenUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"add_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::ControllerRef::remove_WhenUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"remove_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Input::ControllerRef::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerRef::TryGetPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"TryGetPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline bool Oculus::Interaction::Input::ControllerRef::TryGetPointerPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"TryGetPointerPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline float_t Oculus::Interaction::Input::ControllerRef::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::ControllerRef::IsButtonUsageAnyActive(::Oculus::Interaction::Input::ControllerButtonUsage  buttonUsage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"IsButtonUsageAnyActive", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buttonUsage);
}
inline bool Oculus::Interaction::Input::ControllerRef::IsButtonUsageAllActive(::Oculus::Interaction::Input::ControllerButtonUsage  buttonUsage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"IsButtonUsageAllActive", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buttonUsage);
}
inline void Oculus::Interaction::Input::ControllerRef::InjectAllControllerRef(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"InjectAllControllerRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::Input::ControllerRef::InjectController(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::Input::ControllerRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::ControllerRef* Oculus::Interaction::Input::ControllerRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::ControllerRef*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IController"
constexpr  Oculus::Interaction::Input::ControllerRef::operator ::Oculus::Interaction::Input::IController*() noexcept {
return static_cast<::Oculus::Interaction::Input::IController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IController"
constexpr ::Oculus::Interaction::Input::IController* Oculus::Interaction::Input::ControllerRef::i___Oculus__Interaction__Input__IController() noexcept {
return static_cast<::Oculus::Interaction::Input::IController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::Input::ControllerRef::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::Input::ControllerRef::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::ControllerRef::ControllerRef()   {
}
