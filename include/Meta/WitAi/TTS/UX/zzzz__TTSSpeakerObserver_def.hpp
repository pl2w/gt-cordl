#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/UX/TTSSpeakerObserver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSSpeakerObserver)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker;
}
// Forward declare root types
namespace Meta::WitAi::TTS::UX {
class TTSSpeakerObserver;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::UX::TTSSpeakerObserver*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::UX::TTSSpeakerObserver*, "Meta.WitAi.TTS.UX", "TTSSpeakerObserver");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::UX {
// Is value type: false
// CS Name: Meta.WitAi.TTS.UX.TTSSpeakerObserver
class CORDL_TYPE TTSSpeakerObserver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Speaker)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  Speaker;

/// @brief Field _speaker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__speaker, put=__cordl_internal_set__speaker)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _speaker;

/// @brief Method Awake, addr 0x9e4f728, size 0xb4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Meta::WitAi::TTS::UX::TTSSpeakerObserver* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e50cb8, size 0x3c0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e4f7f4, size 0x3c0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLoadAbort, addr 0x9e51080, size 0x4, virtual true, abstract: false, final false
inline void OnLoadAbort(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnLoadBegin, addr 0x9e4fcfc, size 0x4, virtual true, abstract: false, final false
inline void OnLoadBegin(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnLoadFailed, addr 0x9e4fd20, size 0x4, virtual true, abstract: false, final false
inline void OnLoadFailed(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  error) ;

/// @brief Method OnLoadSuccess, addr 0x9e51084, size 0x4, virtual true, abstract: false, final false
inline void OnLoadSuccess(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnPlaybackCancelled, addr 0x9e51090, size 0x4, virtual true, abstract: false, final false
inline void OnPlaybackCancelled(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  reason) ;

/// @brief Method OnPlaybackComplete, addr 0x9e51094, size 0x4, virtual true, abstract: false, final false
inline void OnPlaybackComplete(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnPlaybackQueueBegin, addr 0x9e51078, size 0x4, virtual true, abstract: false, final false
inline void OnPlaybackQueueBegin() ;

/// @brief Method OnPlaybackQueueComplete, addr 0x9e5107c, size 0x4, virtual true, abstract: false, final false
inline void OnPlaybackQueueComplete() ;

/// @brief Method OnPlaybackReady, addr 0x9e51088, size 0x4, virtual true, abstract: false, final false
inline void OnPlaybackReady(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnPlaybackStart, addr 0x9e5108c, size 0x4, virtual true, abstract: false, final false
inline void OnPlaybackStart(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get__speaker() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get__speaker() ;

constexpr void __cordl_internal_set__speaker(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

/// @brief Method .ctor, addr 0x9e4ff30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Speaker, addr 0x9e50cb0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> get_Speaker() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeakerObserver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerObserver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerObserver(TTSSpeakerObserver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerObserver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerObserver(TTSSpeakerObserver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29086};

/// [Header("Speaker Settings")]
/// [SerializeField]
/// [Tooltip("TTSSpeaker being observed, if left empty it will grab the speaker from the GameObject")]
/// @brief Field _speaker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  ____speaker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerObserver, ____speaker) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::UX::TTSSpeakerObserver) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::UX
