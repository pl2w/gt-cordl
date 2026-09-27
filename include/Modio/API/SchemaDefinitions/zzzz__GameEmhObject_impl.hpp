#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameEmhObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GamePlatformsObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionLocalizedObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ThemeObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameEmhObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GamePlatformsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionLocalizedObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ThemeObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GameEmhObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GameEmhObject::*)(int64_t, int64_t, int64_t, ::StringW, ::StringW, ::StringW, ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>, ::Modio::API::SchemaDefinitions::ThemeObject, ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>)>(&::Modio::API::SchemaDefinitions::GameEmhObject::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fec89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameEmhObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ThemeObject>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GameEmhObject::_ctor(int64_t  id, int64_t  status, int64_t  communityOptions, ::StringW  ugcName, ::StringW  name, ::StringW  nameId, ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>  tagOptions, ::Modio::API::SchemaDefinitions::ThemeObject  theme, ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>  platforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameEmhObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ThemeObject>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, status, communityOptions, ugcName, name, nameId, tagOptions, theme, platforms);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CommunityOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UgcName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TagOptions", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Theme", ty: "::Modio::API::SchemaDefinitions::ThemeObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Platforms", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GameEmhObject::GameEmhObject(int64_t  Id, int64_t  Status, int64_t  CommunityOptions, ::StringW  UgcName, ::StringW  Name, ::StringW  NameId, ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>  TagOptions, ::Modio::API::SchemaDefinitions::ThemeObject  Theme, ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>  Platforms) noexcept  {
this->Id = Id;
this->Status = Status;
this->CommunityOptions = CommunityOptions;
this->UgcName = UgcName;
this->Name = Name;
this->NameId = NameId;
this->TagOptions = TagOptions;
this->Theme = Theme;
this->Platforms = Platforms;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GameEmhObject::GameEmhObject()   {
}
