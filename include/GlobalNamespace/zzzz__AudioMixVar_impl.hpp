#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioMixVar.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioMixVar_def.hpp"
#include "GlobalNamespace/zzzz__AudioMixVarPool_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioMixVar.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioMixVar::*)()>(&::GlobalNamespace::AudioMixVar::get_value)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x57a03e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVar*>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioMixVar.set_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioMixVar::*)(float_t)>(&::GlobalNamespace::AudioMixVar::set_value)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57a04b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVar*>(),
                        {"set_value", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioMixVar.ReturnToPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioMixVar::*)()>(&::GlobalNamespace::AudioMixVar::ReturnToPool)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57a0548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVar*>(),
                        {"ReturnToPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioMixVar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioMixVar::*)()>(&::GlobalNamespace::AudioMixVar::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a05cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& GlobalNamespace::AudioMixVar::__cordl_internal_get_group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___group;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& GlobalNamespace::AudioMixVar::__cordl_internal_get_group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___group;
}
constexpr void GlobalNamespace::AudioMixVar::__cordl_internal_set_group(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___group = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::AudioMixVar::__cordl_internal_get_mixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::AudioMixVar::__cordl_internal_get_mixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixer;
}
constexpr void GlobalNamespace::AudioMixVar::__cordl_internal_set_mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixer = value;
}
constexpr ::StringW& GlobalNamespace::AudioMixVar::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GlobalNamespace::AudioMixVar::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GlobalNamespace::AudioMixVar::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr bool& GlobalNamespace::AudioMixVar::__cordl_internal_get_taken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taken;
}
constexpr bool const& GlobalNamespace::AudioMixVar::__cordl_internal_get_taken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taken;
}
constexpr void GlobalNamespace::AudioMixVar::__cordl_internal_set_taken(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taken = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioMixVarPool>& GlobalNamespace::AudioMixVar::__cordl_internal_get__pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr ::UnityW<::GlobalNamespace::AudioMixVarPool> const& GlobalNamespace::AudioMixVar::__cordl_internal_get__pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr void GlobalNamespace::AudioMixVar::__cordl_internal_set__pool(::UnityW<::GlobalNamespace::AudioMixVarPool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pool = value;
}
inline float_t GlobalNamespace::AudioMixVar::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVar*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioMixVar::set_value(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVar*>(),
                        {"set_value", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioMixVar::ReturnToPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVar*>(),
                        {"ReturnToPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioMixVar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioMixVar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioMixVar* GlobalNamespace::AudioMixVar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioMixVar*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioMixVar::AudioMixVar()   {
}
