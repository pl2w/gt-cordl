#pragma once
// IWYU pragma private; include "GlobalNamespace/VODTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableBehavior_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODNextStreamData_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioRolloffMode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VODTarget)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
struct VODPlayer_VODNextStreamData;
}
namespace GlobalNamespace {
struct VODStream_VODPlayer_VODStreamChannel;
}
namespace GlobalNamespace {
class VODTarget_VODTargetAudioSettings;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class VODTarget;
}
namespace GlobalNamespace {
class VODTarget_VODTargetAudioSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VODTarget*);
MARK_REF_T(::GlobalNamespace::VODTarget_VODTargetAudioSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODTarget*, "", "VODTarget");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODTarget_VODTargetAudioSettings*, "", "VODTarget/VODTargetAudioSettings");
// Dependencies ObservableBehavior, VODPlayer::VODNextStreamData, VODPlayer::VODStream::VODStreamChannel
namespace GlobalNamespace {
// Is value type: false
// CS Name: VODTarget
class CORDL_TYPE VODTarget : public ::GlobalNamespace::ObservableBehavior {
public:
// Declarations
using VODTargetAudioSettings = ::GlobalNamespace::VODTarget_VODTargetAudioSettings;

/// @brief Field AlertDisabled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AlertDisabled, put=setStaticF_AlertDisabled)) ::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*  AlertDisabled;

/// @brief Field AlertEnabled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AlertEnabled, put=setStaticF_AlertEnabled)) ::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*  AlertEnabled;

 __declspec(property(get=get_AudioSettings)) ::GlobalNamespace::VODTarget_VODTargetAudioSettings*  AudioSettings;

 __declspec(property(get=get_Channel)) ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  Channel;

 __declspec(property(get=get_Renderer)) ::UnityW<::UnityEngine::Renderer>  Renderer;

 __declspec(property(get=get_StandbyOverride)) ::UnityW<::UnityEngine::Material>  StandbyOverride;

