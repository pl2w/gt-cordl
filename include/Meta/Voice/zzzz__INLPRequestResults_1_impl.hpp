#pragma once
// IWYU pragma private; include "Meta/Voice/INLPRequestResults_1.hpp"
#include "Meta/Voice/zzzz__INLPRequestResults_1_def.hpp"
#include "Meta/Voice/zzzz__ITranscriptionRequestResults_def.hpp"
#include "Meta/Voice/zzzz__IVoiceRequestResults_def.hpp"
template<typename TResponseData>
inline TResponseData Meta::Voice::INLPRequestResults_1<TResponseData>::get_ResponseData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::INLPRequestResults_1<TResponseData>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TResponseData>(this, ___internal_method);
}
template<typename TResponseData>
inline void Meta::Voice::INLPRequestResults_1<TResponseData>::SetResponseData(TResponseData  responseData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::INLPRequestResults_1<TResponseData>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseData);
}
/// @brief Convert operator to "::Meta::Voice::ITranscriptionRequestResults"
template<typename TResponseData>
constexpr  Meta::Voice::INLPRequestResults_1<TResponseData>::operator ::Meta::Voice::ITranscriptionRequestResults*() noexcept {
return static_cast<::Meta::Voice::ITranscriptionRequestResults*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::ITranscriptionRequestResults"
template<typename TResponseData>
constexpr ::Meta::Voice::ITranscriptionRequestResults* Meta::Voice::INLPRequestResults_1<TResponseData>::i___Meta__Voice__ITranscriptionRequestResults() noexcept {
return static_cast<::Meta::Voice::ITranscriptionRequestResults*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::Voice::IVoiceRequestResults"
template<typename TResponseData>
constexpr  Meta::Voice::INLPRequestResults_1<TResponseData>::operator ::Meta::Voice::IVoiceRequestResults*() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestResults*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::IVoiceRequestResults"
template<typename TResponseData>
constexpr ::Meta::Voice::IVoiceRequestResults* Meta::Voice::INLPRequestResults_1<TResponseData>::i___Meta__Voice__IVoiceRequestResults() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestResults*>(static_cast<void*>(this));
}
