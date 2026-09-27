#pragma once
// IWYU pragma private; include "Pooling/PoolableFX.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pooling/zzzz__PoolableFX_def.hpp"
#include "Pooling/zzzz__IPoolable_1_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::Pooling::PoolableFX.get_Pool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>* (::Pooling::PoolableFX::*)()>(&::Pooling::PoolableFX::get_Pool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"get_Pool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::PoolableFX.set_Pool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::PoolableFX::*)(::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*)>(&::Pooling::PoolableFX::set_Pool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"set_Pool", {}, {::i2c::type_of<::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::PoolableFX.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::PoolableFX::*)()>(&::Pooling::PoolableFX::Reset)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b70d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::PoolableFX.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::PoolableFX::*)()>(&::Pooling::PoolableFX::Stop)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b70e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::PoolableFX.OnCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::PoolableFX::*)()>(&::Pooling::PoolableFX::OnCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b70e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"OnCreate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::PoolableFX.OnPreGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::PoolableFX::*)()>(&::Pooling::PoolableFX::OnPreGet)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b70e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"OnPreGet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::PoolableFX.OnPostGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::PoolableFX::*)()>(&::Pooling::PoolableFX::OnPostGet)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b70e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"OnPostGet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::PoolableFX.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::PoolableFX::*)()>(&::Pooling::PoolableFX::OnRelease)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b70eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"OnRelease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::PoolableFX.OnParticleSystemStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::PoolableFX::*)()>(&::Pooling::PoolableFX::OnParticleSystemStopped)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b70ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"OnParticleSystemStopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pooling::PoolableFX._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pooling::PoolableFX::*)()>(&::Pooling::PoolableFX::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& Pooling::PoolableFX::__cordl_internal_get_particles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& Pooling::PoolableFX::__cordl_internal_get_particles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr void Pooling::PoolableFX::__cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particles = value;
}
constexpr ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*& Pooling::PoolableFX::__cordl_internal_get__Pool_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pool_k__BackingField;
}
constexpr ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>* const& Pooling::PoolableFX::__cordl_internal_get__Pool_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pool_k__BackingField;
}
constexpr void Pooling::PoolableFX::__cordl_internal_set__Pool_k__BackingField(::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Pool_k__BackingField = value;
}
inline ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>* Pooling::PoolableFX::get_Pool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"get_Pool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*>(this, ___internal_method);
}
inline void Pooling::PoolableFX::set_Pool(::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"set_Pool", {}, {::i2c::type_of<::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pooling::PoolableFX::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pooling::PoolableFX::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pooling::PoolableFX::OnCreate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"OnCreate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pooling::PoolableFX::OnPreGet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"OnPreGet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pooling::PoolableFX::OnPostGet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"OnPostGet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pooling::PoolableFX::OnRelease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"OnRelease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pooling::PoolableFX::OnParticleSystemStopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {"OnParticleSystemStopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pooling::PoolableFX::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::PoolableFX*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pooling::PoolableFX* Pooling::PoolableFX::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pooling::PoolableFX*>());
}
/// @brief Convert operator to "::Pooling::IPoolable_1<::UnityW<::Pooling::PoolableFX>>"
constexpr  Pooling::PoolableFX::operator ::Pooling::IPoolable_1<::UnityW<::Pooling::PoolableFX>>*() noexcept {
return static_cast<::Pooling::IPoolable_1<::UnityW<::Pooling::PoolableFX>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pooling::IPoolable_1<::UnityW<::Pooling::PoolableFX>>"
constexpr ::Pooling::IPoolable_1<::UnityW<::Pooling::PoolableFX>>* Pooling::PoolableFX::i___Pooling__IPoolable_1___UnityW___Pooling__PoolableFX__() noexcept {
return static_cast<::Pooling::IPoolable_1<::UnityW<::Pooling::PoolableFX>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pooling::PoolableFX::PoolableFX()   {
}
