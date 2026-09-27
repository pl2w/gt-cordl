#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSourceLoudness.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSourceLoudness_def.hpp"
#include "GlobalNamespace/zzzz__ISpeakerLoudness_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioSourceLoudness.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceLoudness::*)()>(&::GlobalNamespace::AudioSourceLoudness::get_IsSpeaking)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57a05d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceLoudness.get_Loudness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceLoudness::*)()>(&::GlobalNamespace::AudioSourceLoudness::get_Loudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a065c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {"get_Loudness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceLoudness.get_IsMicEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceLoudness::*)()>(&::GlobalNamespace::AudioSourceLoudness::get_IsMicEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a0664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {"get_IsMicEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceLoudness.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceLoudness::*)()>(&::GlobalNamespace::AudioSourceLoudness::Awake)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x57a066c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceLoudness.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceLoudness::*)()>(&::GlobalNamespace::AudioSourceLoudness::Update)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x57a0744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceLoudness._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceLoudness::*)()>(&::GlobalNamespace::AudioSourceLoudness::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57a0838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AudioSourceLoudness::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AudioSourceLoudness::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::AudioSourceLoudness::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr int32_t& GlobalNamespace::AudioSourceLoudness::__cordl_internal_get_sampleWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleWindow;
}
constexpr int32_t const& GlobalNamespace::AudioSourceLoudness::__cordl_internal_get_sampleWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleWindow;
}
constexpr void GlobalNamespace::AudioSourceLoudness::__cordl_internal_set_sampleWindow(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleWindow = value;
}
constexpr float_t& GlobalNamespace::AudioSourceLoudness::__cordl_internal_get_loudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudness;
}
constexpr float_t const& GlobalNamespace::AudioSourceLoudness::__cordl_internal_get_loudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudness;
}
constexpr void GlobalNamespace::AudioSourceLoudness::__cordl_internal_set_loudness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudness = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AudioSourceLoudness::__cordl_internal_get_sampleBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleBuffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AudioSourceLoudness::__cordl_internal_get_sampleBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleBuffer;
}
constexpr void GlobalNamespace::AudioSourceLoudness::__cordl_internal_set_sampleBuffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleBuffer = value;
}
inline bool GlobalNamespace::AudioSourceLoudness::get_IsSpeaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceLoudness::get_Loudness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {"get_Loudness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceLoudness::get_IsMicEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {"get_IsMicEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceLoudness::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceLoudness::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceLoudness::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceLoudness*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioSourceLoudness* GlobalNamespace::AudioSourceLoudness::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioSourceLoudness*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISpeakerLoudness"
constexpr  GlobalNamespace::AudioSourceLoudness::operator ::GlobalNamespace::ISpeakerLoudness*() noexcept {
return static_cast<::GlobalNamespace::ISpeakerLoudness*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISpeakerLoudness"
constexpr ::GlobalNamespace::ISpeakerLoudness* GlobalNamespace::AudioSourceLoudness::i___GlobalNamespace__ISpeakerLoudness() noexcept {
return static_cast<::GlobalNamespace::ISpeakerLoudness*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSourceLoudness::AudioSourceLoudness()   {
}
