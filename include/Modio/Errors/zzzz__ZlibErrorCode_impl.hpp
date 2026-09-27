#pragma once
// IWYU pragma private; include "Modio/Errors/ZlibErrorCode.hpp"
#include "Modio/Errors/zzzz__ZlibErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::ZlibErrorCode::ZlibErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::ZlibErrorCode::ZlibErrorCode()   {
}
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::NEED_BUFFERS{static_cast<int64_t>(0xffffffff8000003f)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::END_OF_STREAM{static_cast<int64_t>(0xffffffff80000040)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::STREAM_ERROR{static_cast<int64_t>(0xffffffff80000041)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::INVALID_BLOCK_TYPE{static_cast<int64_t>(0xffffffff80000042)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::INVALID_STORED_LENGTH{static_cast<int64_t>(0xffffffff80000043)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::TOO_MANY_SYMBOLS{static_cast<int64_t>(0xffffffff80000044)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::INVALID_CODE_LENGTHS{static_cast<int64_t>(0xffffffff80000045)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::INVALID_BIT_LENGTH_REPEAT{static_cast<int64_t>(0xffffffff80000046)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::MISSING_EOB{static_cast<int64_t>(0xffffffff80000047)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::INVALID_LITERAL_LENGTH{static_cast<int64_t>(0xffffffff80000048)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::INVALID_DISTANCE_CODE{static_cast<int64_t>(0xffffffff80000049)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::INVALID_DISTANCE{static_cast<int64_t>(0xffffffff8000004a)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::OVER_SUBSCRIBED_LENGTH{static_cast<int64_t>(0xffffffff8000004b)};
constexpr ::Modio::Errors::ZlibErrorCode  Modio::Errors::ZlibErrorCode::INCOMPLETE_LENGTH_SET{static_cast<int64_t>(0xffffffff8000004c)};
