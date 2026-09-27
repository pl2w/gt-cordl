#pragma once
// IWYU pragma private; include "Pathfinding/Examples/MecanimBridge.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Examples/zzzz__MecanimBridge_def.hpp"
#include "Pathfinding/zzzz__IAstarAI_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::MecanimBridge.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::MecanimBridge::*)()>(&::Pathfinding::Examples::MecanimBridge::Awake)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5ef6784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                    {::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::MecanimBridge.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::MecanimBridge::*)()>(&::Pathfinding::Examples::MecanimBridge::Update)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ef6924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::MecanimBridge.CalculateBlendPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Examples::MecanimBridge::*)()>(&::Pathfinding::Examples::MecanimBridge::CalculateBlendPoint)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5ef69a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                        {"CalculateBlendPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::MecanimBridge.OnAnimatorMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::MecanimBridge::*)()>(&::Pathfinding::Examples::MecanimBridge::OnAnimatorMove)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x5ef6ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                        {"OnAnimatorMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::MecanimBridge.RotatePointAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Pathfinding::Examples::MecanimBridge::RotatePointAround)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ef7528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                        {"RotatePointAround", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::MecanimBridge.RotateTowards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Pathfinding::Examples::MecanimBridge::*)(::UnityEngine::Vector3, float_t)>(&::Pathfinding::Examples::MecanimBridge::RotateTowards)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5ef7578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                    {::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::MecanimBridge._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::MecanimBridge::*)()>(&::Pathfinding::Examples::MecanimBridge::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ef7744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_velocitySmoothing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocitySmoothing;
}
constexpr float_t const& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_velocitySmoothing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocitySmoothing;
}
constexpr void Pathfinding::Examples::MecanimBridge::__cordl_internal_set_velocitySmoothing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocitySmoothing = value;
}
constexpr ::Pathfinding::IAstarAI*& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_ai()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ai;
}
constexpr ::Pathfinding::IAstarAI* const& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_ai() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ai;
}
constexpr void Pathfinding::Examples::MecanimBridge::__cordl_internal_set_ai(::Pathfinding::IAstarAI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ai = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void Pathfinding::Examples::MecanimBridge::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_tr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_tr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr void Pathfinding::Examples::MecanimBridge::__cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tr = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_smoothedVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedVelocity;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_smoothedVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedVelocity;
}
constexpr void Pathfinding::Examples::MecanimBridge::__cordl_internal_set_smoothedVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothedVelocity = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_prevFootPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevFootPos;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_prevFootPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevFootPos;
}
constexpr void Pathfinding::Examples::MecanimBridge::__cordl_internal_set_prevFootPos(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevFootPos = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_footTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& Pathfinding::Examples::MecanimBridge::__cordl_internal_get_footTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footTransforms;
}
constexpr void Pathfinding::Examples::MecanimBridge::__cordl_internal_set_footTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___footTransforms = value;
}
inline void Pathfinding::Examples::MecanimBridge::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::MecanimBridge::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::Examples::MecanimBridge::CalculateBlendPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                        {"CalculateBlendPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Pathfinding::Examples::MecanimBridge::OnAnimatorMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                        {"OnAnimatorMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::Examples::MecanimBridge::RotatePointAround(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  around, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                        {"RotatePointAround", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, point, around, rotation);
}
inline ::UnityEngine::Quaternion Pathfinding::Examples::MecanimBridge::RotateTowards(::UnityEngine::Vector3  direction, float_t  maxDegrees)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, direction, maxDegrees);
}
inline void Pathfinding::Examples::MecanimBridge::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::MecanimBridge*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::MecanimBridge* Pathfinding::Examples::MecanimBridge::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::MecanimBridge*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::MecanimBridge::MecanimBridge()   {
}
