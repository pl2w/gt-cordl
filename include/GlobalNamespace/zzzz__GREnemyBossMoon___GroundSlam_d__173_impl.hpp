#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyBossMoon___GroundSlam_d__173.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon___GroundSlam_d__173_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173::*)()>(&::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173::MoveNext)> {
  constexpr static std::size_t size = 0xc88;
  constexpr static std::size_t addrs = 0x58850c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5885d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "slamCenter", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::GREnemyBossMoon>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitVelocity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_slamPosition_5__2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_timeHit_5__3", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_playerHit_5__4", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_player_5__5", ty: "::UnityW<::GorillaLocomotion::GTPlayer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_upwardsAngleBoost_5__6", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173::GREnemyBossMoon___GroundSlam_d__173(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::UnityEngine::Transform>  slamCenter, float_t  distance, ::UnityW<::GlobalNamespace::GREnemyBossMoon>  __4__this, float_t  duration, float_t  hitVelocity, ::UnityEngine::Vector3  _slamPosition_5__2, float_t  _timeHit_5__3, bool  _playerHit_5__4, ::UnityW<::GorillaLocomotion::GTPlayer>  _player_5__5, float_t  _upwardsAngleBoost_5__6, ::GlobalNamespace::Awaitable_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->slamCenter = slamCenter;
this->distance = distance;
this->__4__this = __4__this;
this->duration = duration;
this->hitVelocity = hitVelocity;
this->_slamPosition_5__2 = _slamPosition_5__2;
this->_timeHit_5__3 = _timeHit_5__3;
this->_playerHit_5__4 = _playerHit_5__4;
this->_player_5__5 = _player_5__5;
this->_upwardsAngleBoost_5__6 = _upwardsAngleBoost_5__6;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173::GREnemyBossMoon___GroundSlam_d__173()   {
}
