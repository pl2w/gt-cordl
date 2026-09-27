#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_PrewarmClipSettings_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_ReinitMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlClip)
namespace GlobalNamespace {
struct VisualEffectControlClip_ClipEvent;
}
namespace GlobalNamespace {
struct VisualEffectControlClip_PrewarmClipSettings;
}
namespace GlobalNamespace {
struct VisualEffectControlClip_ReinitMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::VFX {
struct VisualEffectPlayableSerializedEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VisualEffectControlClip;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlClip*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlClip*, "UnityEngine.VFX", "VisualEffectControlClip");
// Dependencies UnityEngine.Playables.PlayableAsset, UnityEngine.VFX.VisualEffectControlClip::PrewarmClipSettings, UnityEngine.VFX.VisualEffectControlClip::ReinitMode
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlClip
class CORDL_TYPE VisualEffectControlClip : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
using ClipEvent = ::GlobalNamespace::VisualEffectControlClip_ClipEvent;

using PrewarmClipSettings = ::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings;

using ReinitMode = ::GlobalNamespace::VisualEffectControlClip_ReinitMode;

/// @brief Field <clipEnd>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__clipEnd_k__BackingField, put=__cordl_internal_set__clipEnd_k__BackingField)) double_t  _clipEnd_k__BackingField;

/// @brief Field <clipStart>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__clipStart_k__BackingField, put=__cordl_internal_set__clipStart_k__BackingField)) double_t  _clipStart_k__BackingField;

 __declspec(property(get=get_clipCaps)) ::UnityEngine::Timeline::ClipCaps  clipCaps;

 __declspec(property(get=get_clipEnd, put=set_clipEnd)) double_t  clipEnd;

/// @brief Field clipEvents, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipEvents, put=__cordl_internal_set_clipEvents)) ::System::Collections::Generic::List_1<::GlobalNamespace::VisualEffectControlClip_ClipEvent>*  clipEvents;

 __declspec(property(get=get_clipStart, put=set_clipStart)) double_t  clipStart;

/// @brief Field prewarm, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_prewarm, put=__cordl_internal_set_prewarm)) ::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings  prewarm;

/// @brief Field reinit, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_reinit, put=__cordl_internal_set_reinit)) ::GlobalNamespace::VisualEffectControlClip_ReinitMode  reinit;

/// @brief Field scrubbing, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_scrubbing, put=__cordl_internal_set_scrubbing)) bool  scrubbing;

/// @brief Field singleEvents, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_singleEvents, put=__cordl_internal_set_singleEvents)) ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*  singleEvents;

/// @brief Field startSeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startSeed, put=__cordl_internal_set_startSeed)) uint32_t  startSeed;

/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

/// @brief Method CreatePlayable, addr 0xb3d65c0, size 0x754, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::UnityEngine::VFX::VisualEffectControlClip* New_ctor() ;

constexpr double_t const& __cordl_internal_get__clipEnd_k__BackingField() const;

constexpr double_t& __cordl_internal_get__clipEnd_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__clipStart_k__BackingField() const;

constexpr double_t& __cordl_internal_get__clipStart_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualEffectControlClip_ClipEvent>* const& __cordl_internal_get_clipEvents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualEffectControlClip_ClipEvent>*& __cordl_internal_get_clipEvents() ;

constexpr ::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings const& __cordl_internal_get_prewarm() const;

constexpr ::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings& __cordl_internal_get_prewarm() ;

constexpr ::GlobalNamespace::VisualEffectControlClip_ReinitMode const& __cordl_internal_get_reinit() const;

constexpr ::GlobalNamespace::VisualEffectControlClip_ReinitMode& __cordl_internal_get_reinit() ;

constexpr bool const& __cordl_internal_get_scrubbing() const;

constexpr bool& __cordl_internal_get_scrubbing() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* const& __cordl_internal_get_singleEvents() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*& __cordl_internal_get_singleEvents() ;

constexpr uint32_t const& __cordl_internal_get_startSeed() const;

constexpr uint32_t& __cordl_internal_get_startSeed() ;

constexpr void __cordl_internal_set__clipEnd_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__clipStart_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set_clipEvents(::System::Collections::Generic::List_1<::GlobalNamespace::VisualEffectControlClip_ClipEvent>*  value) ;

constexpr void __cordl_internal_set_prewarm(::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings  value) ;

constexpr void __cordl_internal_set_reinit(::GlobalNamespace::VisualEffectControlClip_ReinitMode  value) ;

constexpr void __cordl_internal_set_scrubbing(bool  value) ;

constexpr void __cordl_internal_set_singleEvents(::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*  value) ;

constexpr void __cordl_internal_set_startSeed(uint32_t  value) ;

/// @brief Method .ctor, addr 0xb3d6d8c, size 0x41c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_clipCaps, addr 0xb3d6598, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// [CompilerGenerated]
/// @brief Method get_clipEnd, addr 0xb3d65b0, size 0x8, virtual false, abstract: false, final false
inline double_t get_clipEnd() ;

/// [CompilerGenerated]
/// @brief Method get_clipStart, addr 0xb3d65a0, size 0x8, virtual false, abstract: false, final false
inline double_t get_clipStart() ;

/// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

/// [CompilerGenerated]
/// @brief Method set_clipEnd, addr 0xb3d65b8, size 0x8, virtual false, abstract: false, final false
inline void set_clipEnd(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_clipStart, addr 0xb3d65a8, size 0x8, virtual false, abstract: false, final false
inline void set_clipStart(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlClip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualEffectControlClip(VisualEffectControlClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlClip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualEffectControlClip(VisualEffectControlClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30005};

/// [CompilerGenerated]
/// @brief Field <clipStart>k__BackingField, offset: 0x18, size: 0x8, def value: None
 double_t  ____clipStart_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <clipEnd>k__BackingField, offset: 0x20, size: 0x8, def value: None
 double_t  ____clipEnd_k__BackingField;

/// [NotKeyable]
/// @brief Field scrubbing, offset: 0x28, size: 0x1, def value: None
 bool  ___scrubbing;

/// [NotKeyable]
/// @brief Field startSeed, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ___startSeed;

/// [NotKeyable]
/// @brief Field reinit, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::VisualEffectControlClip_ReinitMode  ___reinit;

/// [NotKeyable]
/// @brief Field prewarm, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings  ___prewarm;

/// [NotKeyable]
/// @brief Field clipEvents, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VisualEffectControlClip_ClipEvent>*  ___clipEvents;

/// [NotKeyable]
/// @brief Field singleEvents, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*  ___singleEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ____clipStart_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ____clipEnd_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___scrubbing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___startSeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___reinit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___prewarm) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___clipEvents) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___singleEvents) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlClip) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::VFX
