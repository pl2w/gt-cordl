#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/UvUnwrapping_UVTransform.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__UvUnwrapping_UVTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UvUnwrapping_UVTransform.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::UvUnwrapping_UVTransform::*)()>(&::GlobalNamespace::UvUnwrapping_UVTransform::ToString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb0ca580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UvUnwrapping_UVTransform>(),
                    {::i2c::class_of<::GlobalNamespace::UvUnwrapping_UVTransform>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::UvUnwrapping_UVTransform::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UvUnwrapping_UVTransform>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "translation", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UvUnwrapping_UVTransform::UvUnwrapping_UVTransform(::UnityEngine::Vector2  translation, float_t  rotation, ::UnityEngine::Vector2  scale) noexcept  {
this->translation = translation;
this->rotation = rotation;
this->scale = scale;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UvUnwrapping_UVTransform::UvUnwrapping_UVTransform()   {
}
