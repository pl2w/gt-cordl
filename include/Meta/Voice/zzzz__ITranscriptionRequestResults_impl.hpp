#pragma once
// IWYU pragma private; include "Meta/Voice/ITranscriptionRequestResults.hpp"
#include "Meta/Voice/zzzz__ITranscriptionRequestResults_def.hpp"
#include "Meta/Voice/zzzz__IVoiceRequestResults_def.hpp"
//  Writing Method size for method: ::Meta::Voice::ITranscriptionRequestResults.get_Transcription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::ITranscriptionRequestResults::*)()>(&::Meta::Voice::ITranscriptionRequestResults::get_Transcription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::ITranscriptionRequestResults*>(),
                    {::i2c::class_of<::Meta::Voice::ITranscriptionRequestResults*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::ITranscriptionRequestResults.SetTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::ITranscriptionRequestResults::*)(::StringW, bool)>(&::Meta::Voice::ITranscriptionRequestResults::SetTranscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::ITranscriptionRequestResults*>(),
                    {::i2c::class_of<::Meta::Voice::ITranscriptionRequestResults*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW Meta::Voice::ITranscriptionRequestResults::get_Transcription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::ITranscriptionRequestResults*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Voice::ITranscriptionRequestResults::SetTranscription(::StringW  transcription, bool  full)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::ITranscriptionRequestResults*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transcription, full);
}
/// @brief Convert operator to "::Meta::Voice::IVoiceRequestResults"
constexpr  Meta::Voice::ITranscriptionRequestResults::operator ::Meta::Voice::IVoiceRequestResults*() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestResults*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::IVoiceRequestResults"
constexpr ::Meta::Voice::IVoiceRequestResults* Meta::Voice::ITranscriptionRequestResults::i___Meta__Voice__IVoiceRequestResults() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestResults*>(static_cast<void*>(this));
}
