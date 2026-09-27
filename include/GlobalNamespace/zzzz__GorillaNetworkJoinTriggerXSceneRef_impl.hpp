#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaNetworkJoinTriggerXSceneRef.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaNetworkJoinTriggerXSceneRef_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::*)()>(&::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5aadd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::*)()>(&::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::OnDestroy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5aade00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef._OnTargetSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::*)()>(&::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::_OnTargetSceneLoaded)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5aade84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*>(),
                        {"_OnTargetSceneLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef.SubsPublicJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::*)()>(&::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::SubsPublicJoin)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5aaded0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*>(),
                        {"SubsPublicJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::*)()>(&::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aadf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::__cordl_internal_get_m_joinTriggerRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_joinTriggerRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::__cordl_internal_get_m_joinTriggerRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_joinTriggerRef;
}
constexpr void GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::__cordl_internal_set_m_joinTriggerRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_joinTriggerRef = value;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::__cordl_internal_get__joinTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinTrigger;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::__cordl_internal_get__joinTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinTrigger;
}
constexpr void GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::__cordl_internal_set__joinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joinTrigger = value;
}
inline void GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::_OnTargetSceneLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*>(),
                        {"_OnTargetSceneLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::SubsPublicJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*>(),
                        {"SubsPublicJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef* GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaNetworkJoinTriggerXSceneRef::GorillaNetworkJoinTriggerXSceneRef()   {
}
