#pragma once
// IWYU pragma private; include "Liv/Lck/LckServiceInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/zzzz__LckServiceInitializer_def.hpp"
#include "Liv/Lck/Core/zzzz__ILckCore_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckDiContainer_def.hpp"
#include "Liv/Lck/DependencyInjection/zzzz__LckServiceProvider_def.hpp"
#include "Liv/Lck/zzzz__ILckQualityConfig_def.hpp"
#include "Liv/Lck/zzzz__LckQualityConfig_def.hpp"
#include "Liv/Lck/zzzz__LckServiceInitializer_def.hpp"
#include "Liv/NativeAudioBridge/zzzz__INativeAudioPlayer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckServiceInitializer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckServiceInitializer::*)()>(&::Liv::Lck::LckServiceInitializer::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d323c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckServiceInitializer.ConfigureServices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::DependencyInjection::LckDiContainer*, ::Liv::Lck::ILckQualityConfig*, ::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*)>(&::Liv::Lck::LckServiceInitializer::ConfigureServices)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x9d32644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer*>(),
                        {"ConfigureServices", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(), ::i2c::type_of<::Liv::Lck::ILckQualityConfig*>(), ::i2c::type_of<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckServiceInitializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckServiceInitializer::*)()>(&::Liv::Lck::LckServiceInitializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d32be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::LckQualityConfig>& Liv::Lck::LckServiceInitializer::__cordl_internal_get__qualityConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityConfig;
}
constexpr ::UnityW<::Liv::Lck::LckQualityConfig> const& Liv::Lck::LckServiceInitializer::__cordl_internal_get__qualityConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityConfig;
}
constexpr void Liv::Lck::LckServiceInitializer::__cordl_internal_set__qualityConfig(::UnityW<::Liv::Lck::LckQualityConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____qualityConfig = value;
}
inline void Liv::Lck::LckServiceInitializer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckServiceInitializer::ConfigureServices(::Liv::Lck::DependencyInjection::LckDiContainer*  container, ::Liv::Lck::ILckQualityConfig*  qualityConfig, ::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*  overrides)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer*>(),
                        {"ConfigureServices", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckDiContainer*>(), ::i2c::type_of<::Liv::Lck::ILckQualityConfig*>(), ::i2c::type_of<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, qualityConfig, overrides);
}
inline void Liv::Lck::LckServiceInitializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckServiceInitializer* Liv::Lck::LckServiceInitializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckServiceInitializer*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckServiceInitializer::LckServiceInitializer()   {
}
//  Writing Method size for method: ::Liv::Lck::LckServiceInitializer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckServiceInitializer___c::*)()>(&::Liv::Lck::LckServiceInitializer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d32c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckServiceInitializer___c._ConfigureServices_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::ILckCore* (::Liv::Lck::LckServiceInitializer___c::*)(::Liv::Lck::DependencyInjection::LckServiceProvider*)>(&::Liv::Lck::LckServiceInitializer___c::_ConfigureServices_b__2_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9d32c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer___c*>(),
                        {"<ConfigureServices>b__2_0", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckServiceInitializer___c._ConfigureServices_b__2_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::NativeAudioBridge::INativeAudioPlayer* (::Liv::Lck::LckServiceInitializer___c::*)(::Liv::Lck::DependencyInjection::LckServiceProvider*)>(&::Liv::Lck::LckServiceInitializer___c::_ConfigureServices_b__2_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9d32cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer___c*>(),
                        {"<ConfigureServices>b__2_1", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckServiceInitializer___c::setStaticF___9(::Liv::Lck::LckServiceInitializer___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::LckServiceInitializer___c*, "<>9", ::Liv::Lck::LckServiceInitializer___c*>(std::forward<::Liv::Lck::LckServiceInitializer___c*>(value));
}
inline ::Liv::Lck::LckServiceInitializer___c* Liv::Lck::LckServiceInitializer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::LckServiceInitializer___c*, "<>9", ::Liv::Lck::LckServiceInitializer___c*>();
}
inline void Liv::Lck::LckServiceInitializer___c::setStaticF___9__2_0(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::Lck::Core::ILckCore*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::Lck::Core::ILckCore*>*, "<>9__2_0", ::Liv::Lck::LckServiceInitializer___c*>(std::forward<::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::Lck::Core::ILckCore*>*>(value));
}
inline ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::Lck::Core::ILckCore*>* Liv::Lck::LckServiceInitializer___c::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::Lck::Core::ILckCore*>*, "<>9__2_0", ::Liv::Lck::LckServiceInitializer___c*>();
}
inline void Liv::Lck::LckServiceInitializer___c::setStaticF___9__2_1(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::NativeAudioBridge::INativeAudioPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::NativeAudioBridge::INativeAudioPlayer*>*, "<>9__2_1", ::Liv::Lck::LckServiceInitializer___c*>(std::forward<::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::NativeAudioBridge::INativeAudioPlayer*>*>(value));
}
inline ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::NativeAudioBridge::INativeAudioPlayer*>* Liv::Lck::LckServiceInitializer___c::getStaticF___9__2_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::Liv::NativeAudioBridge::INativeAudioPlayer*>*, "<>9__2_1", ::Liv::Lck::LckServiceInitializer___c*>();
}
inline void Liv::Lck::LckServiceInitializer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Core::ILckCore* Liv::Lck::LckServiceInitializer___c::_ConfigureServices_b__2_0(::Liv::Lck::DependencyInjection::LckServiceProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer___c*>(),
                        {"<ConfigureServices>b__2_0", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::ILckCore*>(this, ___internal_method, provider);
}
inline ::Liv::NativeAudioBridge::INativeAudioPlayer* Liv::Lck::LckServiceInitializer___c::_ConfigureServices_b__2_1(::Liv::Lck::DependencyInjection::LckServiceProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckServiceInitializer___c*>(),
                        {"<ConfigureServices>b__2_1", {}, {::i2c::type_of<::Liv::Lck::DependencyInjection::LckServiceProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::NativeAudioBridge::INativeAudioPlayer*>(this, ___internal_method, provider);
}
inline ::Liv::Lck::LckServiceInitializer___c* Liv::Lck::LckServiceInitializer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckServiceInitializer___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckServiceInitializer___c::LckServiceInitializer___c()   {
}
