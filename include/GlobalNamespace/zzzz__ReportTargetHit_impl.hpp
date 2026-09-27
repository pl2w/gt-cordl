#pragma once
// IWYU pragma private; include "GlobalNamespace/ReportTargetHit.hpp"
#include "GlobalNamespace/zzzz__SRand_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__ReportTargetHit_def.hpp"
#include "GlobalNamespace/zzzz__LightningDispatcherEvent_def.hpp"
#include "NetSynchrony/zzzz__RandomDispatcher_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReportTargetHit.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportTargetHit::*)()>(&::GlobalNamespace::ReportTargetHit::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b2fae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportTargetHit.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportTargetHit::*)()>(&::GlobalNamespace::ReportTargetHit::OnEnable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b2fb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportTargetHit.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportTargetHit::*)()>(&::GlobalNamespace::ReportTargetHit::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b2fc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportTargetHit.NsRand_Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportTargetHit::*)(::NetSynchrony::RandomDispatcher*)>(&::GlobalNamespace::ReportTargetHit::NsRand_Dispatch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2fcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"NsRand_Dispatch", {}, {::i2c::type_of<::NetSynchrony::RandomDispatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportTargetHit.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportTargetHit::*)()>(&::GlobalNamespace::ReportTargetHit::Update)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b2fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportTargetHit.seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportTargetHit::*)()>(&::GlobalNamespace::ReportTargetHit::seek)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5b2fcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"seek", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportTargetHit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportTargetHit::*)()>(&::GlobalNamespace::ReportTargetHit::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b2ffb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ReportTargetHit::__cordl_internal_get_minseekFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minseekFreq;
}
constexpr float_t const& GlobalNamespace::ReportTargetHit::__cordl_internal_get_minseekFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minseekFreq;
}
constexpr void GlobalNamespace::ReportTargetHit::__cordl_internal_set_minseekFreq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minseekFreq = value;
}
constexpr float_t& GlobalNamespace::ReportTargetHit::__cordl_internal_get_maxseekFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxseekFreq;
}
constexpr float_t const& GlobalNamespace::ReportTargetHit::__cordl_internal_get_maxseekFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxseekFreq;
}
constexpr void GlobalNamespace::ReportTargetHit::__cordl_internal_set_maxseekFreq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxseekFreq = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::ReportTargetHit::__cordl_internal_get_targets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::ReportTargetHit::__cordl_internal_get_targets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr void GlobalNamespace::ReportTargetHit::__cordl_internal_set_targets(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targets = value;
}
constexpr ::GlobalNamespace::LightningDispatcherEvent*& GlobalNamespace::ReportTargetHit::__cordl_internal_get_colliderFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderFound;
}
constexpr ::GlobalNamespace::LightningDispatcherEvent* const& GlobalNamespace::ReportTargetHit::__cordl_internal_get_colliderFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderFound;
}
constexpr void GlobalNamespace::ReportTargetHit::__cordl_internal_set_colliderFound(::GlobalNamespace::LightningDispatcherEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderFound = value;
}
constexpr float_t& GlobalNamespace::ReportTargetHit::__cordl_internal_get_timeSinceSeek()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceSeek;
}
constexpr float_t const& GlobalNamespace::ReportTargetHit::__cordl_internal_get_timeSinceSeek() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceSeek;
}
constexpr void GlobalNamespace::ReportTargetHit::__cordl_internal_set_timeSinceSeek(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSinceSeek = value;
}
constexpr float_t& GlobalNamespace::ReportTargetHit::__cordl_internal_get_seekFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekFreq;
}
constexpr float_t const& GlobalNamespace::ReportTargetHit::__cordl_internal_get_seekFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekFreq;
}
constexpr void GlobalNamespace::ReportTargetHit::__cordl_internal_set_seekFreq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seekFreq = value;
}
constexpr ::UnityW<::NetSynchrony::RandomDispatcher>& GlobalNamespace::ReportTargetHit::__cordl_internal_get_nsRand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nsRand;
}
constexpr ::UnityW<::NetSynchrony::RandomDispatcher> const& GlobalNamespace::ReportTargetHit::__cordl_internal_get_nsRand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nsRand;
}
constexpr void GlobalNamespace::ReportTargetHit::__cordl_internal_set_nsRand(::UnityW<::NetSynchrony::RandomDispatcher>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nsRand = value;
}
inline void GlobalNamespace::ReportTargetHit::setStaticF_rand(::GlobalNamespace::SRand  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SRand, "rand", ::GlobalNamespace::ReportTargetHit*>(std::forward<::GlobalNamespace::SRand>(value));
}
inline ::GlobalNamespace::SRand GlobalNamespace::ReportTargetHit::getStaticF_rand()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SRand, "rand", ::GlobalNamespace::ReportTargetHit*>();
}
inline void GlobalNamespace::ReportTargetHit::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReportTargetHit::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReportTargetHit::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReportTargetHit::NsRand_Dispatch(::NetSynchrony::RandomDispatcher*  randomDispatcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"NsRand_Dispatch", {}, {::i2c::type_of<::NetSynchrony::RandomDispatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, randomDispatcher);
}
inline void GlobalNamespace::ReportTargetHit::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReportTargetHit::seek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {"seek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReportTargetHit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportTargetHit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ReportTargetHit* GlobalNamespace::ReportTargetHit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ReportTargetHit*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReportTargetHit::ReportTargetHit()   {
}
