#pragma once
// IWYU pragma private; include "GlobalNamespace/ReportForwardHit.hpp"
#include "GlobalNamespace/zzzz__SRand_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ReportForwardHit_def.hpp"
#include "GlobalNamespace/zzzz__LightningDispatcherEvent_def.hpp"
#include "NetSynchrony/zzzz__RandomDispatcher_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReportForwardHit.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportForwardHit::*)()>(&::GlobalNamespace::ReportForwardHit::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b2f520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportForwardHit.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportForwardHit::*)()>(&::GlobalNamespace::ReportForwardHit::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b2f588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportForwardHit.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportForwardHit::*)()>(&::GlobalNamespace::ReportForwardHit::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b2f8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportForwardHit.NsRand_Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportForwardHit::*)(::NetSynchrony::RandomDispatcher*)>(&::GlobalNamespace::ReportForwardHit::NsRand_Dispatch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2f970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"NsRand_Dispatch", {}, {::i2c::type_of<::NetSynchrony::RandomDispatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportForwardHit.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportForwardHit::*)()>(&::GlobalNamespace::ReportForwardHit::Update)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b2f974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportForwardHit.seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportForwardHit::*)()>(&::GlobalNamespace::ReportForwardHit::seek)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5b2f668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"seek", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportForwardHit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReportForwardHit::*)()>(&::GlobalNamespace::ReportForwardHit::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b2fa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ReportForwardHit::__cordl_internal_get_minseekFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minseekFreq;
}
constexpr float_t const& GlobalNamespace::ReportForwardHit::__cordl_internal_get_minseekFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minseekFreq;
}
constexpr void GlobalNamespace::ReportForwardHit::__cordl_internal_set_minseekFreq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minseekFreq = value;
}
constexpr float_t& GlobalNamespace::ReportForwardHit::__cordl_internal_get_maxseekFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxseekFreq;
}
constexpr float_t const& GlobalNamespace::ReportForwardHit::__cordl_internal_get_maxseekFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxseekFreq;
}
constexpr void GlobalNamespace::ReportForwardHit::__cordl_internal_set_maxseekFreq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxseekFreq = value;
}
constexpr float_t& GlobalNamespace::ReportForwardHit::__cordl_internal_get_maxRadias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRadias;
}
constexpr float_t const& GlobalNamespace::ReportForwardHit::__cordl_internal_get_maxRadias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRadias;
}
constexpr void GlobalNamespace::ReportForwardHit::__cordl_internal_set_maxRadias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRadias = value;
}
constexpr ::GlobalNamespace::LightningDispatcherEvent*& GlobalNamespace::ReportForwardHit::__cordl_internal_get_colliderFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderFound;
}
constexpr ::GlobalNamespace::LightningDispatcherEvent* const& GlobalNamespace::ReportForwardHit::__cordl_internal_get_colliderFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderFound;
}
constexpr void GlobalNamespace::ReportForwardHit::__cordl_internal_set_colliderFound(::GlobalNamespace::LightningDispatcherEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderFound = value;
}
constexpr ::UnityW<::NetSynchrony::RandomDispatcher>& GlobalNamespace::ReportForwardHit::__cordl_internal_get_nsRand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nsRand;
}
constexpr ::UnityW<::NetSynchrony::RandomDispatcher> const& GlobalNamespace::ReportForwardHit::__cordl_internal_get_nsRand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nsRand;
}
constexpr void GlobalNamespace::ReportForwardHit::__cordl_internal_set_nsRand(::UnityW<::NetSynchrony::RandomDispatcher>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nsRand = value;
}
constexpr float_t& GlobalNamespace::ReportForwardHit::__cordl_internal_get_timeSinceSeek()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceSeek;
}
constexpr float_t const& GlobalNamespace::ReportForwardHit::__cordl_internal_get_timeSinceSeek() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceSeek;
}
constexpr void GlobalNamespace::ReportForwardHit::__cordl_internal_set_timeSinceSeek(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSinceSeek = value;
}
constexpr float_t& GlobalNamespace::ReportForwardHit::__cordl_internal_get_seekFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekFreq;
}
constexpr float_t const& GlobalNamespace::ReportForwardHit::__cordl_internal_get_seekFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekFreq;
}
constexpr void GlobalNamespace::ReportForwardHit::__cordl_internal_set_seekFreq(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seekFreq = value;
}
constexpr bool& GlobalNamespace::ReportForwardHit::__cordl_internal_get_seekOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekOnEnable;
}
constexpr bool const& GlobalNamespace::ReportForwardHit::__cordl_internal_get_seekOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekOnEnable;
}
constexpr void GlobalNamespace::ReportForwardHit::__cordl_internal_set_seekOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seekOnEnable = value;
}
inline void GlobalNamespace::ReportForwardHit::setStaticF_rand(::GlobalNamespace::SRand  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SRand, "rand", ::GlobalNamespace::ReportForwardHit*>(std::forward<::GlobalNamespace::SRand>(value));
}
inline ::GlobalNamespace::SRand GlobalNamespace::ReportForwardHit::getStaticF_rand()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SRand, "rand", ::GlobalNamespace::ReportForwardHit*>();
}
inline void GlobalNamespace::ReportForwardHit::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReportForwardHit::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReportForwardHit::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReportForwardHit::NsRand_Dispatch(::NetSynchrony::RandomDispatcher*  randomDispatcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"NsRand_Dispatch", {}, {::i2c::type_of<::NetSynchrony::RandomDispatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, randomDispatcher);
}
inline void GlobalNamespace::ReportForwardHit::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReportForwardHit::seek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {"seek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReportForwardHit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReportForwardHit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ReportForwardHit* GlobalNamespace::ReportForwardHit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ReportForwardHit*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReportForwardHit::ReportForwardHit()   {
}
