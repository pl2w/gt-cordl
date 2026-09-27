#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameTagOptionObject_EmbeddedTagsLocalization.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionObject_EmbeddedTagsLocalization_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9fecd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization::_ctor(::StringW  tag, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  translations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tag, translations);
}
// Ctor Parameters [CppParam { name: "Tag", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Translations", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization::GameTagOptionObject_EmbeddedTagsLocalization(::StringW  Tag, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Translations) noexcept  {
this->Tag = Tag;
this->Translations = Translations;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization::GameTagOptionObject_EmbeddedTagsLocalization()   {
}
