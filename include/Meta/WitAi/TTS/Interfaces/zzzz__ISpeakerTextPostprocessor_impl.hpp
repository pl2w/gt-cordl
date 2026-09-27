#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ISpeakerTextPostprocessor.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ISpeakerTextPostprocessor_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor.OnPostprocessTTS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker*, ::System::Collections::Generic::List_1<::StringW>*)>(&::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor::OnPostprocessTTS)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor::OnPostprocessTTS(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::System::Collections::Generic::List_1<::StringW>*  phrases)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speaker, phrases);
}
