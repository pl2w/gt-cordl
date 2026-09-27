#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityChase.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityChase_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityChase_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityChase.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityChase::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityChase::Setup)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x586887c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityChase.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityChase::*)()>(&::GlobalNamespace::GRAbilityChase::OnStart)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5868c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityChase.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityChase::*)()>(&::GlobalNamespace::GRAbilityChase::OnStop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5868cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityChase.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityChase::*)()>(&::GlobalNamespace::GRAbilityChase::IsDone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5868cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityChase.OnThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityChase::*)(float_t)>(&::GlobalNamespace::GRAbilityChase::OnThink)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5868cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityChase.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityChase::*)(float_t)>(&::GlobalNamespace::GRAbilityChase::OnUpdateShared)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5868f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityChase.SetTargetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityChase::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRAbilityChase::SetTargetPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5868f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityChase.GetMoveTargetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GRAbilityChase::GetMoveTargetOffset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5868e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                        {"GetMoveTargetOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityChase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityChase::*)()>(&::GlobalNamespace::GRAbilityChase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5868f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRAbilityChase::__cordl_internal_get_chaseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityChase::__cordl_internal_get_chaseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseSpeed;
}
constexpr void GlobalNamespace::GRAbilityChase::__cordl_internal_set_chaseSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseSpeed = value;
}
constexpr ::StringW& GlobalNamespace::GRAbilityChase::__cordl_internal_get_animName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animName;
}
constexpr ::StringW const& GlobalNamespace::GRAbilityChase::__cordl_internal_get_animName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animName;
}
constexpr void GlobalNamespace::GRAbilityChase::__cordl_internal_set_animName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animName = value;
}
constexpr float_t& GlobalNamespace::GRAbilityChase::__cordl_internal_get_animSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityChase::__cordl_internal_get_animSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr void GlobalNamespace::GRAbilityChase::__cordl_internal_set_animSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animSpeed = value;
}
constexpr float_t& GlobalNamespace::GRAbilityChase::__cordl_internal_get_maxTurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityChase::__cordl_internal_get_maxTurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr void GlobalNamespace::GRAbilityChase::__cordl_internal_set_maxTurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTurnSpeed = value;
}
constexpr float_t& GlobalNamespace::GRAbilityChase::__cordl_internal_get_loseVisibilityDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loseVisibilityDelay;
}
constexpr float_t const& GlobalNamespace::GRAbilityChase::__cordl_internal_get_loseVisibilityDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loseVisibilityDelay;
}
constexpr void GlobalNamespace::GRAbilityChase::__cordl_internal_set_loseVisibilityDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loseVisibilityDelay = value;
}
constexpr float_t& GlobalNamespace::GRAbilityChase::__cordl_internal_get_giveUpDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___giveUpDelay;
}
constexpr float_t const& GlobalNamespace::GRAbilityChase::__cordl_internal_get_giveUpDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___giveUpDelay;
}
constexpr void GlobalNamespace::GRAbilityChase::__cordl_internal_set_giveUpDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___giveUpDelay = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityChase::__cordl_internal_get_movementSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityChase::__cordl_internal_get_movementSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementSound;
}
constexpr void GlobalNamespace::GRAbilityChase::__cordl_internal_set_movementSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementSound = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GRAbilityChase::__cordl_internal_get_targetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GRAbilityChase::__cordl_internal_get_targetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr void GlobalNamespace::GRAbilityChase::__cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayer = value;
}
constexpr double_t& GlobalNamespace::GRAbilityChase::__cordl_internal_get_lastSeenTargetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr double_t const& GlobalNamespace::GRAbilityChase::__cordl_internal_get_lastSeenTargetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr void GlobalNamespace::GRAbilityChase::__cordl_internal_set_lastSeenTargetTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityChase::__cordl_internal_get_lastSeenTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityChase::__cordl_internal_get_lastSeenTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr void GlobalNamespace::GRAbilityChase::__cordl_internal_set_lastSeenTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetPosition = value;
}
inline void GlobalNamespace::GRAbilityChase::setStaticF_targetOffsets(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "targetOffsets", ::GlobalNamespace::GRAbilityChase*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GlobalNamespace::GRAbilityChase::getStaticF_targetOffsets()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "targetOffsets", ::GlobalNamespace::GRAbilityChase*>();
}
inline void GlobalNamespace::GRAbilityChase::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityChase::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityChase::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityChase::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityChase::OnThink(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityChase::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityChase::SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRAbilityChase::GetMoveTargetOffset(::UnityEngine::Vector3  targetPos, ::GlobalNamespace::GameEntity*  attackingEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                        {"GetMoveTargetOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, targetPos, attackingEntity);
}
inline void GlobalNamespace::GRAbilityChase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityChase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityChase* GlobalNamespace::GRAbilityChase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityChase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityChase::GRAbilityChase()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0::*)()>(&::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5868c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0._Setup_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0::_Setup_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5868f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0*>(),
                        {"<Setup>b__0", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Random*& GlobalNamespace::GRAbilityChase___c__DisplayClass11_0::__cordl_internal_get_random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr ::System::Random* const& GlobalNamespace::GRAbilityChase___c__DisplayClass11_0::__cordl_internal_get_random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr void GlobalNamespace::GRAbilityChase___c__DisplayClass11_0::__cordl_internal_set_random(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___random = value;
}
inline void GlobalNamespace::GRAbilityChase___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRAbilityChase___c__DisplayClass11_0::_Setup_b__0(::UnityEngine::Vector3  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0*>(),
                        {"<Setup>b__0", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0* GlobalNamespace::GRAbilityChase___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityChase___c__DisplayClass11_0::GRAbilityChase___c__DisplayClass11_0()   {
}
