#pragma once
// IWYU pragma private; include "GorillaTag/Audio/LoudSpeakerVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Audio/zzzz__LoudSpeakerVolume_def.hpp"
#include "GorillaTag/Audio/zzzz__LoudSpeakerTrigger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerVolume.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerVolume::*)(::UnityEngine::Collider*)>(&::GorillaTag::Audio::LoudSpeakerVolume::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5d54020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerVolume.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerVolume::*)(::UnityEngine::Collider*)>(&::GorillaTag::Audio::LoudSpeakerVolume::OnTriggerExit)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5d541e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerVolume::*)()>(&::GorillaTag::Audio::LoudSpeakerVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d54378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerTrigger>& GorillaTag::Audio::LoudSpeakerVolume::__cordl_internal_get__trigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger;
}
constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerTrigger> const& GorillaTag::Audio::LoudSpeakerVolume::__cordl_internal_get__trigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger;
}
constexpr void GorillaTag::Audio::LoudSpeakerVolume::__cordl_internal_set__trigger(::UnityW<::GorillaTag::Audio::LoudSpeakerTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trigger = value;
}
inline void GorillaTag::Audio::LoudSpeakerVolume::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Audio::LoudSpeakerVolume::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Audio::LoudSpeakerVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::LoudSpeakerVolume* GorillaTag::Audio::LoudSpeakerVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::LoudSpeakerVolume*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::LoudSpeakerVolume::LoudSpeakerVolume()   {
}
