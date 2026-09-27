#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameTagOptionObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionObject_EmbeddedTagsLocalization_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionObject_EmbeddedTagsLocalization_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GameTagOptionObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GameTagOptionObject::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW, ::ArrayW<::StringW>, ::ArrayW<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, bool, bool)>(&::Modio::API::SchemaDefinitions::GameTagOptionObject::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9fecc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameTagOptionObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GameTagOptionObject::_ctor(::StringW  name, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  name_localization, ::StringW  type, ::ArrayW<::StringW>  tags, ::ArrayW<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>  tags_localization, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  tag_count_map, bool  hidden, bool  locked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameTagOptionObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, name_localization, type, tags, tags_localization, tag_count_map, hidden, locked);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameLocalization", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Type", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TagsLocalization", ty: "::ArrayW<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TagCountMap", ty: "::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Hidden", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Locked", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GameTagOptionObject::GameTagOptionObject(::StringW  Name, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  NameLocalization, ::StringW  Type, ::ArrayW<::StringW>  Tags, ::ArrayW<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>  TagsLocalization, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  TagCountMap, bool  Hidden, bool  Locked) noexcept  {
this->Name = Name;
this->NameLocalization = NameLocalization;
this->Type = Type;
this->Tags = Tags;
this->TagsLocalization = TagsLocalization;
this->TagCountMap = TagCountMap;
this->Hidden = Hidden;
this->Locked = Locked;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GameTagOptionObject::GameTagOptionObject()   {
}
