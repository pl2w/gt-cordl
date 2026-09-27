#pragma once
// IWYU pragma private; include "CjLib/DrawArrow.hpp"
#include "CjLib/zzzz__DrawBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "CjLib/zzzz__DrawArrow_def.hpp"
#include "CjLib/zzzz__DebugUtil_Style_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::CjLib::DrawArrow.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawArrow::*)()>(&::CjLib::DrawArrow::OnValidate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5de1778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawArrow*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawArrow.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawArrow::*)(::UnityEngine::Color, ::GlobalNamespace::DebugUtil_Style, bool)>(&::CjLib::DrawArrow::Draw)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5de17b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CjLib::DrawArrow*>(),
                    {::i2c::class_of<::CjLib::DrawArrow*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawArrow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawArrow::*)()>(&::CjLib::DrawArrow::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5de1e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawArrow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& CjLib::DrawArrow::__cordl_internal_get_LocalEndVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalEndVector;
}
constexpr ::UnityEngine::Vector3 const& CjLib::DrawArrow::__cordl_internal_get_LocalEndVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalEndVector;
}
constexpr void CjLib::DrawArrow::__cordl_internal_set_LocalEndVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalEndVector = value;
}
constexpr float_t& CjLib::DrawArrow::__cordl_internal_get_ConeRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConeRadius;
}
constexpr float_t const& CjLib::DrawArrow::__cordl_internal_get_ConeRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConeRadius;
}
constexpr void CjLib::DrawArrow::__cordl_internal_set_ConeRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConeRadius = value;
}
constexpr float_t& CjLib::DrawArrow::__cordl_internal_get_ConeHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConeHeight;
}
constexpr float_t const& CjLib::DrawArrow::__cordl_internal_get_ConeHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConeHeight;
}
constexpr void CjLib::DrawArrow::__cordl_internal_set_ConeHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConeHeight = value;
}
constexpr float_t& CjLib::DrawArrow::__cordl_internal_get_StemThickness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StemThickness;
}
constexpr float_t const& CjLib::DrawArrow::__cordl_internal_get_StemThickness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StemThickness;
}
constexpr void CjLib::DrawArrow::__cordl_internal_set_StemThickness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StemThickness = value;
}
constexpr int32_t& CjLib::DrawArrow::__cordl_internal_get_NumSegments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumSegments;
}
constexpr int32_t const& CjLib::DrawArrow::__cordl_internal_get_NumSegments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumSegments;
}
constexpr void CjLib::DrawArrow::__cordl_internal_set_NumSegments(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumSegments = value;
}
inline void CjLib::DrawArrow::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawArrow*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CjLib::DrawArrow::Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CjLib::DrawArrow*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, style, depthTest);
}
inline void CjLib::DrawArrow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawArrow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::DrawArrow* CjLib::DrawArrow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::DrawArrow*>());
}
// Ctor Parameters []
constexpr ::CjLib::DrawArrow::DrawArrow()   {
}
