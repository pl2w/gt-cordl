#pragma once
// IWYU pragma private; include "GlobalNamespace/Line.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Line_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Line._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Line::*)()>(&::GlobalNamespace::Line::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b14d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Line*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::Line::__cordl_internal_get_p0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___p0;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Line::__cordl_internal_get_p0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___p0;
}
constexpr void GlobalNamespace::Line::__cordl_internal_set_p0(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___p0 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Line::__cordl_internal_get_p1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___p1;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Line::__cordl_internal_get_p1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___p1;
}
constexpr void GlobalNamespace::Line::__cordl_internal_set_p1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___p1 = value;
}
inline void GlobalNamespace::Line::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Line*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Line* GlobalNamespace::Line::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Line*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Line::Line()   {
}
