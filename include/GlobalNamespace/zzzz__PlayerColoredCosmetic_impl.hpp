#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerColoredCosmetic.hpp"
#include "GlobalNamespace/zzzz__PlayerColoredCosmetic_ColoringRule_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerColoredCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__PlayerColoredCosmetic_ColoringRule_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerColoredCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerColoredCosmetic::*)()>(&::GlobalNamespace::PlayerColoredCosmetic::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x578e7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerColoredCosmetic.InitIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerColoredCosmetic::*)()>(&::GlobalNamespace::PlayerColoredCosmetic::InitIfNeeded)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x578ed4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerColoredCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerColoredCosmetic::*)()>(&::GlobalNamespace::PlayerColoredCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x578ef94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerColoredCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerColoredCosmetic::*)()>(&::GlobalNamespace::PlayerColoredCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x578f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerColoredCosmetic.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerColoredCosmetic::*)(::UnityEngine::Color)>(&::GlobalNamespace::PlayerColoredCosmetic::UpdateColor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x578f08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {"UpdateColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerColoredCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerColoredCosmetic::*)()>(&::GlobalNamespace::PlayerColoredCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x578f52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_didInit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didInit;
}
constexpr bool const& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_didInit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didInit;
}
constexpr void GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_set_didInit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didInit = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_lerpToColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpToColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_lerpToColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpToColor;
}
constexpr void GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_set_lerpToColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpToColor = value;
}
constexpr float_t& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_lerpStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpStrength;
}
constexpr float_t const& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_lerpStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpStrength;
}
constexpr void GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_set_lerpStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpStrength = value;
}
constexpr bool& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_dontCreateMaterialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontCreateMaterialInstance;
}
constexpr bool const& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_dontCreateMaterialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontCreateMaterialInstance;
}
constexpr void GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_set_dontCreateMaterialInstance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontCreateMaterialInstance = value;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule>& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_coloringRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coloringRules;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule> const& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_coloringRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coloringRules;
}
constexpr void GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_set_coloringRules(::ArrayW<::GlobalNamespace::PlayerColoredCosmetic_ColoringRule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coloringRules = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_particleSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystems;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_particleSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystems;
}
constexpr void GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_set_particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystems = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_particleMains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleMains;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule> const& GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_get_particleMains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleMains;
}
constexpr void GlobalNamespace::PlayerColoredCosmetic::__cordl_internal_set_particleMains(::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleMains = value;
}
inline void GlobalNamespace::PlayerColoredCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerColoredCosmetic::InitIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerColoredCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerColoredCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerColoredCosmetic::UpdateColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {"UpdateColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::PlayerColoredCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColoredCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerColoredCosmetic* GlobalNamespace::PlayerColoredCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerColoredCosmetic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerColoredCosmetic::PlayerColoredCosmetic()   {
}
