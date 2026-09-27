#pragma once
// IWYU pragma private; include "GlobalNamespace/SpitballEvents.hpp"
#include "GlobalNamespace/zzzz__SubEmitterListener_impl.hpp"
#include "GlobalNamespace/zzzz__SpitballEvents_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpitballEvents.OnSubEmit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpitballEvents::*)()>(&::GlobalNamespace::SpitballEvents::OnSubEmit)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x578fa0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SpitballEvents*>(),
                    {::i2c::class_of<::GlobalNamespace::SpitballEvents*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpitballEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpitballEvents::*)()>(&::GlobalNamespace::SpitballEvents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578fac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpitballEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SpitballEvents::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SpitballEvents::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void GlobalNamespace::SpitballEvents::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SpitballEvents::__cordl_internal_get__sfxHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sfxHit;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SpitballEvents::__cordl_internal_get__sfxHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sfxHit;
}
constexpr void GlobalNamespace::SpitballEvents::__cordl_internal_set__sfxHit(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sfxHit = value;
}
inline void GlobalNamespace::SpitballEvents::OnSubEmit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SpitballEvents*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpitballEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpitballEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpitballEvents* GlobalNamespace::SpitballEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpitballEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpitballEvents::SpitballEvents()   {
}
