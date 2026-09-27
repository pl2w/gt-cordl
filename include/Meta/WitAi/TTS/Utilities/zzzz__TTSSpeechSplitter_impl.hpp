#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeechSplitter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeechSplitter_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ISpeakerTextPreprocessor_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter.OnPreprocessTTS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker*, ::System::Collections::Generic::List_1<::StringW>*)>(&::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::OnPreprocessTTS)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x9e65890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter*>(),
                        {"OnPreprocessTTS", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e65e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_get_MaxTextLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxTextLength;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_get_MaxTextLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxTextLength;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_set_MaxTextLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxTextLength = value;
}
constexpr ::System::Text::RegularExpressions::Regex*& Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_get__cleaner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cleaner;
}
constexpr ::System::Text::RegularExpressions::Regex* const& Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_get__cleaner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cleaner;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_set__cleaner(::System::Text::RegularExpressions::Regex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cleaner = value;
}
constexpr ::System::Text::RegularExpressions::Regex*& Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_get__sentenceSplitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sentenceSplitter;
}
constexpr ::System::Text::RegularExpressions::Regex* const& Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_get__sentenceSplitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sentenceSplitter;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_set__sentenceSplitter(::System::Text::RegularExpressions::Regex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sentenceSplitter = value;
}
constexpr ::System::Text::RegularExpressions::Regex*& Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_get__wordSplitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wordSplitter;
}
constexpr ::System::Text::RegularExpressions::Regex* const& Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_get__wordSplitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wordSplitter;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::__cordl_internal_set__wordSplitter(::System::Text::RegularExpressions::Regex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wordSplitter = value;
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::OnPreprocessTTS(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::System::Collections::Generic::List_1<::StringW>*  phrases)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter*>(),
                        {"OnPreprocessTTS", {}, {::i2c::type_of<::Meta::WitAi::TTS::Utilities::TTSSpeaker*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speaker, phrases);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter* Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter*>());
}
/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor"
constexpr  Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::operator ::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor"
constexpr ::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor* Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::i___Meta__WitAi__TTS__Interfaces__ISpeakerTextPreprocessor() noexcept {
return static_cast<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter::TTSSpeechSplitter()   {
}
