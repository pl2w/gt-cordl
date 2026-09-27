#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckNativeEncodingApi)
namespace GlobalNamespace {
struct LckNativeEncodingApi_AudioTrack;
}
namespace GlobalNamespace {
struct LckNativeEncodingApi_FrameSubmission;
}
namespace GlobalNamespace {
struct LckNativeEncodingApi_FrameTexture;
}
namespace GlobalNamespace {
struct LckNativeEncodingApi_ResourceData;
}
namespace GlobalNamespace {
struct LckNativeEncodingApi_TrackInfo;
}
namespace GlobalNamespace {
struct LckNativeEncodingApi_TrackType;
}
namespace Liv::Lck::Encoding {
class LckNativeEncodingApi_CaptureErrorCallback;
}
namespace Liv::Lck::ErrorHandling {
struct CaptureErrorType;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Encoding {
class LckNativeEncodingApi;
}
namespace Liv::Lck::Encoding {
class LckNativeEncodingApi_CaptureErrorCallback;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Encoding::LckNativeEncodingApi*);
MARK_REF_T(::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Encoding::LckNativeEncodingApi*, "Liv.Lck.Encoding", "LckNativeEncodingApi");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*, "Liv.Lck.Encoding", "LckNativeEncodingApi/CaptureErrorCallback");
// Dependencies System.Object
namespace Liv::Lck::Encoding {
// Is value type: false
// CS Name: Liv.Lck.Encoding.LckNativeEncodingApi
class CORDL_TYPE LckNativeEncodingApi : public ::System::Object {
public:
// Declarations
using AudioTrack = ::GlobalNamespace::LckNativeEncodingApi_AudioTrack;

using FrameSubmission = ::GlobalNamespace::LckNativeEncodingApi_FrameSubmission;

using FrameTexture = ::GlobalNamespace::LckNativeEncodingApi_FrameTexture;

using ResourceData = ::GlobalNamespace::LckNativeEncodingApi_ResourceData;

using TrackInfo = ::GlobalNamespace::LckNativeEncodingApi_TrackInfo;

using TrackType = ::GlobalNamespace::LckNativeEncodingApi_TrackType;

using CaptureErrorCallback = ::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback;

/// @brief Method AddEncoderPacketCallback, addr 0x9d45a70, size 0x90, virtual false, abstract: false, final false
static inline void AddEncoderPacketCallback(::System::IntPtr  encoderContext, ::System::IntPtr  objectPtr, ::System::IntPtr  functionPtr) ;

/// @brief Method AllocateFrameSubmission, addr 0x9d45ee8, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr AllocateFrameSubmission(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission  frame, ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>  audioTracks, ::ArrayW<bool>  readyFrames) ;

/// @brief Method CreateEncoder, addr 0x9d45d50, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateEncoder() ;

/// @brief Method DestroyEncoder, addr 0x9d475d0, size 0x7c, virtual false, abstract: false, final false
static inline void DestroyEncoder(::System::IntPtr  encoderContext) ;

/// @brief Method GetAudioTrackFrameSize, addr 0x9d46300, size 0x84, virtual false, abstract: false, final false
static inline uint32_t GetAudioTrackFrameSize(::System::IntPtr  encoderContext, uint32_t  track_index) ;

/// @brief Method GetInitResourcesFunction, addr 0x9d4662c, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr GetInitResourcesFunction() ;

/// @brief Method GetPluginUpdateFunction, addr 0x9d46018, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr GetPluginUpdateFunction() ;

/// @brief Method GetReleaseResourcesFunction, addr 0x9d46384, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr GetReleaseResourcesFunction() ;

/// @brief Method GetResourceContext, addr 0x9d440a4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetResourceContext(::System::IntPtr  encoderContext) ;

/// @brief Method RemoveEncoderPacketCallback, addr 0x9d45cbc, size 0x94, virtual false, abstract: false, final false
static inline void RemoveEncoderPacketCallback(::System::IntPtr  encoderContext, ::System::IntPtr  objectPtr, ::System::IntPtr  functionPtr) ;

/// @brief Method SetAllowBFrames, addr 0x9d4764c, size 0x84, virtual false, abstract: false, final false
static inline void SetAllowBFrames(::System::IntPtr  encoderContext, bool  allowBFrames) ;

/// @brief Method SetCaptureErrorCallback, addr 0x9d45e54, size 0x94, virtual false, abstract: false, final false
static inline bool SetCaptureErrorCallback(::System::IntPtr  encoderContext, ::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*  errorCallback) ;

/// @brief Method SetEncoderLogLevel, addr 0x9d45510, size 0x84, virtual false, abstract: false, final false
static inline void SetEncoderLogLevel(::System::IntPtr  encoderContext, uint32_t  level) ;

/// @brief Method StartEncoder, addr 0x9d4447c, size 0xa4, virtual false, abstract: false, final false
static inline bool StartEncoder(::System::IntPtr  encoderContext, ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>  tracks, uint32_t  tracksCount) ;

/// @brief Method StopEncoder, addr 0x9d449d8, size 0x7c, virtual false, abstract: false, final false
static inline void StopEncoder(::System::IntPtr  encoderContext) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeEncodingApi() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckNativeEncodingApi", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckNativeEncodingApi(LckNativeEncodingApi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckNativeEncodingApi", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckNativeEncodingApi(LckNativeEncodingApi const& ) = delete;

/// @brief Field EncodingLib offset 0xffffffff size 0x8
static constexpr ::ConstString  EncodingLib{u"lck_rs"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24894};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Encoding::LckNativeEncodingApi) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Encoding
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Liv::Lck::Encoding {
// Is value type: false
// CS Name: Liv.Lck.Encoding.LckNativeEncodingApi/CaptureErrorCallback
class CORDL_TYPE LckNativeEncodingApi_CaptureErrorCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d476e4, size 0x94, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Liv::Lck::ErrorHandling::CaptureErrorType  errorType, ::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d47778, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d476d0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Liv::Lck::ErrorHandling::CaptureErrorType  errorType, ::StringW  errorMessage) ;

static inline ::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d45db4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeEncodingApi_CaptureErrorCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckNativeEncodingApi_CaptureErrorCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckNativeEncodingApi_CaptureErrorCallback(LckNativeEncodingApi_CaptureErrorCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckNativeEncodingApi_CaptureErrorCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckNativeEncodingApi_CaptureErrorCallback(LckNativeEncodingApi_CaptureErrorCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24888};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::Encoding
