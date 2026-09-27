#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeakerAutoLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSSpeakerAutoLoader)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerAutoLoader;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*, "Meta.WitAi.TTS.Utilities", "TTSSpeakerAutoLoader");
// [RequireComponent(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker))]
// Dependencies Meta.WitAi.TTS.Data.TTSClipData, UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeakerAutoLoader
class CORDL_TYPE TTSSpeakerAutoLoader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Clips)) ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*>  Clips;

 __declspec(property(get=get_IsLoaded)) bool  IsLoaded;

/// @brief Field LoadManually, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_LoadManually, put=__cordl_internal_set_LoadManually)) bool  LoadManually;

/// @brief Field PhraseFile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PhraseFile, put=__cordl_internal_set_PhraseFile)) ::UnityW<::UnityEngine::TextAsset>  PhraseFile;

 __declspec(property(get=get_Phrases)) ::ArrayW<::StringW>  Phrases;

/// @brief Field Speaker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Speaker, put=__cordl_internal_set_Speaker)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  Speaker;

/// @brief Field _clips, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__clips, put=__cordl_internal_set__clips)) ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*>  _clips;

/// @brief Field _clipsLoading, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__clipsLoading, put=__cordl_internal_set__clipsLoading)) int32_t  _clipsLoading;

/// @brief Field _phrases, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__phrases, put=__cordl_internal_set__phrases)) ::ArrayW<::StringW>  _phrases;

/// @brief Method AddUniquePhrases, addr 0x9e64ff0, size 0x12c, virtual false, abstract: false, final false
inline void AddUniquePhrases(::System::Collections::Generic::List_1<::StringW>*  list, ::ArrayW<::StringW>  newPhrases) ;

/// @brief Method GetAllPhrases, addr 0x9e64e64, size 0x18c, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetAllPhrases() ;

/// @brief Method GetVoiceIds, addr 0x9e65308, size 0x128, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetVoiceIds() ;

/// @brief Method GetVoicePhrases, addr 0x9e65430, size 0xc, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetVoicePhrases(::StringW  voiceId) ;

/// @brief Method LoadClips, addr 0x9e64bbc, size 0x2a8, virtual true, abstract: false, final false
inline void LoadClips() ;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader* New_ctor() ;

/// @brief Method OnClipReady, addr 0x9e65238, size 0x10, virtual true, abstract: false, final false
inline void OnClipReady(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  error) ;

/// @brief Method OnDestroy, addr 0x9e65248, size 0xc, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetupSpeaker, addr 0x9e6511c, size 0x11c, virtual true, abstract: false, final false
inline void SetupSpeaker() ;

/// @brief Method Start, addr 0x9e64ba4, size 0x18, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UnloadClips, addr 0x9e65254, size 0xb4, virtual true, abstract: false, final false
inline void UnloadClips() ;

constexpr bool const& __cordl_internal_get_LoadManually() const;

constexpr bool& __cordl_internal_get_LoadManually() ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_PhraseFile() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_PhraseFile() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get_Speaker() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get_Speaker() ;

constexpr ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> const& __cordl_internal_get__clips() const;

constexpr ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*>& __cordl_internal_get__clips() ;

constexpr int32_t const& __cordl_internal_get__clipsLoading() const;

constexpr int32_t& __cordl_internal_get__clipsLoading() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__phrases() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__phrases() ;

constexpr void __cordl_internal_set_LoadManually(bool  value) ;

constexpr void __cordl_internal_set_PhraseFile(::UnityW<::UnityEngine::TextAsset>  value) ;

constexpr void __cordl_internal_set_Speaker(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set__clips(::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*>  value) ;

constexpr void __cordl_internal_set__clipsLoading(int32_t  value) ;

constexpr void __cordl_internal_set__phrases(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x9e6543c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Clips, addr 0x9e64b8c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> get_Clips() ;

/// @brief Method get_IsLoaded, addr 0x9e64b94, size 0x10, virtual false, abstract: false, final false
inline bool get_IsLoaded() ;

/// @brief Method get_Phrases, addr 0x9e64b84, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_Phrases() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeakerAutoLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerAutoLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerAutoLoader(TTSSpeakerAutoLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerAutoLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerAutoLoader(TTSSpeakerAutoLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29170};

/// @brief Field Speaker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  ___Speaker;

/// @brief Field PhraseFile, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ___PhraseFile;

/// [SerializeField]
/// @brief Field _phrases, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____phrases;

/// @brief Field LoadManually, offset: 0x38, size: 0x1, def value: None
 bool  ___LoadManually;

/// @brief Field _clips, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*>  ____clips;

/// @brief Field _clipsLoading, offset: 0x48, size: 0x4, def value: None
 int32_t  ____clipsLoading;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader, ___Speaker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader, ___PhraseFile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader, ____phrases) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader, ___LoadManually) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader, ____clips) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader, ____clipsLoading) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader) == 0x50, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
