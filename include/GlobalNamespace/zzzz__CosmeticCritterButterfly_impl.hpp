#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterButterfly.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmitParams_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterButterfly_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmitParams_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterButterfly.get_GetEmitParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_EmitParams (::GlobalNamespace::CosmeticCritterButterfly::*)()>(&::GlobalNamespace::CosmeticCritterButterfly::get_GetEmitParams)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57f18d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(),
                        {"get_GetEmitParams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterButterfly.SetStartPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterButterfly::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CosmeticCritterButterfly::SetStartPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57f18e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(),
                        {"SetStartPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterButterfly.SetRandomVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterButterfly::*)()>(&::GlobalNamespace::CosmeticCritterButterfly::SetRandomVariables)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57f18f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterButterfly.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterButterfly::*)()>(&::GlobalNamespace::CosmeticCritterButterfly::Tick)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57f198c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterButterfly._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterButterfly::*)()>(&::GlobalNamespace::CosmeticCritterButterfly::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57f1a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_get_particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_get_particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr void GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystem = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_get_startPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_get_startPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPosition;
}
constexpr void GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_set_startPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_get_direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_get_direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr void GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_set_direction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direction = value;
}
constexpr ::GlobalNamespace::ParticleSystem_EmitParams& GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_get_emitParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitParams;
}
constexpr ::GlobalNamespace::ParticleSystem_EmitParams const& GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_get_emitParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitParams;
}
constexpr void GlobalNamespace::CosmeticCritterButterfly::__cordl_internal_set_emitParams(::GlobalNamespace::ParticleSystem_EmitParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emitParams = value;
}
inline ::GlobalNamespace::ParticleSystem_EmitParams GlobalNamespace::CosmeticCritterButterfly::get_GetEmitParams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(),
                        {"get_GetEmitParams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_EmitParams>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterButterfly::SetStartPos(::UnityEngine::Vector3  initialPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(),
                        {"SetStartPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialPos);
}
inline void GlobalNamespace::CosmeticCritterButterfly::SetRandomVariables()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterButterfly::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterButterfly::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterButterfly*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterButterfly* GlobalNamespace::CosmeticCritterButterfly::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterButterfly*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterButterfly::CosmeticCritterButterfly()   {
}
