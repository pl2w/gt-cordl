#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundEffects.hpp"
#include "GlobalNamespace/zzzz__SRand_impl.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SoundEffects_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SoundEffects.get_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SoundEffects::*)()>(&::GlobalNamespace::SoundEffects::get_isPlaying)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x57940b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"get_isPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffects.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundEffects::*)()>(&::GlobalNamespace::SoundEffects::Clear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5794d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffects.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundEffects::*)()>(&::GlobalNamespace::SoundEffects::Stop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5794e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffects.PlayNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundEffects::*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::SoundEffects::PlayNext)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5794e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"PlayNext", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffects.PlayNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundEffects::*)(float_t, float_t)>(&::GlobalNamespace::SoundEffects::PlayNext)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x57940fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"PlayNext", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffects.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundEffects::*)()>(&::GlobalNamespace::SoundEffects::OnValidate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5794ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundEffects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundEffects::*)()>(&::GlobalNamespace::SoundEffects::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5794fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SoundEffects::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SoundEffects::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void GlobalNamespace::SoundEffects::__cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::SoundEffects::__cordl_internal_get_audioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::SoundEffects::__cordl_internal_get_audioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr void GlobalNamespace::SoundEffects::__cordl_internal_set_audioClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClips = value;
}
constexpr ::StringW& GlobalNamespace::SoundEffects::__cordl_internal_get_seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr ::StringW const& GlobalNamespace::SoundEffects::__cordl_internal_get_seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr void GlobalNamespace::SoundEffects::__cordl_internal_set_seed(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seed = value;
}
constexpr bool& GlobalNamespace::SoundEffects::__cordl_internal_get_distinct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distinct;
}
constexpr bool const& GlobalNamespace::SoundEffects::__cordl_internal_get_distinct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distinct;
}
constexpr void GlobalNamespace::SoundEffects::__cordl_internal_set_distinct(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distinct = value;
}
constexpr float_t& GlobalNamespace::SoundEffects::__cordl_internal_get__minDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDelay;
}
constexpr float_t const& GlobalNamespace::SoundEffects::__cordl_internal_get__minDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDelay;
}
constexpr void GlobalNamespace::SoundEffects::__cordl_internal_set__minDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minDelay = value;
}
constexpr ::GlobalNamespace::SRand& GlobalNamespace::SoundEffects::__cordl_internal_get__rnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rnd;
}
constexpr ::GlobalNamespace::SRand const& GlobalNamespace::SoundEffects::__cordl_internal_get__rnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rnd;
}
constexpr void GlobalNamespace::SoundEffects::__cordl_internal_set__rnd(::GlobalNamespace::SRand  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rnd = value;
}
constexpr int32_t& GlobalNamespace::SoundEffects::__cordl_internal_get__lastClipIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastClipIndex;
}
constexpr int32_t const& GlobalNamespace::SoundEffects::__cordl_internal_get__lastClipIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastClipIndex;
}
constexpr void GlobalNamespace::SoundEffects::__cordl_internal_set__lastClipIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastClipIndex = value;
}
constexpr double_t& GlobalNamespace::SoundEffects::__cordl_internal_get__lastClipLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastClipLength;
}
constexpr double_t const& GlobalNamespace::SoundEffects::__cordl_internal_get__lastClipLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastClipLength;
}
constexpr void GlobalNamespace::SoundEffects::__cordl_internal_set__lastClipLength(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastClipLength = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::SoundEffects::__cordl_internal_get__lastClipElapsedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastClipElapsedTime;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::SoundEffects::__cordl_internal_get__lastClipElapsedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastClipElapsedTime;
}
constexpr void GlobalNamespace::SoundEffects::__cordl_internal_set__lastClipElapsedTime(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastClipElapsedTime = value;
}
inline bool GlobalNamespace::SoundEffects::get_isPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"get_isPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SoundEffects::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundEffects::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundEffects::PlayNext(float_t  delayMin, float_t  delayMax, float_t  volMin, float_t  volMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"PlayNext", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delayMin, delayMax, volMin, volMax);
}
inline void GlobalNamespace::SoundEffects::PlayNext(float_t  delay, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"PlayNext", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay, volume);
}
inline void GlobalNamespace::SoundEffects::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundEffects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundEffects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SoundEffects* GlobalNamespace::SoundEffects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SoundEffects*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoundEffects::SoundEffects()   {
}
