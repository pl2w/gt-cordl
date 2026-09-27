#pragma once
// IWYU pragma private; include "CjLib/DrawSphere.hpp"
#include "CjLib/zzzz__DrawBase_impl.hpp"
#include "CjLib/zzzz__DrawSphere_def.hpp"
#include "CjLib/zzzz__DebugUtil_Style_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::CjLib::DrawSphere.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawSphere::*)()>(&::CjLib::DrawSphere::OnValidate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5de2ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawSphere*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawSphere.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawSphere::*)(::UnityEngine::Color, ::GlobalNamespace::DebugUtil_Style, bool)>(&::CjLib::DrawSphere::Draw)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5de2b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CjLib::DrawSphere*>(),
                    {::i2c::class_of<::CjLib::DrawSphere*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawSphere._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawSphere::*)()>(&::CjLib::DrawSphere::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5de2fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawSphere*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& CjLib::DrawSphere::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& CjLib::DrawSphere::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void CjLib::DrawSphere::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr int32_t& CjLib::DrawSphere::__cordl_internal_get_LatSegments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LatSegments;
}
constexpr int32_t const& CjLib::DrawSphere::__cordl_internal_get_LatSegments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LatSegments;
}
constexpr void CjLib::DrawSphere::__cordl_internal_set_LatSegments(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LatSegments = value;
}
constexpr int32_t& CjLib::DrawSphere::__cordl_internal_get_LongSegments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LongSegments;
}
constexpr int32_t const& CjLib::DrawSphere::__cordl_internal_get_LongSegments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LongSegments;
}
constexpr void CjLib::DrawSphere::__cordl_internal_set_LongSegments(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LongSegments = value;
}
inline void CjLib::DrawSphere::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawSphere*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CjLib::DrawSphere::Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CjLib::DrawSphere*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, style, depthTest);
}
inline void CjLib::DrawSphere::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawSphere*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::DrawSphere* CjLib::DrawSphere::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::DrawSphere*>());
}
// Ctor Parameters []
constexpr ::CjLib::DrawSphere::DrawSphere()   {
}
