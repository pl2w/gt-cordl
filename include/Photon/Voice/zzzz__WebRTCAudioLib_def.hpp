#pragma once
// IWYU pragma private; include "Photon/Voice/WebRTCAudioLib.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebRTCAudioLib)
namespace GlobalNamespace {
struct WebRTCAudioLib_Error;
}
namespace GlobalNamespace {
struct WebRTCAudioLib_Param;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Photon::Voice {
class WebRTCAudioLib;
}
// Write type traits
MARK_REF_T(::Photon::Voice::WebRTCAudioLib*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::WebRTCAudioLib*, "Photon.Voice", "WebRTCAudioLib");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.WebRTCAudioLib
class CORDL_TYPE WebRTCAudioLib : public ::System::Object {
public:
// Declarations
using Error = ::GlobalNamespace::WebRTCAudioLib_Error;

using Param = ::GlobalNamespace::WebRTCAudioLib_Param;

static inline ::Photon::Voice::WebRTCAudioLib* New_ctor() ;

/// @brief Method .ctor, addr 0xa755990, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method webrtc_audio_processor_create, addr 0xa755998, size 0xac, virtual false, abstract: false, final false
static inline ::System::IntPtr webrtc_audio_processor_create(int32_t  samplingRate, int32_t  channels, int32_t  frameSize, int32_t  revSamplingRate, int32_t  revChannels) ;

/// @brief Method webrtc_audio_processor_destroy, addr 0xa756ea0, size 0x7c, virtual false, abstract: false, final false
static inline void webrtc_audio_processor_destroy(::System::IntPtr  proc) ;

/// @brief Method webrtc_audio_processor_init, addr 0xa755a44, size 0x7c, virtual false, abstract: false, final false
static inline int32_t webrtc_audio_processor_init(::System::IntPtr  proc) ;

/// @brief Method webrtc_audio_processor_process, addr 0xa755dd8, size 0xb8, virtual false, abstract: false, final false
static inline int32_t webrtc_audio_processor_process(::System::IntPtr  proc, ::ArrayW<int16_t>  buffer, int32_t  offset, ::by_ref<bool>  voiceDetected) ;

/// @brief Method webrtc_audio_processor_process_reverse, addr 0xa756a48, size 0x9c, virtual false, abstract: false, final false
static inline int32_t webrtc_audio_processor_process_reverse(::System::IntPtr  proc, ::ArrayW<int16_t>  buffer, int32_t  bufferSize) ;

/// @brief Method webrtc_audio_processor_set_param, addr 0xa756ae4, size 0x94, virtual false, abstract: false, final false
static inline int32_t webrtc_audio_processor_set_param(::System::IntPtr  proc, int32_t  param, int32_t  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRTCAudioLib() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRTCAudioLib", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRTCAudioLib(WebRTCAudioLib && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRTCAudioLib", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRTCAudioLib(WebRTCAudioLib const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28500};

/// @brief Field lib_name offset 0xffffffff size 0x8
static constexpr ::ConstString  lib_name{u"webrtc-audio"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::WebRTCAudioLib) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
