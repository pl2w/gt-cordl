#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TexArraySliceRendererMatPair.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TexArraySliceRendererMatPair_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_TexArraySliceRendererMatPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_TexArraySliceRendererMatPair::*)()>(&::GlobalNamespace::MB_TexArraySliceRendererMatPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d722d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MB_TexArraySliceRendererMatPair::__cordl_internal_get_sourceMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MB_TexArraySliceRendererMatPair::__cordl_internal_get_sourceMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMaterial;
}
constexpr void GlobalNamespace::MB_TexArraySliceRendererMatPair::__cordl_internal_set_sourceMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMaterial = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB_TexArraySliceRendererMatPair::__cordl_internal_get_renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB_TexArraySliceRendererMatPair::__cordl_internal_get_renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr void GlobalNamespace::MB_TexArraySliceRendererMatPair::__cordl_internal_set_renderer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderer = value;
}
inline void GlobalNamespace::MB_TexArraySliceRendererMatPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_TexArraySliceRendererMatPair* GlobalNamespace::MB_TexArraySliceRendererMatPair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_TexArraySliceRendererMatPair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_TexArraySliceRendererMatPair::MB_TexArraySliceRendererMatPair()   {
}
