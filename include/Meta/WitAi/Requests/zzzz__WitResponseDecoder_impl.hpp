#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitResponseDecoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__WitResponseDecoder_def.hpp"
#include "Meta/Voice/zzzz__INLPRequestResponseDecoder_1_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::WitResponseDecoder.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::WitAi::Requests::WitResponseDecoder::*)(::StringW)>(&::Meta::WitAi::Requests::WitResponseDecoder::Decode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e92308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"Decode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitResponseDecoder.GetResponseStatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Requests::WitResponseDecoder::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Requests::WitResponseDecoder::GetResponseStatusCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e92360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseStatusCode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitResponseDecoder.GetResponseError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::WitResponseDecoder::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Requests::WitResponseDecoder::GetResponseError)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e9236c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseError", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitResponseDecoder.GetResponseHasPartial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::WitResponseDecoder::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Requests::WitResponseDecoder::GetResponseHasPartial)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e92378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseHasPartial", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitResponseDecoder.GetResponseTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::WitResponseDecoder::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Requests::WitResponseDecoder::GetResponseTranscription)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e92398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseTranscription", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitResponseDecoder.GetResponseHasTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::WitResponseDecoder::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Requests::WitResponseDecoder::GetResponseHasTranscription)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e923a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseHasTranscription", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitResponseDecoder.GetResponseIsTranscriptionFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::WitResponseDecoder::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Requests::WitResponseDecoder::GetResponseIsTranscriptionFull)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e923b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseIsTranscriptionFull", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitResponseDecoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitResponseDecoder::*)()>(&::Meta::WitAi::Requests::WitResponseDecoder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e91724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Requests::WitResponseDecoder::Decode(::StringW  rawResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"Decode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method, rawResponse);
}
inline int32_t Meta::WitAi::Requests::WitResponseDecoder::GetResponseStatusCode(::Meta::WitAi::Json::WitResponseNode*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseStatusCode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, results);
}
inline ::StringW Meta::WitAi::Requests::WitResponseDecoder::GetResponseError(::Meta::WitAi::Json::WitResponseNode*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseError", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, results);
}
inline bool Meta::WitAi::Requests::WitResponseDecoder::GetResponseHasPartial(::Meta::WitAi::Json::WitResponseNode*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseHasPartial", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, results);
}
inline ::StringW Meta::WitAi::Requests::WitResponseDecoder::GetResponseTranscription(::Meta::WitAi::Json::WitResponseNode*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseTranscription", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, results);
}
inline bool Meta::WitAi::Requests::WitResponseDecoder::GetResponseHasTranscription(::Meta::WitAi::Json::WitResponseNode*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseHasTranscription", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, results);
}
inline bool Meta::WitAi::Requests::WitResponseDecoder::GetResponseIsTranscriptionFull(::Meta::WitAi::Json::WitResponseNode*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {"GetResponseIsTranscriptionFull", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, results);
}
inline void Meta::WitAi::Requests::WitResponseDecoder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitResponseDecoder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::WitResponseDecoder* Meta::WitAi::Requests::WitResponseDecoder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::WitResponseDecoder*>());
}
/// @brief Convert operator to "::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr  Meta::WitAi::Requests::WitResponseDecoder::operator ::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>*() noexcept {
return static_cast<::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr ::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>* Meta::WitAi::Requests::WitResponseDecoder::i___Meta__Voice__INLPRequestResponseDecoder_1___Meta__WitAi__Json__WitResponseNode__() noexcept {
return static_cast<::Meta::Voice::INLPRequestResponseDecoder_1<::Meta::WitAi::Json::WitResponseNode*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::WitResponseDecoder::WitResponseDecoder()   {
}
