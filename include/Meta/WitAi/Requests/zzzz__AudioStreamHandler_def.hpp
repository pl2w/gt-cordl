#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/AudioStreamHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Networking/zzzz__DownloadHandlerScript_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioStreamHandler)
namespace Meta::Voice::Audio::Decoding {
class AudioSampleDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class IAudioDecoder;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi::Requests {
class IVRequestDownloadDecoder;
}
namespace Meta::WitAi::Requests {
class VRequestProgressDelegate;
}
namespace Meta::WitAi::Requests {
class VRequestResponseDelegate;
}
namespace Meta::WitAi {
template<typename TElementType>
class ArrayPool_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class AudioStreamHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::AudioStreamHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::AudioStreamHandler*, "Meta.WitAi.Requests", "AudioStreamHandler");
// [Preserve]
// [LogCategory((Meta.Voice.Logging.LogCategory)9, (Meta.Voice.Logging.LogCategory)17)]
// Dependencies UnityEngine.Networking.DownloadHandlerScript
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.AudioStreamHandler
class CORDL_TYPE AudioStreamHandler : public ::UnityEngine::Networking::DownloadHandlerScript {
public:
// Declarations
 __declspec(property(get=get_AudioDecoder)) ::Meta::Voice::Audio::Decoding::IAudioDecoder*  AudioDecoder;

