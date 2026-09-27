#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomLocalColliders.hpp"
#include "GlobalNamespace/zzzz__SRand_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__RandomLocalColliders_def.hpp"
#include "GlobalNamespace/zzzz__LightningDispatcherEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomLocalColliders.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomLocalColliders::*)()>(&::GlobalNamespace::RandomLocalColliders::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b2ef74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomLocalColliders*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomLocalColliders.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomLocalColliders::*)()>(&::GlobalNamespace::RandomLocalColliders::Update)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b2efdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomLocalColliders*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomLocalColliders.seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomLocalColliders::*)()>(&::GlobalNamespace::RandomLocalColliders::seek)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5b2f080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomLocalColliders*>(),
                        {"seek", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomLocalColliders._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomLocalColliders::*)()>(&::GlobalNamespace::RandomLocalColliders::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b2f434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomLocalColliders*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_minseekFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minseekFreq;
}
constexpr float_t const& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_minseekFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minseekFreq;
}
constexpr void GlobalNamespace::RandomLocalColliders::__cordl_internal_set_minseekFreq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minseekFreq = value;
}
constexpr float_t& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_maxseekFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxseekFreq;
}
constexpr float_t const& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_maxseekFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxseekFreq;
}
constexpr void GlobalNamespace::RandomLocalColliders::__cordl_internal_set_maxseekFreq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxseekFreq = value;
}
constexpr float_t& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_minRadias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRadias;
}
constexpr float_t const& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_minRadias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRadias;
}
constexpr void GlobalNamespace::RandomLocalColliders::__cordl_internal_set_minRadias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minRadias = value;
}
constexpr float_t& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_maxRadias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRadias;
}
constexpr float_t const& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_maxRadias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRadias;
}
constexpr void GlobalNamespace::RandomLocalColliders::__cordl_internal_set_maxRadias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRadias = value;
}
constexpr ::GlobalNamespace::LightningDispatcherEvent*& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_colliderFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderFound;
}
constexpr ::GlobalNamespace::LightningDispatcherEvent* const& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_colliderFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderFound;
}
constexpr void GlobalNamespace::RandomLocalColliders::__cordl_internal_set_colliderFound(::GlobalNamespace::LightningDispatcherEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderFound = value;
}
constexpr float_t& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_timeSinceSeek()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceSeek;
}
constexpr float_t const& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_timeSinceSeek() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceSeek;
}
constexpr void GlobalNamespace::RandomLocalColliders::__cordl_internal_set_timeSinceSeek(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSinceSeek = value;
}
constexpr float_t& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_seekFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekFreq;
}
constexpr float_t const& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_seekFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekFreq;
}
constexpr void GlobalNamespace::RandomLocalColliders::__cordl_internal_set_seekFreq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seekFreq = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_raycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::RandomLocalColliders::__cordl_internal_get_raycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHits;
}
constexpr void GlobalNamespace::RandomLocalColliders::__cordl_internal_set_raycastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastHits = value;
}
inline void GlobalNamespace::RandomLocalColliders::setStaticF_rand(::GlobalNamespace::SRand  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SRand, "rand", ::GlobalNamespace::RandomLocalColliders*>(std::forward<::GlobalNamespace::SRand>(value));
}
inline ::GlobalNamespace::SRand GlobalNamespace::RandomLocalColliders::getStaticF_rand()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SRand, "rand", ::GlobalNamespace::RandomLocalColliders*>();
}
inline void GlobalNamespace::RandomLocalColliders::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomLocalColliders*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomLocalColliders::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomLocalColliders*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomLocalColliders::seek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomLocalColliders*>(),
                        {"seek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomLocalColliders::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomLocalColliders*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomLocalColliders* GlobalNamespace::RandomLocalColliders::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomLocalColliders*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomLocalColliders::RandomLocalColliders()   {
}
