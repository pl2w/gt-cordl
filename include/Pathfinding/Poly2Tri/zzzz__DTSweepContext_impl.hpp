#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweepContext.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationContext_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepContext_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__AdvancingFront_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepBasin_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepEdgeEvent_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepPointComparator_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__Triangulatable_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationAlgorithm_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationConstraint_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)()>(&::Pathfinding::Poly2Tri::DTSweepContext::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa6b00c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.get_Head
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationPoint* (::Pathfinding::Poly2Tri::DTSweepContext::*)()>(&::Pathfinding::Poly2Tri::DTSweepContext::get_Head)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b5d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"get_Head", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.set_Head
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweepContext::set_Head)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b5d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"set_Head", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.get_Tail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationPoint* (::Pathfinding::Poly2Tri::DTSweepContext::*)()>(&::Pathfinding::Poly2Tri::DTSweepContext::get_Tail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b5d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"get_Tail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.set_Tail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweepContext::set_Tail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b5d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"set_Tail", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.get_IsDebugEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Poly2Tri::DTSweepContext::*)()>(&::Pathfinding::Poly2Tri::DTSweepContext::get_IsDebugEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b5d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.RemoveFromList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&::Pathfinding::Poly2Tri::DTSweepContext::RemoveFromList)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b36e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"RemoveFromList", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.MeshClean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&::Pathfinding::Poly2Tri::DTSweepContext::MeshClean)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6b3af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"MeshClean", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.MeshCleanReq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&::Pathfinding::Poly2Tri::DTSweepContext::MeshCleanReq)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa6b5d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"MeshCleanReq", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)()>(&::Pathfinding::Poly2Tri::DTSweepContext::Clear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa6b5e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.AddNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)(::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweepContext::AddNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6b3cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"AddNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.RemoveNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)(::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweepContext::RemoveNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6b5980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"RemoveNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.LocateNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::AdvancingFrontNode* (::Pathfinding::Poly2Tri::DTSweepContext::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweepContext::LocateNode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6b3afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"LocateNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.CreateAdvancingFront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)()>(&::Pathfinding::Poly2Tri::DTSweepContext::CreateAdvancingFront)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xa6b2498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"CreateAdvancingFront", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.MapTriangleToNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&::Pathfinding::Poly2Tri::DTSweepContext::MapTriangleToNodes)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa6b360c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"MapTriangleToNodes", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.PrepareTriangulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)(::Pathfinding::Poly2Tri::Triangulatable*)>(&::Pathfinding::Poly2Tri::DTSweepContext::PrepareTriangulation)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xa6b5f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.FinalizeTriangulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepContext::*)()>(&::Pathfinding::Poly2Tri::DTSweepContext::FinalizeTriangulation)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa6b3738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"FinalizeTriangulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.NewConstraint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationConstraint* (::Pathfinding::Poly2Tri::DTSweepContext::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweepContext::NewConstraint)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6b62f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepContext.get_Algorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationAlgorithm (::Pathfinding::Poly2Tri::DTSweepContext::*)()>(&::Pathfinding::Poly2Tri::DTSweepContext::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get_ALPHA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ALPHA;
}
constexpr float_t const& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get_ALPHA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ALPHA;
}
constexpr void Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_set_ALPHA(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ALPHA = value;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFront*& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get_Front()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Front;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFront* const& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get_Front() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Front;
}
constexpr void Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_set_Front(::Pathfinding::Poly2Tri::AdvancingFront*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Front = value;
}
constexpr ::Pathfinding::Poly2Tri::DTSweepBasin*& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get_Basin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Basin;
}
constexpr ::Pathfinding::Poly2Tri::DTSweepBasin* const& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get_Basin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Basin;
}
constexpr void Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_set_Basin(::Pathfinding::Poly2Tri::DTSweepBasin*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Basin = value;
}
constexpr ::Pathfinding::Poly2Tri::DTSweepEdgeEvent*& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get_EdgeEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EdgeEvent;
}
constexpr ::Pathfinding::Poly2Tri::DTSweepEdgeEvent* const& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get_EdgeEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EdgeEvent;
}
constexpr void Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_set_EdgeEvent(::Pathfinding::Poly2Tri::DTSweepEdgeEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EdgeEvent = value;
}
constexpr ::Pathfinding::Poly2Tri::DTSweepPointComparator*& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get__comparator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparator;
}
constexpr ::Pathfinding::Poly2Tri::DTSweepPointComparator* const& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get__comparator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparator;
}
constexpr void Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_set__comparator(::Pathfinding::Poly2Tri::DTSweepPointComparator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____comparator = value;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get__Head_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Head_k__BackingField;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get__Head_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Head_k__BackingField;
}
constexpr void Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_set__Head_k__BackingField(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Head_k__BackingField = value;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get__Tail_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tail_k__BackingField;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_get__Tail_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tail_k__BackingField;
}
constexpr void Pathfinding::Poly2Tri::DTSweepContext::__cordl_internal_set__Tail_k__BackingField(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Tail_k__BackingField = value;
}
inline void Pathfinding::Poly2Tri::DTSweepContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::TriangulationPoint* Pathfinding::Poly2Tri::DTSweepContext::get_Head()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"get_Head", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationPoint*>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::set_Head(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"set_Head", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Poly2Tri::TriangulationPoint* Pathfinding::Poly2Tri::DTSweepContext::get_Tail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"get_Tail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationPoint*>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::set_Tail(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"set_Tail", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::Poly2Tri::DTSweepContext::get_IsDebugEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::RemoveFromList(::Pathfinding::Poly2Tri::DelaunayTriangle*  triangle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"RemoveFromList", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangle);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::MeshClean(::Pathfinding::Poly2Tri::DelaunayTriangle*  triangle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"MeshClean", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangle);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::MeshCleanReq(::Pathfinding::Poly2Tri::DelaunayTriangle*  triangle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"MeshCleanReq", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangle);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::AddNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"AddNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::RemoveNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"RemoveNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* Pathfinding::Poly2Tri::DTSweepContext::LocateNode(::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"LocateNode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(this, ___internal_method, point);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::CreateAdvancingFront()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"CreateAdvancingFront", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::MapTriangleToNodes(::Pathfinding::Poly2Tri::DelaunayTriangle*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"MapTriangleToNodes", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::PrepareTriangulation(::Pathfinding::Poly2Tri::Triangulatable*  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void Pathfinding::Poly2Tri::DTSweepContext::FinalizeTriangulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(),
                        {"FinalizeTriangulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::TriangulationConstraint* Pathfinding::Poly2Tri::DTSweepContext::NewConstraint(::Pathfinding::Poly2Tri::TriangulationPoint*  a, ::Pathfinding::Poly2Tri::TriangulationPoint*  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationConstraint*>(this, ___internal_method, a, b);
}
inline ::Pathfinding::Poly2Tri::TriangulationAlgorithm Pathfinding::Poly2Tri::DTSweepContext::get_Algorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationAlgorithm>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::DTSweepContext* Pathfinding::Poly2Tri::DTSweepContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::DTSweepContext*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::DTSweepContext::DTSweepContext()   {
}
