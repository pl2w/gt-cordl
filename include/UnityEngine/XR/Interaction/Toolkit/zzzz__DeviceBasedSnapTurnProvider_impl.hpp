#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/DeviceBasedSnapTurnProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedSnapTurnProvider_InputAxes_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SnapTurnProviderBase_impl.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedSnapTurnProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedSnapTurnProvider_InputAxes_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.get_turnUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_turnUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4193c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"get_turnUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.set_turnUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)(::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes)>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_turnUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4193d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"set_turnUsage", {}, {::i2c::type_of<::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.get_controllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_controllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4193d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"get_controllers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.set_controllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*)>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_controllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4193e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"set_controllers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.get_deadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_deadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4193e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"get_deadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.set_deadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_deadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4193f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"set_deadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider.ReadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::ReadInput)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xb4193f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb419650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes& UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_TurnUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnUsage;
}
constexpr ::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes const& UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_TurnUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnUsage;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_set_m_TurnUsage(::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TurnUsage = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*& UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_Controllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controllers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* const& UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_Controllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controllers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_set_m_Controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Controllers = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_DeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZone;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_get_m_DeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZone;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::__cordl_internal_set_m_DeadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeadZone = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::setStaticF_k_Vec2UsageList(::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>, "k_Vec2UsageList", ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(std::forward<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>>(value));
}
inline ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>> UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::getStaticF_k_Vec2UsageList()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>, "k_Vec2UsageList", ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>();
}
inline ::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_turnUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"get_turnUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_turnUsage(::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"set_turnUsage", {}, {::i2c::type_of<::GlobalNamespace::DeviceBasedSnapTurnProvider_InputAxes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_controllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"get_controllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"set_controllers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::get_deadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"get_deadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::set_deadZone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {"set_deadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::ReadInput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider* UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider::DeviceBasedSnapTurnProvider()   {
}
