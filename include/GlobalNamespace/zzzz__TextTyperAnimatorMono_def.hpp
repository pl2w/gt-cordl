#pragma once
// IWYU pragma private; include "GlobalNamespace/TextTyperAnimatorMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextTyperAnimatorMono)
namespace Cysharp::Text {
struct Utf16ValueStringBuilder;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class TextTyperAnimatorMono;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextTyperAnimatorMono*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextTyperAnimatorMono*, "", "TextTyperAnimatorMono");
// Dependencies Unity.Mathematics.Random, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextTyperAnimatorMono
class CORDL_TYPE TextTyperAnimatorMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _charCount, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__charCount, put=__cordl_internal_set__charCount)) int32_t  _charCount;

/// @brief Field _entryIndexes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__entryIndexes, put=__cordl_internal_set__entryIndexes)) ::System::Collections::Generic::List_1<int32_t>*  _entryIndexes;

/// @brief Field _has_beginEntrySoundBank, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__has_beginEntrySoundBank, put=__cordl_internal_set__has_beginEntrySoundBank)) bool  _has_beginEntrySoundBank;

/// @brief Field _has_typingSoundBank, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__has_typingSoundBank, put=__cordl_internal_set__has_typingSoundBank)) bool  _has_typingSoundBank;

/// @brief Field _random, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__random, put=__cordl_internal_set__random)) ::Unity::Mathematics::Random  _random;

/// @brief Field _timeOfLastTypedChar, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeOfLastTypedChar, put=__cordl_internal_set__timeOfLastTypedChar)) float_t  _timeOfLastTypedChar;

/// @brief Field _waitTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__waitTime, put=__cordl_internal_set__waitTime)) float_t  _waitTime;

/// @brief Field m_beginEntrySoundBank, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_beginEntrySoundBank, put=__cordl_internal_set_m_beginEntrySoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  m_beginEntrySoundBank;

/// @brief Field m_textMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_textMesh, put=__cordl_internal_set_m_textMesh)) ::UnityW<::TMPro::TMP_Text>  m_textMesh;

/// @brief Field m_typingSoundBank, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_typingSoundBank, put=__cordl_internal_set_m_typingSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  m_typingSoundBank;

/// @brief Field m_typingSpeedMinMax, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_typingSpeedMinMax, put=__cordl_internal_set_m_typingSpeedMinMax)) ::UnityEngine::Vector2  m_typingSpeedMinMax;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x57f00f0, size 0xc4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EdRestartAnimation, addr 0x57f00d4, size 0x1c, virtual false, abstract: false, final false
inline void EdRestartAnimation() ;

static inline ::GlobalNamespace::TextTyperAnimatorMono* New_ctor() ;

/// @brief Method OnDisable, addr 0x57f01c0, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57f01b4, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetText, addr 0x57ee9cc, size 0xac, virtual false, abstract: false, final false
inline void SetText(::StringW  text) ;

/// @brief Method SetText, addr 0x57f0360, size 0x60, virtual false, abstract: false, final false
inline void SetText(::StringW  text, ::System::Collections::Generic::IList_1<int32_t>*  entryIndexes) ;

/// @brief Method SetText, addr 0x57f02a0, size 0x50, virtual false, abstract: false, final false
inline void SetText(::StringW  text, ::System::Collections::Generic::IList_1<int32_t>*  entryIndexes, int32_t  nonRichTextTagsCharCount) ;

/// @brief Method SetText, addr 0x57efd5c, size 0xe4, virtual false, abstract: false, final false
inline void SetText(::Cysharp::Text::Utf16ValueStringBuilder  zStringBuilder) ;

/// @brief Method SetText, addr 0x57efe40, size 0x4c, virtual false, abstract: false, final false
inline void SetText(::Cysharp::Text::Utf16ValueStringBuilder  zStringBuilder, ::System::Collections::Generic::IList_1<int32_t>*  entryIndexes, int32_t  nonRichTextTagsCharCount) ;

/// @brief Method SliceUpdate, addr 0x57f01cc, size 0xd4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateText, addr 0x57efe8c, size 0x4c, virtual false, abstract: false, final false
inline void UpdateText(::Cysharp::Text::Utf16ValueStringBuilder  zStringBuilder, int32_t  nonRichTextTagsCharCount) ;

