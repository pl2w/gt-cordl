#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModMediaObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ImageObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModMediaObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ImageObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModMediaObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ModMediaObject::*)(::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::Modio::API::SchemaDefinitions::ImageObject>)>(&::Modio::API::SchemaDefinitions::ModMediaObject::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9fed668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModMediaObject>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::ImageObject>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ModMediaObject::_ctor(::ArrayW<::StringW>  youtube, ::ArrayW<::StringW>  sketchfab, ::ArrayW<::Modio::API::SchemaDefinitions::ImageObject>  images)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModMediaObject>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::ImageObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, youtube, sketchfab, images);
}
// Ctor Parameters [CppParam { name: "Youtube", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Sketchfab", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Images", ty: "::ArrayW<::Modio::API::SchemaDefinitions::ImageObject>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ModMediaObject::ModMediaObject(::ArrayW<::StringW>  Youtube, ::ArrayW<::StringW>  Sketchfab, ::ArrayW<::Modio::API::SchemaDefinitions::ImageObject>  Images) noexcept  {
this->Youtube = Youtube;
this->Sketchfab = Sketchfab;
this->Images = Images;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ModMediaObject::ModMediaObject()   {
}
