#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/AdvancingFront.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__AdvancingFront_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::AdvancingFront._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::AdvancingFront::*)(::Pathfinding::Poly2Tri::AdvancingFrontNode*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::AdvancingFront::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa6b2168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::AdvancingFront.AddNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::AdvancingFront::*)(::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::AdvancingFront::AddNode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6b21bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"AddNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::AdvancingFront.RemoveNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::AdvancingFront::*)(::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::AdvancingFront::RemoveNode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6b21c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"RemoveNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::AdvancingFront.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Poly2Tri::AdvancingFront::*)()>(&::Pathfinding::Poly2Tri::AdvancingFront::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa6b21c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::AdvancingFront.FindSearchNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::AdvancingFrontNode* (::Pathfinding::Poly2Tri::AdvancingFront::*)(double_t)>(&::Pathfinding::Poly2Tri::AdvancingFront::FindSearchNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b22b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"FindSearchNode", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::AdvancingFront.LocateNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::AdvancingFrontNode* (::Pathfinding::Poly2Tri::AdvancingFront::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::AdvancingFront::LocateNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6b22b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"LocateNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::AdvancingFront.LocateNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::AdvancingFrontNode* (::Pathfinding::Poly2Tri::AdvancingFront::*)(double_t)>(&::Pathfinding::Poly2Tri::AdvancingFront::LocateNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa6b22cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"LocateNode", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::AdvancingFront.LocatePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::AdvancingFrontNode* (::Pathfinding::Poly2Tri::AdvancingFront::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::AdvancingFront::LocatePoint)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa6b233c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"LocatePoint", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& Pathfinding::Poly2Tri::AdvancingFront::__cordl_internal_get_Head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Head;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& Pathfinding::Poly2Tri::AdvancingFront::__cordl_internal_get_Head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Head;
}
constexpr void Pathfinding::Poly2Tri::AdvancingFront::__cordl_internal_set_Head(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Head = value;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& Pathfinding::Poly2Tri::AdvancingFront::__cordl_internal_get_Tail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tail;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& Pathfinding::Poly2Tri::AdvancingFront::__cordl_internal_get_Tail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tail;
}
constexpr void Pathfinding::Poly2Tri::AdvancingFront::__cordl_internal_set_Tail(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tail = value;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& Pathfinding::Poly2Tri::AdvancingFront::__cordl_internal_get_Search()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Search;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& Pathfinding::Poly2Tri::AdvancingFront::__cordl_internal_get_Search() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Search;
}
constexpr void Pathfinding::Poly2Tri::AdvancingFront::__cordl_internal_set_Search(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Search = value;
}
inline void Pathfinding::Poly2Tri::AdvancingFront::_ctor(::Pathfinding::Poly2Tri::AdvancingFrontNode*  head, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  tail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, head, tail);
}
inline void Pathfinding::Poly2Tri::AdvancingFront::AddNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"AddNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::Poly2Tri::AdvancingFront::RemoveNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"RemoveNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::StringW Pathfinding::Poly2Tri::AdvancingFront::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* Pathfinding::Poly2Tri::AdvancingFront::FindSearchNode(double_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"FindSearchNode", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(this, ___internal_method, x);
}
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* Pathfinding::Poly2Tri::AdvancingFront::LocateNode(::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"LocateNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(this, ___internal_method, point);
}
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* Pathfinding::Poly2Tri::AdvancingFront::LocateNode(double_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"LocateNode", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(this, ___internal_method, x);
}
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* Pathfinding::Poly2Tri::AdvancingFront::LocatePoint(::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFront*>(),
                        {"LocatePoint", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(this, ___internal_method, point);
}
inline ::Pathfinding::Poly2Tri::AdvancingFront* Pathfinding::Poly2Tri::AdvancingFront::New_ctor(::Pathfinding::Poly2Tri::AdvancingFrontNode*  head, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  tail)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::AdvancingFront*>(head, tail));
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::AdvancingFront::AdvancingFront()   {
}
