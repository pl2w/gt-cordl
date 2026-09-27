#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/TriangulationPoint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationPoint::*)(double_t, double_t)>(&::Pathfinding::Poly2Tri::TriangulationPoint::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa6b12c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationPoint.get_Edges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DTSweepConstraint*>* (::Pathfinding::Poly2Tri::TriangulationPoint::*)()>(&::Pathfinding::Poly2Tri::TriangulationPoint::get_Edges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(),
                        {"get_Edges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationPoint.set_Edges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationPoint::*)(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DTSweepConstraint*>*)>(&::Pathfinding::Poly2Tri::TriangulationPoint::set_Edges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(),
                        {"set_Edges", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DTSweepConstraint*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationPoint.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Poly2Tri::TriangulationPoint::*)()>(&::Pathfinding::Poly2Tri::TriangulationPoint::ToString)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa6b64a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationPoint.AddEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationPoint::*)(::Pathfinding::Poly2Tri::DTSweepConstraint*)>(&::Pathfinding::Poly2Tri::TriangulationPoint::AddEdge)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa6b5b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(),
                        {"AddEdge", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationPoint.get_HasEdges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Poly2Tri::TriangulationPoint::*)()>(&::Pathfinding::Poly2Tri::TriangulationPoint::get_HasEdges)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6b2d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(),
                        {"get_HasEdges", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Pathfinding::Poly2Tri::TriangulationPoint::__cordl_internal_get_X()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___X;
}
constexpr double_t const& Pathfinding::Poly2Tri::TriangulationPoint::__cordl_internal_get_X() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___X;
}
constexpr void Pathfinding::Poly2Tri::TriangulationPoint::__cordl_internal_set_X(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___X = value;
}
constexpr double_t& Pathfinding::Poly2Tri::TriangulationPoint::__cordl_internal_get_Y()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Y;
}
constexpr double_t const& Pathfinding::Poly2Tri::TriangulationPoint::__cordl_internal_get_Y() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Y;
}
constexpr void Pathfinding::Poly2Tri::TriangulationPoint::__cordl_internal_set_Y(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Y = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DTSweepConstraint*>*& Pathfinding::Poly2Tri::TriangulationPoint::__cordl_internal_get__Edges_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Edges_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DTSweepConstraint*>* const& Pathfinding::Poly2Tri::TriangulationPoint::__cordl_internal_get__Edges_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Edges_k__BackingField;
}
constexpr void Pathfinding::Poly2Tri::TriangulationPoint::__cordl_internal_set__Edges_k__BackingField(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DTSweepConstraint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Edges_k__BackingField = value;
}
inline void Pathfinding::Poly2Tri::TriangulationPoint::_ctor(double_t  x, double_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DTSweepConstraint*>* Pathfinding::Poly2Tri::TriangulationPoint::get_Edges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(),
                        {"get_Edges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DTSweepConstraint*>*>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::TriangulationPoint::set_Edges(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DTSweepConstraint*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(),
                        {"set_Edges", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DTSweepConstraint*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Pathfinding::Poly2Tri::TriangulationPoint::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::TriangulationPoint::AddEdge(::Pathfinding::Poly2Tri::DTSweepConstraint*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(),
                        {"AddEdge", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline bool Pathfinding::Poly2Tri::TriangulationPoint::get_HasEdges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(),
                        {"get_HasEdges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::TriangulationPoint* Pathfinding::Poly2Tri::TriangulationPoint::New_ctor(double_t  x, double_t  y)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::TriangulationPoint*>(x, y));
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint::TriangulationPoint()   {
}
