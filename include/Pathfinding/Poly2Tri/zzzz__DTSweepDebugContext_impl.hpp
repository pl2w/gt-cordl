#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweepDebugContext.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationDebugContext_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepDebugContext_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepDebugContext.set_PrimaryTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepDebugContext::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&::Pathfinding::Poly2Tri::DTSweepDebugContext::set_PrimaryTriangle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b404c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(),
                        {"set_PrimaryTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepDebugContext.set_SecondaryTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepDebugContext::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&::Pathfinding::Poly2Tri::DTSweepDebugContext::set_SecondaryTriangle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b5044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(),
                        {"set_SecondaryTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepDebugContext.set_ActivePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepDebugContext::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweepDebugContext::set_ActivePoint)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b6360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(),
                        {"set_ActivePoint", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepDebugContext.set_ActiveNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepDebugContext::*)(::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweepDebugContext::set_ActiveNode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b3828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(),
                        {"set_ActiveNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepDebugContext.set_ActiveConstraint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepDebugContext::*)(::Pathfinding::Poly2Tri::DTSweepConstraint*)>(&::Pathfinding::Poly2Tri::DTSweepDebugContext::set_ActiveConstraint)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b2e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(),
                        {"set_ActiveConstraint", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepDebugContext.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepDebugContext::*)()>(&::Pathfinding::Poly2Tri::DTSweepDebugContext::Clear)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa6b63b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle*& Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_get__primaryTriangle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryTriangle;
}
constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle* const& Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_get__primaryTriangle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryTriangle;
}
constexpr void Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_set__primaryTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primaryTriangle = value;
}
constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle*& Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_get__secondaryTriangle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryTriangle;
}
constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle* const& Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_get__secondaryTriangle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryTriangle;
}
constexpr void Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_set__secondaryTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondaryTriangle = value;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_get__activePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activePoint;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_get__activePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activePoint;
}
constexpr void Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_set__activePoint(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activePoint = value;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_get__activeNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeNode;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_get__activeNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeNode;
}
constexpr void Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_set__activeNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeNode = value;
}
constexpr ::Pathfinding::Poly2Tri::DTSweepConstraint*& Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_get__activeConstraint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeConstraint;
}
constexpr ::Pathfinding::Poly2Tri::DTSweepConstraint* const& Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_get__activeConstraint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeConstraint;
}
constexpr void Pathfinding::Poly2Tri::DTSweepDebugContext::__cordl_internal_set__activeConstraint(::Pathfinding::Poly2Tri::DTSweepConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeConstraint = value;
}
inline void Pathfinding::Poly2Tri::DTSweepDebugContext::set_PrimaryTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(),
                        {"set_PrimaryTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Poly2Tri::DTSweepDebugContext::set_SecondaryTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(),
                        {"set_SecondaryTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Poly2Tri::DTSweepDebugContext::set_ActivePoint(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(),
                        {"set_ActivePoint", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Poly2Tri::DTSweepDebugContext::set_ActiveNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(),
                        {"set_ActiveNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Poly2Tri::DTSweepDebugContext::set_ActiveConstraint(::Pathfinding::Poly2Tri::DTSweepConstraint*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(),
                        {"set_ActiveConstraint", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Poly2Tri::DTSweepDebugContext::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::DTSweepDebugContext::DTSweepDebugContext()   {
}
