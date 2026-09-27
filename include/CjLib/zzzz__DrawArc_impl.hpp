#pragma once
// IWYU pragma private; include "CjLib/DrawArc.hpp"
#include "CjLib/zzzz__DrawBase_impl.hpp"
#include "CjLib/zzzz__DrawArc_def.hpp"
#include "CjLib/zzzz__DebugUtil_Style_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::CjLib::DrawArc.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawArc::*)()>(&::CjLib::DrawArc::OnValidate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5de1134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawArc*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawArc.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawArc::*)(::UnityEngine::Color, ::GlobalNamespace::DebugUtil_Style, bool)>(&::CjLib::DrawArc::Draw)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5de1164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CjLib::DrawArc*>(),
                    {::i2c::class_of<::CjLib::DrawArc*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawArc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawArc::*)()>(&::CjLib::DrawArc::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5de1720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawArc*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& CjLib::DrawArc::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& CjLib::DrawArc::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void CjLib::DrawArc::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr int32_t& CjLib::DrawArc::__cordl_internal_get_NumSegments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumSegments;
}
constexpr int32_t const& CjLib::DrawArc::__cordl_internal_get_NumSegments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumSegments;
}
constexpr void CjLib::DrawArc::__cordl_internal_set_NumSegments(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumSegments = value;
}
constexpr float_t& CjLib::DrawArc::__cordl_internal_get_StartAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartAngle;
}
constexpr float_t const& CjLib::DrawArc::__cordl_internal_get_StartAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartAngle;
}
constexpr void CjLib::DrawArc::__cordl_internal_set_StartAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartAngle = value;
}
constexpr float_t& CjLib::DrawArc::__cordl_internal_get_ArcAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ArcAngle;
}
constexpr float_t const& CjLib::DrawArc::__cordl_internal_get_ArcAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ArcAngle;
}
constexpr void CjLib::DrawArc::__cordl_internal_set_ArcAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ArcAngle = value;
}
inline void CjLib::DrawArc::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawArc*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CjLib::DrawArc::Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CjLib::DrawArc*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, style, depthTest);
}
inline void CjLib::DrawArc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawArc*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::DrawArc* CjLib::DrawArc::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::DrawArc*>());
}
// Ctor Parameters []
constexpr ::CjLib::DrawArc::DrawArc()   {
}
