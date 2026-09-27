#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/LckNativeRecordingService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckNativeRecordingService)
namespace Liv::Lck::Encoding {
struct LckEncodedPacketCallback;
}
namespace Liv::Lck::Recorder {
class ILckNativeRecordingService;
}
namespace Liv::Lck::Recorder {
struct MuxerConfig;
}
namespace Liv::NGFX {
struct LogLevel;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Liv::Lck::Recorder {
class LckNativeRecordingService;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Recorder::LckNativeRecordingService*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Recorder::LckNativeRecordingService*, "Liv.Lck.Recorder", "LckNativeRecordingService");
// Dependencies Liv.NGFX.LogLevel, System.IntPtr, System.Object
namespace Liv::Lck::Recorder {
// Is value type: false
// CS Name: Liv.Lck.Recorder.LckNativeRecordingService
class CORDL_TYPE LckNativeRecordingService : public ::System::Object {
public:
// Declarations
/// @brief Field _logLevel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__logLevel, put=__cordl_internal_set__logLevel)) ::Liv::NGFX::LogLevel  _logLevel;

/// @brief Field _nativeMuxerContext, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeMuxerContext, put=__cordl_internal_set__nativeMuxerContext)) ::System::IntPtr  _nativeMuxerContext;

/// @brief Convert operator to "::Liv::Lck::Recorder::ILckNativeRecordingService"
constexpr operator  ::Liv::Lck::Recorder::ILckNativeRecordingService*() noexcept;

/// @brief Method CreateMuxer, addr 0x9d64b50, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateMuxer() ;

/// @brief Method CreateNativeMuxer, addr 0x9d64e44, size 0x3c, virtual true, abstract: false, final true
inline bool CreateNativeMuxer() ;

/// @brief Method DestroyMuxer, addr 0x9d64bb4, size 0x7c, virtual false, abstract: false, final false
static inline void DestroyMuxer(::System::IntPtr  muxerContext) ;

/// @brief Method DestroyNativeMuxer, addr 0x9d64ea0, size 0x20, virtual true, abstract: false, final true
inline void DestroyNativeMuxer() ;

/// @brief Method GetMuxPacketCallback, addr 0x9d64ef8, size 0x38, virtual true, abstract: false, final true
inline ::Liv::Lck::Encoding::LckEncodedPacketCallback GetMuxPacketCallback() ;

/// @brief Method GetMuxerCallbackFunction, addr 0x9d64aec, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMuxerCallbackFunction() ;

/// @brief Method HasNativeMuxer, addr 0x9d64e80, size 0x10, virtual true, abstract: false, final true
inline bool HasNativeMuxer() ;

/// @brief [Preserve]
static inline ::Liv::Lck::Recorder::LckNativeRecordingService* New_ctor() ;

/// @brief Method SetMuxerLogLevel, addr 0x9d64dac, size 0x84, virtual false, abstract: false, final false
static inline void SetMuxerLogLevel(::System::IntPtr  muxerContext, uint32_t  level) ;

/// @brief Method SetNativeMuxerLogLevel, addr 0x9d64ee0, size 0x18, virtual true, abstract: false, final true
inline void SetNativeMuxerLogLevel(::Liv::NGFX::LogLevel  logLevel) ;

/// @brief Method StartMuxer, addr 0x9d64c30, size 0x100, virtual false, abstract: false, final false
static inline bool StartMuxer(::System::IntPtr  muxerContext, ::by_ref<::Liv::Lck::Recorder::MuxerConfig>  config) ;

/// @brief Method StartNativeMuxer, addr 0x9d64ec0, size 0x8, virtual true, abstract: false, final true
inline bool StartNativeMuxer(::by_ref<::Liv::Lck::Recorder::MuxerConfig>  config) ;

/// @brief Method StopMuxer, addr 0x9d64d30, size 0x7c, virtual false, abstract: false, final false
static inline void StopMuxer(::System::IntPtr  muxerContext) ;

/// @brief Method StopNativeMuxer, addr 0x9d64ec8, size 0x18, virtual true, abstract: false, final true
inline bool StopNativeMuxer() ;

/// @brief Method UpdateNativeMuxerLogLevel, addr 0x9d64e90, size 0x10, virtual false, abstract: false, final false
inline void UpdateNativeMuxerLogLevel() ;

constexpr ::Liv::NGFX::LogLevel const& __cordl_internal_get__logLevel() const;

constexpr ::Liv::NGFX::LogLevel& __cordl_internal_get__logLevel() ;

constexpr ::System::IntPtr const& __cordl_internal_get__nativeMuxerContext() const;

constexpr ::System::IntPtr& __cordl_internal_get__nativeMuxerContext() ;

constexpr void __cordl_internal_set__logLevel(::Liv::NGFX::LogLevel  value) ;

constexpr void __cordl_internal_set__nativeMuxerContext(::System::IntPtr  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d64e30, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::Recorder::ILckNativeRecordingService"
constexpr ::Liv::Lck::Recorder::ILckNativeRecordingService* i___Liv__Lck__Recorder__ILckNativeRecordingService() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeRecordingService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckNativeRecordingService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckNativeRecordingService(LckNativeRecordingService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckNativeRecordingService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckNativeRecordingService(LckNativeRecordingService const& ) = delete;

/// @brief Field RecordingLib offset 0xffffffff size 0x8
static constexpr ::ConstString  RecordingLib{u"lck_rs"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24972};

/// @brief Field _nativeMuxerContext, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ____nativeMuxerContext;

/// @brief Field _logLevel, offset: 0x18, size: 0x4, def value: None
 ::Liv::NGFX::LogLevel  ____logLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Recorder::LckNativeRecordingService, ____nativeMuxerContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckNativeRecordingService, ____logLevel) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Recorder::LckNativeRecordingService) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Recorder
