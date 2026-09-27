#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityJump.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityJump_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__AnimationData_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "UnityEngine/AI/zzzz__OffMeshLinkData_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityJump.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityJump::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityJump::Setup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5867d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityJump.SetupJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityJump::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::GRAbilityJump::SetupJump)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5867d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                        {"SetupJump", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityJump.SetupJumpFromLinkData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityJump::*)(::UnityEngine::AI::OffMeshLinkData)>(&::GlobalNamespace::GRAbilityJump::SetupJumpFromLinkData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5867e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                        {"SetupJumpFromLinkData", {}, {::i2c::type_of<::UnityEngine::AI::OffMeshLinkData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityJump.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityJump::*)()>(&::GlobalNamespace::GRAbilityJump::OnStart)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5867f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityJump.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityJump::*)()>(&::GlobalNamespace::GRAbilityJump::OnStop)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5867fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityJump.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityJump::*)()>(&::GlobalNamespace::GRAbilityJump::IsDone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x586801c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityJump.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityJump::*)()>(&::GlobalNamespace::GRAbilityJump::IsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586802c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                        {"IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityJump.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityJump::*)(float_t)>(&::GlobalNamespace::GRAbilityJump::OnUpdateShared)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5868034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityJump.EvaluateQuadratic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GRAbilityJump::EvaluateQuadratic)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x586826c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                        {"EvaluateQuadratic", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityJump._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityJump::*)()>(&::GlobalNamespace::GRAbilityJump::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58682f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityJump::__cordl_internal_get_startPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityJump::__cordl_internal_get_startPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPos;
}
constexpr void GlobalNamespace::GRAbilityJump::__cordl_internal_set_startPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityJump::__cordl_internal_get_endPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityJump::__cordl_internal_get_endPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPos;
}
constexpr void GlobalNamespace::GRAbilityJump::__cordl_internal_set_endPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityJump::__cordl_internal_get_controlPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityJump::__cordl_internal_get_controlPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoint;
}
constexpr void GlobalNamespace::GRAbilityJump::__cordl_internal_set_controlPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlPoint = value;
}
constexpr float_t& GlobalNamespace::GRAbilityJump::__cordl_internal_get_jumpTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpTime;
}
constexpr float_t const& GlobalNamespace::GRAbilityJump::__cordl_internal_get_jumpTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpTime;
}
constexpr void GlobalNamespace::GRAbilityJump::__cordl_internal_set_jumpTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpTime = value;
}
constexpr float_t& GlobalNamespace::GRAbilityJump::__cordl_internal_get_elapsedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsedTime;
}
constexpr float_t const& GlobalNamespace::GRAbilityJump::__cordl_internal_get_elapsedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsedTime;
}
constexpr void GlobalNamespace::GRAbilityJump::__cordl_internal_set_elapsedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elapsedTime = value;
}
constexpr bool& GlobalNamespace::GRAbilityJump::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& GlobalNamespace::GRAbilityJump::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GlobalNamespace::GRAbilityJump::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
constexpr ::GlobalNamespace::AnimationData*& GlobalNamespace::GRAbilityJump::__cordl_internal_get_animationData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationData;
}
constexpr ::GlobalNamespace::AnimationData* const& GlobalNamespace::GRAbilityJump::__cordl_internal_get_animationData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationData;
}
constexpr void GlobalNamespace::GRAbilityJump::__cordl_internal_set_animationData(::GlobalNamespace::AnimationData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationData = value;
}
constexpr float_t& GlobalNamespace::GRAbilityJump::__cordl_internal_get_jumpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityJump::__cordl_internal_get_jumpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSpeed;
}
constexpr void GlobalNamespace::GRAbilityJump::__cordl_internal_set_jumpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpSpeed = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityJump::__cordl_internal_get_soundJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundJump;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityJump::__cordl_internal_get_soundJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundJump;
}
constexpr void GlobalNamespace::GRAbilityJump::__cordl_internal_set_soundJump(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundJump = value;
}
inline void GlobalNamespace::GRAbilityJump::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityJump::SetupJump(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                        {"SetupJump", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, heightScale, speedScale);
}
inline void GlobalNamespace::GRAbilityJump::SetupJumpFromLinkData(::UnityEngine::AI::OffMeshLinkData  linkData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                        {"SetupJumpFromLinkData", {}, {::i2c::type_of<::UnityEngine::AI::OffMeshLinkData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linkData);
}
inline void GlobalNamespace::GRAbilityJump::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityJump::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityJump::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityJump::IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                        {"IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityJump::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRAbilityJump::EvaluateQuadratic(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                        {"EvaluateQuadratic", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, p0, p1, p2, t);
}
inline void GlobalNamespace::GRAbilityJump::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityJump*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityJump* GlobalNamespace::GRAbilityJump::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityJump*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityJump::GRAbilityJump()   {
}
