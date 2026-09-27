#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_SpriteSize.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_SpriteSize_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TexturePacker_JsonArray_SpriteSize.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TexturePacker_JsonArray_SpriteSize::*)()>(&::GlobalNamespace::TexturePacker_JsonArray_SpriteSize::ToString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb3aec34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TexturePacker_JsonArray_SpriteSize>(),
                    {::i2c::class_of<::GlobalNamespace::TexturePacker_JsonArray_SpriteSize>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::TexturePacker_JsonArray_SpriteSize::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TexturePacker_JsonArray_SpriteSize>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TexturePacker_JsonArray_SpriteSize::TexturePacker_JsonArray_SpriteSize(float_t  w, float_t  h) noexcept  {
this->w = w;
this->h = h;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TexturePacker_JsonArray_SpriteSize::TexturePacker_JsonArray_SpriteSize()   {
}
