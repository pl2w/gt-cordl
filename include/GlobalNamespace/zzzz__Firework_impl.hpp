#pragma once
// IWYU pragma private; include "GlobalNamespace/Firework.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__Firework_def.hpp"
#include "GlobalNamespace/zzzz__Firework_def.hpp"
#include "GlobalNamespace/zzzz__FireworksController_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Firework.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Firework::*)()>(&::GlobalNamespace::Firework::Launch)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b22490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework*>(),
                        {"Launch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Firework.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Firework::*)()>(&::GlobalNamespace::Firework::OnValidate)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5b22990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Firework.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Firework::*)()>(&::GlobalNamespace::Firework::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b22c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Firework.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Firework::*)()>(&::GlobalNamespace::Firework::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b22ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Firework._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Firework::*)()>(&::GlobalNamespace::Firework::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b22f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FireworksController>& GlobalNamespace::Firework::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::GlobalNamespace::FireworksController> const& GlobalNamespace::Firework::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set__controller(::UnityW<::GlobalNamespace::FireworksController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Firework::__cordl_internal_get_origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Firework::__cordl_internal_get_origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set_origin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___origin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Firework::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Firework::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Firework::__cordl_internal_get_colorOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorOrigin;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Firework::__cordl_internal_get_colorOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorOrigin;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set_colorOrigin(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorOrigin = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Firework::__cordl_internal_get_colorTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTarget;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Firework::__cordl_internal_get_colorTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTarget;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set_colorTarget(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorTarget = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::Firework::__cordl_internal_get_sourceOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceOrigin;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::Firework::__cordl_internal_get_sourceOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceOrigin;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set_sourceOrigin(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceOrigin = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::Firework::__cordl_internal_get_sourceTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTarget;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::Firework::__cordl_internal_get_sourceTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTarget;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set_sourceTarget(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceTarget = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::Firework::__cordl_internal_get_trail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trail;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::Firework::__cordl_internal_get_trail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trail;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set_trail(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trail = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GlobalNamespace::Firework::__cordl_internal_get_explosions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explosions;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GlobalNamespace::Firework::__cordl_internal_get_explosions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explosions;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set_explosions(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___explosions = value;
}
constexpr bool& GlobalNamespace::Firework::__cordl_internal_get_doTrail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doTrail;
}
constexpr bool const& GlobalNamespace::Firework::__cordl_internal_get_doTrail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doTrail;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set_doTrail(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doTrail = value;
}
constexpr bool& GlobalNamespace::Firework::__cordl_internal_get_doTrailAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doTrailAudio;
}
constexpr bool const& GlobalNamespace::Firework::__cordl_internal_get_doTrailAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doTrailAudio;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set_doTrailAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doTrailAudio = value;
}
constexpr bool& GlobalNamespace::Firework::__cordl_internal_get_doExplosion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doExplosion;
}
constexpr bool const& GlobalNamespace::Firework::__cordl_internal_get_doExplosion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doExplosion;
}
constexpr void GlobalNamespace::Firework::__cordl_internal_set_doExplosion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doExplosion = value;
}
inline void GlobalNamespace::Firework::Launch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework*>(),
                        {"Launch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Firework::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Firework::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Firework::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Firework::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Firework* GlobalNamespace::Firework::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Firework*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Firework::Firework()   {
}
//  Writing Method size for method: ::GlobalNamespace::Firework___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Firework___c::*)()>(&::GlobalNamespace::Firework___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b22ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Firework___c._OnValidate_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Firework___c::*)(::GlobalNamespace::Firework*)>(&::GlobalNamespace::Firework___c::_OnValidate_b__13_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b23004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework___c*>(),
                        {"<OnValidate>b__13_0", {}, {::i2c::type_of<::GlobalNamespace::Firework*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Firework___c::setStaticF___9(::GlobalNamespace::Firework___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Firework___c*, "<>9", ::GlobalNamespace::Firework___c*>(std::forward<::GlobalNamespace::Firework___c*>(value));
}
inline ::GlobalNamespace::Firework___c* GlobalNamespace::Firework___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Firework___c*, "<>9", ::GlobalNamespace::Firework___c*>();
}
inline void GlobalNamespace::Firework___c::setStaticF___9__13_0(::System::Func_2<::UnityW<::GlobalNamespace::Firework>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::Firework>,bool>*, "<>9__13_0", ::GlobalNamespace::Firework___c*>(std::forward<::System::Func_2<::UnityW<::GlobalNamespace::Firework>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::Firework>,bool>* GlobalNamespace::Firework___c::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::Firework>,bool>*, "<>9__13_0", ::GlobalNamespace::Firework___c*>();
}
inline void GlobalNamespace::Firework___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::Firework___c::_OnValidate_b__13_0(::GlobalNamespace::Firework*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Firework___c*>(),
                        {"<OnValidate>b__13_0", {}, {::i2c::type_of<::GlobalNamespace::Firework*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::Firework___c* GlobalNamespace::Firework___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Firework___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Firework___c::Firework___c()   {
}
