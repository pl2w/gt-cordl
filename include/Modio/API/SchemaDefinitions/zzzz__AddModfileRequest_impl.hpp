#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddModfileRequest.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AddModfileRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddModfileRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::AddModfileRequest::*)(::Modio::API::ModioAPIFileParameter, ::StringW, ::StringW, ::StringW, ::ArrayW<::StringW>, ::StringW)>(&::Modio::API::SchemaDefinitions::AddModfileRequest::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9fe4248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModfileRequest>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::ModioAPIFileParameter>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddModfileRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::AddModfileRequest::*)()>(&::Modio::API::SchemaDefinitions::AddModfileRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x9fe42e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModfileRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::AddModfileRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::AddModfileRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::AddModfileRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::AddModfileRequest>();
}
inline void Modio::API::SchemaDefinitions::AddModfileRequest::_ctor(::Modio::API::ModioAPIFileParameter  filedata, ::StringW  version, ::StringW  changelog, ::StringW  metadataBlob, /* [Nullable(new[] { 2, 1 })] */ ::ArrayW<::StringW>  platforms, ::StringW  uploadId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModfileRequest>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::ModioAPIFileParameter>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, filedata, version, changelog, metadataBlob, platforms, uploadId);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::AddModfileRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModfileRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::AddModfileRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::AddModfileRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Filedata", ty: "::Modio::API::ModioAPIFileParameter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Version", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Changelog", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MetadataBlob", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Platforms", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UploadId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::AddModfileRequest::AddModfileRequest(::Modio::API::ModioAPIFileParameter  Filedata, ::StringW  Version, ::StringW  Changelog, ::StringW  MetadataBlob, ::ArrayW<::StringW>  Platforms, ::StringW  UploadId) noexcept  {
this->Filedata = Filedata;
this->Version = Version;
this->Changelog = Changelog;
this->MetadataBlob = MetadataBlob;
this->Platforms = Platforms;
this->UploadId = UploadId;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::AddModfileRequest::AddModfileRequest()   {
}
