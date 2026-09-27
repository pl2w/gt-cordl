#pragma once
// IWYU pragma private; include "GorillaTag/Audio/GTAudioOneShot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Audio/zzzz__GTAudioOneShot_DelayedPlayData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTAudioOneShot)
namespace GlobalNamespace {
struct GTAudioOneShot_DelayedPlayData;
}
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace GorillaTag::Audio {
class GTAudioOneShot_DelayedPlayListener;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Audio {
class GTAudioOneShot;
}
namespace GorillaTag::Audio {
class GTAudioOneShot_DelayedPlayListener;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::GTAudioOneShot*);
MARK_REF_T(::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::GTAudioOneShot*, "GorillaTag.Audio", "GTAudioOneShot");
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*, "GorillaTag.Audio", "GTAudioOneShot/DelayedPlayListener");
// Dependencies GorillaTag.Audio.GTAudioOneShot::DelayedPlayData, System.Object
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.GTAudioOneShot
class CORDL_TYPE GTAudioOneShot : public ::System::Object {
public:
// Declarations
using DelayedPlayData = ::GlobalNamespace::GTAudioOneShot_DelayedPlayData;

using DelayedPlayListener = ::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener;

/// @brief Field _delayedData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__delayedData, put=setStaticF__delayedData)) ::ArrayW<::GlobalNamespace::GTAudioOneShot_DelayedPlayData>  _delayedData;

/// @brief Field _delayedFreeHead, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__delayedFreeHead, put=setStaticF__delayedFreeHead)) int32_t  _delayedFreeHead;

/// @brief Field _delayedFreeNext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__delayedFreeNext, put=setStaticF__delayedFreeNext)) ::ArrayW<int32_t>  _delayedFreeNext;

/// @brief Field _delayedHighWater, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__delayedHighWater, put=setStaticF__delayedHighWater)) int32_t  _delayedHighWater;

/// @brief Field _delayedListener, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__delayedListener, put=setStaticF__delayedListener)) ::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*  _delayedListener;

/// @brief Field <isInitialized>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isInitialized_k__BackingField, put=setStaticF__isInitialized_k__BackingField)) bool  _isInitialized_k__BackingField;

/// @brief Field audioSource, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_audioSource, put=setStaticF_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field defaultCurve, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultCurve, put=setStaticF_defaultCurve)) ::UnityEngine::AnimationCurve*  defaultCurve;

/// @brief Method CancelDelayed, addr 0x5d4f1d8, size 0xb0, virtual false, abstract: false, final false
static inline void CancelDelayed(int32_t  idx) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method Initialize, addr 0x5d4e8e8, size 0x234, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method Play, addr 0x5d4eca0, size 0x184, virtual false, abstract: false, final false
static inline void Play(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position, ::UnityEngine::AnimationCurve*  curve, float_t  volume, float_t  pitch) ;

/// @brief Method Play, addr 0x5d4eb1c, size 0x184, virtual false, abstract: false, final false
static inline void Play(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position, float_t  volume, float_t  pitch) ;

/// @brief Method PlayDelayed, addr 0x5d4ee24, size 0xa0, virtual false, abstract: false, final false
static inline int32_t PlayDelayed(::UnityEngine::AudioClip*  sound, ::UnityEngine::Vector3  pos, float_t  delay, float_t  volume, float_t  pitch) ;

/// @brief Method PlayDelayed, addr 0x5d4eec4, size 0x314, virtual false, abstract: false, final false
static inline int32_t PlayDelayed(::UnityEngine::AudioClip*  sound, ::UnityEngine::Transform*  xform, ::UnityEngine::Vector3  pos, float_t  delay, float_t  volume, float_t  pitch) ;

/// @brief Method UpdateDelayed, addr 0x5d4f394, size 0x10c, virtual false, abstract: false, final false
static inline void UpdateDelayed(int32_t  idx, ::UnityEngine::Vector3  pos) ;

/// @brief Method UpdateDelayed, addr 0x5d4f288, size 0x10c, virtual false, abstract: false, final false
static inline void UpdateDelayed(int32_t  idx, ::UnityEngine::Transform*  xform) ;

/// @brief Method UpdateDelayed, addr 0x5d4f4a0, size 0x128, virtual false, abstract: false, final false
static inline void UpdateDelayed(int32_t  idx, ::UnityEngine::Transform*  xform, ::UnityEngine::Vector3  pos) ;

static inline ::ArrayW<::GlobalNamespace::GTAudioOneShot_DelayedPlayData> getStaticF__delayedData() ;

static inline int32_t getStaticF__delayedFreeHead() ;

static inline ::ArrayW<int32_t> getStaticF__delayedFreeNext() ;

static inline int32_t getStaticF__delayedHighWater() ;

static inline ::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener* getStaticF__delayedListener() ;

static inline bool getStaticF__isInitialized_k__BackingField() ;

static inline ::UnityW<::UnityEngine::AudioSource> getStaticF_audioSource() ;

static inline ::UnityEngine::AnimationCurve* getStaticF_defaultCurve() ;

/// [CompilerGenerated]
/// @brief Method get_isInitialized, addr 0x5d4e830, size 0x58, virtual false, abstract: false, final false
static inline bool get_isInitialized() ;

static inline void setStaticF__delayedData(::ArrayW<::GlobalNamespace::GTAudioOneShot_DelayedPlayData>  value) ;

static inline void setStaticF__delayedFreeHead(int32_t  value) ;

static inline void setStaticF__delayedFreeNext(::ArrayW<int32_t>  value) ;

static inline void setStaticF__delayedHighWater(int32_t  value) ;

static inline void setStaticF__delayedListener(::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener*  value) ;

static inline void setStaticF__isInitialized_k__BackingField(bool  value) ;

static inline void setStaticF_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

static inline void setStaticF_defaultCurve(::UnityEngine::AnimationCurve*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isInitialized, addr 0x5d4e888, size 0x60, virtual false, abstract: false, final false
static inline void set_isInitialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTAudioOneShot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTAudioOneShot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTAudioOneShot(GTAudioOneShot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTAudioOneShot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTAudioOneShot(GTAudioOneShot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4783};

/// @brief Field k_initialDelayedCount offset 0xffffffff size 0x4
static constexpr int32_t  k_initialDelayedCount{static_cast<int32_t>(0x20)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Audio::GTAudioOneShot) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Audio
// Dependencies System.Object
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.GTAudioOneShot/DelayedPlayListener
class CORDL_TYPE GTAudioOneShot_DelayedPlayListener : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

static inline ::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener* New_ctor() ;

/// @brief Method OnDelayedAction, addr 0x5d4f6cc, size 0x20c, virtual true, abstract: false, final true
inline void OnDelayedAction(int32_t  contextId) ;

/// @brief Method .ctor, addr 0x5d4f6c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTAudioOneShot_DelayedPlayListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTAudioOneShot_DelayedPlayListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTAudioOneShot_DelayedPlayListener(GTAudioOneShot_DelayedPlayListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTAudioOneShot_DelayedPlayListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTAudioOneShot_DelayedPlayListener(GTAudioOneShot_DelayedPlayListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4782};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Audio::GTAudioOneShot_DelayedPlayListener) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Audio
