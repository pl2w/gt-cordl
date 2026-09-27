#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSStreamEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TTSStreamEvents)
namespace Meta::WitAi::TTS::Events {
class TTSClipErrorEvent;
}
namespace Meta::WitAi::TTS::Events {
class TTSClipEvent;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Events {
class TTSStreamEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Events::TTSStreamEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Events::TTSStreamEvents*, "Meta.WitAi.TTS.Events", "TTSStreamEvents");
// Dependencies System.Object
namespace Meta::WitAi::TTS::Events {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Events.TTSStreamEvents
class CORDL_TYPE TTSStreamEvents : public ::System::Object {
public:
// Declarations
/// @brief Field OnStreamBegin, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStreamBegin, put=__cordl_internal_set_OnStreamBegin)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnStreamBegin;

/// @brief Field OnStreamCancel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStreamCancel, put=__cordl_internal_set_OnStreamCancel)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnStreamCancel;

/// @brief Field OnStreamClipUpdate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStreamClipUpdate, put=__cordl_internal_set_OnStreamClipUpdate)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnStreamClipUpdate;

/// @brief Field OnStreamComplete, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStreamComplete, put=__cordl_internal_set_OnStreamComplete)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnStreamComplete;

/// @brief Field OnStreamError, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStreamError, put=__cordl_internal_set_OnStreamError)) ::Meta::WitAi::TTS::Events::TTSClipErrorEvent*  OnStreamError;

/// @brief Field OnStreamReady, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStreamReady, put=__cordl_internal_set_OnStreamReady)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnStreamReady;

static inline ::Meta::WitAi::TTS::Events::TTSStreamEvents* New_ctor() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnStreamBegin() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnStreamBegin() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnStreamCancel() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnStreamCancel() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnStreamClipUpdate() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnStreamClipUpdate() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnStreamComplete() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnStreamComplete() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipErrorEvent* const& __cordl_internal_get_OnStreamError() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipErrorEvent*& __cordl_internal_get_OnStreamError() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnStreamReady() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnStreamReady() ;

constexpr void __cordl_internal_set_OnStreamBegin(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

constexpr void __cordl_internal_set_OnStreamCancel(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

constexpr void __cordl_internal_set_OnStreamClipUpdate(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

constexpr void __cordl_internal_set_OnStreamComplete(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

constexpr void __cordl_internal_set_OnStreamError(::Meta::WitAi::TTS::Events::TTSClipErrorEvent*  value) ;

constexpr void __cordl_internal_set_OnStreamReady(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

/// @brief Method .ctor, addr 0x9e663b4, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSStreamEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSStreamEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSStreamEvents(TTSStreamEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSStreamEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSStreamEvents(TTSStreamEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29179};

/// [Tooltip("Called when a audio clip stream begins")]
/// @brief Field OnStreamBegin, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnStreamBegin;

/// [Tooltip("Called when a audio clip is ready for playback")]
/// @brief Field OnStreamReady, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnStreamReady;

/// [Tooltip("Called if/when an audio clip is adjusted")]
/// @brief Field OnStreamClipUpdate, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnStreamClipUpdate;

/// [Tooltip("Called when a audio clip is completely loaded")]
/// @brief Field OnStreamComplete, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnStreamComplete;

/// [Tooltip("Called when a audio clip stream has been cancelled")]
/// @brief Field OnStreamCancel, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnStreamCancel;

/// [Tooltip("Called when a audio clip stream has failed")]
/// @brief Field OnStreamError, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipErrorEvent*  ___OnStreamError;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSStreamEvents, ___OnStreamBegin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSStreamEvents, ___OnStreamReady) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSStreamEvents, ___OnStreamClipUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSStreamEvents, ___OnStreamComplete) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSStreamEvents, ___OnStreamCancel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSStreamEvents, ___OnStreamError) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Events::TTSStreamEvents) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Events
