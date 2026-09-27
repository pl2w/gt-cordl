#pragma once
// IWYU pragma private; include "GlobalNamespace/LckEntitlementsNetworked.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LckEntitlementsNetworked_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRigSerializer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsNetworked.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsNetworked::*)()>(&::GlobalNamespace::LckEntitlementsNetworked::Awake)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x56c896c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsNetworked*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsNetworked.OnSuccessfulSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsNetworked::*)(::by_ref<::GlobalNamespace::RigContainer*>, ::by_ref<::GlobalNamespace::PhotonMessageInfoWrapped>)>(&::GlobalNamespace::LckEntitlementsNetworked::OnSuccessfulSpawn)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x56c8af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsNetworked*>(),
                        {"OnSuccessfulSpawn", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PhotonMessageInfoWrapped>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsNetworked.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsNetworked::*)()>(&::GlobalNamespace::LckEntitlementsNetworked::OnDestroy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56c8ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsNetworked*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsNetworked._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsNetworked::*)()>(&::GlobalNamespace::LckEntitlementsNetworked::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c8dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsNetworked*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRigSerializer>& GlobalNamespace::LckEntitlementsNetworked::__cordl_internal_get_m_rigNetworkController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rigNetworkController;
}
constexpr ::UnityW<::GlobalNamespace::VRRigSerializer> const& GlobalNamespace::LckEntitlementsNetworked::__cordl_internal_get_m_rigNetworkController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rigNetworkController;
}
constexpr void GlobalNamespace::LckEntitlementsNetworked::__cordl_internal_set_m_rigNetworkController(::UnityW<::GlobalNamespace::VRRigSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_rigNetworkController = value;
}
inline void GlobalNamespace::LckEntitlementsNetworked::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsNetworked*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsNetworked::OnSuccessfulSpawn(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::RigContainer*>  rig, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::PhotonMessageInfoWrapped>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsNetworked*>(),
                        {"OnSuccessfulSpawn", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PhotonMessageInfoWrapped>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, info);
}
inline void GlobalNamespace::LckEntitlementsNetworked::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsNetworked*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsNetworked::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsNetworked*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LckEntitlementsNetworked* GlobalNamespace::LckEntitlementsNetworked::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckEntitlementsNetworked*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEntitlementsNetworked::LckEntitlementsNetworked()   {
}
