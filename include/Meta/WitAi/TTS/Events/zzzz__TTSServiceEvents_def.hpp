#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Events/TTSServiceEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TTSServiceEvents)
namespace Meta::WitAi::TTS::Events {
class TTSClipEvent;
}
namespace Meta::WitAi::TTS::Events {
class TTSDownloadEvents;
}
namespace Meta::WitAi::TTS::Events {
class TTSStreamEvents;
}
namespace Meta::WitAi::TTS::Events {
class TTSWebRequestEvents;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Events {
class TTSServiceEvents;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Events::TTSServiceEvents*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Events::TTSServiceEvents*, "Meta.WitAi.TTS.Events", "TTSServiceEvents");
// Dependencies System.Object
namespace Meta::WitAi::TTS::Events {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Events.TTSServiceEvents
class CORDL_TYPE TTSServiceEvents : public ::System::Object {
public:
// Declarations
/// @brief Field Download, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Download, put=__cordl_internal_set_Download)) ::Meta::WitAi::TTS::Events::TTSDownloadEvents*  Download;

/// @brief Field OnClipCreated, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipCreated, put=__cordl_internal_set_OnClipCreated)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnClipCreated;

/// @brief Field OnClipUnloaded, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClipUnloaded, put=__cordl_internal_set_OnClipUnloaded)) ::Meta::WitAi::TTS::Events::TTSClipEvent*  OnClipUnloaded;

/// @brief Field Stream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Stream, put=__cordl_internal_set_Stream)) ::Meta::WitAi::TTS::Events::TTSStreamEvents*  Stream;

/// @brief Field WebRequest, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WebRequest, put=__cordl_internal_set_WebRequest)) ::Meta::WitAi::TTS::Events::TTSWebRequestEvents*  WebRequest;

static inline ::Meta::WitAi::TTS::Events::TTSServiceEvents* New_ctor() ;

constexpr ::Meta::WitAi::TTS::Events::TTSDownloadEvents* const& __cordl_internal_get_Download() const;

constexpr ::Meta::WitAi::TTS::Events::TTSDownloadEvents*& __cordl_internal_get_Download() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnClipCreated() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnClipCreated() ;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent* const& __cordl_internal_get_OnClipUnloaded() const;

constexpr ::Meta::WitAi::TTS::Events::TTSClipEvent*& __cordl_internal_get_OnClipUnloaded() ;

constexpr ::Meta::WitAi::TTS::Events::TTSStreamEvents* const& __cordl_internal_get_Stream() const;

constexpr ::Meta::WitAi::TTS::Events::TTSStreamEvents*& __cordl_internal_get_Stream() ;

constexpr ::Meta::WitAi::TTS::Events::TTSWebRequestEvents* const& __cordl_internal_get_WebRequest() const;

constexpr ::Meta::WitAi::TTS::Events::TTSWebRequestEvents*& __cordl_internal_get_WebRequest() ;

constexpr void __cordl_internal_set_Download(::Meta::WitAi::TTS::Events::TTSDownloadEvents*  value) ;

constexpr void __cordl_internal_set_OnClipCreated(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

constexpr void __cordl_internal_set_OnClipUnloaded(::Meta::WitAi::TTS::Events::TTSClipEvent*  value) ;

constexpr void __cordl_internal_set_Stream(::Meta::WitAi::TTS::Events::TTSStreamEvents*  value) ;

constexpr void __cordl_internal_set_WebRequest(::Meta::WitAi::TTS::Events::TTSWebRequestEvents*  value) ;

/// @brief Method .ctor, addr 0x9e66114, size 0x134, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSServiceEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSServiceEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSServiceEvents(TTSServiceEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSServiceEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSServiceEvents(TTSServiceEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29176};

/// [Tooltip("Called when a audio clip has been added to the runtime cache")]
/// @brief Field OnClipCreated, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnClipCreated;

/// [Tooltip("Called when a audio clip has been removed from the runtime cache")]
/// @brief Field OnClipUnloaded, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSClipEvent*  ___OnClipUnloaded;

/// @brief Field WebRequest, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSWebRequestEvents*  ___WebRequest;

/// @brief Field Stream, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSStreamEvents*  ___Stream;

/// @brief Field Download, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Events::TTSDownloadEvents*  ___Download;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSServiceEvents, ___OnClipCreated) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSServiceEvents, ___OnClipUnloaded) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSServiceEvents, ___WebRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSServiceEvents, ___Stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Events::TTSServiceEvents, ___Download) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Events::TTSServiceEvents) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Events
