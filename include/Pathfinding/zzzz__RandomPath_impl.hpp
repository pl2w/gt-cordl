#pragma once
// IWYU pragma private; include "Pathfinding/RandomPath.hpp"
#include "Pathfinding/zzzz__ABPath_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__RandomPath_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RandomPath.get_FloodingPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RandomPath::*)()>(&::Pathfinding::RandomPath::get_FloodingPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb1734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RandomPath*>(),
                    {::i2c::class_of<::Pathfinding::RandomPath*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RandomPath.get_hasEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RandomPath::*)()>(&::Pathfinding::RandomPath::get_hasEndPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb173c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RandomPath*>(),
                    {::i2c::class_of<::Pathfinding::RandomPath*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RandomPath.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RandomPath::*)()>(&::Pathfinding::RandomPath::Reset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5eb1744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RandomPath*>(),
                    {::i2c::class_of<::Pathfinding::RandomPath*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RandomPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RandomPath::*)()>(&::Pathfinding::RandomPath::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5eae088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RandomPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RandomPath.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RandomPath* (*)(::UnityEngine::Vector3, int32_t, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::RandomPath::Construct)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5eb17e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RandomPath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RandomPath.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RandomPath* (::Pathfinding::RandomPath::*)(::UnityEngine::Vector3, int32_t, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::RandomPath::Setup)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5eae284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RandomPath*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RandomPath.ReturnPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RandomPath::*)()>(&::Pathfinding::RandomPath::ReturnPath)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5eb1890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RandomPath*>(),
                    {::i2c::class_of<::Pathfinding::RandomPath*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RandomPath.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RandomPath::*)()>(&::Pathfinding::RandomPath::Prepare)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5eb1984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RandomPath*>(),
                    {::i2c::class_of<::Pathfinding::RandomPath*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RandomPath.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RandomPath::*)()>(&::Pathfinding::RandomPath::Initialize)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5eb1b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RandomPath*>(),
                    {::i2c::class_of<::Pathfinding::RandomPath*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RandomPath.CalculateStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RandomPath::*)(int64_t)>(&::Pathfinding::RandomPath::CalculateStep)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5eb1cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RandomPath*>(),
                    {::i2c::class_of<::Pathfinding::RandomPath*>(), 27}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::RandomPath::__cordl_internal_get_searchLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchLength;
}
constexpr int32_t const& Pathfinding::RandomPath::__cordl_internal_get_searchLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchLength;
}
constexpr void Pathfinding::RandomPath::__cordl_internal_set_searchLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchLength = value;
}
constexpr int32_t& Pathfinding::RandomPath::__cordl_internal_get_spread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spread;
}
constexpr int32_t const& Pathfinding::RandomPath::__cordl_internal_get_spread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spread;
}
constexpr void Pathfinding::RandomPath::__cordl_internal_set_spread(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spread = value;
}
constexpr float_t& Pathfinding::RandomPath::__cordl_internal_get_aimStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aimStrength;
}
constexpr float_t const& Pathfinding::RandomPath::__cordl_internal_get_aimStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aimStrength;
}
constexpr void Pathfinding::RandomPath::__cordl_internal_set_aimStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aimStrength = value;
}
constexpr ::Pathfinding::PathNode*& Pathfinding::RandomPath::__cordl_internal_get_chosenNodeR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chosenNodeR;
}
constexpr ::Pathfinding::PathNode* const& Pathfinding::RandomPath::__cordl_internal_get_chosenNodeR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chosenNodeR;
}
constexpr void Pathfinding::RandomPath::__cordl_internal_set_chosenNodeR(::Pathfinding::PathNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chosenNodeR = value;
}
constexpr ::Pathfinding::PathNode*& Pathfinding::RandomPath::__cordl_internal_get_maxGScoreNodeR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxGScoreNodeR;
}
constexpr ::Pathfinding::PathNode* const& Pathfinding::RandomPath::__cordl_internal_get_maxGScoreNodeR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxGScoreNodeR;
}
constexpr void Pathfinding::RandomPath::__cordl_internal_set_maxGScoreNodeR(::Pathfinding::PathNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxGScoreNodeR = value;
}
constexpr int32_t& Pathfinding::RandomPath::__cordl_internal_get_maxGScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxGScore;
}
constexpr int32_t const& Pathfinding::RandomPath::__cordl_internal_get_maxGScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxGScore;
}
constexpr void Pathfinding::RandomPath::__cordl_internal_set_maxGScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxGScore = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::RandomPath::__cordl_internal_get_aim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aim;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::RandomPath::__cordl_internal_get_aim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aim;
}
constexpr void Pathfinding::RandomPath::__cordl_internal_set_aim(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aim = value;
}
constexpr int32_t& Pathfinding::RandomPath::__cordl_internal_get_nodesEvaluatedRep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodesEvaluatedRep;
}
constexpr int32_t const& Pathfinding::RandomPath::__cordl_internal_get_nodesEvaluatedRep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodesEvaluatedRep;
}
constexpr void Pathfinding::RandomPath::__cordl_internal_set_nodesEvaluatedRep(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodesEvaluatedRep = value;
}
constexpr ::System::Random*& Pathfinding::RandomPath::__cordl_internal_get_rnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnd;
}
constexpr ::System::Random* const& Pathfinding::RandomPath::__cordl_internal_get_rnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnd;
}
constexpr void Pathfinding::RandomPath::__cordl_internal_set_rnd(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rnd = value;
}
inline bool Pathfinding::RandomPath::get_FloodingPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RandomPath*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::RandomPath::get_hasEndPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RandomPath*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RandomPath::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RandomPath*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RandomPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RandomPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RandomPath* Pathfinding::RandomPath::Construct(::UnityEngine::Vector3  start, int32_t  length, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RandomPath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RandomPath*>(nullptr, ___internal_method, start, length, callback);
}
inline ::Pathfinding::RandomPath* Pathfinding::RandomPath::Setup(::UnityEngine::Vector3  start, int32_t  length, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RandomPath*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RandomPath*>(this, ___internal_method, start, length, callback);
}
inline void Pathfinding::RandomPath::ReturnPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RandomPath*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RandomPath::Prepare()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RandomPath*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RandomPath::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RandomPath*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RandomPath::CalculateStep(int64_t  targetTick)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RandomPath*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTick);
}
inline ::Pathfinding::RandomPath* Pathfinding::RandomPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RandomPath*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RandomPath::RandomPath()   {
}
