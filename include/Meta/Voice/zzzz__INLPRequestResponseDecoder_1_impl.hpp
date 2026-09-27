#pragma once
// IWYU pragma private; include "Meta/Voice/INLPRequestResponseDecoder_1.hpp"
#include "Meta/Voice/zzzz__INLPRequestResponseDecoder_1_def.hpp"
template<typename TResults>
inline TResults Meta::Voice::INLPRequestResponseDecoder_1<TResults>::Decode(::StringW  rawResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::INLPRequestResponseDecoder_1<TResults>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<TResults>(this, ___internal_method, rawResponse);
}
template<typename TResults>
inline int32_t Meta::Voice::INLPRequestResponseDecoder_1<TResults>::GetResponseStatusCode(TResults  results)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::INLPRequestResponseDecoder_1<TResults>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, results);
}
template<typename TResults>
inline ::StringW Meta::Voice::INLPRequestResponseDecoder_1<TResults>::GetResponseError(TResults  results)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::INLPRequestResponseDecoder_1<TResults>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, results);
}
template<typename TResults>
inline bool Meta::Voice::INLPRequestResponseDecoder_1<TResults>::GetResponseHasPartial(TResults  results)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::INLPRequestResponseDecoder_1<TResults>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, results);
}
template<typename TResults>
inline ::StringW Meta::Voice::INLPRequestResponseDecoder_1<TResults>::GetResponseTranscription(TResults  results)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::INLPRequestResponseDecoder_1<TResults>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, results);
}
template<typename TResults>
inline bool Meta::Voice::INLPRequestResponseDecoder_1<TResults>::GetResponseHasTranscription(TResults  results)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::INLPRequestResponseDecoder_1<TResults>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, results);
}
template<typename TResults>
inline bool Meta::Voice::INLPRequestResponseDecoder_1<TResults>::GetResponseIsTranscriptionFull(TResults  results)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::INLPRequestResponseDecoder_1<TResults>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, results);
}
