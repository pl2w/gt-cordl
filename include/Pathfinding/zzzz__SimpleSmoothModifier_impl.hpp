#pragma once
// IWYU pragma private; include "Pathfinding/SimpleSmoothModifier.hpp"
#include "Pathfinding/zzzz__MonoModifier_impl.hpp"
#include "Pathfinding/zzzz__SimpleSmoothModifier_SmoothType_impl.hpp"
#include "Pathfinding/zzzz__SimpleSmoothModifier_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__SimpleSmoothModifier_SmoothType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::SimpleSmoothModifier.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::SimpleSmoothModifier::*)()>(&::Pathfinding::SimpleSmoothModifier::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea410c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                    {::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SimpleSmoothModifier.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::SimpleSmoothModifier::*)(::Pathfinding::Path*)>(&::Pathfinding::SimpleSmoothModifier::Apply)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5ea4114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                    {::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SimpleSmoothModifier.CurvedNonuniform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (::Pathfinding::SimpleSmoothModifier::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Pathfinding::SimpleSmoothModifier::CurvedNonuniform)> {
  constexpr static std::size_t size = 0x884;
  constexpr static std::size_t addrs = 0x5ea54b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {"CurvedNonuniform", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SimpleSmoothModifier.GetPointOnCubic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Pathfinding::SimpleSmoothModifier::GetPointOnCubic)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ea5d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {"GetPointOnCubic", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SimpleSmoothModifier.SmoothOffsetSimple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (::Pathfinding::SimpleSmoothModifier::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Pathfinding::SimpleSmoothModifier::SmoothOffsetSimple)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x5ea4c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {"SmoothOffsetSimple", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SimpleSmoothModifier.SmoothSimple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (::Pathfinding::SimpleSmoothModifier::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Pathfinding::SimpleSmoothModifier::SmoothSimple)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x5ea4264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {"SmoothSimple", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SimpleSmoothModifier.SmoothBezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (::Pathfinding::SimpleSmoothModifier::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Pathfinding::SimpleSmoothModifier::SmoothBezier)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5ea48d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {"SmoothBezier", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::SimpleSmoothModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::SimpleSmoothModifier::*)()>(&::Pathfinding::SimpleSmoothModifier::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ea5dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SimpleSmoothModifier_SmoothType& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_smoothType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothType;
}
constexpr ::GlobalNamespace::SimpleSmoothModifier_SmoothType const& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_smoothType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothType;
}
constexpr void Pathfinding::SimpleSmoothModifier::__cordl_internal_set_smoothType(::GlobalNamespace::SimpleSmoothModifier_SmoothType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothType = value;
}
constexpr int32_t& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_subdivisions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisions;
}
constexpr int32_t const& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_subdivisions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisions;
}
constexpr void Pathfinding::SimpleSmoothModifier::__cordl_internal_set_subdivisions(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subdivisions = value;
}
constexpr int32_t& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_iterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterations;
}
constexpr int32_t const& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_iterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterations;
}
constexpr void Pathfinding::SimpleSmoothModifier::__cordl_internal_set_iterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iterations = value;
}
constexpr float_t& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_strength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr float_t const& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_strength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr void Pathfinding::SimpleSmoothModifier::__cordl_internal_set_strength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strength = value;
}
constexpr bool& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_uniformLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniformLength;
}
constexpr bool const& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_uniformLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniformLength;
}
constexpr void Pathfinding::SimpleSmoothModifier::__cordl_internal_set_uniformLength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uniformLength = value;
}
constexpr float_t& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_maxSegmentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSegmentLength;
}
constexpr float_t const& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_maxSegmentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSegmentLength;
}
constexpr void Pathfinding::SimpleSmoothModifier::__cordl_internal_set_maxSegmentLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSegmentLength = value;
}
constexpr float_t& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_bezierTangentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bezierTangentLength;
}
constexpr float_t const& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_bezierTangentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bezierTangentLength;
}
constexpr void Pathfinding::SimpleSmoothModifier::__cordl_internal_set_bezierTangentLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bezierTangentLength = value;
}
constexpr float_t& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr float_t const& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void Pathfinding::SimpleSmoothModifier::__cordl_internal_set_offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr float_t& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_factor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factor;
}
constexpr float_t const& Pathfinding::SimpleSmoothModifier::__cordl_internal_get_factor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factor;
}
constexpr void Pathfinding::SimpleSmoothModifier::__cordl_internal_set_factor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___factor = value;
}
inline int32_t Pathfinding::SimpleSmoothModifier::get_Order()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::SimpleSmoothModifier::Apply(::Pathfinding::Path*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::SimpleSmoothModifier::CurvedNonuniform(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {"CurvedNonuniform", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(this, ___internal_method, path);
}
inline ::UnityEngine::Vector3 Pathfinding::SimpleSmoothModifier::GetPointOnCubic(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  tan1, ::UnityEngine::Vector3  tan2, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {"GetPointOnCubic", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b, tan1, tan2, t);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::SimpleSmoothModifier::SmoothOffsetSimple(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {"SmoothOffsetSimple", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(this, ___internal_method, path);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::SimpleSmoothModifier::SmoothSimple(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {"SmoothSimple", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(this, ___internal_method, path);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::SimpleSmoothModifier::SmoothBezier(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {"SmoothBezier", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(this, ___internal_method, path);
}
inline void Pathfinding::SimpleSmoothModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::SimpleSmoothModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::SimpleSmoothModifier* Pathfinding::SimpleSmoothModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::SimpleSmoothModifier*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::SimpleSmoothModifier::SimpleSmoothModifier()   {
}
