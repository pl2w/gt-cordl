#pragma once
// IWYU pragma private; include "GorillaTag/Audio/PlayerSpeakerSwapper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Audio/zzzz__PlayerSpeakerSwapper_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::PlayerSpeakerSwapper.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::PlayerSpeakerSwapper::*)()>(&::GorillaTag::Audio::PlayerSpeakerSwapper::OnEnable)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5d54380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlayerSpeakerSwapper*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::PlayerSpeakerSwapper.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::PlayerSpeakerSwapper::*)()>(&::GorillaTag::Audio::PlayerSpeakerSwapper::OnDisable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5d54560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlayerSpeakerSwapper*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::PlayerSpeakerSwapper.OnPlayerCountChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::PlayerSpeakerSwapper::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTag::Audio::PlayerSpeakerSwapper::OnPlayerCountChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d544cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlayerSpeakerSwapper*>(),
                        {"OnPlayerCountChanged", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::PlayerSpeakerSwapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::PlayerSpeakerSwapper::*)()>(&::GorillaTag::Audio::PlayerSpeakerSwapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d546a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlayerSpeakerSwapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Behaviour>& GorillaTag::Audio::PlayerSpeakerSwapper::__cordl_internal_get__lowPassFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lowPassFilter;
}
constexpr ::UnityW<::UnityEngine::Behaviour> const& GorillaTag::Audio::PlayerSpeakerSwapper::__cordl_internal_get__lowPassFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lowPassFilter;
}
constexpr void GorillaTag::Audio::PlayerSpeakerSwapper::__cordl_internal_set__lowPassFilter(::UnityW<::UnityEngine::Behaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lowPassFilter = value;
}
inline void GorillaTag::Audio::PlayerSpeakerSwapper::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlayerSpeakerSwapper*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::PlayerSpeakerSwapper::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlayerSpeakerSwapper*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::PlayerSpeakerSwapper::OnPlayerCountChanged(::GlobalNamespace::NetPlayer*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlayerSpeakerSwapper*>(),
                        {"OnPlayerCountChanged", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GorillaTag::Audio::PlayerSpeakerSwapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlayerSpeakerSwapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::PlayerSpeakerSwapper* GorillaTag::Audio::PlayerSpeakerSwapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::PlayerSpeakerSwapper*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::PlayerSpeakerSwapper::PlayerSpeakerSwapper()   {
}
