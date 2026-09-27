#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmaking_RoomOperationResult.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmaking_RoomOperationResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMatchmaking_RoomOperationResult.get_IsSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMatchmaking_RoomOperationResult::*)()>(&::GlobalNamespace::CustomMatchmaking_RoomOperationResult::get_IsSuccess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f6b164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>(),
                        {"get_IsSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::CustomMatchmaking_RoomOperationResult::get_IsSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>(),
                        {"get_IsSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "ErrorMessage", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RoomToken", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RoomPassword", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CustomMatchmaking_RoomOperationResult::CustomMatchmaking_RoomOperationResult(::StringW  ErrorMessage, ::StringW  RoomToken, ::StringW  RoomPassword) noexcept  {
this->ErrorMessage = ErrorMessage;
this->RoomToken = RoomToken;
this->RoomPassword = RoomPassword;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMatchmaking_RoomOperationResult::CustomMatchmaking_RoomOperationResult()   {
}
