#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddModRequest.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AddModRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddModRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::AddModRequest::*)(::StringW, ::StringW, ::StringW, ::StringW, ::Modio::API::ModioAPIFileParameter, ::System::Nullable_1<int64_t>, ::System::Nullable_1<int64_t>, ::System::Nullable_1<int64_t>, ::StringW, ::ArrayW<::StringW>)>(&::Modio::API::SchemaDefinitions::AddModRequest::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9fe4a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::ModioAPIFileParameter>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddModRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::AddModRequest::*)()>(&::Modio::API::SchemaDefinitions::AddModRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x9fe4af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::AddModRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::AddModRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::AddModRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::AddModRequest>();
}
inline void Modio::API::SchemaDefinitions::AddModRequest::_ctor(/* [Nullable(1)] */ ::StringW  name, ::StringW  name_id, /* [Nullable(1)] */ ::StringW  summary, ::StringW  description, ::Modio::API::ModioAPIFileParameter  logo, ::System::Nullable_1<int64_t>  visible, ::System::Nullable_1<int64_t>  maturity_option, ::System::Nullable_1<int64_t>  community_options, ::StringW  metadata_blob, /* [Nullable(new[] { 2, 1 })] */ ::ArrayW<::StringW>  tags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::ModioAPIFileParameter>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, name_id, summary, description, logo, visible, maturity_option, community_options, metadata_blob, tags);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::AddModRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddModRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::AddModRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::AddModRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Logo", ty: "::Modio::API::ModioAPIFileParameter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Visible", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaturityOption", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CommunityOptions", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MetadataBlob", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::AddModRequest::AddModRequest(::StringW  Name, ::StringW  NameId, ::StringW  Summary, ::StringW  Description, ::Modio::API::ModioAPIFileParameter  Logo, ::System::Nullable_1<int64_t>  Visible, ::System::Nullable_1<int64_t>  MaturityOption, ::System::Nullable_1<int64_t>  CommunityOptions, ::StringW  MetadataBlob, ::ArrayW<::StringW>  Tags) noexcept  {
this->Name = Name;
this->NameId = NameId;
this->Summary = Summary;
this->Description = Description;
this->Logo = Logo;
this->Visible = Visible;
this->MaturityOption = MaturityOption;
this->CommunityOptions = CommunityOptions;
this->MetadataBlob = MetadataBlob;
this->Tags = Tags;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::AddModRequest::AddModRequest()   {
}
