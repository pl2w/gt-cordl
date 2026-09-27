#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TermsObject_EmbeddedButtons.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedButtons_EmbeddedAgree_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedButtons_EmbeddedDisagree_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedButtons_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedButtons_EmbeddedAgree_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedButtons_EmbeddedDisagree_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TermsObject_EmbeddedButtons._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TermsObject_EmbeddedButtons::*)(::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedAgree, ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree)>(&::GlobalNamespace::TermsObject_EmbeddedButtons::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fee3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TermsObject_EmbeddedButtons>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedAgree>(), ::i2c::type_of<::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TermsObject_EmbeddedButtons::_ctor(::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedAgree  agree, ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree  disagree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TermsObject_EmbeddedButtons>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedAgree>(), ::i2c::type_of<::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, agree, disagree);
}
// Ctor Parameters [CppParam { name: "Agree", ty: "::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedAgree", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Disagree", ty: "::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TermsObject_EmbeddedButtons::TermsObject_EmbeddedButtons(::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedAgree  Agree, ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree  Disagree) noexcept  {
this->Agree = Agree;
this->Disagree = Disagree;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TermsObject_EmbeddedButtons::TermsObject_EmbeddedButtons()   {
}
