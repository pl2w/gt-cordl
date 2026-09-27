#pragma once
// IWYU pragma private; include "GlobalNamespace/MicrophoneCosmetic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__MicrophoneCosmetic_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MicrophoneCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicrophoneCosmetic::*)()>(&::GlobalNamespace::MicrophoneCosmetic::Awake)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5616184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicrophoneCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicrophoneCosmetic::*)()>(&::GlobalNamespace::MicrophoneCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x56162d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicrophoneCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicrophoneCosmetic::*)()>(&::GlobalNamespace::MicrophoneCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56163d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicrophoneCosmetic.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicrophoneCosmetic::*)()>(&::GlobalNamespace::MicrophoneCosmetic::Update)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x56163e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicrophoneCosmetic.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicrophoneCosmetic::*)(::ArrayW<float_t>, int32_t)>(&::GlobalNamespace::MicrophoneCosmetic::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5616590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicrophoneCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicrophoneCosmetic::*)()>(&::GlobalNamespace::MicrophoneCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5616594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MicrophoneCosmetic::__cordl_internal_get_mouthTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouthTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MicrophoneCosmetic::__cordl_internal_get_mouthTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouthTransform;
}
constexpr void GlobalNamespace::MicrophoneCosmetic::__cordl_internal_set_mouthTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mouthTransform = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::MicrophoneCosmetic::__cordl_internal_get_mouthProximityRampRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouthProximityRampRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::MicrophoneCosmetic::__cordl_internal_get_mouthProximityRampRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouthProximityRampRange;
}
constexpr void GlobalNamespace::MicrophoneCosmetic::__cordl_internal_set_mouthProximityRampRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mouthProximityRampRange = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MicrophoneCosmetic::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MicrophoneCosmetic::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::MicrophoneCosmetic::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::MicrophoneCosmetic::__cordl_internal_get_zero()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zero;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::MicrophoneCosmetic::__cordl_internal_get_zero() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zero;
}
constexpr void GlobalNamespace::MicrophoneCosmetic::__cordl_internal_set_zero(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zero = value;
}
inline void GlobalNamespace::MicrophoneCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MicrophoneCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MicrophoneCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MicrophoneCosmetic::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MicrophoneCosmetic::OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {"OnAudioFilterRead", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::MicrophoneCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicrophoneCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MicrophoneCosmetic* GlobalNamespace::MicrophoneCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MicrophoneCosmetic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MicrophoneCosmetic::MicrophoneCosmetic()   {
}
