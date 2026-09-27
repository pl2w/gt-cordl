#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIORequestResult.hpp"
#include "GlobalNamespace/zzzz__ModIORequestResult_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModIORequestResult.CreateFailureResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ModIORequestResult (*)(::StringW)>(&::GlobalNamespace::ModIORequestResult::CreateFailureResult)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59c75c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIORequestResult>(),
                        {"CreateFailureResult", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIORequestResult.CreateSuccessResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ModIORequestResult (*)()>(&::GlobalNamespace::ModIORequestResult::CreateSuccessResult)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59c75f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIORequestResult>(),
                        {"CreateSuccessResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIORequestResult.CreateFromError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ModIORequestResult (*)(::Modio::Error*)>(&::GlobalNamespace::ModIORequestResult::CreateFromError)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59c7654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIORequestResult>(),
                        {"CreateFromError", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ModIORequestResult GlobalNamespace::ModIORequestResult::CreateFailureResult(::StringW  inMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIORequestResult>(),
                        {"CreateFailureResult", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModIORequestResult>(nullptr, ___internal_method, inMessage);
}
inline ::GlobalNamespace::ModIORequestResult GlobalNamespace::ModIORequestResult::CreateSuccessResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIORequestResult>(),
                        {"CreateSuccessResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModIORequestResult>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ModIORequestResult GlobalNamespace::ModIORequestResult::CreateFromError(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIORequestResult>(),
                        {"CreateFromError", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModIORequestResult>(nullptr, ___internal_method, error);
}
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModIORequestResult::ModIORequestResult(bool  success, ::StringW  message) noexcept  {
this->success = success;
this->message = message;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModIORequestResult::ModIORequestResult()   {
}
