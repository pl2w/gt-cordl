#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbientSoundRandomizer.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AmbientSoundRandomizer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundRandomizer.Button_Cache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbientSoundRandomizer::*)()>(&::GlobalNamespace::AmbientSoundRandomizer::Button_Cache)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ae0bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbientSoundRandomizer*>(),
                        {"Button_Cache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundRandomizer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbientSoundRandomizer::*)()>(&::GlobalNamespace::AmbientSoundRandomizer::Awake)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ae0c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbientSoundRandomizer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundRandomizer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbientSoundRandomizer::*)()>(&::GlobalNamespace::AmbientSoundRandomizer::Update)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5ae0c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbientSoundRandomizer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundRandomizer.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbientSoundRandomizer::*)()>(&::GlobalNamespace::AmbientSoundRandomizer::SetTarget)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ae0c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbientSoundRandomizer*>(),
                        {"SetTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbientSoundRandomizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbientSoundRandomizer::*)()>(&::GlobalNamespace::AmbientSoundRandomizer::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ae0d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbientSoundRandomizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_audioSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSources;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_audioSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSources;
}
constexpr void GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_set_audioSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSources = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_audioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_audioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr void GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClips = value;
}
constexpr float_t& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_baseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTime;
}
constexpr float_t const& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_baseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTime;
}
constexpr void GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_set_baseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseTime = value;
}
constexpr float_t& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_randomModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomModifier;
}
constexpr float_t const& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_randomModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomModifier;
}
constexpr void GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_set_randomModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomModifier = value;
}
constexpr float_t& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr float_t const& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr void GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_set_timer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timer = value;
}
constexpr float_t& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_timerTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerTarget;
}
constexpr float_t const& GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_get_timerTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerTarget;
}
constexpr void GlobalNamespace::AmbientSoundRandomizer::__cordl_internal_set_timerTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timerTarget = value;
}
inline void GlobalNamespace::AmbientSoundRandomizer::Button_Cache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbientSoundRandomizer*>(),
                        {"Button_Cache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbientSoundRandomizer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbientSoundRandomizer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbientSoundRandomizer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbientSoundRandomizer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbientSoundRandomizer::SetTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbientSoundRandomizer*>(),
                        {"SetTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbientSoundRandomizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbientSoundRandomizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AmbientSoundRandomizer* GlobalNamespace::AmbientSoundRandomizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AmbientSoundRandomizer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbientSoundRandomizer::AmbientSoundRandomizer()   {
}
