#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AddBatchRequest.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AddBatchRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddBatchRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::AddBatchRequest::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::AddBatchRequest::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9fe35f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddBatchRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AddBatchRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::AddBatchRequest::*)()>(&::Modio::API::SchemaDefinitions::AddBatchRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x9fe3688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddBatchRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::AddBatchRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::AddBatchRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::AddBatchRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::AddBatchRequest>();
}
inline void Modio::API::SchemaDefinitions::AddBatchRequest::_ctor(::StringW  batch0RelativeUrl, ::StringW  batch0Method, ::StringW  batch1RelativeUrl, ::StringW  batch1Method, ::StringW  batch2RelativeUrl, ::StringW  batch2Method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddBatchRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, batch0RelativeUrl, batch0Method, batch1RelativeUrl, batch1Method, batch2RelativeUrl, batch2Method);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::AddBatchRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AddBatchRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::AddBatchRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::AddBatchRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Batch0RelativeUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Batch0Method", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Batch1RelativeUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Batch1Method", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Batch2RelativeUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Batch2Method", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::AddBatchRequest::AddBatchRequest(::StringW  Batch0RelativeUrl, ::StringW  Batch0Method, ::StringW  Batch1RelativeUrl, ::StringW  Batch1Method, ::StringW  Batch2RelativeUrl, ::StringW  Batch2Method) noexcept  {
this->Batch0RelativeUrl = Batch0RelativeUrl;
this->Batch0Method = Batch0Method;
this->Batch1RelativeUrl = Batch1RelativeUrl;
this->Batch1Method = Batch1Method;
this->Batch2RelativeUrl = Batch2RelativeUrl;
this->Batch2Method = Batch2Method;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::AddBatchRequest::AddBatchRequest()   {
}
