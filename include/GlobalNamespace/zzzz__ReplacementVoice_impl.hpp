#pragma once
// IWYU pragma private; include "GlobalNamespace/ReplacementVoice.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ReplacementVoice_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReplacementVoice.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReplacementVoice::*)()>(&::GlobalNamespace::ReplacementVoice::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x597ebc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReplacementVoice*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReplacementVoice.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReplacementVoice::*)()>(&::GlobalNamespace::ReplacementVoice::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x597ebcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReplacementVoice*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReplacementVoice.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReplacementVoice::*)()>(&::GlobalNamespace::ReplacementVoice::SliceUpdate)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x597ebd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReplacementVoice*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReplacementVoice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReplacementVoice::*)()>(&::GlobalNamespace::ReplacementVoice::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x597efcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReplacementVoice*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ReplacementVoice::__cordl_internal_get_replacementVoiceSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacementVoiceSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ReplacementVoice::__cordl_internal_get_replacementVoiceSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacementVoiceSource;
}
constexpr void GlobalNamespace::ReplacementVoice::__cordl_internal_set_replacementVoiceSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___replacementVoiceSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::ReplacementVoice::__cordl_internal_get_replacementVoiceClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacementVoiceClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::ReplacementVoice::__cordl_internal_get_replacementVoiceClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacementVoiceClips;
}
constexpr void GlobalNamespace::ReplacementVoice::__cordl_internal_set_replacementVoiceClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___replacementVoiceClips = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::ReplacementVoice::__cordl_internal_get_replacementVoiceClipsLoud()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacementVoiceClipsLoud;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::ReplacementVoice::__cordl_internal_get_replacementVoiceClipsLoud() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacementVoiceClipsLoud;
}
constexpr void GlobalNamespace::ReplacementVoice::__cordl_internal_set_replacementVoiceClipsLoud(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___replacementVoiceClipsLoud = value;
}
constexpr float_t& GlobalNamespace::ReplacementVoice::__cordl_internal_get_loudReplacementVoiceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudReplacementVoiceThreshold;
}
constexpr float_t const& GlobalNamespace::ReplacementVoice::__cordl_internal_get_loudReplacementVoiceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudReplacementVoiceThreshold;
}
constexpr void GlobalNamespace::ReplacementVoice::__cordl_internal_set_loudReplacementVoiceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudReplacementVoiceThreshold = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::ReplacementVoice::__cordl_internal_get_myVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::ReplacementVoice::__cordl_internal_get_myVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myVRRig;
}
constexpr void GlobalNamespace::ReplacementVoice::__cordl_internal_set_myVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myVRRig = value;
}
constexpr float_t& GlobalNamespace::ReplacementVoice::__cordl_internal_get_normalVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalVolume;
}
constexpr float_t const& GlobalNamespace::ReplacementVoice::__cordl_internal_get_normalVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalVolume;
}
constexpr void GlobalNamespace::ReplacementVoice::__cordl_internal_set_normalVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalVolume = value;
}
constexpr float_t& GlobalNamespace::ReplacementVoice::__cordl_internal_get_loudVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudVolume;
}
constexpr float_t const& GlobalNamespace::ReplacementVoice::__cordl_internal_get_loudVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudVolume;
}
constexpr void GlobalNamespace::ReplacementVoice::__cordl_internal_set_loudVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudVolume = value;
}
inline void GlobalNamespace::ReplacementVoice::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReplacementVoice*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReplacementVoice::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReplacementVoice*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReplacementVoice::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReplacementVoice*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReplacementVoice::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReplacementVoice*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ReplacementVoice* GlobalNamespace::ReplacementVoice::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ReplacementVoice*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::ReplacementVoice::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::ReplacementVoice::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReplacementVoice::ReplacementVoice()   {
}
