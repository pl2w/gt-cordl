#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerPipeline_CreateAtlasForProperty.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPipeline_CreateAtlasForProperty_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty::*)()>(&::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9de3db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "allTexturesAreNull", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allTexturesAreSame", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allNonTexturePropsAreSame", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allSrcMatsOmittedTextureProperty", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty::MB3_TextureCombinerPipeline_CreateAtlasForProperty(bool  allTexturesAreNull, bool  allTexturesAreSame, bool  allNonTexturePropsAreSame, bool  allSrcMatsOmittedTextureProperty) noexcept  {
this->allTexturesAreNull = allTexturesAreNull;
this->allTexturesAreSame = allTexturesAreSame;
this->allNonTexturePropsAreSame = allNonTexturePropsAreSame;
this->allSrcMatsOmittedTextureProperty = allSrcMatsOmittedTextureProperty;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_TextureCombinerPipeline_CreateAtlasForProperty::MB3_TextureCombinerPipeline_CreateAtlasForProperty()   {
}
