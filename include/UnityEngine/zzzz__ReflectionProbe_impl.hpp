#pragma once
// IWYU pragma private; include "UnityEngine/ReflectionProbe.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__ReflectionProbe_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeRefreshMode_def.hpp"
#include "UnityEngine/zzzz__ReflectionProbe_ReflectionProbeEvent_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeMode (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_mode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb56f000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_refreshMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeRefreshMode (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_refreshMode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb56f0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_refreshMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_defaultTextureHDRDecodeValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)()>(&::UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb56f1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_defaultTextureHDRDecodeValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_defaultTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)()>(&::UnityEngine::ReflectionProbe::get_defaultTexture)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb56f274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_defaultTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.CallReflectionProbeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ReflectionProbe*, ::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent)>(&::UnityEngine::ReflectionProbe::CallReflectionProbeEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb56f320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"CallReflectionProbeEvent", {}, {::i2c::type_of<::UnityEngine::ReflectionProbe*>(), ::i2c::type_of<::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.CallSetDefaultReflection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*)>(&::UnityEngine::ReflectionProbe::CallSetDefaultReflection)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb56f3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"CallSetDefaultReflection", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_mode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeMode (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_mode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb56f09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_mode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_refreshMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeRefreshMode (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_refreshMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb56f174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_refreshMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_defaultTextureHDRDecodeValues_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb56f238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_defaultTextureHDRDecodeValues_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_defaultTexture_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::ReflectionProbe::get_defaultTexture_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb56f2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_defaultTexture_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ReflectionProbe::setStaticF_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent>*, "reflectionProbeChanged", ::UnityEngine::ReflectionProbe*>(std::forward<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent>* UnityEngine::ReflectionProbe::getStaticF_reflectionProbeChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent>*, "reflectionProbeChanged", ::UnityEngine::ReflectionProbe*>();
}
inline void UnityEngine::ReflectionProbe::setStaticF_registeredDefaultReflectionSetActions(::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionSetActions", ::UnityEngine::ReflectionProbe*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* UnityEngine::ReflectionProbe::getStaticF_registeredDefaultReflectionSetActions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionSetActions", ::UnityEngine::ReflectionProbe*>();
}
inline void UnityEngine::ReflectionProbe::setStaticF_registeredDefaultReflectionTextureActions(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionTextureActions", ::UnityEngine::ReflectionProbe*>(std::forward<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* UnityEngine::ReflectionProbe::getStaticF_registeredDefaultReflectionTextureActions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionTextureActions", ::UnityEngine::ReflectionProbe*>();
}
inline ::UnityEngine::Rendering::ReflectionProbeMode UnityEngine::ReflectionProbe::get_mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeMode>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode UnityEngine::ReflectionProbe::get_refreshMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_refreshMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeRefreshMode>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_defaultTextureHDRDecodeValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::ReflectionProbe::get_defaultTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_defaultTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::CallReflectionProbeEvent(::UnityEngine::ReflectionProbe*  probe, ::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent  probeEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"CallReflectionProbeEvent", {}, {::i2c::type_of<::UnityEngine::ReflectionProbe*>(), ::i2c::type_of<::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, probe, probeEvent);
}
inline void UnityEngine::ReflectionProbe::CallSetDefaultReflection(::UnityEngine::Texture*  defaultReflectionCubemap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"CallSetDefaultReflection", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, defaultReflectionCubemap);
}
inline ::UnityEngine::Rendering::ReflectionProbeMode UnityEngine::ReflectionProbe::get_mode_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_mode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeMode>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode UnityEngine::ReflectionProbe::get_refreshMode_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_refreshMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeRefreshMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues_Injected(::by_ref<::UnityEngine::Vector4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_defaultTextureHDRDecodeValues_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline ::System::IntPtr UnityEngine::ReflectionProbe::get_defaultTexture_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                        {"get_defaultTexture_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ReflectionProbe::ReflectionProbe()   {
}
