#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/CharacterControllerDriver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__CharacterControllerDriver_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionSystem_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRRig_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.get_locomotionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider> (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_locomotionProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb417204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_locomotionProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.set_locomotionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::set_locomotionProvider)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb41720c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"set_locomotionProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.get_minHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4176cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_minHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.set_minHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::set_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4176d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"set_minHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.get_maxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_maxHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4176dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_maxHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.set_maxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::set_maxHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4176e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"set_maxHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.get_xrOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::XR::CoreUtils::XROrigin> (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_xrOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4176ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_xrOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.get_xrRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRig> (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_xrRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4176f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_xrRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.get_characterController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CharacterController> (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_characterController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4176fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_characterController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::Awake)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb417704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb41789c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4178a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4178ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.UpdateCharacterController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::UpdateCharacterController)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb4178cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::Subscribe)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb417380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::Unsubscribe)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb417268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.SetupCharacterController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::SetupCharacterController)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xb417498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"SetupCharacterController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.OnBeginLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*)>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::OnBeginLocomotion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb417a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"OnBeginLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver.OnEndLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*)>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::OnEndLocomotion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb417a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"OnEndLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb417a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>& UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_get_m_LocomotionProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocomotionProvider;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider> const& UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_get_m_LocomotionProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocomotionProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_set_m_LocomotionProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocomotionProvider = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_get_m_MinHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinHeight;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_get_m_MinHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinHeight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_set_m_MinHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinHeight = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_get_m_MaxHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxHeight;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_get_m_MaxHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxHeight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_set_m_MaxHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxHeight = value;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_get_m_XROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_get_m_XROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XROrigin = value;
}
constexpr ::UnityW<::UnityEngine::CharacterController>& UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_get_m_CharacterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CharacterController;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_get_m_CharacterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::__cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CharacterController = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider> UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_locomotionProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_locomotionProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::set_locomotionProvider(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"set_locomotionProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_minHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_minHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::set_minHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"set_minHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_maxHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_maxHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::set_maxHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"set_maxHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_xrOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_xrOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::XR::CoreUtils::XROrigin>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRig> UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_xrRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_xrRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRRig>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::CharacterController> UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::get_characterController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"get_characterController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CharacterController>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::UpdateCharacterController()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::Subscribe(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::Unsubscribe(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::SetupCharacterController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"SetupCharacterController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::OnBeginLocomotion(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*  system)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"OnBeginLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, system);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::OnEndLocomotion(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*  system)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {"OnEndLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, system);
}
inline void UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver* UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::CharacterControllerDriver::CharacterControllerDriver()   {
}
