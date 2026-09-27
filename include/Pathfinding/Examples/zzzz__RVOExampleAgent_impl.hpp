#pragma once
// IWYU pragma private; include "Pathfinding/Examples/RVOExampleAgent.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Examples/zzzz__RVOExampleAgent_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOController_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__Seeker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::RVOExampleAgent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::RVOExampleAgent::*)()>(&::Pathfinding::Examples::RVOExampleAgent::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ef1950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::RVOExampleAgent.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::RVOExampleAgent::*)(::UnityEngine::Vector3)>(&::Pathfinding::Examples::RVOExampleAgent::SetTarget)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ef155c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::RVOExampleAgent.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::RVOExampleAgent::*)(::UnityEngine::Color)>(&::Pathfinding::Examples::RVOExampleAgent::SetColor)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5ef1568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::RVOExampleAgent.RecalculatePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::RVOExampleAgent::*)()>(&::Pathfinding::Examples::RVOExampleAgent::RecalculatePath)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ef19e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"RecalculatePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::RVOExampleAgent.OnPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::RVOExampleAgent::*)(::Pathfinding::Path*)>(&::Pathfinding::Examples::RVOExampleAgent::OnPathComplete)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5ef1afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"OnPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::RVOExampleAgent.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::RVOExampleAgent::*)()>(&::Pathfinding::Examples::RVOExampleAgent::Update)> {
  constexpr static std::size_t size = 0x97c;
  constexpr static std::size_t addrs = 0x5ef1dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::RVOExampleAgent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::RVOExampleAgent::*)()>(&::Pathfinding::Examples::RVOExampleAgent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ef2744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_repathRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repathRate;
}
constexpr float_t const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_repathRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repathRate;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_repathRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repathRate = value;
}
constexpr float_t& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_nextRepath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextRepath;
}
constexpr float_t const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_nextRepath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextRepath;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_nextRepath(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextRepath = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_target(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr bool& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_canSearchAgain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSearchAgain;
}
constexpr bool const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_canSearchAgain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSearchAgain;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_canSearchAgain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canSearchAgain = value;
}
constexpr ::UnityW<::Pathfinding::RVO::RVOController>& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr ::UnityW<::Pathfinding::RVO::RVOController> const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_controller(::UnityW<::Pathfinding::RVO::RVOController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controller = value;
}
constexpr float_t& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr ::Pathfinding::Path*& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::Pathfinding::Path* const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_path(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_vectorPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorPath;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_vectorPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorPath;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_vectorPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vectorPath = value;
}
constexpr int32_t& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_wp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wp;
}
constexpr int32_t const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_wp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wp;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_wp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wp = value;
}
constexpr float_t& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_moveNextDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveNextDist;
}
constexpr float_t const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_moveNextDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveNextDist;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_moveNextDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveNextDist = value;
}
constexpr float_t& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_slowdownDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownDistance;
}
constexpr float_t const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_slowdownDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownDistance;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_slowdownDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowdownDistance = value;
}
constexpr ::UnityEngine::LayerMask& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_groundMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundMask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_groundMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundMask;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_groundMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundMask = value;
}
constexpr ::UnityW<::Pathfinding::Seeker>& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_seeker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr ::UnityW<::Pathfinding::Seeker> const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_seeker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seeker = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_rends()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rends;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& Pathfinding::Examples::RVOExampleAgent::__cordl_internal_get_rends() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rends;
}
constexpr void Pathfinding::Examples::RVOExampleAgent::__cordl_internal_set_rends(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rends = value;
}
inline void Pathfinding::Examples::RVOExampleAgent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::RVOExampleAgent::SetTarget(::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Pathfinding::Examples::RVOExampleAgent::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Pathfinding::Examples::RVOExampleAgent::RecalculatePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"RecalculatePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::RVOExampleAgent::OnPathComplete(::Pathfinding::Path*  _p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"OnPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p);
}
inline void Pathfinding::Examples::RVOExampleAgent::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::RVOExampleAgent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::RVOExampleAgent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::RVOExampleAgent* Pathfinding::Examples::RVOExampleAgent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::RVOExampleAgent*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::RVOExampleAgent::RVOExampleAgent()   {
}
