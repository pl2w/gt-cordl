#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitMessageVRequest.hpp"
#include "Meta/WitAi/Requests/zzzz__WitVRequest_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__WitMessageVRequest_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
#include "Meta/WitAi/zzzz__IWitRequestConfiguration_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::WitMessageVRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitMessageVRequest::*)(::Meta::WitAi::IWitRequestConfiguration*, ::StringW, ::StringW)>(&::Meta::WitAi::Requests::WitMessageVRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitMessageVRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitMessageVRequest.MessageRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>* (::Meta::WitAi::Requests::WitMessageVRequest::*)(::StringW, bool, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::System::Action_1<::StringW>*)>(&::Meta::WitAi::Requests::WitMessageVRequest::MessageRequest)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9e8e70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitMessageVRequest*>(),
                        {"MessageRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Requests::WitMessageVRequest::_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitMessageVRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configuration, requestId, operationId);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>* Meta::WitAi::Requests::WitMessageVRequest::MessageRequest(::StringW  endpoint, bool  post, ::StringW  text, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  urlParameters, ::System::Action_1<::StringW>*  onPartial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitMessageVRequest*>(),
                        {"MessageRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>*>(this, ___internal_method, endpoint, post, text, urlParameters, onPartial);
}
inline ::Meta::WitAi::Requests::WitMessageVRequest* Meta::WitAi::Requests::WitMessageVRequest::New_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::WitMessageVRequest*>(configuration, requestId, operationId));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::WitMessageVRequest::WitMessageVRequest()   {
}
