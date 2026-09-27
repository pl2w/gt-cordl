#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedStringContainer.hpp"
#include "GlobalNamespace/zzzz__LocalizedStringContainer_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizedStringContainer.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalizedStringContainer::*)()>(&::GlobalNamespace::LocalizedStringContainer::GetName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a68dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedStringContainer>(),
                        {"GetName", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::LocalizedStringContainer::GetName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedStringContainer>(),
                        {"GetName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "StringReference", ty: "::UnityEngine::Localization::LocalizedString*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FallbackName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LocalizedStringContainer::LocalizedStringContainer(::UnityEngine::Localization::LocalizedString*  StringReference, ::StringW  FallbackName) noexcept  {
this->StringReference = StringReference;
this->FallbackName = FallbackName;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedStringContainer::LocalizedStringContainer()   {
}
