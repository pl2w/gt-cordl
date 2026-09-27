#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TextureArrayResultMaterial.hpp"
#include "GlobalNamespace/zzzz__MB_AtlasesAndRects_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MB_TextureArrayResultMaterial_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_TextureArrayResultMaterial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_TextureArrayResultMaterial::*)()>(&::GlobalNamespace::MB_TextureArrayResultMaterial::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d72244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayResultMaterial*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>& GlobalNamespace::MB_TextureArrayResultMaterial::__cordl_internal_get_slices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slices;
}
constexpr ::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*> const& GlobalNamespace::MB_TextureArrayResultMaterial::__cordl_internal_get_slices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slices;
}
constexpr void GlobalNamespace::MB_TextureArrayResultMaterial::__cordl_internal_set_slices(::ArrayW<::GlobalNamespace::MB_AtlasesAndRects*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slices = value;
}
inline void GlobalNamespace::MB_TextureArrayResultMaterial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_TextureArrayResultMaterial*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_TextureArrayResultMaterial* GlobalNamespace::MB_TextureArrayResultMaterial::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_TextureArrayResultMaterial*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_TextureArrayResultMaterial::MB_TextureArrayResultMaterial()   {
}
