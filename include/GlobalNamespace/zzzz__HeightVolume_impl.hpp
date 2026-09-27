#pragma once
// IWYU pragma private; include "GlobalNamespace/HeightVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HeightVolume_def.hpp"
#include "GlobalNamespace/zzzz__MusicSource_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeightVolume.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeightVolume::*)()>(&::GlobalNamespace::HeightVolume::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5951be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeightVolume*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeightVolume.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeightVolume::*)()>(&::GlobalNamespace::HeightVolume::Update)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5951cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeightVolume*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeightVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeightVolume::*)()>(&::GlobalNamespace::HeightVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5951eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeightVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HeightVolume::__cordl_internal_get_heightTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightTop;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HeightVolume::__cordl_internal_get_heightTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightTop;
}
constexpr void GlobalNamespace::HeightVolume::__cordl_internal_set_heightTop(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightTop = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HeightVolume::__cordl_internal_get_heightBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightBottom;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HeightVolume::__cordl_internal_get_heightBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightBottom;
}
constexpr void GlobalNamespace::HeightVolume::__cordl_internal_set_heightBottom(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightBottom = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::HeightVolume::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::HeightVolume::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::HeightVolume::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr float_t& GlobalNamespace::HeightVolume::__cordl_internal_get_baseVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseVolume;
}
constexpr float_t const& GlobalNamespace::HeightVolume::__cordl_internal_get_baseVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseVolume;
}
constexpr void GlobalNamespace::HeightVolume::__cordl_internal_set_baseVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseVolume = value;
}
constexpr float_t& GlobalNamespace::HeightVolume::__cordl_internal_get_minVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolume;
}
constexpr float_t const& GlobalNamespace::HeightVolume::__cordl_internal_get_minVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolume;
}
constexpr void GlobalNamespace::HeightVolume::__cordl_internal_set_minVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minVolume = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HeightVolume::__cordl_internal_get_targetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HeightVolume::__cordl_internal_get_targetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr void GlobalNamespace::HeightVolume::__cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetTransform = value;
}
constexpr bool& GlobalNamespace::HeightVolume::__cordl_internal_get_invertHeightVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertHeightVol;
}
constexpr bool const& GlobalNamespace::HeightVolume::__cordl_internal_get_invertHeightVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertHeightVol;
}
constexpr void GlobalNamespace::HeightVolume::__cordl_internal_set_invertHeightVol(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertHeightVol = value;
}
constexpr ::UnityW<::GlobalNamespace::MusicSource>& GlobalNamespace::HeightVolume::__cordl_internal_get_musicSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicSource;
}
constexpr ::UnityW<::GlobalNamespace::MusicSource> const& GlobalNamespace::HeightVolume::__cordl_internal_get_musicSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicSource;
}
constexpr void GlobalNamespace::HeightVolume::__cordl_internal_set_musicSource(::UnityW<::GlobalNamespace::MusicSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicSource = value;
}
inline void GlobalNamespace::HeightVolume::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeightVolume*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeightVolume::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeightVolume*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeightVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeightVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HeightVolume* GlobalNamespace::HeightVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HeightVolume*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeightVolume::HeightVolume()   {
}
