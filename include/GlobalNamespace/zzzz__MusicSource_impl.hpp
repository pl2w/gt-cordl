#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicSource.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MusicSource_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicSource.get_AudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::MusicSource::*)()>(&::GlobalNamespace::MusicSource::get_AudioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596df1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"get_AudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicSource.get_DefaultVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MusicSource::*)()>(&::GlobalNamespace::MusicSource::get_DefaultVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596df24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"get_DefaultVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicSource.get_VolumeOverridden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MusicSource::*)()>(&::GlobalNamespace::MusicSource::get_VolumeOverridden)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x596df2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"get_VolumeOverridden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicSource.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicSource::*)()>(&::GlobalNamespace::MusicSource::Awake)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x596df68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicSource.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicSource::*)()>(&::GlobalNamespace::MusicSource::OnEnable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x596e024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicSource.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicSource::*)()>(&::GlobalNamespace::MusicSource::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x596e0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicSource.SetVolumeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicSource::*)(float_t)>(&::GlobalNamespace::MusicSource::SetVolumeOverride)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596d4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"SetVolumeOverride", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicSource.UnsetVolumeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicSource::*)()>(&::GlobalNamespace::MusicSource::UnsetVolumeOverride)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x596d444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"UnsetVolumeOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicSource::*)()>(&::GlobalNamespace::MusicSource::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x596e1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MusicSource::__cordl_internal_get_defaultVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultVolume;
}
constexpr float_t const& GlobalNamespace::MusicSource::__cordl_internal_get_defaultVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultVolume;
}
constexpr void GlobalNamespace::MusicSource::__cordl_internal_set_defaultVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultVolume = value;
}
constexpr bool& GlobalNamespace::MusicSource::__cordl_internal_get_setDefaultVolumeFromAudioSourceOnAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setDefaultVolumeFromAudioSourceOnAwake;
}
constexpr bool const& GlobalNamespace::MusicSource::__cordl_internal_get_setDefaultVolumeFromAudioSourceOnAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setDefaultVolumeFromAudioSourceOnAwake;
}
constexpr void GlobalNamespace::MusicSource::__cordl_internal_set_setDefaultVolumeFromAudioSourceOnAwake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setDefaultVolumeFromAudioSourceOnAwake = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MusicSource::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MusicSource::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::MusicSource::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::System::Nullable_1<float_t>& GlobalNamespace::MusicSource::__cordl_internal_get_volumeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeOverride;
}
constexpr ::System::Nullable_1<float_t> const& GlobalNamespace::MusicSource::__cordl_internal_get_volumeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeOverride;
}
constexpr void GlobalNamespace::MusicSource::__cordl_internal_set_volumeOverride(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumeOverride = value;
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::MusicSource::get_AudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"get_AudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}
inline float_t GlobalNamespace::MusicSource::get_DefaultVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"get_DefaultVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MusicSource::get_VolumeOverridden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"get_VolumeOverridden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MusicSource::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicSource::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicSource::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicSource::SetVolumeOverride(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"SetVolumeOverride", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume);
}
inline void GlobalNamespace::MusicSource::UnsetVolumeOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {"UnsetVolumeOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MusicSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MusicSource* GlobalNamespace::MusicSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicSource*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicSource::MusicSource()   {
}
