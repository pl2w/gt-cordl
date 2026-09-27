#pragma once
// IWYU pragma private; include "Pathfinding/XPath.hpp"
#include "Pathfinding/zzzz__ABPath_impl.hpp"
#include "Pathfinding/zzzz__XPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "Pathfinding/zzzz__PathEndingCondition_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::XPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::XPath::*)()>(&::Pathfinding::XPath::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5eb1f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::XPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::XPath.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::XPath* (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::XPath::Construct)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5eb1fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::XPath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::XPath.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::XPath::*)()>(&::Pathfinding::XPath::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5eb2148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::XPath*>(),
                    {::i2c::class_of<::Pathfinding::XPath*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::XPath.EndPointGridGraphSpecialCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::XPath::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::XPath::EndPointGridGraphSpecialCase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb216c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::XPath*>(),
                    {::i2c::class_of<::Pathfinding::XPath*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::XPath.CompletePathIfStartIsValidTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::XPath::*)()>(&::Pathfinding::XPath::CompletePathIfStartIsValidTarget)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5eb2174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::XPath*>(),
                    {::i2c::class_of<::Pathfinding::XPath*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::XPath.ChangeEndNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::XPath::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::XPath::ChangeEndNode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5eb2204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::XPath*>(),
                        {"ChangeEndNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::XPath.CalculateStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::XPath::*)(int64_t)>(&::Pathfinding::XPath::CalculateStep)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5eb22ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::XPath*>(),
                    {::i2c::class_of<::Pathfinding::XPath*>(), 27}
                ));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::PathEndingCondition*& Pathfinding::XPath::__cordl_internal_get_endingCondition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingCondition;
}
constexpr ::Pathfinding::PathEndingCondition* const& Pathfinding::XPath::__cordl_internal_get_endingCondition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingCondition;
}
constexpr void Pathfinding::XPath::__cordl_internal_set_endingCondition(::Pathfinding::PathEndingCondition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endingCondition = value;
}
inline void Pathfinding::XPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::XPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::XPath* Pathfinding::XPath::Construct(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::XPath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::XPath*>(nullptr, ___internal_method, start, end, callback);
}
inline void Pathfinding::XPath::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::XPath*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::XPath::EndPointGridGraphSpecialCase(::Pathfinding::GraphNode*  endNode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::XPath*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, endNode);
}
inline void Pathfinding::XPath::CompletePathIfStartIsValidTarget()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::XPath*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::XPath::ChangeEndNode(::Pathfinding::GraphNode*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::XPath*>(),
                        {"ChangeEndNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Pathfinding::XPath::CalculateStep(int64_t  targetTick)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::XPath*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTick);
}
inline ::Pathfinding::XPath* Pathfinding::XPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::XPath*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::XPath::XPath()   {
}
