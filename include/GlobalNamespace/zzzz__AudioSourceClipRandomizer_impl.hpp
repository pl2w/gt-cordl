#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSourceClipRandomizer.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSourceClipRandomizer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioSourceClipRandomizer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceClipRandomizer::*)()>(&::GlobalNamespace::AudioSourceClipRandomizer::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x55e5b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceClipRandomizer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceClipRandomizer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceClipRandomizer::*)()>(&::GlobalNamespace::AudioSourceClipRandomizer::Play)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x55e5bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceClipRandomizer*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceClipRandomizer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceClipRandomizer::*)()>(&::GlobalNamespace::AudioSourceClipRandomizer::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55e5d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceClipRandomizer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceClipRandomizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceClipRandomizer::*)()>(&::GlobalNamespace::AudioSourceClipRandomizer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e5d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceClipRandomizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::AudioSourceClipRandomizer::__cordl_internal_get_clips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::AudioSourceClipRandomizer::__cordl_internal_get_clips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clips;
}
constexpr void GlobalNamespace::AudioSourceClipRandomizer::__cordl_internal_set_clips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clips = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AudioSourceClipRandomizer::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AudioSourceClipRandomizer::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void GlobalNamespace::AudioSourceClipRandomizer::__cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr bool& GlobalNamespace::AudioSourceClipRandomizer::__cordl_internal_get_playOnAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playOnAwake;
}
constexpr bool const& GlobalNamespace::AudioSourceClipRandomizer::__cordl_internal_get_playOnAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playOnAwake;
}
constexpr void GlobalNamespace::AudioSourceClipRandomizer::__cordl_internal_set_playOnAwake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playOnAwake = value;
}
inline void GlobalNamespace::AudioSourceClipRandomizer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceClipRandomizer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceClipRandomizer::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceClipRandomizer*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceClipRandomizer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceClipRandomizer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceClipRandomizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceClipRandomizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioSourceClipRandomizer* GlobalNamespace::AudioSourceClipRandomizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioSourceClipRandomizer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSourceClipRandomizer::AudioSourceClipRandomizer()   {
}
