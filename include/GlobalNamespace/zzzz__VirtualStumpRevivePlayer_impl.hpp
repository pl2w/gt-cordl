#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpRevivePlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpRevivePlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRReviveStation_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpRevivePlayer.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpRevivePlayer::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VirtualStumpRevivePlayer::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5a0c468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpRevivePlayer*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpRevivePlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpRevivePlayer::*)()>(&::GlobalNamespace::VirtualStumpRevivePlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0c6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpRevivePlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GlobalNamespace::VirtualStumpRevivePlayer::__cordl_internal_get_ghostReactorManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GlobalNamespace::VirtualStumpRevivePlayer::__cordl_internal_get_ghostReactorManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorManager;
}
constexpr void GlobalNamespace::VirtualStumpRevivePlayer::__cordl_internal_set_ghostReactorManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostReactorManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GRReviveStation>& GlobalNamespace::VirtualStumpRevivePlayer::__cordl_internal_get_defaultReviveStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultReviveStation;
}
constexpr ::UnityW<::GlobalNamespace::GRReviveStation> const& GlobalNamespace::VirtualStumpRevivePlayer::__cordl_internal_get_defaultReviveStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultReviveStation;
}
constexpr void GlobalNamespace::VirtualStumpRevivePlayer::__cordl_internal_set_defaultReviveStation(::UnityW<::GlobalNamespace::GRReviveStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultReviveStation = value;
}
inline void GlobalNamespace::VirtualStumpRevivePlayer::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpRevivePlayer*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::VirtualStumpRevivePlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpRevivePlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VirtualStumpRevivePlayer* GlobalNamespace::VirtualStumpRevivePlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VirtualStumpRevivePlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VirtualStumpRevivePlayer::VirtualStumpRevivePlayer()   {
}
