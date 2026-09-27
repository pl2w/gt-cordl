#pragma once
// IWYU pragma private; include "GlobalNamespace/SecondLookSkeletonEnabler.hpp"
#include "GlobalNamespace/zzzz__Tappable_impl.hpp"
#include "GlobalNamespace/zzzz__SecondLookSkeletonEnabler_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__SecondLookSkeleton_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonEnabler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonEnabler::*)()>(&::GlobalNamespace::SecondLookSkeletonEnabler::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d101d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonEnabler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonEnabler.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonEnabler::*)(float_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::SecondLookSkeletonEnabler::OnTapLocal)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d10270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonEnabler*>(),
                    {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonEnabler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeletonEnabler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeletonEnabler::*)()>(&::GlobalNamespace::SecondLookSkeletonEnabler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1037c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonEnabler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_get_isTapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTapped;
}
constexpr bool const& GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_get_isTapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTapped;
}
constexpr void GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_set_isTapped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTapped = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_get_playOnDisappear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playOnDisappear;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_get_playOnDisappear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playOnDisappear;
}
constexpr void GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_set_playOnDisappear(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playOnDisappear = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_get_particles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_get_particles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr void GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particles = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_get_spookyText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spookyText;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_get_spookyText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spookyText;
}
constexpr void GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_set_spookyText(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spookyText = value;
}
constexpr ::UnityW<::GlobalNamespace::SecondLookSkeleton>& GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_get_skele()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skele;
}
constexpr ::UnityW<::GlobalNamespace::SecondLookSkeleton> const& GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_get_skele() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skele;
}
constexpr void GlobalNamespace::SecondLookSkeletonEnabler::__cordl_internal_set_skele(::UnityW<::GlobalNamespace::SecondLookSkeleton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skele = value;
}
inline void GlobalNamespace::SecondLookSkeletonEnabler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonEnabler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeletonEnabler::OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SecondLookSkeletonEnabler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength, tapTime, info);
}
inline void GlobalNamespace::SecondLookSkeletonEnabler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeletonEnabler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SecondLookSkeletonEnabler* GlobalNamespace::SecondLookSkeletonEnabler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SecondLookSkeletonEnabler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SecondLookSkeletonEnabler::SecondLookSkeletonEnabler()   {
}
