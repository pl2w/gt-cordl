#pragma once
// IWYU pragma private; include "CjLib/DrawBox.hpp"
#include "CjLib/zzzz__DrawBase_impl.hpp"
#include "CjLib/zzzz__DrawBox_def.hpp"
#include "CjLib/zzzz__DebugUtil_Style_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::CjLib::DrawBox.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawBox::*)()>(&::CjLib::DrawBox::OnValidate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5de1f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawBox*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawBox.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawBox::*)(::UnityEngine::Color, ::GlobalNamespace::DebugUtil_Style, bool)>(&::CjLib::DrawBox::Draw)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5de1f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CjLib::DrawBox*>(),
                    {::i2c::class_of<::CjLib::DrawBox*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawBox::*)()>(&::CjLib::DrawBox::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5de2238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawBox*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& CjLib::DrawBox::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& CjLib::DrawBox::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void CjLib::DrawBox::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr int32_t& CjLib::DrawBox::__cordl_internal_get_NumSegments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumSegments;
}
constexpr int32_t const& CjLib::DrawBox::__cordl_internal_get_NumSegments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumSegments;
}
constexpr void CjLib::DrawBox::__cordl_internal_set_NumSegments(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumSegments = value;
}
constexpr float_t& CjLib::DrawBox::__cordl_internal_get_StartAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartAngle;
}
constexpr float_t const& CjLib::DrawBox::__cordl_internal_get_StartAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartAngle;
}
constexpr void CjLib::DrawBox::__cordl_internal_set_StartAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartAngle = value;
}
constexpr float_t& CjLib::DrawBox::__cordl_internal_get_ArcAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ArcAngle;
}
constexpr float_t const& CjLib::DrawBox::__cordl_internal_get_ArcAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ArcAngle;
}
constexpr void CjLib::DrawBox::__cordl_internal_set_ArcAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ArcAngle = value;
}
inline void CjLib::DrawBox::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawBox*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CjLib::DrawBox::Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CjLib::DrawBox*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, style, depthTest);
}
inline void CjLib::DrawBox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawBox*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::DrawBox* CjLib::DrawBox::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::DrawBox*>());
}
// Ctor Parameters []
constexpr ::CjLib::DrawBox::DrawBox()   {
}