 __declspec(property(get=get_Completion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  Completion;

 __declspec(property(get=get_IsComplete, put=set_IsComplete)) bool  IsComplete;

 __declspec(property(get=get_IsError, put=set_IsError)) bool  IsError;

 __declspec(property(get=get_IsStarted, put=set_IsStarted)) bool  IsStarted;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

/// @brief Field OnFirstResponse, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFirstResponse, put=__cordl_internal_set_OnFirstResponse)) ::Meta::WitAi::Requests::VRequestResponseDelegate*  OnFirstResponse;

/// @brief Field OnProgress, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnProgress, put=__cordl_internal_set_OnProgress)) ::Meta::WitAi::Requests::VRequestProgressDelegate*  OnProgress;

/// @brief Field OnResponse, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnResponse, put=__cordl_internal_set_OnResponse)) ::Meta::WitAi::Requests::VRequestResponseDelegate*  OnResponse;

 __declspec(property(get=get_OnSamplesDecoded)) ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  OnSamplesDecoded;

 __declspec(property(get=get_Progress, put=set_Progress)) float_t  Progress;

 __declspec(property(get=get_WillDecodeInBackground)) bool  WillDecodeInBackground;

/// @brief Field <AudioDecoder>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioDecoder_k__BackingField, put=__cordl_internal_set__AudioDecoder_k__BackingField)) ::Meta::Voice::Audio::Decoding::IAudioDecoder*  _AudioDecoder_k__BackingField;

/// @brief Field <Completion>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Completion_k__BackingField, put=__cordl_internal_set__Completion_k__BackingField)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _Completion_k__BackingField;

/// @brief Field <IsComplete>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsComplete_k__BackingField, put=__cordl_internal_set__IsComplete_k__BackingField)) bool  _IsComplete_k__BackingField;

/// @brief Field <IsError>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsError_k__BackingField, put=__cordl_internal_set__IsError_k__BackingField)) bool  _IsError_k__BackingField;

/// @brief Field <IsStarted>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsStarted_k__BackingField, put=__cordl_internal_set__IsStarted_k__BackingField)) bool  _IsStarted_k__BackingField;

/// @brief Field <Logger>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field <OnSamplesDecoded>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnSamplesDecoded_k__BackingField, put=__cordl_internal_set__OnSamplesDecoded_k__BackingField)) ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  _OnSamplesDecoded_k__BackingField;

/// @brief Field <Progress>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__Progress_k__BackingField, put=__cordl_internal_set__Progress_k__BackingField)) float_t  _Progress_k__BackingField;

/// @brief Field _bufferPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bufferPool, put=setStaticF__bufferPool)) ::Meta::WitAi::ArrayPool_1<uint8_t>*  _bufferPool;

/// @brief Field _buffers, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffers, put=__cordl_internal_set__buffers)) ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*  _buffers;

/// @brief Field _decodeBuffer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__decodeBuffer, put=__cordl_internal_set__decodeBuffer)) ::ArrayW<uint8_t>  _decodeBuffer;

/// @brief Field _decodeBufferOffset, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__decodeBufferOffset, put=__cordl_internal_set__decodeBufferOffset)) int32_t  _decodeBufferOffset;

 __declspec(property(get=get__decodeComplete)) bool  _decodeComplete;

/// @brief Field _decodedBytes, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__decodedBytes, put=__cordl_internal_set__decodedBytes)) uint64_t  _decodedBytes;

/// @brief Field _decoder, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__decoder, put=__cordl_internal_set__decoder)) ::System::Threading::Tasks::Task*  _decoder;

/// @brief Field _expectedBytes, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__expectedBytes, put=__cordl_internal_set__expectedBytes)) uint64_t  _expectedBytes;

/// @brief Field _inBuffer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__inBuffer, put=__cordl_internal_set__inBuffer)) ::ArrayW<uint8_t>  _inBuffer;

/// @brief Field _inBufferOffset, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__inBufferOffset, put=__cordl_internal_set__inBufferOffset)) int32_t  _inBufferOffset;

/// @brief Field _receivedBytes, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__receivedBytes, put=__cordl_internal_set__receivedBytes)) uint64_t  _receivedBytes;

/// @brief Field _requestComplete, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__requestComplete, put=__cordl_internal_set__requestComplete)) bool  _requestComplete;

/// @brief Field _unloaded, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__unloaded, put=__cordl_internal_set__unloaded)) bool  _unloaded;

/// @brief Convert operator to "::Meta::WitAi::Requests::IVRequestDownloadDecoder"
constexpr operator  ::Meta::WitAi::Requests::IVRequestDownloadDecoder*() noexcept;

/// [Preserve]
/// @brief Method CompleteContent, addr 0x9e86a1c, size 0x18, virtual true, abstract: false, final false
inline void CompleteContent() ;

/// @brief Method DecodeAsync, addr 0x9e865c8, size 0x35c, virtual false, abstract: false, final false
inline void DecodeAsync() ;

/// @brief Method DecodeChunk, addr 0x9e86340, size 0x248, virtual false, abstract: false, final false
inline void DecodeChunk(::ArrayW<uint8_t>  chunk, int32_t  offset, int32_t  length) ;

/// @brief Method Dispose, addr 0x9e86a34, size 0x70, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method EnqueueAndDecodeChunkAsync, addr 0x9e86080, size 0x2c0, virtual false, abstract: false, final false
inline void EnqueueAndDecodeChunkAsync(::ArrayW<uint8_t>  chunk, int32_t  offset, int32_t  length) ;

/// @brief Method Finalize, addr 0x9e85cdc, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// [Preserve]
/// @brief Method GetProgress, addr 0x9e869ec, size 0x30, virtual true, abstract: false, final false
inline float_t GetProgress() ;

/// [Preserve]
/// @brief Method GetText, addr 0x9e86998, size 0x54, virtual true, abstract: false, final false
inline ::StringW GetText() ;

/// @brief Method Max, addr 0x9e85ac0, size 0xc, virtual false, abstract: false, final false
inline uint64_t Max(uint64_t  var1, uint64_t  var2) ;

static inline ::Meta::WitAi::Requests::AudioStreamHandler* New_ctor(::Meta::Voice::Audio::Decoding::IAudioDecoder*  audioDecoder, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded) ;

/// [Preserve]
/// @brief Method ReceiveContentLengthHeader, addr 0x9e85f78, size 0x24, virtual true, abstract: false, final false
inline void ReceiveContentLengthHeader(uint64_t  contentLength) ;

/// [Preserve]
/// @brief Method ReceiveData, addr 0x9e85f9c, size 0xe4, virtual true, abstract: false, final false
inline bool ReceiveData(::ArrayW<uint8_t>  bufferData, int32_t  length) ;

/// @brief Method RefreshProgress, addr 0x9e86924, size 0x74, virtual false, abstract: false, final false
inline void RefreshProgress() ;

/// @brief Method TryToFinalize, addr 0x9e86588, size 0x40, virtual false, abstract: false, final false
inline void TryToFinalize() ;

/// @brief Method UnloadBuffers, addr 0x9e85d60, size 0x218, virtual false, abstract: false, final false
inline void UnloadBuffers() ;

constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate* const& __cordl_internal_get_OnFirstResponse() const;

constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate*& __cordl_internal_get_OnFirstResponse() ;

constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate* const& __cordl_internal_get_OnProgress() const;

constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate*& __cordl_internal_get_OnProgress() ;

constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate* const& __cordl_internal_get_OnResponse() const;

constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate*& __cordl_internal_get_OnResponse() ;

constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* const& __cordl_internal_get__AudioDecoder_k__BackingField() const;

constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder*& __cordl_internal_get__AudioDecoder_k__BackingField() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__Completion_k__BackingField() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__Completion_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsComplete_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsComplete_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsError_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsError_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsStarted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsStarted_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* const& __cordl_internal_get__OnSamplesDecoded_k__BackingField() const;

constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*& __cordl_internal_get__OnSamplesDecoded_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Progress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Progress_k__BackingField() ;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>* const& __cordl_internal_get__buffers() const;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*& __cordl_internal_get__buffers() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__decodeBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__decodeBuffer() ;

constexpr int32_t const& __cordl_internal_get__decodeBufferOffset() const;

constexpr int32_t& __cordl_internal_get__decodeBufferOffset() ;

constexpr uint64_t const& __cordl_internal_get__decodedBytes() const;

constexpr uint64_t& __cordl_internal_get__decodedBytes() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__decoder() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__decoder() ;

constexpr uint64_t const& __cordl_internal_get__expectedBytes() const;

constexpr uint64_t& __cordl_internal_get__expectedBytes() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__inBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__inBuffer() ;

constexpr int32_t const& __cordl_internal_get__inBufferOffset() const;

constexpr int32_t& __cordl_internal_get__inBufferOffset() ;

constexpr uint64_t const& __cordl_internal_get__receivedBytes() const;

constexpr uint64_t& __cordl_internal_get__receivedBytes() ;

constexpr bool const& __cordl_internal_get__requestComplete() const;

constexpr bool& __cordl_internal_get__requestComplete() ;

constexpr bool const& __cordl_internal_get__unloaded() const;

constexpr bool& __cordl_internal_get__unloaded() ;

constexpr void __cordl_internal_set_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

constexpr void __cordl_internal_set_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

constexpr void __cordl_internal_set_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

constexpr void __cordl_internal_set__AudioDecoder_k__BackingField(::Meta::Voice::Audio::Decoding::IAudioDecoder*  value) ;

constexpr void __cordl_internal_set__Completion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__IsComplete_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsError_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsStarted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__OnSamplesDecoded_k__BackingField(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  value) ;

constexpr void __cordl_internal_set__Progress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__buffers(::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set__decodeBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__decodeBufferOffset(int32_t  value) ;

constexpr void __cordl_internal_set__decodedBytes(uint64_t  value) ;

constexpr void __cordl_internal_set__decoder(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__expectedBytes(uint64_t  value) ;

constexpr void __cordl_internal_set__inBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__inBufferOffset(int32_t  value) ;

constexpr void __cordl_internal_set__receivedBytes(uint64_t  value) ;

constexpr void __cordl_internal_set__requestComplete(bool  value) ;

constexpr void __cordl_internal_set__unloaded(bool  value) ;

/// @brief Method .ctor, addr 0x9e85acc, size 0x210, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::Audio::Decoding::IAudioDecoder*  audioDecoder, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded) ;

/// [CompilerGenerated]
/// @brief Method add_OnFirstResponse, addr 0x9e85614, size 0x9c, virtual true, abstract: false, final true
inline void add_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnProgress, addr 0x9e85894, size 0x9c, virtual true, abstract: false, final true
inline void add_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnResponse, addr 0x9e8574c, size 0x9c, virtual true, abstract: false, final true
inline void add_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

static inline ::Meta::WitAi::ArrayPool_1<uint8_t>* getStaticF__bufferPool() ;

/// [CompilerGenerated]
/// @brief Method get_AudioDecoder, addr 0x9e859f4, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Audio::Decoding::IAudioDecoder* get_AudioDecoder() ;

/// [CompilerGenerated]
/// @brief Method get_Completion, addr 0x9e859dc, size 0x8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* get_Completion() ;

/// [CompilerGenerated]
/// @brief Method get_IsComplete, addr 0x9e859cc, size 0x8, virtual false, abstract: false, final false
inline bool get_IsComplete() ;

/// [CompilerGenerated]
/// @brief Method get_IsError, addr 0x9e859e4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsError() ;

/// [CompilerGenerated]
/// @brief Method get_IsStarted, addr 0x9e85604, size 0x8, virtual false, abstract: false, final false
inline bool get_IsStarted() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e855fc, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// [CompilerGenerated]
/// @brief Method get_OnSamplesDecoded, addr 0x9e85a9c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* get_OnSamplesDecoded() ;

/// [CompilerGenerated]
/// @brief Method get_Progress, addr 0x9e85884, size 0x8, virtual false, abstract: false, final false
inline float_t get_Progress() ;

/// @brief Method get_WillDecodeInBackground, addr 0x9e859fc, size 0xa0, virtual false, abstract: false, final false
inline bool get_WillDecodeInBackground() ;

/// @brief Method get__decodeComplete, addr 0x9e85aa4, size 0x1c, virtual false, abstract: false, final false
inline bool get__decodeComplete() ;

/// @brief Convert to "::Meta::WitAi::Requests::IVRequestDownloadDecoder"
constexpr ::Meta::WitAi::Requests::IVRequestDownloadDecoder* i___Meta__WitAi__Requests__IVRequestDownloadDecoder() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnFirstResponse, addr 0x9e856b0, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnProgress, addr 0x9e85930, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnResponse, addr 0x9e857e8, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

static inline void setStaticF__bufferPool(::Meta::WitAi::ArrayPool_1<uint8_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsComplete, addr 0x9e859d4, size 0x8, virtual false, abstract: false, final false
inline void set_IsComplete(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsError, addr 0x9e859ec, size 0x8, virtual false, abstract: false, final false
inline void set_IsError(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsStarted, addr 0x9e8560c, size 0x8, virtual false, abstract: false, final false
inline void set_IsStarted(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Progress, addr 0x9e8588c, size 0x8, virtual false, abstract: false, final false
inline void set_Progress(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioStreamHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioStreamHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioStreamHandler(AudioStreamHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioStreamHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioStreamHandler(AudioStreamHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25588};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsStarted>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsStarted_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnFirstResponse, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequestResponseDelegate*  ___OnFirstResponse;

/// [CompilerGenerated]
/// @brief Field OnResponse, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequestResponseDelegate*  ___OnResponse;

/// [CompilerGenerated]
/// @brief Field <Progress>k__BackingField, offset: 0x38, size: 0x4, def value: None
 float_t  ____Progress_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnProgress, offset: 0x40, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequestProgressDelegate*  ___OnProgress;

/// [CompilerGenerated]
/// @brief Field <IsComplete>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____IsComplete_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Completion>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____Completion_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsError>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____IsError_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AudioDecoder>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::IAudioDecoder*  ____AudioDecoder_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnSamplesDecoded>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  ____OnSamplesDecoded_k__BackingField;

/// @brief Field _buffers, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*  ____buffers;

/// @brief Field _inBuffer, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____inBuffer;

/// @brief Field _inBufferOffset, offset: 0x80, size: 0x4, def value: None
 int32_t  ____inBufferOffset;

/// @brief Field _decodeBuffer, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____decodeBuffer;

/// @brief Field _decodeBufferOffset, offset: 0x90, size: 0x4, def value: None
 int32_t  ____decodeBufferOffset;

/// @brief Field _expectedBytes, offset: 0x98, size: 0x8, def value: None
 uint64_t  ____expectedBytes;

/// @brief Field _receivedBytes, offset: 0xa0, size: 0x8, def value: None
 uint64_t  ____receivedBytes;

/// @brief Field _decodedBytes, offset: 0xa8, size: 0x8, def value: None
 uint64_t  ____decodedBytes;

/// @brief Field _requestComplete, offset: 0xb0, size: 0x1, def value: None
 bool  ____requestComplete;

/// @brief Field _decoder, offset: 0xb8, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____decoder;

/// @brief Field _unloaded, offset: 0xc0, size: 0x1, def value: None
 bool  ____unloaded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____Logger_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____IsStarted_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ___OnFirstResponse) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ___OnResponse) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____Progress_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ___OnProgress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____IsComplete_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____Completion_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____IsError_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____AudioDecoder_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____OnSamplesDecoded_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____buffers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____inBuffer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____inBufferOffset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____decodeBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____decodeBufferOffset) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____expectedBytes) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____receivedBytes) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____decodedBytes) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____requestComplete) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____decoder) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::AudioStreamHandler, ____unloaded) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::AudioStreamHandler) == 0xc8, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
