#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFireball.hpp"
#include "GlobalNamespace/zzzz__GorillaThrowable_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaFireball_def.hpp"
#include "Photon/Pun/zzzz__IPunInstantiateMagicCallback_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaFireball.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireball::*)()>(&::GlobalNamespace::GorillaFireball::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59a4058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaFireball*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFireball.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireball::*)()>(&::GlobalNamespace::GorillaFireball::Update)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x59a4404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFireball.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireball::*)()>(&::GlobalNamespace::GorillaFireball::LateUpdate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59a4538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaFireball*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFireball.ThrowThisThingo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireball::*)()>(&::GlobalNamespace::GorillaFireball::ThrowThisThingo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59a4a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaFireball*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFireball.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireball::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::GorillaFireball::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59a4ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFireball.LocalExplode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireball::*)()>(&::GlobalNamespace::GorillaFireball::LocalExplode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59a4f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {"LocalExplode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFireball.OnPhotonInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireball::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaFireball::OnPhotonInstantiate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x59a4fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {"OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFireball.Explode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireball::*)()>(&::GlobalNamespace::GorillaFireball::Explode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a50f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {"Explode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFireball._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireball::*)()>(&::GlobalNamespace::GorillaFireball::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59a50fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GorillaFireball::__cordl_internal_get_maxExplosionScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxExplosionScale;
}
constexpr float_t const& GlobalNamespace::GorillaFireball::__cordl_internal_get_maxExplosionScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxExplosionScale;
}
constexpr void GlobalNamespace::GorillaFireball::__cordl_internal_set_maxExplosionScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxExplosionScale = value;
}
constexpr float_t& GlobalNamespace::GorillaFireball::__cordl_internal_get_totalExplosionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalExplosionTime;
}
constexpr float_t const& GlobalNamespace::GorillaFireball::__cordl_internal_get_totalExplosionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalExplosionTime;
}
constexpr void GlobalNamespace::GorillaFireball::__cordl_internal_set_totalExplosionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalExplosionTime = value;
}
constexpr float_t& GlobalNamespace::GorillaFireball::__cordl_internal_get_gravityStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityStrength;
}
constexpr float_t const& GlobalNamespace::GorillaFireball::__cordl_internal_get_gravityStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityStrength;
}
constexpr void GlobalNamespace::GorillaFireball::__cordl_internal_set_gravityStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityStrength = value;
}
constexpr bool& GlobalNamespace::GorillaFireball::__cordl_internal_get_canExplode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canExplode;
}
constexpr bool const& GlobalNamespace::GorillaFireball::__cordl_internal_get_canExplode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canExplode;
}
constexpr void GlobalNamespace::GorillaFireball::__cordl_internal_set_canExplode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canExplode = value;
}
constexpr float_t& GlobalNamespace::GorillaFireball::__cordl_internal_get_explosionStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explosionStartTime;
}
constexpr float_t const& GlobalNamespace::GorillaFireball::__cordl_internal_get_explosionStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explosionStartTime;
}
constexpr void GlobalNamespace::GorillaFireball::__cordl_internal_set_explosionStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___explosionStartTime = value;
}
inline void GlobalNamespace::GorillaFireball::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaFireball*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFireball::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFireball::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaFireball*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFireball::ThrowThisThingo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaFireball*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFireball::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::GorillaFireball::LocalExplode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {"LocalExplode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFireball::OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {"OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GorillaFireball::Explode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {"Explode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFireball::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireball*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaFireball* GlobalNamespace::GorillaFireball::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaFireball*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr  GlobalNamespace::GorillaFireball::operator ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* GlobalNamespace::GorillaFireball::i___Photon__Pun__IPunInstantiateMagicCallback() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaFireball::GorillaFireball()   {
}
