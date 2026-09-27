#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightFilter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryLightFilter_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakeryLightFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryLightFilter::*)()>(&::GlobalNamespace::BakeryLightFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2769c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BakeryLightFilter::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BakeryLightFilter::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void GlobalNamespace::BakeryLightFilter::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightFilter::__cordl_internal_get_lmid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lmid;
}
constexpr int32_t const& GlobalNamespace::BakeryLightFilter::__cordl_internal_get_lmid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lmid;
}
constexpr void GlobalNamespace::BakeryLightFilter::__cordl_internal_set_lmid(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lmid = value;
}
inline void GlobalNamespace::BakeryLightFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakeryLightFilter* GlobalNamespace::BakeryLightFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakeryLightFilter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakeryLightFilter::BakeryLightFilter()   {
}
