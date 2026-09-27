#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayerDamageEffects.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRPlayerDamageEffects_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRPlayerDamageEffects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayerDamageEffects::*)()>(&::GlobalNamespace::GRPlayerDamageEffects::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a6940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayerDamageEffects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_get_radialDamageEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radialDamageEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_get_radialDamageEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radialDamageEffect;
}
constexpr void GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_set_radialDamageEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radialDamageEffect = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_get_lowHealthVisualRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowHealthVisualRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_get_lowHealthVisualRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowHealthVisualRenderer;
}
constexpr void GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_set_lowHealthVisualRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowHealthVisualRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_get_frozenVisualRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenVisualRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_get_frozenVisualRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenVisualRenderer;
}
constexpr void GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_set_frozenVisualRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frozenVisualRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_get_stealthModeVisualRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stealthModeVisualRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_get_stealthModeVisualRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stealthModeVisualRenderer;
}
constexpr void GlobalNamespace::GRPlayerDamageEffects::__cordl_internal_set_stealthModeVisualRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stealthModeVisualRenderer = value;
}
inline void GlobalNamespace::GRPlayerDamageEffects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayerDamageEffects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRPlayerDamageEffects* GlobalNamespace::GRPlayerDamageEffects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRPlayerDamageEffects*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRPlayerDamageEffects::GRPlayerDamageEffects()   {
}
