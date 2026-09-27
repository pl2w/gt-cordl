#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TermsObject_EmbeddedButtons_EmbeddedDisagree.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedButtons_EmbeddedDisagree_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree::*)(::StringW)>(&::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fee3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree::_ctor(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text);
}
// Ctor Parameters [CppParam { name: "Text", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree::EmbeddedButtons_TermsObject_EmbeddedDisagree(::StringW  Text) noexcept  {
this->Text = Text;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree::EmbeddedButtons_TermsObject_EmbeddedDisagree()   {
}
