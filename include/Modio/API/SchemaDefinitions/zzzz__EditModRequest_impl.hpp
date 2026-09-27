#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/EditModRequest.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__EditModRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::EditModRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::EditModRequest::*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::Nullable_1<::Modio::API::ModioAPIFileParameter>, ::System::Nullable_1<int64_t>, ::System::Nullable_1<int64_t>, ::System::Nullable_1<int64_t>, ::StringW, ::ArrayW<::StringW>, ::System::Nullable_1<int64_t>, ::System::Nullable_1<int64_t>, ::System::Nullable_1<int64_t>)>(&::Modio::API::SchemaDefinitions::EditModRequest::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9fe7994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EditModRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::Modio::API::ModioAPIFileParameter>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::EditModRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::EditModRequest::*)()>(&::Modio::API::SchemaDefinitions::EditModRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x9fe7ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EditModRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::EditModRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::EditModRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::EditModRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::EditModRequest>();
}
inline void Modio::API::SchemaDefinitions::EditModRequest::_ctor(::StringW  name, ::StringW  nameId, ::StringW  summary, ::StringW  description, ::System::Nullable_1<::Modio::API::ModioAPIFileParameter>  logo, ::System::Nullable_1<int64_t>  visible, ::System::Nullable_1<int64_t>  maturity_option, ::System::Nullable_1<int64_t>  community_options, ::StringW  metadataBlob, /* [Nullable(new[] { 2, 1 })] */ ::ArrayW<::StringW>  tags, ::System::Nullable_1<int64_t>  monetizationOptions, ::System::Nullable_1<int64_t>  price, ::System::Nullable_1<int64_t>  stock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EditModRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::Modio::API::ModioAPIFileParameter>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, nameId, summary, description, logo, visible, maturity_option, community_options, metadataBlob, tags, monetizationOptions, price, stock);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::EditModRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EditModRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::EditModRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::EditModRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Logo", ty: "::System::Nullable_1<::Modio::API::ModioAPIFileParameter>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Visible", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaturityOption", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CommunityOptions", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MetadataBlob", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MonetizationOptions", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Price", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Stock", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::EditModRequest::EditModRequest(::StringW  Name, ::StringW  NameId, ::StringW  Summary, ::StringW  Description, ::System::Nullable_1<::Modio::API::ModioAPIFileParameter>  Logo, ::System::Nullable_1<int64_t>  Visible, ::System::Nullable_1<int64_t>  MaturityOption, ::System::Nullable_1<int64_t>  CommunityOptions, ::StringW  MetadataBlob, ::ArrayW<::StringW>  Tags, ::System::Nullable_1<int64_t>  MonetizationOptions, ::System::Nullable_1<int64_t>  Price, ::System::Nullable_1<int64_t>  Stock) noexcept  {
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
this->MonetizationOptions = MonetizationOptions;
this->Price = Price;
this->Stock = Stock;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::EditModRequest::EditModRequest()   {
}
