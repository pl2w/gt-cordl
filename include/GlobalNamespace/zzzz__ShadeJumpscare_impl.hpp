#pragma once
// IWYU pragma private; include "GlobalNamespace/ShadeJumpscare.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ShadeJumpscare_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShadeJumpscare.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeJumpscare::*)()>(&::GlobalNamespace::ShadeJumpscare::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57f3b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeJumpscare*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeJumpscare.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeJumpscare::*)()>(&::GlobalNamespace::ShadeJumpscare::OnEnable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57f3b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeJumpscare*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeJumpscare.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeJumpscare::*)()>(&::GlobalNamespace::ShadeJumpscare::Update)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x57f3c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeJumpscare*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadeJumpscare._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShadeJumpscare::*)()>(&::GlobalNamespace::ShadeJumpscare::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57f3d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeJumpscare*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_shadeTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_shadeTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeTransform;
}
constexpr void GlobalNamespace::ShadeJumpscare::__cordl_internal_set_shadeTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadeTransform = value;
}
constexpr float_t& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_animationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationTime;
}
constexpr float_t const& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_animationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationTime;
}
constexpr void GlobalNamespace::ShadeJumpscare::__cordl_internal_set_animationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationTime = value;
}
constexpr float_t& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_shadeRotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeRotationSpeed;
}
constexpr float_t const& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_shadeRotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeRotationSpeed;
}
constexpr void GlobalNamespace::ShadeJumpscare::__cordl_internal_set_shadeRotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadeRotationSpeed = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_shadeHeightFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeHeightFunction;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_shadeHeightFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeHeightFunction;
}
constexpr void GlobalNamespace::ShadeJumpscare::__cordl_internal_set_shadeHeightFunction(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadeHeightFunction = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_shadeScaleFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeScaleFunction;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_shadeScaleFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeScaleFunction;
}
constexpr void GlobalNamespace::ShadeJumpscare::__cordl_internal_set_shadeScaleFunction(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadeScaleFunction = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_shadeYScaleMultFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeYScaleMultFunction;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_shadeYScaleMultFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shadeYScaleMultFunction;
}
constexpr void GlobalNamespace::ShadeJumpscare::__cordl_internal_set_shadeYScaleMultFunction(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shadeYScaleMultFunction = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_soundVolumeFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundVolumeFunction;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_soundVolumeFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundVolumeFunction;
}
constexpr void GlobalNamespace::ShadeJumpscare::__cordl_internal_set_soundVolumeFunction(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundVolumeFunction = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_audioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_audioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClips;
}
constexpr void GlobalNamespace::ShadeJumpscare::__cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClips = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::ShadeJumpscare::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr float_t& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr float_t const& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void GlobalNamespace::ShadeJumpscare::__cordl_internal_set_startTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr float_t& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_startAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startAngle;
}
constexpr float_t const& GlobalNamespace::ShadeJumpscare::__cordl_internal_get_startAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startAngle;
}
constexpr void GlobalNamespace::ShadeJumpscare::__cordl_internal_set_startAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startAngle = value;
}
inline void GlobalNamespace::ShadeJumpscare::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeJumpscare*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShadeJumpscare::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeJumpscare*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShadeJumpscare::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeJumpscare*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ShadeJumpscare::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShadeJumpscare*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ShadeJumpscare* GlobalNamespace::ShadeJumpscare::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ShadeJumpscare*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShadeJumpscare::ShadeJumpscare()   {
}
