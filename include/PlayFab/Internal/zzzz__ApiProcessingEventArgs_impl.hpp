#pragma once
// IWYU pragma private; include "PlayFab/Internal/ApiProcessingEventArgs.hpp"
#include "PlayFab/Internal/zzzz__ApiProcessingEventType_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/Internal/zzzz__ApiProcessingEventArgs_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
//  Writing Method size for method: ::PlayFab::Internal::ApiProcessingEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::ApiProcessingEventArgs::*)()>(&::PlayFab::Internal::ApiProcessingEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8467d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::ApiProcessingEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_get_ApiEndpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiEndpoint;
}
constexpr ::StringW const& PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_get_ApiEndpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiEndpoint;
}
constexpr void PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_set_ApiEndpoint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApiEndpoint = value;
}
constexpr ::PlayFab::Internal::ApiProcessingEventType& PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_get_EventType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventType;
}
constexpr ::PlayFab::Internal::ApiProcessingEventType const& PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_get_EventType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventType;
}
constexpr void PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_set_EventType(::PlayFab::Internal::ApiProcessingEventType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventType = value;
}
constexpr ::PlayFab::SharedModels::PlayFabRequestCommon*& PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_get_Request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Request;
}
constexpr ::PlayFab::SharedModels::PlayFabRequestCommon* const& PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_get_Request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Request;
}
constexpr void PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_set_Request(::PlayFab::SharedModels::PlayFabRequestCommon*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Request = value;
}
constexpr ::PlayFab::SharedModels::PlayFabResultCommon*& PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_get_Result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr ::PlayFab::SharedModels::PlayFabResultCommon* const& PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_get_Result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr void PlayFab::Internal::ApiProcessingEventArgs::__cordl_internal_set_Result(::PlayFab::SharedModels::PlayFabResultCommon*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Result = value;
}
template<typename TRequest>
requires(::cordl_internals::type_constraint<TRequest, ::PlayFab::SharedModels::PlayFabRequestCommon*>)
inline TRequest PlayFab::Internal::ApiProcessingEventArgs::GetRequest()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Internal::ApiProcessingEventArgs*>(),
                    {"GetRequest", {::i2c::class_of<TRequest>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TRequest>()}
                )));
return ::cordl_internals::RunMethodRethrow<TRequest>(this, ___internal_method);
}
inline void PlayFab::Internal::ApiProcessingEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::ApiProcessingEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Internal::ApiProcessingEventArgs* PlayFab::Internal::ApiProcessingEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::ApiProcessingEventArgs*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::ApiProcessingEventArgs::ApiProcessingEventArgs()   {
}
