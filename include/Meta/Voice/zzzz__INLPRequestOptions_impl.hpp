#pragma once
// IWYU pragma private; include "Meta/Voice/INLPRequestOptions.hpp"
#include "Meta/Voice/zzzz__INLPRequestOptions_def.hpp"
#include "Meta/Voice/zzzz__ITranscriptionRequestOptions_def.hpp"
#include "Meta/Voice/zzzz__IVoiceRequestOptions_def.hpp"
#include "Meta/Voice/zzzz__NLPRequestInputType_def.hpp"
//  Writing Method size for method: ::Meta::Voice::INLPRequestOptions.get_InputType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLPRequestInputType (::Meta::Voice::INLPRequestOptions::*)()>(&::Meta::Voice::INLPRequestOptions::get_InputType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::INLPRequestOptions*>(),
                    {::i2c::class_of<::Meta::Voice::INLPRequestOptions*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::INLPRequestOptions.set_InputType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::INLPRequestOptions::*)(::Meta::Voice::NLPRequestInputType)>(&::Meta::Voice::INLPRequestOptions::set_InputType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::INLPRequestOptions*>(),
                    {::i2c::class_of<::Meta::Voice::INLPRequestOptions*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Meta::Voice::NLPRequestInputType Meta::Voice::INLPRequestOptions::get_InputType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::INLPRequestOptions*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLPRequestInputType>(this, ___internal_method);
}
inline void Meta::Voice::INLPRequestOptions::set_InputType(::Meta::Voice::NLPRequestInputType  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::INLPRequestOptions*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::Meta::Voice::ITranscriptionRequestOptions"
constexpr  Meta::Voice::INLPRequestOptions::operator ::Meta::Voice::ITranscriptionRequestOptions*() noexcept {
return static_cast<::Meta::Voice::ITranscriptionRequestOptions*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::ITranscriptionRequestOptions"
constexpr ::Meta::Voice::ITranscriptionRequestOptions* Meta::Voice::INLPRequestOptions::i___Meta__Voice__ITranscriptionRequestOptions() noexcept {
return static_cast<::Meta::Voice::ITranscriptionRequestOptions*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::Voice::IVoiceRequestOptions"
constexpr  Meta::Voice::INLPRequestOptions::operator ::Meta::Voice::IVoiceRequestOptions*() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestOptions*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::IVoiceRequestOptions"
constexpr ::Meta::Voice::IVoiceRequestOptions* Meta::Voice::INLPRequestOptions::i___Meta__Voice__IVoiceRequestOptions() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestOptions*>(static_cast<void*>(this));
}
