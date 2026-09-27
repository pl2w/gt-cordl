#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_SpriteFrame.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_SpriteFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame::*)()>(&::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame::ToString)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xb3aea2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame>(),
                    {::i2c::class_of<::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::TexturePacker_JsonArray_SpriteFrame::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame::TexturePacker_JsonArray_SpriteFrame(float_t  x, float_t  y, float_t  w, float_t  h) noexcept  {
this->x = x;
this->y = y;
this->w = w;
this->h = h;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame::TexturePacker_JsonArray_SpriteFrame()   {
}