/// @brief Method _SetEntryIndexes, addr 0x57f02f0, size 0x70, virtual false, abstract: false, final false
inline void _SetEntryIndexes(::System::Collections::Generic::IList_1<int32_t>*  entryIndexes) ;

constexpr int32_t const& __cordl_internal_get__charCount() const;

constexpr int32_t& __cordl_internal_get__charCount() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__entryIndexes() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__entryIndexes() ;

constexpr bool const& __cordl_internal_get__has_beginEntrySoundBank() const;

constexpr bool& __cordl_internal_get__has_beginEntrySoundBank() ;

constexpr bool const& __cordl_internal_get__has_typingSoundBank() const;

constexpr bool& __cordl_internal_get__has_typingSoundBank() ;

constexpr ::Unity::Mathematics::Random const& __cordl_internal_get__random() const;

constexpr ::Unity::Mathematics::Random& __cordl_internal_get__random() ;

constexpr float_t const& __cordl_internal_get__timeOfLastTypedChar() const;

constexpr float_t& __cordl_internal_get__timeOfLastTypedChar() ;

constexpr float_t const& __cordl_internal_get__waitTime() const;

constexpr float_t& __cordl_internal_get__waitTime() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_m_beginEntrySoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_m_beginEntrySoundBank() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_m_textMesh() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_m_textMesh() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_m_typingSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_m_typingSoundBank() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_typingSpeedMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_typingSpeedMinMax() ;

constexpr void __cordl_internal_set__charCount(int32_t  value) ;

constexpr void __cordl_internal_set__entryIndexes(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__has_beginEntrySoundBank(bool  value) ;

constexpr void __cordl_internal_set__has_typingSoundBank(bool  value) ;

constexpr void __cordl_internal_set__random(::Unity::Mathematics::Random  value) ;

constexpr void __cordl_internal_set__timeOfLastTypedChar(float_t  value) ;

constexpr void __cordl_internal_set__waitTime(float_t  value) ;

constexpr void __cordl_internal_set_m_beginEntrySoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_m_textMesh(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_m_typingSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_m_typingSpeedMinMax(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x57f03c0, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextTyperAnimatorMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextTyperAnimatorMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextTyperAnimatorMono(TextTyperAnimatorMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextTyperAnimatorMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextTyperAnimatorMono(TextTyperAnimatorMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{187};

/// [FormerlySerializedAs("_textMesh")]
/// [Tooltip("Text Mesh Pro component.")]
/// [SerializeField]
/// @brief Field m_textMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___m_textMesh;

/// [Tooltip("Delay between characters in seconds")]
/// [SerializeField]
/// @brief Field m_typingSpeedMinMax, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_typingSpeedMinMax;

/// [Header("Audio")]
/// [Tooltip("AudioClips to play while typing.")]
/// [SerializeField]
/// @brief Field m_typingSoundBank, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___m_typingSoundBank;

/// @brief Field _has_typingSoundBank, offset: 0x38, size: 0x1, def value: None
 bool  ____has_typingSoundBank;

/// [Tooltip("AudioClips to play when a ")]
/// [SerializeField]
/// @brief Field m_beginEntrySoundBank, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___m_beginEntrySoundBank;

/// @brief Field _has_beginEntrySoundBank, offset: 0x48, size: 0x1, def value: None
 bool  ____has_beginEntrySoundBank;

/// @brief Field _charCount, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____charCount;

/// @brief Field _entryIndexes, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____entryIndexes;

/// @brief Field _waitTime, offset: 0x58, size: 0x4, def value: None
 float_t  ____waitTime;

/// @brief Field _timeOfLastTypedChar, offset: 0x5c, size: 0x4, def value: None
 float_t  ____timeOfLastTypedChar;

/// @brief Field _random, offset: 0x60, size: 0x4, def value: None
 ::Unity::Mathematics::Random  ____random;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextTyperAnimatorMono, ___m_textMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextTyperAnimatorMono, ___m_typingSpeedMinMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextTyperAnimatorMono, ___m_typingSoundBank) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextTyperAnimatorMono, ____has_typingSoundBank) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextTyperAnimatorMono, ___m_beginEntrySoundBank) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextTyperAnimatorMono, ____has_beginEntrySoundBank) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextTyperAnimatorMono, ____charCount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextTyperAnimatorMono, ____entryIndexes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextTyperAnimatorMono, ____waitTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextTyperAnimatorMono, ____timeOfLastTypedChar) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextTyperAnimatorMono, ____random) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextTyperAnimatorMono) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
