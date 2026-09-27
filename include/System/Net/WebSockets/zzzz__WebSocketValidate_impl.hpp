#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketValidate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketValidate_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketValidate.ThrowIfInvalidState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::WebSockets::WebSocketState, bool, ::ArrayW<::System::Net::WebSockets::WebSocketState>)>(&::System::Net::WebSockets::WebSocketValidate::ThrowIfInvalidState)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xace568c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketValidate*>(),
                        {"ThrowIfInvalidState", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketState>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Net::WebSockets::WebSocketState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketValidate.ValidateSubprotocol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::WebSockets::WebSocketValidate::ValidateSubprotocol)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xacecb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketValidate*>(),
                        {"ValidateSubprotocol", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketValidate.ValidateCloseStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW)>(&::System::Net::WebSockets::WebSocketValidate::ValidateCloseStatus)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xace5dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketValidate*>(),
                        {"ValidateCloseStatus", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketValidate.ValidateArraySegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ArraySegment_1<uint8_t>, ::StringW)>(&::System::Net::WebSockets::WebSocketValidate::ValidateArraySegment)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xace51d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketValidate*>(),
                        {"ValidateArraySegment", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::WebSockets::WebSocketValidate::ThrowIfInvalidState(::System::Net::WebSockets::WebSocketState  currentState, bool  isDisposed, ::ArrayW<::System::Net::WebSockets::WebSocketState>  validStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketValidate*>(),
                        {"ThrowIfInvalidState", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketState>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::System::Net::WebSockets::WebSocketState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentState, isDisposed, validStates);
}
inline void System::Net::WebSockets::WebSocketValidate::ValidateSubprotocol(::StringW  subProtocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketValidate*>(),
                        {"ValidateSubprotocol", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, subProtocol);
}
inline void System::Net::WebSockets::WebSocketValidate::ValidateCloseStatus(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketValidate*>(),
                        {"ValidateCloseStatus", {}, {::i2c::type_of<::System::Net::WebSockets::WebSocketCloseStatus>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, closeStatus, statusDescription);
}
inline void System::Net::WebSockets::WebSocketValidate::ValidateArraySegment(::System::ArraySegment_1<uint8_t>  arraySegment, ::StringW  parameterName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketValidate*>(),
                        {"ValidateArraySegment", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arraySegment, parameterName);
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocketValidate::WebSocketValidate()   {
}
