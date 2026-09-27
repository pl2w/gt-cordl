#pragma once
// IWYU pragma private; include "CjLib/DrawBase.hpp"
#include "CjLib/zzzz__DebugUtil_Style_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "CjLib/zzzz__DrawBase_def.hpp"
#include "CjLib/zzzz__DebugUtil_Style_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::CjLib::DrawBase.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawBase::*)()>(&::CjLib::DrawBase::Update)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5de1ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawBase*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawBase.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawBase::*)(::UnityEngine::Color, ::GlobalNamespace::DebugUtil_Style, bool)>(&::CjLib::DrawBase::Draw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CjLib::DrawBase*>(),
                    {::i2c::class_of<::CjLib::DrawBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DrawBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DrawBase::*)()>(&::CjLib::DrawBase::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5de1738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& CjLib::DrawBase::__cordl_internal_get_WireframeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WireframeColor;
}
constexpr ::UnityEngine::Color const& CjLib::DrawBase::__cordl_internal_get_WireframeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WireframeColor;
}
constexpr void CjLib::DrawBase::__cordl_internal_set_WireframeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WireframeColor = value;
}
constexpr ::UnityEngine::Color& CjLib::DrawBase::__cordl_internal_get_ShadededColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShadededColor;
}
constexpr ::UnityEngine::Color const& CjLib::DrawBase::__cordl_internal_get_ShadededColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShadededColor;
}
constexpr void CjLib::DrawBase::__cordl_internal_set_ShadededColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShadededColor = value;
}
constexpr bool& CjLib::DrawBase::__cordl_internal_get_Wireframe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Wireframe;
}
constexpr bool const& CjLib::DrawBase::__cordl_internal_get_Wireframe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Wireframe;
}
constexpr void CjLib::DrawBase::__cordl_internal_set_Wireframe(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Wireframe = value;
}
constexpr ::GlobalNamespace::DebugUtil_Style& CjLib::DrawBase::__cordl_internal_get_Style()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Style;
}
constexpr ::GlobalNamespace::DebugUtil_Style const& CjLib::DrawBase::__cordl_internal_get_Style() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Style;
}
constexpr void CjLib::DrawBase::__cordl_internal_set_Style(::GlobalNamespace::DebugUtil_Style  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Style = value;
}
constexpr bool& CjLib::DrawBase::__cordl_internal_get_DepthTest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DepthTest;
}
constexpr bool const& CjLib::DrawBase::__cordl_internal_get_DepthTest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DepthTest;
}
constexpr void CjLib::DrawBase::__cordl_internal_set_DepthTest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DepthTest = value;
}
inline void CjLib::DrawBase::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawBase*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CjLib::DrawBase::Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CjLib::DrawBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, style, depthTest);
}
inline void CjLib::DrawBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DrawBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::DrawBase* CjLib::DrawBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::DrawBase*>());
}
// Ctor Parameters []
constexpr ::CjLib::DrawBase::DrawBase()   {
}
