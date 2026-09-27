#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoiceFramed_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__LocalVoiceFramedBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVoiceFramed_1)
namespace Photon::Voice {
template<typename T>
class FactoryPrimitiveArrayPool_1;
}
namespace Photon::Voice {
template<typename T>
class Framer_1;
}
namespace Photon::Voice {
class IEncoder;
}
namespace Photon::Voice {
template<typename T>
class IProcessor_1;
}
namespace Photon::Voice {
class VoiceClient;
}
namespace Photon::Voice {
struct VoiceInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Threading {
class AutoResetEvent;
}
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class LocalVoiceFramed_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::LocalVoiceFramed_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::LocalVoiceFramed_1, "Photon.Voice", "LocalVoiceFramed`1");
// Dependencies Photon.Voice.LocalVoiceFramedBase
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.LocalVoiceFramed`1<T>
class CORDL_TYPE LocalVoiceFramed_1 : public ::Photon::Voice::LocalVoiceFramedBase {
public:
// Declarations
 __declspec(property(get=get_BufferFactory)) ::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*  BufferFactory;

 __declspec(property(get=get_PushDataAsyncReady)) bool  PushDataAsyncReady;

/// @brief Field bufferFactory, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferFactory, put=__cordl_internal_set_bufferFactory)) ::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*  bufferFactory;

/// @brief Field dataEncodeThreadStarted, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_dataEncodeThreadStarted, put=__cordl_internal_set_dataEncodeThreadStarted)) bool  dataEncodeThreadStarted;

/// @brief Field exitThread, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_exitThread, put=__cordl_internal_set_exitThread)) bool  exitThread;

/// @brief Field framer, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_framer, put=__cordl_internal_set_framer)) ::Photon::Voice::Framer_1<T>*  framer;

/// @brief Field framesSkipped, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_framesSkipped, put=__cordl_internal_set_framesSkipped)) int32_t  framesSkipped;

/// @brief Field framesSkippedNextLog, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_framesSkippedNextLog, put=__cordl_internal_set_framesSkippedNextLog)) int32_t  framesSkippedNextLog;

/// @brief Field preProcessorsCnt, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_preProcessorsCnt, put=__cordl_internal_set_preProcessorsCnt)) int32_t  preProcessorsCnt;

/// @brief Field processNullFramesCnt, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_processNullFramesCnt, put=__cordl_internal_set_processNullFramesCnt)) int32_t  processNullFramesCnt;

/// @brief Field processors, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_processors, put=__cordl_internal_set_processors)) ::System::Collections::Generic::List_1<::Photon::Voice::IProcessor_1<T>*>*  processors;

/// @brief Field pushDataQueue, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pushDataQueue, put=__cordl_internal_set_pushDataQueue)) ::System::Collections::Generic::Queue_1<::ArrayW<T>>*  pushDataQueue;

/// @brief Field pushDataQueueReady, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pushDataQueueReady, put=__cordl_internal_set_pushDataQueueReady)) ::System::Threading::AutoResetEvent*  pushDataQueueReady;

/// @brief Method AddPostProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddPostProcessor(/* [ParamArray] */ ::ArrayW<::Photon::Voice::IProcessor_1<T>*>  processors) ;

/// @brief Method AddPreProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddPreProcessor(/* [ParamArray] */ ::ArrayW<::Photon::Voice::IProcessor_1<T>*>  processors) ;

/// @brief Method ClearProcessors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearProcessors() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Dispose() ;

static inline ::Photon::Voice::LocalVoiceFramed_1<T>* New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId, int32_t  frameSize) ;

/// @brief Method PushData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void PushData(::ArrayW<T>  buf) ;

/// @brief Method PushDataAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void PushDataAsync(::ArrayW<T>  buf) ;

/// @brief Method PushDataAsyncThread, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void PushDataAsyncThread() ;

constexpr ::Photon::Voice::FactoryPrimitiveArrayPool_1<T>* const& __cordl_internal_get_bufferFactory() const;

constexpr ::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*& __cordl_internal_get_bufferFactory() ;

constexpr bool const& __cordl_internal_get_dataEncodeThreadStarted() const;

constexpr bool& __cordl_internal_get_dataEncodeThreadStarted() ;

constexpr bool const& __cordl_internal_get_exitThread() const;

constexpr bool& __cordl_internal_get_exitThread() ;

constexpr ::Photon::Voice::Framer_1<T>* const& __cordl_internal_get_framer() const;

constexpr ::Photon::Voice::Framer_1<T>*& __cordl_internal_get_framer() ;

constexpr int32_t const& __cordl_internal_get_framesSkipped() const;

constexpr int32_t& __cordl_internal_get_framesSkipped() ;

constexpr int32_t const& __cordl_internal_get_framesSkippedNextLog() const;

constexpr int32_t& __cordl_internal_get_framesSkippedNextLog() ;

constexpr int32_t const& __cordl_internal_get_preProcessorsCnt() const;

constexpr int32_t& __cordl_internal_get_preProcessorsCnt() ;

constexpr int32_t const& __cordl_internal_get_processNullFramesCnt() const;

constexpr int32_t& __cordl_internal_get_processNullFramesCnt() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Voice::IProcessor_1<T>*>* const& __cordl_internal_get_processors() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Voice::IProcessor_1<T>*>*& __cordl_internal_get_processors() ;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>* const& __cordl_internal_get_pushDataQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<T>>*& __cordl_internal_get_pushDataQueue() ;

constexpr ::System::Threading::AutoResetEvent* const& __cordl_internal_get_pushDataQueueReady() const;

constexpr ::System::Threading::AutoResetEvent*& __cordl_internal_get_pushDataQueueReady() ;

constexpr void __cordl_internal_set_bufferFactory(::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*  value) ;

constexpr void __cordl_internal_set_dataEncodeThreadStarted(bool  value) ;

constexpr void __cordl_internal_set_exitThread(bool  value) ;

constexpr void __cordl_internal_set_framer(::Photon::Voice::Framer_1<T>*  value) ;

constexpr void __cordl_internal_set_framesSkipped(int32_t  value) ;

constexpr void __cordl_internal_set_framesSkippedNextLog(int32_t  value) ;

constexpr void __cordl_internal_set_preProcessorsCnt(int32_t  value) ;

constexpr void __cordl_internal_set_processNullFramesCnt(int32_t  value) ;

constexpr void __cordl_internal_set_processors(::System::Collections::Generic::List_1<::Photon::Voice::IProcessor_1<T>*>*  value) ;

constexpr void __cordl_internal_set_pushDataQueue(::System::Collections::Generic::Queue_1<::ArrayW<T>>*  value) ;

constexpr void __cordl_internal_set_pushDataQueueReady(::System::Threading::AutoResetEvent*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId, int32_t  frameSize) ;

/// @brief Method get_BufferFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Photon::Voice::FactoryPrimitiveArrayPool_1<T>* get_BufferFactory() ;

/// @brief Method get_PushDataAsyncReady, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_PushDataAsyncReady() ;

/// @brief Method processFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> processFrame(::ArrayW<T>  buf) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVoiceFramed_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceFramed_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVoiceFramed_1(LocalVoiceFramed_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceFramed_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVoiceFramed_1(LocalVoiceFramed_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28488};

/// @brief Field framer, offset: 0xc0, size: 0x8, def value: None
 ::Photon::Voice::Framer_1<T>*  ___framer;

/// @brief Field preProcessorsCnt, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___preProcessorsCnt;

/// @brief Field processors, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Voice::IProcessor_1<T>*>*  ___processors;

/// @brief Field dataEncodeThreadStarted, offset: 0xd8, size: 0x1, def value: None
 bool  ___dataEncodeThreadStarted;

/// @brief Field pushDataQueue, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::ArrayW<T>>*  ___pushDataQueue;

/// @brief Field pushDataQueueReady, offset: 0xe8, size: 0x8, def value: None
 ::System::Threading::AutoResetEvent*  ___pushDataQueueReady;

/// @brief Field bufferFactory, offset: 0xf0, size: 0x8, def value: None
 ::Photon::Voice::FactoryPrimitiveArrayPool_1<T>*  ___bufferFactory;

/// @brief Field framesSkippedNextLog, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___framesSkippedNextLog;

/// @brief Field framesSkipped, offset: 0xfc, size: 0x4, def value: None
 int32_t  ___framesSkipped;

/// @brief Field exitThread, offset: 0x100, size: 0x1, def value: None
 bool  ___exitThread;

/// @brief Field processNullFramesCnt, offset: 0x104, size: 0x4, def value: None
 int32_t  ___processNullFramesCnt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
