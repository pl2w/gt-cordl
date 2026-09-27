#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/TriangulationContext.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepDebugContext_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__Triangulatable_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationAlgorithm_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationConstraint_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationDebugContext_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationMode_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationContext::*)()>(&::Pathfinding::Poly2Tri::TriangulationContext::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa6b5c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.get_DebugContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationDebugContext* (::Pathfinding::Poly2Tri::TriangulationContext::*)()>(&::Pathfinding::Poly2Tri::TriangulationContext::get_DebugContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"get_DebugContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.get_TriangulationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationMode (::Pathfinding::Poly2Tri::TriangulationContext::*)()>(&::Pathfinding::Poly2Tri::TriangulationContext::get_TriangulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"get_TriangulationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.set_TriangulationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationContext::*)(::Pathfinding::Poly2Tri::TriangulationMode)>(&::Pathfinding::Poly2Tri::TriangulationContext::set_TriangulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"set_TriangulationMode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.get_Triangulatable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::Triangulatable* (::Pathfinding::Poly2Tri::TriangulationContext::*)()>(&::Pathfinding::Poly2Tri::TriangulationContext::get_Triangulatable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"get_Triangulatable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.set_Triangulatable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationContext::*)(::Pathfinding::Poly2Tri::Triangulatable*)>(&::Pathfinding::Poly2Tri::TriangulationContext::set_Triangulatable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"set_Triangulatable", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::Triangulatable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.get_StepCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Poly2Tri::TriangulationContext::*)()>(&::Pathfinding::Poly2Tri::TriangulationContext::get_StepCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"get_StepCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.set_StepCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationContext::*)(int32_t)>(&::Pathfinding::Poly2Tri::TriangulationContext::set_StepCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"set_StepCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationContext::*)()>(&::Pathfinding::Poly2Tri::TriangulationContext::Done)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6b2c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"Done", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.get_Algorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationAlgorithm (::Pathfinding::Poly2Tri::TriangulationContext::*)()>(&::Pathfinding::Poly2Tri::TriangulationContext::get_Algorithm)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.PrepareTriangulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationContext::*)(::Pathfinding::Poly2Tri::Triangulatable*)>(&::Pathfinding::Poly2Tri::TriangulationContext::PrepareTriangulation)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa6b61dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.NewConstraint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationConstraint* (::Pathfinding::Poly2Tri::TriangulationContext::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::TriangulationContext::NewConstraint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationContext::*)(::StringW)>(&::Pathfinding::Poly2Tri::TriangulationContext::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6b300c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"Update", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationContext::*)()>(&::Pathfinding::Poly2Tri::TriangulationContext::Clear)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa6b5ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.get_IsDebugEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Poly2Tri::TriangulationContext::*)()>(&::Pathfinding::Poly2Tri::TriangulationContext::get_IsDebugEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationContext.get_DTDebugContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::DTSweepDebugContext* (::Pathfinding::Poly2Tri::TriangulationContext::*)()>(&::Pathfinding::Poly2Tri::TriangulationContext::get_DTDebugContext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa6b2d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"get_DTDebugContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get_Triangles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Triangles;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>* const& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get_Triangles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Triangles;
}
constexpr void Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_set_Triangles(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Triangles = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get_Points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Points;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* const& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get_Points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Points;
}
constexpr void Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_set_Points(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Points = value;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationDebugContext*& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get__DebugContext_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugContext_k__BackingField;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationDebugContext* const& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get__DebugContext_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugContext_k__BackingField;
}
constexpr void Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_set__DebugContext_k__BackingField(::Pathfinding::Poly2Tri::TriangulationDebugContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DebugContext_k__BackingField = value;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationMode& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get__TriangulationMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TriangulationMode_k__BackingField;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationMode const& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get__TriangulationMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TriangulationMode_k__BackingField;
}
constexpr void Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_set__TriangulationMode_k__BackingField(::Pathfinding::Poly2Tri::TriangulationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TriangulationMode_k__BackingField = value;
}
constexpr ::Pathfinding::Poly2Tri::Triangulatable*& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get__Triangulatable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Triangulatable_k__BackingField;
}
constexpr ::Pathfinding::Poly2Tri::Triangulatable* const& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get__Triangulatable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Triangulatable_k__BackingField;
}
constexpr void Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_set__Triangulatable_k__BackingField(::Pathfinding::Poly2Tri::Triangulatable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Triangulatable_k__BackingField = value;
}
constexpr int32_t& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get__StepCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StepCount_k__BackingField;
}
constexpr int32_t const& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get__StepCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StepCount_k__BackingField;
}
constexpr void Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_set__StepCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StepCount_k__BackingField = value;
}
constexpr bool& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get__IsDebugEnabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDebugEnabled_k__BackingField;
}
constexpr bool const& Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_get__IsDebugEnabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDebugEnabled_k__BackingField;
}
constexpr void Pathfinding::Poly2Tri::TriangulationContext::__cordl_internal_set__IsDebugEnabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDebugEnabled_k__BackingField = value;
}
inline void Pathfinding::Poly2Tri::TriangulationContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::TriangulationDebugContext* Pathfinding::Poly2Tri::TriangulationContext::get_DebugContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"get_DebugContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationDebugContext*>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::TriangulationMode Pathfinding::Poly2Tri::TriangulationContext::get_TriangulationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"get_TriangulationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationMode>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::TriangulationContext::set_TriangulationMode(::Pathfinding::Poly2Tri::TriangulationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"set_TriangulationMode", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Poly2Tri::Triangulatable* Pathfinding::Poly2Tri::TriangulationContext::get_Triangulatable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"get_Triangulatable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::Triangulatable*>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::TriangulationContext::set_Triangulatable(::Pathfinding::Poly2Tri::Triangulatable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"set_Triangulatable", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::Triangulatable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::Poly2Tri::TriangulationContext::get_StepCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"get_StepCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::TriangulationContext::set_StepCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"set_StepCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Poly2Tri::TriangulationContext::Done()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"Done", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::TriangulationAlgorithm Pathfinding::Poly2Tri::TriangulationContext::get_Algorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationAlgorithm>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::TriangulationContext::PrepareTriangulation(::Pathfinding::Poly2Tri::Triangulatable*  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::Pathfinding::Poly2Tri::TriangulationConstraint* Pathfinding::Poly2Tri::TriangulationContext::NewConstraint(::Pathfinding::Poly2Tri::TriangulationPoint*  a, ::Pathfinding::Poly2Tri::TriangulationPoint*  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationConstraint*>(this, ___internal_method, a, b);
}
inline void Pathfinding::Poly2Tri::TriangulationContext::Update(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"Update", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Pathfinding::Poly2Tri::TriangulationContext::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Poly2Tri::TriangulationContext::get_IsDebugEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::DTSweepDebugContext* Pathfinding::Poly2Tri::TriangulationContext::get_DTDebugContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationContext*>(),
                        {"get_DTDebugContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::DTSweepDebugContext*>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::TriangulationContext* Pathfinding::Poly2Tri::TriangulationContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::TriangulationContext*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::TriangulationContext::TriangulationContext()   {
}
