#pragma once
// IWYU pragma private; include "GlobalNamespace/LightningGenerator.hpp"
#include "GlobalNamespace/zzzz__LightningStrike_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightningGenerator_def.hpp"
#include "GlobalNamespace/zzzz__LightningStrike_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightningGenerator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningGenerator::*)()>(&::GlobalNamespace::LightningGenerator::Awake)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5b2eacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningGenerator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningGenerator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningGenerator::*)()>(&::GlobalNamespace::LightningGenerator::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b2ec7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningGenerator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningGenerator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningGenerator::*)()>(&::GlobalNamespace::LightningGenerator::OnDisable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b2ecf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningGenerator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningGenerator.LightningDispatcher_RequestLightningStrike
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LightningStrike> (::GlobalNamespace::LightningGenerator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::LightningGenerator::LightningDispatcher_RequestLightningStrike)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b2ed6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningGenerator*>(),
                        {"LightningDispatcher_RequestLightningStrike", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningGenerator::*)()>(&::GlobalNamespace::LightningGenerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b2edb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::LightningGenerator::__cordl_internal_get_maxConcurrentStrikes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConcurrentStrikes;
}
constexpr uint32_t const& GlobalNamespace::LightningGenerator::__cordl_internal_get_maxConcurrentStrikes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConcurrentStrikes;
}
constexpr void GlobalNamespace::LightningGenerator::__cordl_internal_set_maxConcurrentStrikes(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxConcurrentStrikes = value;
}
constexpr ::UnityW<::GlobalNamespace::LightningStrike>& GlobalNamespace::LightningGenerator::__cordl_internal_get_prototype()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototype;
}
constexpr ::UnityW<::GlobalNamespace::LightningStrike> const& GlobalNamespace::LightningGenerator::__cordl_internal_get_prototype() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prototype;
}
constexpr void GlobalNamespace::LightningGenerator::__cordl_internal_set_prototype(::UnityW<::GlobalNamespace::LightningStrike>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prototype = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightningStrike>>& GlobalNamespace::LightningGenerator::__cordl_internal_get_strikes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strikes;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightningStrike>> const& GlobalNamespace::LightningGenerator::__cordl_internal_get_strikes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strikes;
}
constexpr void GlobalNamespace::LightningGenerator::__cordl_internal_set_strikes(::ArrayW<::UnityW<::GlobalNamespace::LightningStrike>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strikes = value;
}
constexpr int32_t& GlobalNamespace::LightningGenerator::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::LightningGenerator::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::LightningGenerator::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline void GlobalNamespace::LightningGenerator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningGenerator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightningGenerator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningGenerator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightningGenerator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningGenerator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::LightningStrike> GlobalNamespace::LightningGenerator::LightningDispatcher_RequestLightningStrike(::UnityEngine::Vector3  t1, ::UnityEngine::Vector3  t2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningGenerator*>(),
                        {"LightningDispatcher_RequestLightningStrike", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightningStrike>>(this, ___internal_method, t1, t2);
}
inline void GlobalNamespace::LightningGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightningGenerator* GlobalNamespace::LightningGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightningGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightningGenerator::LightningGenerator()   {
}
