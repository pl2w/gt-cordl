#pragma once
// IWYU pragma private; include "GorillaTag/Audio/DuplicateAudioSource.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Audio/zzzz__DuplicateAudioSource_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::DuplicateAudioSource.SetTargetAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::DuplicateAudioSource::*)(::UnityEngine::AudioSource*)>(&::GorillaTag::Audio::DuplicateAudioSource::SetTargetAudioSource)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d4fe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::DuplicateAudioSource*>(),
                        {"SetTargetAudioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::DuplicateAudioSource.StartDuplicating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::DuplicateAudioSource::*)()>(&::GorillaTag::Audio::DuplicateAudioSource::StartDuplicating)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d4fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::DuplicateAudioSource*>(),
                        {"StartDuplicating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::DuplicateAudioSource.StopDuplicating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::DuplicateAudioSource::*)()>(&::GorillaTag::Audio::DuplicateAudioSource::StopDuplicating)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d4fec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::DuplicateAudioSource*>(),
                        {"StopDuplicating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::DuplicateAudioSource.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::DuplicateAudioSource::*)()>(&::GorillaTag::Audio::DuplicateAudioSource::LateUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d4fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::DuplicateAudioSource*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::DuplicateAudioSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::DuplicateAudioSource::*)()>(&::GorillaTag::Audio::DuplicateAudioSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4ff74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::DuplicateAudioSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Audio::DuplicateAudioSource::__cordl_internal_get_TargetAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Audio::DuplicateAudioSource::__cordl_internal_get_TargetAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetAudioSource;
}
constexpr void GorillaTag::Audio::DuplicateAudioSource::__cordl_internal_set_TargetAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Audio::DuplicateAudioSource::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Audio::DuplicateAudioSource::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void GorillaTag::Audio::DuplicateAudioSource::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSource = value;
}
constexpr bool& GorillaTag::Audio::DuplicateAudioSource::__cordl_internal_get__isDuplicating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDuplicating;
}
constexpr bool const& GorillaTag::Audio::DuplicateAudioSource::__cordl_internal_get__isDuplicating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDuplicating;
}
constexpr void GorillaTag::Audio::DuplicateAudioSource::__cordl_internal_set__isDuplicating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDuplicating = value;
}
inline void GorillaTag::Audio::DuplicateAudioSource::SetTargetAudioSource(::UnityEngine::AudioSource*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::DuplicateAudioSource*>(),
                        {"SetTargetAudioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GorillaTag::Audio::DuplicateAudioSource::StartDuplicating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::DuplicateAudioSource*>(),
                        {"StartDuplicating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::DuplicateAudioSource::StopDuplicating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::DuplicateAudioSource*>(),
                        {"StopDuplicating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::DuplicateAudioSource::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::DuplicateAudioSource*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::DuplicateAudioSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::DuplicateAudioSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::DuplicateAudioSource* GorillaTag::Audio::DuplicateAudioSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::DuplicateAudioSource*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::DuplicateAudioSource::DuplicateAudioSource()   {
}
