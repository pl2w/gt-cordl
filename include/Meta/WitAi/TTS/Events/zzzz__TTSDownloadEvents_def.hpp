#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSDownloadEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TTSDownloadEvents)
namespace Meta::WitAi::TTS::Events {
class TTSClipDownloadErrorEvent;
}
namespace Meta::WitAi::TTS::Events {
class TTSClipDownloadEvent;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Events {
class TTSDownloadEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Events::TTSDownloadEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Events::TTSDownloadEvents*, "Meta.WitAi.TTS.Events", "TTSDownloadEvents");
// Dependencies System.Object
namespace Meta::WitAi::TTS::Events {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Events.TTSDownloadEvents
class CORDL_TYPE TTSDownloadEvents : public ::System::Object {
public:
// Declarations
/// @brief Field OnDownloadBegin, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDownloadBegin, put=__cordl_internal_set_OnDownloadBegin)) ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  OnDownloadBegin;

/// @brief Field OnDownloadCancel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDownloadCancel, put=__cordl_internal_set_OnDownloadCancel)) ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  OnDownloadCancel;

/// @brief Field OnDownloadError, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDownloadError, put=__cordl_internal_set_OnDownloadError)) ::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent*  OnDownloadError;

/// @brief Field OnDownloadSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDownloadSuccess, put=__cordl_internal_set_OnDownloadSuccess)) ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  OnDownloadSuccess;

static inline ::Meta::WitAi::TTS::Events::TTSDownloadEvents* New_ctor() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent* const& __cordl_internal_get_OnDownloadBegin() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*& __cordl_internal_get_OnDownloadBegin() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent* const& __cordl_internal_get_OnDownloadCancel() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*& __cordl_internal_get_OnDownloadCancel() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent* const& __cordl_internal_get_OnDownloadError() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent*& __cordl_internal_get_OnDownloadError() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent* const& __cordl_internal_get_OnDownloadSuccess() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*& __cordl_internal_get_OnDownloadSuccess() ;

constexpr void __cordl_internal_set_OnDownloadBegin(::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  value) ;

constexpr void __cordl_internal_set_OnDownloadCancel(::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  value) ;

constexpr void __cordl_internal_set_OnDownloadError(::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent*  value) ;

constexpr void __cordl_internal_set_OnDownloadSuccess(::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  value) ;

/// @brief Method .ctor, addr 0x9e66030, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSDownloadEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSDownloadEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSDownloadEvents(TTSDownloadEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSDownloadEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSDownloadEvents(TTSDownloadEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29175};

/// [Tooltip("Called when a audio clip download begins")]
/// @brief Field OnDownloadBegin, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  ___OnDownloadBegin;

/// [Tooltip("Called when a audio clip is downloaded successfully")]
/// @brief Field OnDownloadSuccess, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  ___OnDownloadSuccess;

/// [Tooltip("Called when a audio clip downloaded has been cancelled")]
/// @brief Field OnDownloadCancel, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipDownloadEvent*  ___OnDownloadCancel;

/// [Tooltip("Called when a audio clip downloaded has failed")]
/// @brief Field OnDownloadError, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipDownloadErrorEvent*  ___OnDownloadError;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSDownloadEvents, ___OnDownloadBegin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSDownloadEvents, ___OnDownloadSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSDownloadEvents, ___OnDownloadCancel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSDownloadEvents, ___OnDownloadError) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Events::TTSDownloadEvents) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Events
