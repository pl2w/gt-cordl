#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddGuideRequest.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AddGuideRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddGuideRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::AddGuideRequest::*)(::StringW, ::StringW, ::StringW, ::StringW, int64_t, int64_t, int64_t, ::ArrayW<::StringW>, ::StringW)>(&::Modio::API::SchemaDefinitions::AddGuideRequest::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fe3c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddGuideRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddGuideRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::AddGuideRequest::*)()>(&::Modio::API::SchemaDefinitions::AddGuideRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x9fe3cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddGuideRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::AddGuideRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::AddGuideRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::AddGuideRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::AddGuideRequest>();
}
inline void Modio::API::SchemaDefinitions::AddGuideRequest::_ctor(::StringW  name, ::StringW  summary, ::StringW  description, ::StringW  logo, int64_t  date_live, int64_t  status, int64_t  community_options, ::ArrayW<::StringW>  tags, ::StringW  name_id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddGuideRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, summary, description, logo, date_live, status, community_options, tags, name_id);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::AddGuideRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddGuideRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::AddGuideRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::AddGuideRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Logo", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateLive", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CommunityOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::AddGuideRequest::AddGuideRequest(::StringW  Name, ::StringW  Summary, ::StringW  Description, ::StringW  Logo, int64_t  DateLive, int64_t  Status, int64_t  CommunityOptions, ::ArrayW<::StringW>  Tags, ::StringW  NameId) noexcept  {
this->Name = Name;
this->Summary = Summary;
this->Description = Description;
this->Logo = Logo;
this->DateLive = DateLive;
this->Status = Status;
this->CommunityOptions = CommunityOptions;
this->Tags = Tags;
this->NameId = NameId;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::AddGuideRequest::AddGuideRequest()   {
}
