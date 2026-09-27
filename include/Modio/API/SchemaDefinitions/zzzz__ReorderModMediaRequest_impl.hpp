#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ReorderModMediaRequest.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ReorderModMediaRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ReorderModMediaRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ReorderModMediaRequest::*)(::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::Modio::API::SchemaDefinitions::ReorderModMediaRequest::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9fea428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ReorderModMediaRequest>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ReorderModMediaRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::ReorderModMediaRequest::*)()>(&::Modio::API::SchemaDefinitions::ReorderModMediaRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9fea46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ReorderModMediaRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ReorderModMediaRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::ReorderModMediaRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::ReorderModMediaRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::ReorderModMediaRequest>();
}
inline void Modio::API::SchemaDefinitions::ReorderModMediaRequest::_ctor(::ArrayW<::StringW>  images, ::ArrayW<::StringW>  youtube, ::ArrayW<::StringW>  sketchfab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ReorderModMediaRequest>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, images, youtube, sketchfab);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::ReorderModMediaRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ReorderModMediaRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::ReorderModMediaRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::ReorderModMediaRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Images", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Youtube", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Sketchfab", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ReorderModMediaRequest::ReorderModMediaRequest(::ArrayW<::StringW>  Images, ::ArrayW<::StringW>  Youtube, ::ArrayW<::StringW>  Sketchfab) noexcept  {
this->Images = Images;
this->Youtube = Youtube;
this->Sketchfab = Sketchfab;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ReorderModMediaRequest::ReorderModMediaRequest()   {
}
