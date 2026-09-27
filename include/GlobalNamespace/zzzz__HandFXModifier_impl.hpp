#pragma once
// IWYU pragma private; include "GlobalNamespace/HandFXModifier.hpp"
#include "GlobalNamespace/zzzz__FXModifier_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HandFXModifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandFXModifier.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandFXModifier::*)()>(&::GlobalNamespace::HandFXModifier::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x567b014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandFXModifier*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandFXModifier.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandFXModifier::*)()>(&::GlobalNamespace::HandFXModifier::OnDisable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x567b044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandFXModifier*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandFXModifier.UpdateScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandFXModifier::*)(float_t, ::UnityEngine::Color)>(&::GlobalNamespace::HandFXModifier::UpdateScale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x567b070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HandFXModifier*>(),
                    {::i2c::class_of<::GlobalNamespace::HandFXModifier*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandFXModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandFXModifier::*)()>(&::GlobalNamespace::HandFXModifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567b0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandFXModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::HandFXModifier::__cordl_internal_get_originalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HandFXModifier::__cordl_internal_get_originalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalScale;
}
constexpr void GlobalNamespace::HandFXModifier::__cordl_internal_set_originalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalScale = value;
}
constexpr float_t& GlobalNamespace::HandFXModifier::__cordl_internal_get_minScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScale;
}
constexpr float_t const& GlobalNamespace::HandFXModifier::__cordl_internal_get_minScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScale;
}
constexpr void GlobalNamespace::HandFXModifier::__cordl_internal_set_minScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minScale = value;
}
constexpr float_t& GlobalNamespace::HandFXModifier::__cordl_internal_get_maxScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxScale;
}
constexpr float_t const& GlobalNamespace::HandFXModifier::__cordl_internal_get_maxScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxScale;
}
constexpr void GlobalNamespace::HandFXModifier::__cordl_internal_set_maxScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxScale = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::HandFXModifier::__cordl_internal_get_dustBurst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dustBurst;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::HandFXModifier::__cordl_internal_get_dustBurst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dustBurst;
}
constexpr void GlobalNamespace::HandFXModifier::__cordl_internal_set_dustBurst(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dustBurst = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::HandFXModifier::__cordl_internal_get_dustLinger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dustLinger;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::HandFXModifier::__cordl_internal_get_dustLinger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dustLinger;
}
constexpr void GlobalNamespace::HandFXModifier::__cordl_internal_set_dustLinger(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dustLinger = value;
}
inline void GlobalNamespace::HandFXModifier::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandFXModifier*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandFXModifier::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandFXModifier*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandFXModifier::UpdateScale(float_t  scale, ::UnityEngine::Color  color)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HandFXModifier*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scale, color);
}
inline void GlobalNamespace::HandFXModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandFXModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandFXModifier* GlobalNamespace::HandFXModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandFXModifier*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandFXModifier::HandFXModifier()   {
}
