#pragma once
// IWYU pragma private; include "Pathfinding/FloodPathTracer.hpp"
#include "Pathfinding/zzzz__ABPath_impl.hpp"
#include "Pathfinding/zzzz__FloodPathTracer_def.hpp"
#include "Pathfinding/zzzz__FloodPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::FloodPathTracer.get_hasEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::FloodPathTracer::*)()>(&::Pathfinding::FloodPathTracer::get_hasEndPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eaedac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                    {::i2c::class_of<::Pathfinding::FloodPathTracer*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPathTracer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPathTracer::*)()>(&::Pathfinding::FloodPathTracer::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5eaedb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPathTracer.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::FloodPathTracer* (*)(::UnityEngine::Vector3, ::Pathfinding::FloodPath*, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::FloodPathTracer::Construct)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5eaee0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::FloodPath*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPathTracer.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPathTracer::*)(::UnityEngine::Vector3, ::Pathfinding::FloodPath*, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::FloodPathTracer::Setup)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5eaeec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::FloodPath*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPathTracer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPathTracer::*)()>(&::Pathfinding::FloodPathTracer::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5eaefe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                    {::i2c::class_of<::Pathfinding::FloodPathTracer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPathTracer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPathTracer::*)()>(&::Pathfinding::FloodPathTracer::Initialize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5eaf004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                    {::i2c::class_of<::Pathfinding::FloodPathTracer*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPathTracer.CalculateStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPathTracer::*)(int64_t)>(&::Pathfinding::FloodPathTracer::CalculateStep)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5eaf260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                    {::i2c::class_of<::Pathfinding::FloodPathTracer*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FloodPathTracer.Trace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FloodPathTracer::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::FloodPathTracer::Trace)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5eaf090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                        {"Trace", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::FloodPath*& Pathfinding::FloodPathTracer::__cordl_internal_get_flood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flood;
}
constexpr ::Pathfinding::FloodPath* const& Pathfinding::FloodPathTracer::__cordl_internal_get_flood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flood;
}
constexpr void Pathfinding::FloodPathTracer::__cordl_internal_set_flood(::Pathfinding::FloodPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flood = value;
}
inline bool Pathfinding::FloodPathTracer::get_hasEndPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FloodPathTracer*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::FloodPathTracer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::FloodPathTracer* Pathfinding::FloodPathTracer::Construct(::UnityEngine::Vector3  start, ::Pathfinding::FloodPath*  flood, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::FloodPath*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::FloodPathTracer*>(nullptr, ___internal_method, start, flood, callback);
}
inline void Pathfinding::FloodPathTracer::Setup(::UnityEngine::Vector3  start, ::Pathfinding::FloodPath*  flood, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::FloodPath*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, flood, callback);
}
inline void Pathfinding::FloodPathTracer::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FloodPathTracer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::FloodPathTracer::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FloodPathTracer*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::FloodPathTracer::CalculateStep(int64_t  targetTick)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FloodPathTracer*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTick);
}
inline void Pathfinding::FloodPathTracer::Trace(::Pathfinding::GraphNode*  from)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FloodPathTracer*>(),
                        {"Trace", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from);
}
inline ::Pathfinding::FloodPathTracer* Pathfinding::FloodPathTracer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::FloodPathTracer*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::FloodPathTracer::FloodPathTracer()   {
}
