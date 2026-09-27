#pragma once
// IWYU pragma private; include "CjLib/DrawCircle.hpp"
#include "CjLib/zzzz__DrawBase_impl.hpp"
#include "CjLib/zzzz__DrawCircle_def.hpp"
#include "CjLib/zzzz__DebugUtil_Style_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::CjLib::DrawCircle.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawCircle::*)()>(&::CjLib::DrawCircle::OnValidate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5de2250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawCircle*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawCircle.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawCircle::*)(::UnityEngine::Color, ::GlobalNamespace::DebugUtil_Style, bool)>(&::CjLib::DrawCircle::Draw)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5de2274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CjLib::DrawCircle*>(),
                    {::i2c::class_of<::CjLib::DrawCircle*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawCircle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawCircle::*)()>(&::CjLib::DrawCircle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5de266c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawCircle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& CjLib::DrawCircle::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& CjLib::DrawCircle::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void CjLib::DrawCircle::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr int32_t& CjLib::DrawCircle::__cordl_internal_get_NumSegments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumSegments;
}
constexpr int32_t const& CjLib::DrawCircle::__cordl_internal_get_NumSegments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumSegments;
}
constexpr void CjLib::DrawCircle::__cordl_internal_set_NumSegments(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumSegments = value;
}
inline void CjLib::DrawCircle::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawCircle*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CjLib::DrawCircle::Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CjLib::DrawCircle*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, style, depthTest);
}
inline void CjLib::DrawCircle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawCircle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::DrawCircle* CjLib::DrawCircle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::DrawCircle*>());
}
// Ctor Parameters []
constexpr ::CjLib::DrawCircle::DrawCircle()   {
}
