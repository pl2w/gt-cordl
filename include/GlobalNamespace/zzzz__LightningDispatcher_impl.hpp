#pragma once
// IWYU pragma private; include "GlobalNamespace/LightningDispatcher.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightningDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__LightningDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__LightningStrike_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightningDispatcher.add_RequestLightningStrike
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*)>(&::GlobalNamespace::LightningDispatcher::add_RequestLightningStrike)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b2e2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcher*>(),
                        {"add_RequestLightningStrike", {}, {::i2c::type_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningDispatcher.remove_RequestLightningStrike
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*)>(&::GlobalNamespace::LightningDispatcher::remove_RequestLightningStrike)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b2e358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcher*>(),
                        {"remove_RequestLightningStrike", {}, {::i2c::type_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningDispatcher.DispatchLightning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningDispatcher::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::LightningDispatcher::DispatchLightning)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5b2e410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcher*>(),
                        {"DispatchLightning", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningDispatcher::*)()>(&::GlobalNamespace::LightningDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b2e908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::LightningDispatcher::__cordl_internal_get_beamWidthCM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beamWidthCM;
}
constexpr float_t const& GlobalNamespace::LightningDispatcher::__cordl_internal_get_beamWidthCM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beamWidthCM;
}
constexpr void GlobalNamespace::LightningDispatcher::__cordl_internal_set_beamWidthCM(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beamWidthCM = value;
}
constexpr float_t& GlobalNamespace::LightningDispatcher::__cordl_internal_get_soundVolumeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundVolumeMultiplier;
}
constexpr float_t const& GlobalNamespace::LightningDispatcher::__cordl_internal_get_soundVolumeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundVolumeMultiplier;
}
constexpr void GlobalNamespace::LightningDispatcher::__cordl_internal_set_soundVolumeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundVolumeMultiplier = value;
}
constexpr float_t& GlobalNamespace::LightningDispatcher::__cordl_internal_get_minDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDuration;
}
constexpr float_t const& GlobalNamespace::LightningDispatcher::__cordl_internal_get_minDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDuration;
}
constexpr void GlobalNamespace::LightningDispatcher::__cordl_internal_set_minDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDuration = value;
}
constexpr float_t& GlobalNamespace::LightningDispatcher::__cordl_internal_get_maxDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDuration;
}
constexpr float_t const& GlobalNamespace::LightningDispatcher::__cordl_internal_get_maxDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDuration;
}
constexpr void GlobalNamespace::LightningDispatcher::__cordl_internal_set_maxDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDuration = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::LightningDispatcher::__cordl_internal_get_colorOverLifetime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorOverLifetime;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::LightningDispatcher::__cordl_internal_get_colorOverLifetime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorOverLifetime;
}
constexpr void GlobalNamespace::LightningDispatcher::__cordl_internal_set_colorOverLifetime(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorOverLifetime = value;
}
inline void GlobalNamespace::LightningDispatcher::setStaticF_RequestLightningStrike(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*, "RequestLightningStrike", ::GlobalNamespace::LightningDispatcher*>(std::forward<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(value));
}
inline ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent* GlobalNamespace::LightningDispatcher::getStaticF_RequestLightningStrike()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*, "RequestLightningStrike", ::GlobalNamespace::LightningDispatcher*>();
}
inline void GlobalNamespace::LightningDispatcher::add_RequestLightningStrike(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcher*>(),
                        {"add_RequestLightningStrike", {}, {::i2c::type_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::LightningDispatcher::remove_RequestLightningStrike(::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcher*>(),
                        {"remove_RequestLightningStrike", {}, {::i2c::type_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::LightningDispatcher::DispatchLightning(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcher*>(),
                        {"DispatchLightning", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2);
}
inline void GlobalNamespace::LightningDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightningDispatcher* GlobalNamespace::LightningDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightningDispatcher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightningDispatcher::LightningDispatcher()   {
}
//  Writing Method size for method: ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningDispatcher_DispatchLightningEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::LightningDispatcher_DispatchLightningEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b2e91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LightningStrike> (::GlobalNamespace::LightningDispatcher_DispatchLightningEvent::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::LightningDispatcher_DispatchLightningEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b2e9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::LightningDispatcher_DispatchLightningEvent::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::LightningDispatcher_DispatchLightningEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b2e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LightningStrike> (::GlobalNamespace::LightningDispatcher_DispatchLightningEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::LightningDispatcher_DispatchLightningEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b2ea78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightningDispatcher_DispatchLightningEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::GlobalNamespace::LightningStrike> GlobalNamespace::LightningDispatcher_DispatchLightningEvent::Invoke(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightningStrike>>(this, ___internal_method, p1, p2);
}
inline ::System::IAsyncResult* GlobalNamespace::LightningDispatcher_DispatchLightningEvent::BeginInvoke(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, p1, p2, callback, object);
}
inline ::UnityW<::GlobalNamespace::LightningStrike> GlobalNamespace::LightningDispatcher_DispatchLightningEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightningStrike>>(this, ___internal_method, result);
}
inline ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent* GlobalNamespace::LightningDispatcher_DispatchLightningEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightningDispatcher_DispatchLightningEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightningDispatcher_DispatchLightningEvent::LightningDispatcher_DispatchLightningEvent()   {
}
