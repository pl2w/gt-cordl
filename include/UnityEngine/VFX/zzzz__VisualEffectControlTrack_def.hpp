#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlTrack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrack_ReinitMode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlTrack)
namespace GlobalNamespace {
struct VisualEffectControlTrack_ReinitMode;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrack___c;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VisualEffectControlTrack;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrack___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrack*);
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrack___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrack*, "UnityEngine.VFX", "VisualEffectControlTrack");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrack___c*, "UnityEngine.VFX", "VisualEffectControlTrack/<>c");
// [TrackColor(0.5990566, 0.9038978, 1)]
// [TrackClipType(typeof(UnityEngine.VFX.VisualEffectControlClip))]
// [TrackBindingType(typeof(UnityEngine.VFX.VisualEffect))]
// Dependencies UnityEngine.Timeline.TrackAsset, UnityEngine.VFX.VisualEffectControlTrack::ReinitMode
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrack
class CORDL_TYPE VisualEffectControlTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
using ReinitMode = ::GlobalNamespace::VisualEffectControlTrack_ReinitMode;

using __c = ::UnityEngine::VFX::VisualEffectControlTrack___c;

/// @brief Field m_VFXVersion, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VFXVersion, put=__cordl_internal_set_m_VFXVersion)) int32_t  m_VFXVersion;

/// @brief Field reinit, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_reinit, put=__cordl_internal_set_reinit)) ::GlobalNamespace::VisualEffectControlTrack_ReinitMode  reinit;

/// @brief Method CreateTrackMixer, addr 0xb3d9228, size 0x41c, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, int32_t  inputCount) ;

/// @brief Method GatherProperties, addr 0xb3d9650, size 0xb8, virtual true, abstract: false, final false
inline void GatherProperties(::UnityEngine::Playables::PlayableDirector*  director, ::UnityEngine::Timeline::IPropertyCollector*  driver) ;

/// @brief Method IsUpToDate, addr 0xb3d90e4, size 0x10, virtual false, abstract: false, final false
inline bool IsUpToDate() ;

static inline ::UnityEngine::VFX::VisualEffectControlTrack* New_ctor() ;

/// @brief Method OnBeforeTrackSerialize, addr 0xb3d90f4, size 0x134, virtual true, abstract: false, final false
inline void OnBeforeTrackSerialize() ;

constexpr int32_t const& __cordl_internal_get_m_VFXVersion() const;

constexpr int32_t& __cordl_internal_get_m_VFXVersion() ;

constexpr ::GlobalNamespace::VisualEffectControlTrack_ReinitMode const& __cordl_internal_get_reinit() const;

constexpr ::GlobalNamespace::VisualEffectControlTrack_ReinitMode& __cordl_internal_get_reinit() ;

constexpr void __cordl_internal_set_m_VFXVersion(int32_t  value) ;

constexpr void __cordl_internal_set_reinit(::GlobalNamespace::VisualEffectControlTrack_ReinitMode  value) ;

/// @brief Method .ctor, addr 0xb3d9708, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlTrack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualEffectControlTrack(VisualEffectControlTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualEffectControlTrack(VisualEffectControlTrack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30033};

/// @brief Field kCurrentVersion offset 0xffffffff size 0x4
static constexpr int32_t  kCurrentVersion{static_cast<int32_t>(0x1)};

/// @brief Size padding 0xa8 - 0xb8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_VFXVersion, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___m_VFXVersion;

/// [SerializeField]
/// [NotKeyable]
/// @brief Field reinit, offset: 0xb4, size: 0x4, def value: None
 ::GlobalNamespace::VisualEffectControlTrack_ReinitMode  ___reinit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrack, ___m_VFXVersion) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrack, ___reinit) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrack) == 0xa8, "Size mismatch!");

} // namespace end def UnityEngine::VFX
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrack/<>c
class CORDL_TYPE VisualEffectControlTrack___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::VFX::VisualEffectControlTrack___c*  __9;

/// @brief Field <>9__5_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_0, put=setStaticF___9__5_0)) ::System::Func_2<::UnityEngine::Timeline::TimelineClip*,bool>*  __9__5_0;

static inline ::UnityEngine::VFX::VisualEffectControlTrack___c* New_ctor() ;

/// @brief Method <OnBeforeTrackSerialize>b__5_0, addr 0xb3d97d8, size 0x84, virtual false, abstract: false, final false
inline bool _OnBeforeTrackSerialize_b__5_0(::UnityEngine::Timeline::TimelineClip*  x) ;

/// @brief Method .ctor, addr 0xb3d97d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::VFX::VisualEffectControlTrack___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::Timeline::TimelineClip*,bool>* getStaticF___9__5_0() ;

static inline void setStaticF___9(::UnityEngine::VFX::VisualEffectControlTrack___c*  value) ;

static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::Timeline::TimelineClip*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlTrack___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrack___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualEffectControlTrack___c(VisualEffectControlTrack___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrack___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualEffectControlTrack___c(VisualEffectControlTrack___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30032};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrack___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::VFX
