#pragma once
// IWYU pragma private; include "Liv/Lck/Utilities/ChannelMixingUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Utilities/zzzz__ChannelMixingUtils_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Utilities::ChannelMixingUtils.ConvertMonoToStereo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, int32_t, int32_t, ::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::Utilities::ChannelMixingUtils::ConvertMonoToStereo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d6ddb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::ChannelMixingUtils*>(),
                        {"ConvertMonoToStereo", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Utilities::ChannelMixingUtils.ConvertFiveOneToStereo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, int32_t, int32_t, ::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::Utilities::ChannelMixingUtils::ConvertFiveOneToStereo)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9d6de68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::ChannelMixingUtils*>(),
                        {"ConvertFiveOneToStereo", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Utilities::ChannelMixingUtils::ConvertMonoToStereo(::ArrayW<float_t>  sourceMonoAudio, int32_t  sourceAudioStartIdx, int32_t  sourceAudioLength, ::Liv::Lck::Collections::AudioBuffer*  outputBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::ChannelMixingUtils*>(),
                        {"ConvertMonoToStereo", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceMonoAudio, sourceAudioStartIdx, sourceAudioLength, outputBuffer);
}
inline void Liv::Lck::Utilities::ChannelMixingUtils::ConvertFiveOneToStereo(::ArrayW<float_t>  sourceFiveOneAudio, int32_t  sourceAudioStartIdx, int32_t  sourceAudioLength, ::Liv::Lck::Collections::AudioBuffer*  outputBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::ChannelMixingUtils*>(),
                        {"ConvertFiveOneToStereo", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFiveOneAudio, sourceAudioStartIdx, sourceAudioLength, outputBuffer);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Utilities::ChannelMixingUtils::ChannelMixingUtils()   {
}
