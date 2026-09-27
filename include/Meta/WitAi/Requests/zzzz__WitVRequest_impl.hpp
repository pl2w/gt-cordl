#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitVRequest.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__WitVRequest_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestDecodeDelegate_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitVRequest__RequestWitGet_d__22_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitVRequest__RequestWitPost_d__23_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitVRequest__Request_d__21_1_def.hpp"
#include "Meta/WitAi/zzzz__IWitRequestConfiguration_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::WitVRequest.get_RequestOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Configuration::WitRequestOptions* (::Meta::WitAi::Requests::WitVRequest::*)()>(&::Meta::WitAi::Requests::WitVRequest::get_RequestOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e90978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {"get_RequestOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitVRequest.set_RequestOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitVRequest::*)(::Meta::WitAi::Configuration::WitRequestOptions*)>(&::Meta::WitAi::Requests::WitVRequest::set_RequestOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e90980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {"set_RequestOptions", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitVRequest.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::IWitRequestConfiguration* (::Meta::WitAi::Requests::WitVRequest::*)()>(&::Meta::WitAi::Requests::WitVRequest::get_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e90988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {"get_Configuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitVRequest.set_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitVRequest::*)(::Meta::WitAi::IWitRequestConfiguration*)>(&::Meta::WitAi::Requests::WitVRequest::set_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e90990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {"set_Configuration", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitVRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitVRequest::*)(::Meta::WitAi::IWitRequestConfiguration*, ::StringW, ::StringW, bool)>(&::Meta::WitAi::Requests::WitVRequest::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x9e8e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitVRequest.IsLocalFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::WitVRequest::*)()>(&::Meta::WitAi::Requests::WitVRequest::IsLocalFile)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e909a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {"IsLocalFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitVRequest.GetUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Meta::WitAi::Requests::WitVRequest::*)()>(&::Meta::WitAi::Requests::WitVRequest::GetUri)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e90a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitVRequest.GetHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::WitAi::Requests::WitVRequest::*)()>(&::Meta::WitAi::Requests::WitVRequest::GetHeaders)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e8e93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Configuration::WitRequestOptions*& Meta::WitAi::Requests::WitVRequest::__cordl_internal_get__RequestOptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestOptions_k__BackingField;
}
constexpr ::Meta::WitAi::Configuration::WitRequestOptions* const& Meta::WitAi::Requests::WitVRequest::__cordl_internal_get__RequestOptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestOptions_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitVRequest::__cordl_internal_set__RequestOptions_k__BackingField(::Meta::WitAi::Configuration::WitRequestOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequestOptions_k__BackingField = value;
}
constexpr ::Meta::WitAi::IWitRequestConfiguration*& Meta::WitAi::Requests::WitVRequest::__cordl_internal_get__Configuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr ::Meta::WitAi::IWitRequestConfiguration* const& Meta::WitAi::Requests::WitVRequest::__cordl_internal_get__Configuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitVRequest::__cordl_internal_set__Configuration_k__BackingField(::Meta::WitAi::IWitRequestConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Configuration_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::WitVRequest::__cordl_internal_get__useServerToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useServerToken;
}
constexpr bool const& Meta::WitAi::Requests::WitVRequest::__cordl_internal_get__useServerToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useServerToken;
}
constexpr void Meta::WitAi::Requests::WitVRequest::__cordl_internal_set__useServerToken(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useServerToken = value;
}
inline ::Meta::WitAi::Configuration::WitRequestOptions* Meta::WitAi::Requests::WitVRequest::get_RequestOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {"get_RequestOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Configuration::WitRequestOptions*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitVRequest::set_RequestOptions(::Meta::WitAi::Configuration::WitRequestOptions*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {"set_RequestOptions", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::IWitRequestConfiguration* Meta::WitAi::Requests::WitVRequest::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {"get_Configuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::IWitRequestConfiguration*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitVRequest::set_Configuration(::Meta::WitAi::IWitRequestConfiguration*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {"set_Configuration", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::WitVRequest::_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId, bool  useServerToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configuration, requestId, operationId, useServerToken);
}
inline bool Meta::WitAi::Requests::WitVRequest::IsLocalFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                        {"IsLocalFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Uri* Meta::WitAi::Requests::WitVRequest::GetUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::Requests::WitVRequest::GetHeaders()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
template<typename TValue>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>* Meta::WitAi::Requests::WitVRequest::Request(::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*  decoder)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(), 6}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TValue>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>*>(this, ___internal_method, decoder);
}
template<typename TValue>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>* Meta::WitAi::Requests::WitVRequest::RequestWitGet(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  urlParameters, ::System::Action_1<TValue>*  onPartial)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                    {"RequestWitGet", {::i2c::class_of<TValue>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Action_1<TValue>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>*>(this, ___internal_method, endpoint, urlParameters, onPartial);
}
template<typename TValue>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>* Meta::WitAi::Requests::WitVRequest::RequestWitPost(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  urlParameters, ::StringW  payload, ::System::Action_1<TValue>*  onPartial)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                    {"RequestWitPost", {::i2c::class_of<TValue>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<TValue>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>*>(this, ___internal_method, endpoint, urlParameters, payload, onPartial);
}
template<typename TValue>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>* Meta::WitAi::Requests::WitVRequest::__n__0(::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*  decoder)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitVRequest*>(),
                    {"<>n__0", {::i2c::class_of<TValue>()}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>*>(this, ___internal_method, decoder);
}
inline ::Meta::WitAi::Requests::WitVRequest* Meta::WitAi::Requests::WitVRequest::New_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId, bool  useServerToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::WitVRequest*>(configuration, requestId, operationId, useServerToken));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::WitVRequest::WitVRequest()   {
}
