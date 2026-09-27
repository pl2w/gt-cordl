#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSconce.hpp"
#include "GlobalNamespace/zzzz__GRSconce_State_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRSconce_def.hpp"
#include "GlobalNamespace/zzzz__GRSconce_State_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameLight_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRSconce.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSconce::*)()>(&::GlobalNamespace::GRSconce::Awake)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x58aa310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSconce.IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSconce::*)()>(&::GlobalNamespace::GRSconce::IsAuthority)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58aa4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"IsAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSconce.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSconce::*)(::GlobalNamespace::GRSconce_State)>(&::GlobalNamespace::GRSconce::SetState)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58aa4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRSconce_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSconce.StartLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSconce::*)()>(&::GlobalNamespace::GRSconce::StartLight)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58aa540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"StartLight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSconce.StopLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSconce::*)()>(&::GlobalNamespace::GRSconce::StopLight)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58aa46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"StopLight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSconce.OnEnergyChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSconce::*)(::GlobalNamespace::GRTool*, int32_t, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GRSconce::OnEnergyChange)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58aa5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"OnEnergyChange", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSconce.OnStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSconce::*)(int64_t, int64_t)>(&::GlobalNamespace::GRSconce::OnStateChange)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58aa620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"OnStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSconce._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSconce::*)()>(&::GlobalNamespace::GRSconce::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58aa668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRSconce::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRSconce::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRSconce::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameLight>& GlobalNamespace::GRSconce::__cordl_internal_get_gameLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameLight;
}
constexpr ::UnityW<::GlobalNamespace::GameLight> const& GlobalNamespace::GRSconce::__cordl_internal_get_gameLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameLight;
}
constexpr void GlobalNamespace::GRSconce::__cordl_internal_set_gameLight(::UnityW<::GlobalNamespace::GameLight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameLight = value;
}
constexpr ::UnityW<::GlobalNamespace::GRTool>& GlobalNamespace::GRSconce::__cordl_internal_get_tool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr ::UnityW<::GlobalNamespace::GRTool> const& GlobalNamespace::GRSconce::__cordl_internal_get_tool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tool;
}
constexpr void GlobalNamespace::GRSconce::__cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tool = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GRSconce::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GRSconce::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void GlobalNamespace::GRSconce::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GRSconce::__cordl_internal_get_offMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GRSconce::__cordl_internal_get_offMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offMaterial;
}
constexpr void GlobalNamespace::GRSconce::__cordl_internal_set_offMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GRSconce::__cordl_internal_get_onMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GRSconce::__cordl_internal_get_onMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaterial;
}
constexpr void GlobalNamespace::GRSconce::__cordl_internal_set_onMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onMaterial = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRSconce::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRSconce::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRSconce::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSconce::__cordl_internal_get_lightOnSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightOnSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSconce::__cordl_internal_get_lightOnSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightOnSound;
}
constexpr void GlobalNamespace::GRSconce::__cordl_internal_set_lightOnSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightOnSound = value;
}
constexpr float_t& GlobalNamespace::GRSconce::__cordl_internal_get_lightOnSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightOnSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRSconce::__cordl_internal_get_lightOnSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightOnSoundVolume;
}
constexpr void GlobalNamespace::GRSconce::__cordl_internal_set_lightOnSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightOnSoundVolume = value;
}
constexpr ::GlobalNamespace::GRSconce_State& GlobalNamespace::GRSconce::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRSconce_State const& GlobalNamespace::GRSconce::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRSconce::__cordl_internal_set_state(::GlobalNamespace::GRSconce_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void GlobalNamespace::GRSconce::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRSconce::IsAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"IsAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRSconce::SetState(::GlobalNamespace::GRSconce_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRSconce_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRSconce::StartLight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"StartLight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSconce::StopLight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"StopLight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSconce::OnEnergyChange(::GlobalNamespace::GRTool*  tool, int32_t  energy, ::GlobalNamespace::GameEntityId  chargingEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"OnEnergyChange", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, energy, chargingEntityId);
}
inline void GlobalNamespace::GRSconce::OnStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {"OnStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GRSconce::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSconce*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRSconce* GlobalNamespace::GRSconce::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRSconce*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSconce::GRSconce()   {
}
