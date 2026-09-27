#pragma once
// IWYU pragma private; include "GlobalNamespace/GRRecycler.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__GRRecycler_def.hpp"
#include "GlobalNamespace/zzzz__GRRecyclerScanner_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRRecycler.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRecycler::*)()>(&::GlobalNamespace::GRRecycler::Tick)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x58a7960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                    {::i2c::class_of<::GlobalNamespace::GRRecycler*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRecycler.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRecycler::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRRecycler::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a7ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRecycler.GetRecycleValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRRecycler::*)(::GlobalNamespace::GRTool_GRToolType)>(&::GlobalNamespace::GRRecycler::GetRecycleValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58a7ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {"GetRecycleValue", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRecycler.ScanItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRecycler::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GRRecycler::ScanItem)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58a7af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {"ScanItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRecycler.RecycleItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRecycler::*)()>(&::GlobalNamespace::GRRecycler::RecycleItem)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58a7e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {"RecycleItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRecycler.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRecycler::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GRRecycler::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x58a7f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRRecycler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRRecycler::*)()>(&::GlobalNamespace::GRRecycler::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58a8668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRRecycler::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRRecycler::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRRecycler::__cordl_internal_get_closeEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeEffects;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRRecycler::__cordl_internal_get_closeEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeEffects;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_closeEffects(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeEffects = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRRecycler::__cordl_internal_get_openEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openEffects;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRRecycler::__cordl_internal_get_openEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openEffects;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_openEffects(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openEffects = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRRecycler::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRRecycler::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
constexpr ::UnityW<::GlobalNamespace::GRRecyclerScanner>& GlobalNamespace::GRRecycler::__cordl_internal_get_scanner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanner;
}
constexpr ::UnityW<::GlobalNamespace::GRRecyclerScanner> const& GlobalNamespace::GRRecycler::__cordl_internal_get_scanner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanner;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_scanner(::UnityW<::GlobalNamespace::GRRecyclerScanner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanner = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GRRecycler::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GRRecycler::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr float_t& GlobalNamespace::GRRecycler::__cordl_internal_get_closeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeDuration;
}
constexpr float_t const& GlobalNamespace::GRRecycler::__cordl_internal_get_closeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeDuration;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_closeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeDuration = value;
}
constexpr float_t& GlobalNamespace::GRRecycler::__cordl_internal_get_timeRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeRemaining;
}
constexpr float_t const& GlobalNamespace::GRRecycler::__cordl_internal_get_timeRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeRemaining;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_timeRemaining(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeRemaining = value;
}
constexpr bool& GlobalNamespace::GRRecycler::__cordl_internal_get_closed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closed;
}
constexpr bool const& GlobalNamespace::GRRecycler::__cordl_internal_get_closed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closed;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_closed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closed = value;
}
constexpr bool& GlobalNamespace::GRRecycler::__cordl_internal_get_playedAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playedAudio;
}
constexpr bool const& GlobalNamespace::GRRecycler::__cordl_internal_get_playedAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playedAudio;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_playedAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playedAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRRecycler::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRRecycler::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRRecycler::__cordl_internal_get_recyclerRunningAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerRunningAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRRecycler::__cordl_internal_get_recyclerRunningAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerRunningAudio;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_recyclerRunningAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recyclerRunningAudio = value;
}
constexpr float_t& GlobalNamespace::GRRecycler::__cordl_internal_get_recyclerRunningAudioVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerRunningAudioVolume;
}
constexpr float_t const& GlobalNamespace::GRRecycler::__cordl_internal_get_recyclerRunningAudioVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recyclerRunningAudioVolume;
}
constexpr void GlobalNamespace::GRRecycler::__cordl_internal_set_recyclerRunningAudioVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recyclerRunningAudioVolume = value;
}
inline void GlobalNamespace::GRRecycler::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRRecycler*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRRecycler::Init(::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline int32_t GlobalNamespace::GRRecycler::GetRecycleValue(::GlobalNamespace::GRTool_GRToolType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {"GetRecycleValue", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline void GlobalNamespace::GRRecycler::ScanItem(::GlobalNamespace::GameEntityId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {"ScanItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void GlobalNamespace::GRRecycler::RecycleItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {"RecycleItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRRecycler::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GRRecycler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRRecycler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRRecycler* GlobalNamespace::GRRecycler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRRecycler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRRecycler::GRRecycler()   {
}
