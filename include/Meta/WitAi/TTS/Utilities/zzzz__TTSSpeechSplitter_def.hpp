#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeechSplitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSSpeechSplitter)
namespace Meta::WitAi::TTS::Interfaces {
class ISpeakerTextPreprocessor;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeechSplitter;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter*, "Meta.WitAi.TTS.Utilities", "TTSSpeechSplitter");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeechSplitter
class CORDL_TYPE TTSSpeechSplitter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field MaxTextLength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxTextLength, put=__cordl_internal_set_MaxTextLength)) int32_t  MaxTextLength;

/// @brief Field _cleaner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cleaner, put=__cordl_internal_set__cleaner)) ::System::Text::RegularExpressions::Regex*  _cleaner;

/// @brief Field _sentenceSplitter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sentenceSplitter, put=__cordl_internal_set__sentenceSplitter)) ::System::Text::RegularExpressions::Regex*  _sentenceSplitter;

/// @brief Field _wordSplitter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__wordSplitter, put=__cordl_internal_set__wordSplitter)) ::System::Text::RegularExpressions::Regex*  _wordSplitter;

/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor"
constexpr operator  ::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*() noexcept;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter* New_ctor() ;

/// @brief Method OnPreprocessTTS, addr 0x9e65890, size 0x5f0, virtual true, abstract: false, final true
inline void OnPreprocessTTS(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::System::Collections::Generic::List_1<::StringW>*  phrases) ;

constexpr int32_t const& __cordl_internal_get_MaxTextLength() const;

constexpr int32_t& __cordl_internal_get_MaxTextLength() ;

constexpr ::System::Text::RegularExpressions::Regex* const& __cordl_internal_get__cleaner() const;

constexpr ::System::Text::RegularExpressions::Regex*& __cordl_internal_get__cleaner() ;

constexpr ::System::Text::RegularExpressions::Regex* const& __cordl_internal_get__sentenceSplitter() const;

constexpr ::System::Text::RegularExpressions::Regex*& __cordl_internal_get__sentenceSplitter() ;

constexpr ::System::Text::RegularExpressions::Regex* const& __cordl_internal_get__wordSplitter() const;

constexpr ::System::Text::RegularExpressions::Regex*& __cordl_internal_get__wordSplitter() ;

constexpr void __cordl_internal_set_MaxTextLength(int32_t  value) ;

constexpr void __cordl_internal_set__cleaner(::System::Text::RegularExpressions::Regex*  value) ;

constexpr void __cordl_internal_set__sentenceSplitter(::System::Text::RegularExpressions::Regex*  value) ;

constexpr void __cordl_internal_set__wordSplitter(::System::Text::RegularExpressions::Regex*  value) ;

/// @brief Method .ctor, addr 0x9e65e80, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor"
constexpr ::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor* i___Meta__WitAi__TTS__Interfaces__ISpeakerTextPreprocessor() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeechSplitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeechSplitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeechSplitter(TTSSpeechSplitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeechSplitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeechSplitter(TTSSpeechSplitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29172};

/// [Tooltip("If text-to-speech phrase is greater than this length, it will be split.")]
/// [Range(10, 250)]
/// [FormerlySerializedAs("maxTextLength")]
/// @brief Field MaxTextLength, offset: 0x20, size: 0x4, def value: None
 int32_t  ___MaxTextLength;

/// @brief Field _cleaner, offset: 0x28, size: 0x8, def value: None
 ::System::Text::RegularExpressions::Regex*  ____cleaner;

/// @brief Field _sentenceSplitter, offset: 0x30, size: 0x8, def value: None
 ::System::Text::RegularExpressions::Regex*  ____sentenceSplitter;

/// @brief Field _wordSplitter, offset: 0x38, size: 0x8, def value: None
 ::System::Text::RegularExpressions::Regex*  ____wordSplitter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter, ___MaxTextLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter, ____cleaner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter, ____sentenceSplitter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter, ____wordSplitter) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeechSplitter) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
