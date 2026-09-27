#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameTagOptionLocalizedObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionLocalizedObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::StringW>, ::Newtonsoft::Json::Linq::JObject*, ::Newtonsoft::Json::Linq::JObject*, bool, bool)>(&::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9fecbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject::_ctor(::StringW  name, ::StringW  name_localized, ::StringW  type, ::ArrayW<::StringW>  tags, ::Newtonsoft::Json::Linq::JObject*  tags_localized, ::Newtonsoft::Json::Linq::JObject*  tag_count_map, bool  hidden, bool  locked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, name_localized, type, tags, tags_localized, tag_count_map, hidden, locked);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameLocalized", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Type", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TagsLocalized", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TagCountMap", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Hidden", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Locked", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject::GameTagOptionLocalizedObject(::StringW  Name, ::StringW  NameLocalized, ::StringW  Type, ::ArrayW<::StringW>  Tags, ::Newtonsoft::Json::Linq::JObject*  TagsLocalized, ::Newtonsoft::Json::Linq::JObject*  TagCountMap, bool  Hidden, bool  Locked) noexcept  {
this->Name = Name;
this->NameLocalized = NameLocalized;
this->Type = Type;
this->Tags = Tags;
this->TagsLocalized = TagsLocalized;
this->TagCountMap = TagCountMap;
this->Hidden = Hidden;
this->Locked = Locked;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject::GameTagOptionLocalizedObject()   {
}
