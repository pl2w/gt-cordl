#pragma once
// IWYU pragma private; include "Meta/WitAi/Configuration/WitRequestOptions.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestOptions_impl.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDynamicEntitiesProvider_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestOptions_def.hpp"
#include "Meta/WitAi/zzzz__WitRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Configuration::WitRequestOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Configuration::WitRequestOptions::*)(::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>)>(&::Meta::WitAi::Configuration::WitRequestOptions::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e967a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Configuration::WitRequestOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Configuration::WitRequestOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Configuration::WitRequestOptions::*)(::StringW, ::StringW, ::StringW, ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>)>(&::Meta::WitAi::Configuration::WitRequestOptions::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e90998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Configuration::WitRequestOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Configuration::WitRequestOptions.ToJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Configuration::WitRequestOptions::*)()>(&::Meta::WitAi::Configuration::WitRequestOptions::ToJsonString)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x9e967c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Configuration::WitRequestOptions*>(),
                        {"ToJsonString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Configuration::WitRequestOptions.get_OpIdRegistry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (*)()>(&::Meta::WitAi::Configuration::WitRequestOptions::get_OpIdRegistry)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e96b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Configuration::WitRequestOptions*>(),
                        {"get_OpIdRegistry", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*& Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_get_dynamicEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicEntities;
}
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* const& Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_get_dynamicEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicEntities;
}
constexpr void Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_set_dynamicEntities(::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynamicEntities = value;
}
constexpr int32_t& Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_get_nBestIntents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nBestIntents;
}
constexpr int32_t const& Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_get_nBestIntents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nBestIntents;
}
constexpr void Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_set_nBestIntents(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nBestIntents = value;
}
constexpr ::StringW& Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_get_tag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tag;
}
constexpr ::StringW const& Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_get_tag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tag;
}
constexpr void Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_set_tag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tag = value;
}
constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>*& Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_get_onResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onResponse;
}
constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>* const& Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_get_onResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onResponse;
}
constexpr void Meta::WitAi::Configuration::WitRequestOptions::__cordl_internal_set_onResponse(::System::Action_1<::Meta::WitAi::WitRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onResponse = value;
}
inline void Meta::WitAi::Configuration::WitRequestOptions::setStaticF__OpIdRegistry_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "<OpIdRegistry>k__BackingField", ::Meta::WitAi::Configuration::WitRequestOptions*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::Configuration::WitRequestOptions::getStaticF__OpIdRegistry_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "<OpIdRegistry>k__BackingField", ::Meta::WitAi::Configuration::WitRequestOptions*>();
}
inline void Meta::WitAi::Configuration::WitRequestOptions::_ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Configuration::WitRequestOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newParams);
}
inline void Meta::WitAi::Configuration::WitRequestOptions::_ctor(::StringW  newRequestId, ::StringW  newClientUserId, ::StringW  newOperationId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Configuration::WitRequestOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newRequestId, newClientUserId, newOperationId, newParams);
}
inline ::StringW Meta::WitAi::Configuration::WitRequestOptions::ToJsonString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Configuration::WitRequestOptions*>(),
                        {"ToJsonString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::Configuration::WitRequestOptions::get_OpIdRegistry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Configuration::WitRequestOptions*>(),
                        {"get_OpIdRegistry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(nullptr, ___internal_method);
}
inline ::Meta::WitAi::Configuration::WitRequestOptions* Meta::WitAi::Configuration::WitRequestOptions::New_ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Configuration::WitRequestOptions*>(newParams));
}
inline ::Meta::WitAi::Configuration::WitRequestOptions* Meta::WitAi::Configuration::WitRequestOptions::New_ctor(::StringW  newRequestId, ::StringW  newClientUserId, ::StringW  newOperationId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Configuration::WitRequestOptions*>(newRequestId, newClientUserId, newOperationId, newParams));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Configuration::WitRequestOptions::WitRequestOptions()   {
}
