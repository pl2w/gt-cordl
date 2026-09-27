#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/TriangleBucket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__TriangleBucket_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/zzzz__Triangle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleBucket.get_Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Technie::PhysicsCreator::TriangleBucket::*)()>(&::Technie::PhysicsCreator::TriangleBucket::get_Area)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc4878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"get_Area", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleBucket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::TriangleBucket::*)(::Technie::PhysicsCreator::Triangle*)>(&::Technie::PhysicsCreator::TriangleBucket::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xadc4880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::Triangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleBucket.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::TriangleBucket::*)(::Technie::PhysicsCreator::Triangle*)>(&::Technie::PhysicsCreator::TriangleBucket::Add)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xadc4d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"Add", {}, {::i2c::type_of<::Technie::PhysicsCreator::Triangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleBucket.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::TriangleBucket::*)(::Technie::PhysicsCreator::TriangleBucket*)>(&::Technie::PhysicsCreator::TriangleBucket::Add)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xadc4dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"Add", {}, {::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleBucket.CalculateNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::TriangleBucket::*)()>(&::Technie::PhysicsCreator::TriangleBucket::CalculateNormal)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xadc499c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"CalculateNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleBucket.GetAverageNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Technie::PhysicsCreator::TriangleBucket::*)()>(&::Technie::PhysicsCreator::TriangleBucket::GetAverageNormal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xadc4fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"GetAverageNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleBucket.GetAverageCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Technie::PhysicsCreator::TriangleBucket::*)()>(&::Technie::PhysicsCreator::TriangleBucket::GetAverageCenter)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadc4fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"GetAverageCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleBucket.CalcTotalArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::TriangleBucket::*)()>(&::Technie::PhysicsCreator::TriangleBucket::CalcTotalArea)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xadc4bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"CalcTotalArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>*& Technie::PhysicsCreator::TriangleBucket::__cordl_internal_get_triangles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangles;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>* const& Technie::PhysicsCreator::TriangleBucket::__cordl_internal_get_triangles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangles;
}
constexpr void Technie::PhysicsCreator::TriangleBucket::__cordl_internal_set_triangles(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triangles = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::TriangleBucket::__cordl_internal_get_averagedNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averagedNormal;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::TriangleBucket::__cordl_internal_get_averagedNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averagedNormal;
}
constexpr void Technie::PhysicsCreator::TriangleBucket::__cordl_internal_set_averagedNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___averagedNormal = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::TriangleBucket::__cordl_internal_get_averagedCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averagedCenter;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::TriangleBucket::__cordl_internal_get_averagedCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averagedCenter;
}
constexpr void Technie::PhysicsCreator::TriangleBucket::__cordl_internal_set_averagedCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___averagedCenter = value;
}
constexpr float_t& Technie::PhysicsCreator::TriangleBucket::__cordl_internal_get_totalArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalArea;
}
constexpr float_t const& Technie::PhysicsCreator::TriangleBucket::__cordl_internal_get_totalArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalArea;
}
constexpr void Technie::PhysicsCreator::TriangleBucket::__cordl_internal_set_totalArea(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalArea = value;
}
inline float_t Technie::PhysicsCreator::TriangleBucket::get_Area()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"get_Area", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::TriangleBucket::_ctor(::Technie::PhysicsCreator::Triangle*  initialTriangle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::Triangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialTriangle);
}
inline void Technie::PhysicsCreator::TriangleBucket::Add(::Technie::PhysicsCreator::Triangle*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"Add", {}, {::i2c::type_of<::Technie::PhysicsCreator::Triangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void Technie::PhysicsCreator::TriangleBucket::Add(::Technie::PhysicsCreator::TriangleBucket*  otherBucket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"Add", {}, {::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherBucket);
}
inline void Technie::PhysicsCreator::TriangleBucket::CalculateNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"CalculateNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Technie::PhysicsCreator::TriangleBucket::GetAverageNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"GetAverageNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Technie::PhysicsCreator::TriangleBucket::GetAverageCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"GetAverageCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::TriangleBucket::CalcTotalArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucket*>(),
                        {"CalcTotalArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::TriangleBucket* Technie::PhysicsCreator::TriangleBucket::New_ctor(::Technie::PhysicsCreator::Triangle*  initialTriangle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::TriangleBucket*>(initialTriangle));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::TriangleBucket::TriangleBucket()   {
}
