#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyXRayVisionEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyXRayVisionEffect_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREnemyXRayVisionEffect.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyXRayVisionEffect::*)()>(&::GlobalNamespace::GREnemyXRayVisionEffect::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5899eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyXRayVisionEffect*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyXRayVisionEffect.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyXRayVisionEffect::*)()>(&::GlobalNamespace::GREnemyXRayVisionEffect::Start)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5899ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyXRayVisionEffect*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyXRayVisionEffect.ShouldShowEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyXRayVisionEffect::*)()>(&::GlobalNamespace::GREnemyXRayVisionEffect::ShouldShowEffect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5899f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyXRayVisionEffect*>(),
                        {"ShouldShowEffect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyXRayVisionEffect.UpdateEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyXRayVisionEffect::*)()>(&::GlobalNamespace::GREnemyXRayVisionEffect::UpdateEffect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5899fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyXRayVisionEffect*>(),
                        {"UpdateEffect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyXRayVisionEffect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyXRayVisionEffect::*)()>(&::GlobalNamespace::GREnemyXRayVisionEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5899fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyXRayVisionEffect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyXRayVisionEffect::__cordl_internal_get_enemyXRayEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyXRayEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyXRayVisionEffect::__cordl_internal_get_enemyXRayEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyXRayEffect;
}
constexpr void GlobalNamespace::GREnemyXRayVisionEffect::__cordl_internal_set_enemyXRayEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemyXRayEffect = value;
}
inline void GlobalNamespace::GREnemyXRayVisionEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyXRayVisionEffect*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyXRayVisionEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyXRayVisionEffect*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GREnemyXRayVisionEffect::ShouldShowEffect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyXRayVisionEffect*>(),
                        {"ShouldShowEffect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyXRayVisionEffect::UpdateEffect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyXRayVisionEffect*>(),
                        {"UpdateEffect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyXRayVisionEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyXRayVisionEffect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyXRayVisionEffect* GlobalNamespace::GREnemyXRayVisionEffect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyXRayVisionEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyXRayVisionEffect::GREnemyXRayVisionEffect()   {
}
