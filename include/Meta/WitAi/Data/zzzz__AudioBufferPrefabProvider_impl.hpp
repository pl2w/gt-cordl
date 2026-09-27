#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/AudioBufferPrefabProvider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Data/zzzz__AudioBufferPrefabProvider_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioBuffer_def.hpp"
#include "Meta/WitAi/Data/zzzz__IAudioBufferProvider_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBufferPrefabProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBufferPrefabProvider::*)()>(&::Meta::WitAi::Data::AudioBufferPrefabProvider::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e9a6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBufferPrefabProvider*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBufferPrefabProvider.InstantiateAudioBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::AudioBuffer> (::Meta::WitAi::Data::AudioBufferPrefabProvider::*)()>(&::Meta::WitAi::Data::AudioBufferPrefabProvider::InstantiateAudioBuffer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e9a728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBufferPrefabProvider*>(),
                        {"InstantiateAudioBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBufferPrefabProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBufferPrefabProvider::*)()>(&::Meta::WitAi::Data::AudioBufferPrefabProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9a848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBufferPrefabProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer>& Meta::WitAi::Data::AudioBufferPrefabProvider::__cordl_internal_get__audioBufferPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioBufferPrefab;
}
constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer> const& Meta::WitAi::Data::AudioBufferPrefabProvider::__cordl_internal_get__audioBufferPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioBufferPrefab;
}
constexpr void Meta::WitAi::Data::AudioBufferPrefabProvider::__cordl_internal_set__audioBufferPrefab(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioBufferPrefab = value;
}
inline void Meta::WitAi::Data::AudioBufferPrefabProvider::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBufferPrefabProvider*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Meta::WitAi::Data::AudioBuffer> Meta::WitAi::Data::AudioBufferPrefabProvider::InstantiateAudioBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBufferPrefabProvider*>(),
                        {"InstantiateAudioBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::AudioBuffer>>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioBufferPrefabProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBufferPrefabProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::AudioBufferPrefabProvider* Meta::WitAi::Data::AudioBufferPrefabProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::AudioBufferPrefabProvider*>());
}
/// @brief Convert operator to "::Meta::WitAi::Data::IAudioBufferProvider"
constexpr  Meta::WitAi::Data::AudioBufferPrefabProvider::operator ::Meta::WitAi::Data::IAudioBufferProvider*() noexcept {
return static_cast<::Meta::WitAi::Data::IAudioBufferProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Data::IAudioBufferProvider"
constexpr ::Meta::WitAi::Data::IAudioBufferProvider* Meta::WitAi::Data::AudioBufferPrefabProvider::i___Meta__WitAi__Data__IAudioBufferProvider() noexcept {
return static_cast<::Meta::WitAi::Data::IAudioBufferProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::AudioBufferPrefabProvider::AudioBufferPrefabProvider()   {
}
