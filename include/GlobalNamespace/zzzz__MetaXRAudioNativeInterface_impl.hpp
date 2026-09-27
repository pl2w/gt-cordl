#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioNativeInterface.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAudioNativeInterface_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAudioNativeInterface_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAudioNativeInterface_ovrAudioScalarType_def.hpp"
#include "Meta/XR/Audio/zzzz__EnableFlag_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface.get_Interface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* (*)()>(&::GlobalNamespace::MetaXRAudioNativeInterface::get_Interface)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9ebb0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface*>(),
                        {"get_Interface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface.FindInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* (*)()>(&::GlobalNamespace::MetaXRAudioNativeInterface::FindInterface)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x9ebb164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface*>(),
                        {"FindInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioNativeInterface::*)()>(&::GlobalNamespace::MetaXRAudioNativeInterface::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebb504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MetaXRAudioNativeInterface::setStaticF_CachedInterface(::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*, "CachedInterface", ::GlobalNamespace::MetaXRAudioNativeInterface*>(std::forward<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(value));
}
inline ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* GlobalNamespace::MetaXRAudioNativeInterface::getStaticF_CachedInterface()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*, "CachedInterface", ::GlobalNamespace::MetaXRAudioNativeInterface*>();
}
inline ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* GlobalNamespace::MetaXRAudioNativeInterface::get_Interface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface*>(),
                        {"get_Interface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* GlobalNamespace::MetaXRAudioNativeInterface::FindInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface*>(),
                        {"FindInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MetaXRAudioNativeInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAudioNativeInterface* GlobalNamespace::MetaXRAudioNativeInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAudioNativeInterface*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAudioNativeInterface::MetaXRAudioNativeInterface()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.get_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)()>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::get_context)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9ebc858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"get_context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_GetPluginContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_GetPluginContext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9ebb470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_GetPluginContext", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_SetAdvancedBoxRoomParametersUnity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t, bool, float_t, float_t, float_t, ::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetAdvancedBoxRoomParametersUnity)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9ebc87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetAdvancedBoxRoomParametersUnity", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.SetAdvancedBoxRoomParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)(float_t, float_t, float_t, bool, ::UnityEngine::Vector3, ::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetAdvancedBoxRoomParameters)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ebc960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetAdvancedBoxRoomParameters", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_SetRoomClutterFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetRoomClutterFactor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ebc9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetRoomClutterFactor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.SetRoomClutterFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)(::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetRoomClutterFactor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetRoomClutterFactor", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_SetSharedReverbWetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetSharedReverbWetLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ebcaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetSharedReverbWetLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.SetSharedReverbWetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetSharedReverbWetLevel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebcb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetSharedReverbWetLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ebcb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)(int32_t, bool)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9ebcbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Audio::EnableFlag, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ebcc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)(::Meta::XR::Audio::EnableFlag, bool)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9ebccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_SetDynamicRoomRaysPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetDynamicRoomRaysPerSecond)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ebccfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.SetDynamicRoomRaysPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)(int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetDynamicRoomRaysPerSecond)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebcd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_SetDynamicRoomInterpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetDynamicRoomInterpSpeed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ebcdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.SetDynamicRoomInterpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetDynamicRoomInterpSpeed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebce40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_SetDynamicRoomMaxWallDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetDynamicRoomMaxWallDistance)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ebce74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.SetDynamicRoomMaxWallDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetDynamicRoomMaxWallDistance)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebcf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_SetDynamicRoomRaysRayCacheSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetDynamicRoomRaysRayCacheSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ebcf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.SetDynamicRoomRaysRayCacheSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)(int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetDynamicRoomRaysRayCacheSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebcfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_GetRoomDimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::ArrayW<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_GetRoomDimensions)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ebcfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_GetRoomDimensions", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.GetRoomDimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)(::ArrayW<float_t>, ::ArrayW<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::GetRoomDimensions)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ebd098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"GetRoomDimensions", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.ovrAudio_GetRaycastHits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_GetRaycastHits)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ebd0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_GetRaycastHits", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface.GetRaycastHits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::GetRaycastHits)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ebd190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"GetRaycastHits", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::*)()>(&::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ebb4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::__cordl_internal_get_context_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr ::System::IntPtr const& GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::__cordl_internal_get_context_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr void GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::__cordl_internal_set_context_(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context_ = value;
}
inline ::System::IntPtr GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::get_context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"get_context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_GetPluginContext(::by_ref<::System::IntPtr>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_GetPluginContext", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetAdvancedBoxRoomParametersUnity(::System::IntPtr  context, float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, float_t  positionX, float_t  positionY, float_t  positionZ, ::ArrayW<float_t>  wallMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetAdvancedBoxRoomParametersUnity", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, width, height, depth, lockToListenerPosition, positionX, positionY, positionZ, wallMaterials);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetAdvancedBoxRoomParameters(float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, ::UnityEngine::Vector3  position, ::ArrayW<float_t>  wallMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetAdvancedBoxRoomParameters", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, width, height, depth, lockToListenerPosition, position, wallMaterials);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetRoomClutterFactor(::System::IntPtr  context, ::ArrayW<float_t>  clutterFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetRoomClutterFactor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, clutterFactor);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetRoomClutterFactor(::ArrayW<float_t>  clutterFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetRoomClutterFactor", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, clutterFactor);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetSharedReverbWetLevel(::System::IntPtr  context, float_t  linearLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetSharedReverbWetLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, linearLevel);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetSharedReverbWetLevel(float_t  linearLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetSharedReverbWetLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, linearLevel);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetEnabled(int32_t  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Audio::EnableFlag  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetEnabled(::Meta::XR::Audio::EnableFlag  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetDynamicRoomRaysPerSecond(::System::IntPtr  context, int32_t  RaysPerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, RaysPerSecond);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetDynamicRoomRaysPerSecond(int32_t  RaysPerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, RaysPerSecond);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetDynamicRoomInterpSpeed(::System::IntPtr  context, float_t  InterpSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, InterpSpeed);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetDynamicRoomInterpSpeed(float_t  InterpSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, InterpSpeed);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetDynamicRoomMaxWallDistance(::System::IntPtr  context, float_t  MaxWallDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, MaxWallDistance);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetDynamicRoomMaxWallDistance(float_t  MaxWallDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, MaxWallDistance);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_SetDynamicRoomRaysRayCacheSize(::System::IntPtr  context, int32_t  RayCacheSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, RayCacheSize);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::SetDynamicRoomRaysRayCacheSize(int32_t  RayCacheSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, RayCacheSize);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_GetRoomDimensions(::System::IntPtr  context, ::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_GetRoomDimensions", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, roomDimensions, reflectionsCoefs, position);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::GetRoomDimensions(::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"GetRoomDimensions", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, roomDimensions, reflectionsCoefs, position);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::ovrAudio_GetRaycastHits(::System::IntPtr  context, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_GetRaycastHits", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, points, normals, length);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::GetRaycastHits(::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {"GetRaycastHits", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, points, normals, length);
}
inline void GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface* GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface*>());
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr  GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::operator ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::i___GlobalNamespace__MetaXRAudioNativeInterface_NativeInterface() noexcept {
return static_cast<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAudioNativeInterface_FMODPluginInterface::MetaXRAudioNativeInterface_FMODPluginInterface()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.get_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)()>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::get_context)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ebbf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"get_context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.getOrCreateGlobalOvrAudioContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::getOrCreateGlobalOvrAudioContext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9ebb400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"getOrCreateGlobalOvrAudioContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.ovrAudio_SetAdvancedBoxRoomParametersUnity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t, bool, float_t, float_t, float_t, ::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetAdvancedBoxRoomParametersUnity)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9ebbf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetAdvancedBoxRoomParametersUnity", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.SetAdvancedBoxRoomParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)(float_t, float_t, float_t, bool, ::UnityEngine::Vector3, ::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetAdvancedBoxRoomParameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9ebc00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetAdvancedBoxRoomParameters", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.ovrAudio_SetRoomClutterFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetRoomClutterFactor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9ebc08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetRoomClutterFactor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.SetRoomClutterFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)(::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetRoomClutterFactor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ebc114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetRoomClutterFactor", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.ovrAudio_SetSharedReverbWetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetSharedReverbWetLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ebc144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetSharedReverbWetLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.SetSharedReverbWetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetSharedReverbWetLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ebc1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetSharedReverbWetLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ebc200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)(int32_t, bool)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ebc290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Audio::EnableFlag, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ebc2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)(::Meta::XR::Audio::EnableFlag, bool)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ebc358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.ovrAudio_SetDynamicRoomRaysPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetDynamicRoomRaysPerSecond)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ebc390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.SetDynamicRoomRaysPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)(int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetDynamicRoomRaysPerSecond)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ebc414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.ovrAudio_SetDynamicRoomInterpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetDynamicRoomInterpSpeed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ebc444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.SetDynamicRoomInterpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetDynamicRoomInterpSpeed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ebc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.ovrAudio_SetDynamicRoomMaxWallDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetDynamicRoomMaxWallDistance)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ebc500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.SetDynamicRoomMaxWallDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetDynamicRoomMaxWallDistance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ebc58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.ovrAudio_SetDynamicRoomRaysRayCacheSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetDynamicRoomRaysRayCacheSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ebc5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.SetDynamicRoomRaysRayCacheSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)(int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetDynamicRoomRaysRayCacheSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ebc640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.ovrAudio_GetRoomDimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::ArrayW<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_GetRoomDimensions)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ebc670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_GetRoomDimensions", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.GetRoomDimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)(::ArrayW<float_t>, ::ArrayW<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::GetRoomDimensions)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9ebc71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"GetRoomDimensions", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.ovrAudio_GetRaycastHits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_GetRaycastHits)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ebc764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_GetRaycastHits", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface.GetRaycastHits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::GetRaycastHits)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9ebc810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"GetRaycastHits", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::*)()>(&::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ebb464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::__cordl_internal_get_context_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr ::System::IntPtr const& GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::__cordl_internal_get_context_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr void GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::__cordl_internal_set_context_(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context_ = value;
}
inline ::System::IntPtr GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::get_context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"get_context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::System::IntPtr GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::getOrCreateGlobalOvrAudioContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"getOrCreateGlobalOvrAudioContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetAdvancedBoxRoomParametersUnity(::System::IntPtr  context, float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, float_t  positionX, float_t  positionY, float_t  positionZ, ::ArrayW<float_t>  wallMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetAdvancedBoxRoomParametersUnity", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, width, height, depth, lockToListenerPosition, positionX, positionY, positionZ, wallMaterials);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetAdvancedBoxRoomParameters(float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, ::UnityEngine::Vector3  position, ::ArrayW<float_t>  wallMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetAdvancedBoxRoomParameters", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, width, height, depth, lockToListenerPosition, position, wallMaterials);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetRoomClutterFactor(::System::IntPtr  context, ::ArrayW<float_t>  clutterFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetRoomClutterFactor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, clutterFactor);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetRoomClutterFactor(::ArrayW<float_t>  clutterFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetRoomClutterFactor", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, clutterFactor);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetSharedReverbWetLevel(::System::IntPtr  context, float_t  linearLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetSharedReverbWetLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, linearLevel);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetSharedReverbWetLevel(float_t  linearLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetSharedReverbWetLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, linearLevel);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetEnabled(int32_t  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Audio::EnableFlag  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetEnabled(::Meta::XR::Audio::EnableFlag  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetDynamicRoomRaysPerSecond(::System::IntPtr  context, int32_t  RaysPerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, RaysPerSecond);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetDynamicRoomRaysPerSecond(int32_t  RaysPerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, RaysPerSecond);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetDynamicRoomInterpSpeed(::System::IntPtr  context, float_t  InterpSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, InterpSpeed);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetDynamicRoomInterpSpeed(float_t  InterpSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, InterpSpeed);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetDynamicRoomMaxWallDistance(::System::IntPtr  context, float_t  MaxWallDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, MaxWallDistance);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetDynamicRoomMaxWallDistance(float_t  MaxWallDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, MaxWallDistance);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_SetDynamicRoomRaysRayCacheSize(::System::IntPtr  context, int32_t  RayCacheSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, RayCacheSize);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::SetDynamicRoomRaysRayCacheSize(int32_t  RayCacheSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, RayCacheSize);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_GetRoomDimensions(::System::IntPtr  context, ::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_GetRoomDimensions", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, roomDimensions, reflectionsCoefs, position);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::GetRoomDimensions(::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"GetRoomDimensions", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, roomDimensions, reflectionsCoefs, position);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::ovrAudio_GetRaycastHits(::System::IntPtr  context, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_GetRaycastHits", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, points, normals, length);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::GetRaycastHits(::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {"GetRaycastHits", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, points, normals, length);
}
inline void GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface* GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface*>());
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr  GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::operator ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::i___GlobalNamespace__MetaXRAudioNativeInterface_NativeInterface() noexcept {
return static_cast<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAudioNativeInterface_WwisePluginInterface::MetaXRAudioNativeInterface_WwisePluginInterface()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.get_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)()>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::get_context)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9ebb50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"get_context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_GetPluginContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_GetPluginContext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9ebb530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_GetPluginContext", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_SetAdvancedBoxRoomParametersUnity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t, bool, float_t, float_t, float_t, ::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetAdvancedBoxRoomParametersUnity)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9ebb5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetAdvancedBoxRoomParametersUnity", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.SetAdvancedBoxRoomParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)(float_t, float_t, float_t, bool, ::UnityEngine::Vector3, ::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetAdvancedBoxRoomParameters)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ebb690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetAdvancedBoxRoomParameters", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_SetRoomClutterFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetRoomClutterFactor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9ebb714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetRoomClutterFactor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.SetRoomClutterFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)(::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetRoomClutterFactor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebb79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetRoomClutterFactor", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_SetSharedReverbWetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetSharedReverbWetLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ebb7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetSharedReverbWetLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.SetSharedReverbWetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetSharedReverbWetLevel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebb85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetSharedReverbWetLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ebb890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)(int32_t, bool)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9ebb920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Audio::EnableFlag, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ebb95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)(::Meta::XR::Audio::EnableFlag, bool)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9ebb9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_SetDynamicRoomRaysPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetDynamicRoomRaysPerSecond)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ebba28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.SetDynamicRoomRaysPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)(int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetDynamicRoomRaysPerSecond)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebbaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_SetDynamicRoomInterpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetDynamicRoomInterpSpeed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ebbae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.SetDynamicRoomInterpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetDynamicRoomInterpSpeed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebbb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_SetDynamicRoomMaxWallDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetDynamicRoomMaxWallDistance)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ebbba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.SetDynamicRoomMaxWallDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetDynamicRoomMaxWallDistance)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebbc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_SetDynamicRoomRaysRayCacheSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetDynamicRoomRaysRayCacheSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ebbc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.SetDynamicRoomRaysRayCacheSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)(int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetDynamicRoomRaysRayCacheSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ebbce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_GetRoomDimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::ArrayW<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_GetRoomDimensions)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ebbd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_GetRoomDimensions", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.GetRoomDimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)(::ArrayW<float_t>, ::ArrayW<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::GetRoomDimensions)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ebbdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"GetRoomDimensions", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.ovrAudio_GetRaycastHits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_GetRaycastHits)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ebbe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_GetRaycastHits", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface.GetRaycastHits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::GetRaycastHits)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ebbebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"GetRaycastHits", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::*)()>(&::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ebb4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::__cordl_internal_get_context_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr ::System::IntPtr const& GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::__cordl_internal_get_context_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr void GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::__cordl_internal_set_context_(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context_ = value;
}
inline ::System::IntPtr GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::get_context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"get_context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_GetPluginContext(::by_ref<::System::IntPtr>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_GetPluginContext", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetAdvancedBoxRoomParametersUnity(::System::IntPtr  context, float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, float_t  positionX, float_t  positionY, float_t  positionZ, ::ArrayW<float_t>  wallMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetAdvancedBoxRoomParametersUnity", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, width, height, depth, lockToListenerPosition, positionX, positionY, positionZ, wallMaterials);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetAdvancedBoxRoomParameters(float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, ::UnityEngine::Vector3  position, ::ArrayW<float_t>  wallMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetAdvancedBoxRoomParameters", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, width, height, depth, lockToListenerPosition, position, wallMaterials);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetRoomClutterFactor(::System::IntPtr  context, ::ArrayW<float_t>  clutterFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetRoomClutterFactor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, clutterFactor);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetRoomClutterFactor(::ArrayW<float_t>  clutterFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetRoomClutterFactor", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, clutterFactor);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetSharedReverbWetLevel(::System::IntPtr  context, float_t  linearLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetSharedReverbWetLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, linearLevel);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetSharedReverbWetLevel(float_t  linearLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetSharedReverbWetLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, linearLevel);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetEnabled(int32_t  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Audio::EnableFlag  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetEnabled(::Meta::XR::Audio::EnableFlag  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Audio::EnableFlag>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetDynamicRoomRaysPerSecond(::System::IntPtr  context, int32_t  RaysPerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, RaysPerSecond);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetDynamicRoomRaysPerSecond(int32_t  RaysPerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetDynamicRoomRaysPerSecond", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, RaysPerSecond);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetDynamicRoomInterpSpeed(::System::IntPtr  context, float_t  InterpSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, InterpSpeed);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetDynamicRoomInterpSpeed(float_t  InterpSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetDynamicRoomInterpSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, InterpSpeed);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetDynamicRoomMaxWallDistance(::System::IntPtr  context, float_t  MaxWallDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, MaxWallDistance);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetDynamicRoomMaxWallDistance(float_t  MaxWallDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetDynamicRoomMaxWallDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, MaxWallDistance);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_SetDynamicRoomRaysRayCacheSize(::System::IntPtr  context, int32_t  RayCacheSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, RayCacheSize);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::SetDynamicRoomRaysRayCacheSize(int32_t  RayCacheSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"SetDynamicRoomRaysRayCacheSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, RayCacheSize);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_GetRoomDimensions(::System::IntPtr  context, ::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_GetRoomDimensions", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, roomDimensions, reflectionsCoefs, position);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::GetRoomDimensions(::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"GetRoomDimensions", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, roomDimensions, reflectionsCoefs, position);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::ovrAudio_GetRaycastHits(::System::IntPtr  context, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_GetRaycastHits", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, points, normals, length);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::GetRaycastHits(::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {"GetRaycastHits", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, points, normals, length);
}
inline void GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface* GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface*>());
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr  GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::operator ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface"
constexpr ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface* GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::i___GlobalNamespace__MetaXRAudioNativeInterface_NativeInterface() noexcept {
return static_cast<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAudioNativeInterface_UnityNativeInterface::MetaXRAudioNativeInterface_UnityNativeInterface()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface.SetAdvancedBoxRoomParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::*)(float_t, float_t, float_t, bool, ::UnityEngine::Vector3, ::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetAdvancedBoxRoomParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface.SetSharedReverbWetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetSharedReverbWetLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::*)(int32_t, bool)>(&::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface.SetRoomClutterFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::*)(::ArrayW<float_t>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetRoomClutterFactor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface.SetDynamicRoomRaysPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::*)(int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetDynamicRoomRaysPerSecond)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface.SetDynamicRoomInterpSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetDynamicRoomInterpSpeed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface.SetDynamicRoomMaxWallDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::*)(float_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetDynamicRoomMaxWallDistance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface.SetDynamicRoomRaysRayCacheSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::*)(int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetDynamicRoomRaysRayCacheSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface.GetRoomDimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::*)(::ArrayW<float_t>, ::ArrayW<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::GetRoomDimensions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface.GetRaycastHits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, int32_t)>(&::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::GetRaycastHits)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 9}
                ));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetAdvancedBoxRoomParameters(float_t  width, float_t  height, float_t  depth, bool  lockToListenerPosition, ::UnityEngine::Vector3  position, ::ArrayW<float_t>  wallMaterials)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, width, height, depth, lockToListenerPosition, position, wallMaterials);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetSharedReverbWetLevel(float_t  linearLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, linearLevel);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetEnabled(int32_t  feature, bool  enabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetRoomClutterFactor(::ArrayW<float_t>  clutterFactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, clutterFactor);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetDynamicRoomRaysPerSecond(int32_t  RaysPerSecond)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, RaysPerSecond);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetDynamicRoomInterpSpeed(float_t  InterpSpeed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, InterpSpeed);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetDynamicRoomMaxWallDistance(float_t  MaxWallDistance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, MaxWallDistance);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::SetDynamicRoomRaysRayCacheSize(int32_t  RayCacheSize)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, RayCacheSize);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::GetRoomDimensions(::ArrayW<float_t>  roomDimensions, ::ArrayW<float_t>  reflectionsCoefs, ::by_ref<::UnityEngine::Vector3>  position)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, roomDimensions, reflectionsCoefs, position);
}
inline int32_t GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface::GetRaycastHits(::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  normals, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAudioNativeInterface_NativeInterface*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, points, normals, length);
}
