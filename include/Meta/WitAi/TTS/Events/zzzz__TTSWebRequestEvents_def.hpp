#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSWebRequestEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TTSWebRequestEvents)
namespace Meta::WitAi::TTS::Events {
class TTSClipErrorEvent;
}
namespace Meta::WitAi::TTS::Events {
class TTSClipEvent;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Events {
class TTSWebRequestEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Events::TTSWebRequestEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Events::TTSWebRequestEvents*, "Meta.WitAi.TTS.Events", "TTSWebRequestEvents");
// Dependencies System.Object
namespace Meta::WitAi::TTS::Events {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Events.TTSWebRequestEvents
class CORDL_TYPE TTSWebRequestEvents : public ::System::Object {
public:
// Declarations
/// @brief Field OnRequestBegin, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRequestBegin, put=__cordl_internal_set_OnRequestBegin)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnRequestBegin;

/// @brief Field OnRequestCancel, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRequestCancel, put=__cordl_internal_set_OnRequestCancel)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnRequestCancel;

/// @brief Field OnRequestComplete, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRequestComplete, put=__cordl_internal_set_OnRequestComplete)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnRequestComplete;

/// @brief Field OnRequestError, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRequestError, put=__cordl_internal_set_OnRequestError)) ::Meta::WitAi::TTS::Events::TTSClipErrorEvent*  OnRequestError;

/// @brief Field OnRequestFirstResponse, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRequestFirstResponse, put=__cordl_internal_set_OnRequestFirstResponse)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnRequestFirstResponse;

/// @brief Field OnRequestReady, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRequestReady, put=__cordl_internal_set_OnRequestReady)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnRequestReady;

static inline ::Meta::WitAi::TTS::Events::TTSWebRequestEvents* New_ctor() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnRequestBegin() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnRequestBegin() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnRequestCancel() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnRequestCancel() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnRequestComplete() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnRequestComplete() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipErrorEvent* const& __cordl_internal_get_OnRequestError() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipErrorEvent*& __cordl_internal_get_OnRequestError() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnRequestFirstResponse() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnRequestFirstResponse() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnRequestReady() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnRequestReady() ;

constexpr void __cordl_internal_set_OnRequestBegin(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

constexpr void __cordl_internal_set_OnRequestCancel(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

constexpr void __cordl_internal_set_OnRequestComplete(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

constexpr void __cordl_internal_set_OnRequestError(::Meta::WitAi::TTS::Events::TTSClipErrorEvent*  value) ;

constexpr void __cordl_internal_set_OnRequestFirstResponse(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

constexpr void __cordl_internal_set_OnRequestReady(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

/// @brief Method .ctor, addr 0x9e66290, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSWebRequestEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSWebRequestEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSWebRequestEvents(TTSWebRequestEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSWebRequestEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSWebRequestEvents(TTSWebRequestEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29180};

/// [Tooltip("Called when a web request begins transmission")]
/// @brief Field OnRequestBegin, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnRequestBegin;

/// [Tooltip("Called when a web request is cancelled")]
/// @brief Field OnRequestCancel, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnRequestCancel;

/// [Tooltip("Called when a web request fails")]
/// @brief Field OnRequestError, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipErrorEvent*  ___OnRequestError;

/// [Tooltip("Called when a web request receives first data")]
/// @brief Field OnRequestFirstResponse, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnRequestFirstResponse;

/// [Tooltip("Called when a web request is ready for playback")]
/// @brief Field OnRequestReady, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnRequestReady;

/// [Tooltip("Called when a web request is completed via success, cancellation or failure")]
/// @brief Field OnRequestComplete, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnRequestComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSWebRequestEvents, ___OnRequestBegin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSWebRequestEvents, ___OnRequestCancel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSWebRequestEvents, ___OnRequestError) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSWebRequestEvents, ___OnRequestFirstResponse) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSWebRequestEvents, ___OnRequestReady) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSWebRequestEvents, ___OnRequestComplete) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Events::TTSWebRequestEvents) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Events