 __declspec(property(get=get_Unmutable)) bool  Unmutable;

/// @brief Field audioSettings, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSettings, put=__cordl_internal_set_audioSettings)) ::GlobalNamespace::VODTarget_VODTargetAudioSettings*  audioSettings;

/// @brief Field channel, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_channel, put=__cordl_internal_set_channel)) ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  channel;

/// @brief Field standbyOverride, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_standbyOverride, put=__cordl_internal_set_standbyOverride)) ::UnityW<::UnityEngine::Material>  standbyOverride;

/// @brief Field staticScreen, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticScreen, put=__cordl_internal_set_staticScreen)) ::UnityW<::UnityEngine::GameObject>  staticScreen;

/// @brief Field targetRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRenderer, put=__cordl_internal_set_targetRenderer)) ::UnityW<::UnityEngine::Renderer>  targetRenderer;

/// @brief Field unmutable, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_unmutable, put=__cordl_internal_set_unmutable)) bool  unmutable;

/// @brief Field upNext, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_upNext, put=__cordl_internal_set_upNext)) ::UnityW<::TMPro::TMP_Text>  upNext;

/// @brief Field upNextData, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_upNextData, put=__cordl_internal_set_upNextData)) ::GlobalNamespace::VODPlayer_VODNextStreamData  upNextData;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method ClearNext, addr 0x5d069f4, size 0x8, virtual false, abstract: false, final false
inline void ClearNext() ;

/// @brief Method IBuildValidation.BuildValidationCheck, addr 0x5d07994, size 0x100, virtual true, abstract: false, final true
inline bool IBuildValidation_BuildValidationCheck() ;

static inline ::GlobalNamespace::VODTarget* New_ctor() ;

/// @brief Method ObservableSliceUpdate, addr 0x5d07e6c, size 0x260, virtual true, abstract: false, final false
inline void ObservableSliceUpdate() ;

/// @brief Method OnBecameObservable, addr 0x5d07910, size 0x84, virtual true, abstract: false, final false
inline void OnBecameObservable() ;

/// @brief Method OnDestroy, addr 0x5d07d60, size 0xf0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLostObservable, addr 0x5d0788c, size 0x84, virtual true, abstract: false, final false
inline void OnLostObservable() ;

/// @brief Method SetNext, addr 0x5d07880, size 0xc, virtual false, abstract: false, final false
inline void SetNext(::GlobalNamespace::VODPlayer_VODNextStreamData  data) ;

/// @brief Method ShowStatic, addr 0x5d07738, size 0xb4, virtual false, abstract: false, final false
inline void ShowStatic(bool  on) ;

/// @brief Method Start, addr 0x5d07a94, size 0xb0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UnityOnDisable, addr 0x5d07c70, size 0xf0, virtual true, abstract: false, final false
inline void UnityOnDisable() ;

/// @brief Method UnityOnEnable, addr 0x5d07b44, size 0x12c, virtual true, abstract: false, final false
inline void UnityOnEnable() ;

/// @brief Method VODPlayer_OnCrash, addr 0x5d07e50, size 0x1c, virtual false, abstract: false, final false
inline void VODPlayer_OnCrash() ;

/// @brief Method VerifyChannel, addr 0x5d06998, size 0x5c, virtual false, abstract: false, final false
inline bool VerifyChannel(::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch) ;

constexpr ::GlobalNamespace::VODTarget_VODTargetAudioSettings* const& __cordl_internal_get_audioSettings() const;

constexpr ::GlobalNamespace::VODTarget_VODTargetAudioSettings*& __cordl_internal_get_audioSettings() ;

constexpr ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel> const& __cordl_internal_get_channel() const;

constexpr ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>& __cordl_internal_get_channel() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_standbyOverride() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_standbyOverride() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_staticScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_staticScreen() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_targetRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_targetRenderer() ;

constexpr bool const& __cordl_internal_get_unmutable() const;

constexpr bool& __cordl_internal_get_unmutable() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_upNext() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_upNext() ;

constexpr ::GlobalNamespace::VODPlayer_VODNextStreamData const& __cordl_internal_get_upNextData() const;

constexpr ::GlobalNamespace::VODPlayer_VODNextStreamData& __cordl_internal_get_upNextData() ;

constexpr void __cordl_internal_set_audioSettings(::GlobalNamespace::VODTarget_VODTargetAudioSettings*  value) ;

constexpr void __cordl_internal_set_channel(::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  value) ;

constexpr void __cordl_internal_set_standbyOverride(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_staticScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_unmutable(bool  value) ;

constexpr void __cordl_internal_set_upNext(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_upNextData(::GlobalNamespace::VODPlayer_VODNextStreamData  value) ;

/// @brief Method .ctor, addr 0x5d080cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>* getStaticF_AlertDisabled() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>* getStaticF_AlertEnabled() ;

/// @brief Method get_AudioSettings, addr 0x5d077f8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::VODTarget_VODTargetAudioSettings* get_AudioSettings() ;

/// @brief Method get_Channel, addr 0x5d07810, size 0x68, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel> get_Channel() ;

/// @brief Method get_Renderer, addr 0x5d07800, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> get_Renderer() ;

/// @brief Method get_StandbyOverride, addr 0x5d07808, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_StandbyOverride() ;

/// @brief Method get_Unmutable, addr 0x5d07878, size 0x8, virtual false, abstract: false, final false
inline bool get_Unmutable() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

static inline void setStaticF_AlertDisabled(::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*  value) ;

static inline void setStaticF_AlertEnabled(::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VODTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VODTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VODTarget(VODTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VODTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VODTarget(VODTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{444};

/// [SerializeField]
/// @brief Field targetRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___targetRenderer;

/// [SerializeField]
/// @brief Field standbyOverride, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___standbyOverride;

/// [SerializeField]
/// @brief Field audioSettings, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::VODTarget_VODTargetAudioSettings*  ___audioSettings;

/// [SerializeField]
/// @brief Field upNext, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___upNext;

/// [SerializeField]
/// @brief Field channel, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  ___channel;

/// [SerializeField]
/// @brief Field staticScreen, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___staticScreen;

/// [SerializeField]
/// @brief Field unmutable, offset: 0x70, size: 0x1, def value: None
 bool  ___unmutable;

/// @brief Field upNextData, offset: 0x78, size: 0x10, def value: None
 ::GlobalNamespace::VODPlayer_VODNextStreamData  ___upNextData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODTarget, ___targetRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget, ___standbyOverride) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget, ___audioSettings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget, ___upNext) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget, ___channel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget, ___staticScreen) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget, ___unmutable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget, ___upNextData) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODTarget) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.AudioRolloffMode
namespace GlobalNamespace {
// Is value type: false
// CS Name: VODTarget/VODTargetAudioSettings
class CORDL_TYPE VODTarget_VODTargetAudioSettings : public ::System::Object {
public:
// Declarations
/// @brief Field dopplerLevel, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_dopplerLevel, put=__cordl_internal_set_dopplerLevel)) float_t  dopplerLevel;

/// @brief Field maxDistance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field minDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistance, put=__cordl_internal_set_minDistance)) float_t  minDistance;

/// @brief Field rolloffMode, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rolloffMode, put=__cordl_internal_set_rolloffMode)) ::UnityEngine::AudioRolloffMode  rolloffMode;

/// @brief Field spread, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_spread, put=__cordl_internal_set_spread)) float_t  spread;

/// @brief Field volume, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) float_t  volume;

static inline ::GlobalNamespace::VODTarget_VODTargetAudioSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_dopplerLevel() const;

constexpr float_t& __cordl_internal_get_dopplerLevel() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr float_t const& __cordl_internal_get_minDistance() const;

constexpr float_t& __cordl_internal_get_minDistance() ;

constexpr ::UnityEngine::AudioRolloffMode const& __cordl_internal_get_rolloffMode() const;

constexpr ::UnityEngine::AudioRolloffMode& __cordl_internal_get_rolloffMode() ;

constexpr float_t const& __cordl_internal_get_spread() const;

constexpr float_t& __cordl_internal_get_spread() ;

constexpr float_t const& __cordl_internal_get_volume() const;

constexpr float_t& __cordl_internal_get_volume() ;

constexpr void __cordl_internal_set_dopplerLevel(float_t  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_minDistance(float_t  value) ;

constexpr void __cordl_internal_set_rolloffMode(::UnityEngine::AudioRolloffMode  value) ;

constexpr void __cordl_internal_set_spread(float_t  value) ;

constexpr void __cordl_internal_set_volume(float_t  value) ;

/// @brief Method .ctor, addr 0x5d080d4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VODTarget_VODTargetAudioSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VODTarget_VODTargetAudioSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VODTarget_VODTargetAudioSettings(VODTarget_VODTargetAudioSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VODTarget_VODTargetAudioSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VODTarget_VODTargetAudioSettings(VODTarget_VODTargetAudioSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{443};

/// [Range(0, 1)]
/// @brief Field volume, offset: 0x10, size: 0x4, def value: None
 float_t  ___volume;

/// [Range(0, 5)]
/// @brief Field dopplerLevel, offset: 0x14, size: 0x4, def value: None
 float_t  ___dopplerLevel;

/// [Range(0, 360)]
/// @brief Field spread, offset: 0x18, size: 0x4, def value: None
 float_t  ___spread;

/// @brief Field rolloffMode, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::AudioRolloffMode  ___rolloffMode;

/// @brief Field minDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ___minDistance;

/// @brief Field maxDistance, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODTarget_VODTargetAudioSettings, ___volume) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget_VODTargetAudioSettings, ___dopplerLevel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget_VODTargetAudioSettings, ___spread) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget_VODTargetAudioSettings, ___rolloffMode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget_VODTargetAudioSettings, ___minDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODTarget_VODTargetAudioSettings, ___maxDistance) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODTarget_VODTargetAudioSettings) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
