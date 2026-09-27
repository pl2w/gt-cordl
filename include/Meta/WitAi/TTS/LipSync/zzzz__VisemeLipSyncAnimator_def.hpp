#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/VisemeLipSyncAnimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSEventAnimator_2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VisemeLipSyncAnimator)
namespace Meta::WitAi::TTS::Data {
class TTSVisemeEvent;
}
namespace Meta::WitAi::TTS::Data {
struct Viseme;
}
namespace Meta::WitAi::TTS::LipSync {
class VisemeChangedEvent;
}
namespace Meta::WitAi::TTS::LipSync {
class VisemeLerpEvent;
}
// Forward declare root types
namespace Meta::WitAi::TTS::LipSync {
class VisemeLipSyncAnimator;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator*, "Meta.WitAi.TTS.LipSync", "VisemeLipSyncAnimator");
// Dependencies Meta.WitAi.TTS.Data.Viseme, Meta.WitAi.TTS.Integrations.TTSEventAnimator`2<TEvent, TData>
namespace Meta::WitAi::TTS::LipSync {
// Is value type: false
// CS Name: Meta.WitAi.TTS.LipSync.VisemeLipSyncAnimator
class CORDL_TYPE VisemeLipSyncAnimator : public ::Meta::WitAi::TTS::Integrations::TTSEventAnimator_2<::Meta::WitAi::TTS::Data::TTSVisemeEvent*,::Meta::WitAi::TTS::Data::Viseme> {
public:
// Declarations
 __declspec(property(get=get_LastViseme, put=set_LastViseme)) ::Meta::WitAi::TTS::Data::Viseme  LastViseme;

/// @brief [Obsolete("Use OnVisemeStarted, OnVisemeLerp or OnVisemeFinished instead.")]
 __declspec(property(get=get_OnVisemeChanged)) ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*  OnVisemeChanged;

 __declspec(property(get=get_OnVisemeFinished)) ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*  OnVisemeFinished;

 __declspec(property(get=get_OnVisemeLerp)) ::Meta::WitAi::TTS::LipSync::VisemeLerpEvent*  OnVisemeLerp;

 __declspec(property(get=get_OnVisemeStarted)) ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*  OnVisemeStarted;

/// @brief Field <LastViseme>k__BackingField, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastViseme_k__BackingField, put=__cordl_internal_set__LastViseme_k__BackingField)) ::Meta::WitAi::TTS::Data::Viseme  _LastViseme_k__BackingField;

/// @brief Field _onVisemeFinished, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__onVisemeFinished, put=__cordl_internal_set__onVisemeFinished)) ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*  _onVisemeFinished;

/// @brief Field _onVisemeLerp, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__onVisemeLerp, put=__cordl_internal_set__onVisemeLerp)) ::Meta::WitAi::TTS::LipSync::VisemeLerpEvent*  _onVisemeLerp;

/// @brief Field _onVisemeStarted, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__onVisemeStarted, put=__cordl_internal_set__onVisemeStarted)) ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*  _onVisemeStarted;

/// @brief Method LerpEvent, addr 0x9e53ef4, size 0xe4, virtual true, abstract: false, final false
inline void LerpEvent(::Meta::WitAi::TTS::Data::TTSVisemeEvent*  fromEvent, ::Meta::WitAi::TTS::Data::TTSVisemeEvent*  toEvent, float_t  percentage) ;

static inline ::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator* New_ctor() ;

/// @brief Method SetViseme, addr 0x9e53fd8, size 0x88, virtual false, abstract: false, final false
inline void SetViseme(::Meta::WitAi::TTS::Data::Viseme  newViseme) ;

constexpr ::Meta::WitAi::TTS::Data::Viseme const& __cordl_internal_get__LastViseme_k__BackingField() const;

constexpr ::Meta::WitAi::TTS::Data::Viseme& __cordl_internal_get__LastViseme_k__BackingField() ;

constexpr ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* const& __cordl_internal_get__onVisemeFinished() const;

constexpr ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*& __cordl_internal_get__onVisemeFinished() ;

constexpr ::Meta::WitAi::TTS::LipSync::VisemeLerpEvent* const& __cordl_internal_get__onVisemeLerp() const;

constexpr ::Meta::WitAi::TTS::LipSync::VisemeLerpEvent*& __cordl_internal_get__onVisemeLerp() ;

constexpr ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* const& __cordl_internal_get__onVisemeStarted() const;

constexpr ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*& __cordl_internal_get__onVisemeStarted() ;

constexpr void __cordl_internal_set__LastViseme_k__BackingField(::Meta::WitAi::TTS::Data::Viseme  value) ;

constexpr void __cordl_internal_set__onVisemeFinished(::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*  value) ;

constexpr void __cordl_internal_set__onVisemeLerp(::Meta::WitAi::TTS::LipSync::VisemeLerpEvent*  value) ;

constexpr void __cordl_internal_set__onVisemeStarted(::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*  value) ;

/// @brief Method .ctor, addr 0x9e54060, size 0xd8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_LastViseme, addr 0x9e53ec4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::TTS::Data::Viseme get_LastViseme() ;

/// @brief Method get_OnVisemeChanged, addr 0x9e53eec, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* get_OnVisemeChanged() ;

/// @brief Method get_OnVisemeFinished, addr 0x9e53edc, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* get_OnVisemeFinished() ;

/// @brief Method get_OnVisemeLerp, addr 0x9e53ee4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::TTS::LipSync::VisemeLerpEvent* get_OnVisemeLerp() ;

/// @brief Method get_OnVisemeStarted, addr 0x9e53ed4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent* get_OnVisemeStarted() ;

/// [CompilerGenerated]
/// @brief Method set_LastViseme, addr 0x9e53ecc, size 0x8, virtual false, abstract: false, final false
inline void set_LastViseme(::Meta::WitAi::TTS::Data::Viseme  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisemeLipSyncAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisemeLipSyncAnimator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisemeLipSyncAnimator(VisemeLipSyncAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisemeLipSyncAnimator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisemeLipSyncAnimator(VisemeLipSyncAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29097};

/// [Header("Viseme Events")]
/// [TooltipBox("Fired when entering or passing a sample with this specified viseme")]
/// [SerializeField]
/// @brief Field _onVisemeStarted, offset: 0x78, size: 0x8, def value: None
 ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*  ____onVisemeStarted;

/// [TooltipBox("Fired when entering or passing a new sample with a different specified viseme")]
/// [SerializeField]
/// @brief Field _onVisemeFinished, offset: 0x80, size: 0x8, def value: None
 ::Meta::WitAi::TTS::LipSync::VisemeChangedEvent*  ____onVisemeFinished;

/// [TooltipBox("Fired once per frame with the previous viseme and next viseme as well as a percentage of the current frame in between each viseme.")]
/// [SerializeField]
/// [FormerlySerializedAs("onVisemeLerp")]
/// @brief Field _onVisemeLerp, offset: 0x88, size: 0x8, def value: None
 ::Meta::WitAi::TTS::LipSync::VisemeLerpEvent*  ____onVisemeLerp;

/// [CompilerGenerated]
/// @brief Field <LastViseme>k__BackingField, offset: 0x90, size: 0x4, def value: None
 ::Meta::WitAi::TTS::Data::Viseme  ____LastViseme_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator, ____onVisemeStarted) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator, ____onVisemeFinished) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator, ____onVisemeLerp) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator, ____LastViseme_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator) == 0x98, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::LipSync
