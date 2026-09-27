#pragma once
// IWYU pragma private; include "GlobalNamespace/EnclosedSpaceVolume.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__EnclosedSpaceVolume_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnclosedSpaceVolume.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnclosedSpaceVolume::*)()>(&::GlobalNamespace::EnclosedSpaceVolume::Awake)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58035cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnclosedSpaceVolume*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnclosedSpaceVolume.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnclosedSpaceVolume::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::EnclosedSpaceVolume::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5803604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnclosedSpaceVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnclosedSpaceVolume.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnclosedSpaceVolume::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::EnclosedSpaceVolume::OnTriggerExit)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58036d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnclosedSpaceVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnclosedSpaceVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnclosedSpaceVolume::*)()>(&::GlobalNamespace::EnclosedSpaceVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58037ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnclosedSpaceVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_get_audioSourceInside()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceInside;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_get_audioSourceInside() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceInside;
}
constexpr void GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_set_audioSourceInside(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSourceInside = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_get_audioSourceOutside()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceOutside;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_get_audioSourceOutside() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceOutside;
}
constexpr void GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_set_audioSourceOutside(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSourceOutside = value;
}
constexpr float_t& GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_get_loudVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudVolume;
}
constexpr float_t const& GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_get_loudVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudVolume;
}
constexpr void GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_set_loudVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudVolume = value;
}
constexpr float_t& GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_get_quietVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quietVolume;
}
constexpr float_t const& GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_get_quietVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quietVolume;
}
constexpr void GlobalNamespace::EnclosedSpaceVolume::__cordl_internal_set_quietVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quietVolume = value;
}
inline void GlobalNamespace::EnclosedSpaceVolume::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnclosedSpaceVolume*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnclosedSpaceVolume::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnclosedSpaceVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::EnclosedSpaceVolume::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnclosedSpaceVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::EnclosedSpaceVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnclosedSpaceVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnclosedSpaceVolume* GlobalNamespace::EnclosedSpaceVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnclosedSpaceVolume*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnclosedSpaceVolume::EnclosedSpaceVolume()   {
}
