#pragma once
// IWYU pragma private; include "Meta/Voice/NLPRequest_5.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/zzzz__TranscriptionRequest_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NLPRequest_5)
namespace GlobalNamespace {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
struct __c__DisplayClass29_0_NLPRequest_5___EnqueueDecode_b__0_d;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Logging {
struct VLoggerVerbosity;
}
namespace Meta::Voice {
template<typename TResults>
class INLPRequestResponseDecoder_1;
}
namespace Meta::Voice {
struct NLPRequestInputType;
}
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
class NLPRequest_5___c__DisplayClass26_0;
}
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
class NLPRequest_5___c__DisplayClass29_0;
}
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
class NLPRequest_5___c__DisplayClass32_0;
}
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
class NLPRequest_5___c__DisplayClass33_0;
}
namespace Meta::Voice {
struct VoiceRequestState;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
class NLPRequest_5;
}
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
class NLPRequest_5___c__DisplayClass26_0;
}
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
class NLPRequest_5___c__DisplayClass29_0;
}
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
class NLPRequest_5___c__DisplayClass32_0;
}
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
class NLPRequest_5___c__DisplayClass33_0;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::NLPRequest_5);
MARK_GEN_REF_T_PTR(::Meta::Voice::NLPRequest_5___c__DisplayClass26_0);
MARK_GEN_REF_T_PTR(::Meta::Voice::NLPRequest_5___c__DisplayClass29_0);
MARK_GEN_REF_T_PTR(::Meta::Voice::NLPRequest_5___c__DisplayClass32_0);
MARK_GEN_REF_T_PTR(::Meta::Voice::NLPRequest_5___c__DisplayClass33_0);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::NLPRequest_5, "Meta.Voice", "NLPRequest`5");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::NLPRequest_5___c__DisplayClass26_0, "Meta.Voice", "NLPRequest`5/<>c__DisplayClass26_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::NLPRequest_5___c__DisplayClass29_0, "Meta.Voice", "NLPRequest`5/<>c__DisplayClass29_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::NLPRequest_5___c__DisplayClass32_0, "Meta.Voice", "NLPRequest`5/<>c__DisplayClass32_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::NLPRequest_5___c__DisplayClass33_0, "Meta.Voice", "NLPRequest`5/<>c__DisplayClass33_0");
// [LogCategory((Meta.Voice.Logging.LogCategory)15)]
// Dependencies Meta.Voice.TranscriptionRequest`4<TUnityEvent, TOptions, TEvents, TResults>
namespace Meta::Voice {
// cpp template
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
// Is value type: false
// CS Name: Meta.Voice.NLPRequest`5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>
class CORDL_TYPE NLPRequest_5 : public ::Meta::Voice::TranscriptionRequest_4<TUnityEvent,TOptions,TEvents,TResults> {
public:
// Declarations
using __c__DisplayClass26_0 = ::Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent, TOptions, TEvents, TResults, TResponseData>;

using __c__DisplayClass29_0 = ::Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent, TOptions, TEvents, TResults, TResponseData>;

using __c__DisplayClass32_0 = ::Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent, TOptions, TEvents, TResults, TResponseData>;

using __c__DisplayClass33_0 = ::Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent, TOptions, TEvents, TResults, TResponseData>;

 __declspec(property(get=get_DecodeRawResponses)) bool  DecodeRawResponses;

 __declspec(property(get=get_InputType)) ::Meta::Voice::NLPRequestInputType  InputType;

 __declspec(property(get=get_IsDecoding)) bool  IsDecoding;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

 __declspec(property(get=get_ResponseData)) TResponseData  ResponseData;

 __declspec(property(get=get_ResponseDecoder)) ::Meta::Voice::INLPRequestResponseDecoder_1<TResponseData>*  ResponseDecoder;

/// @brief Field <Logger>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field _finalized, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__finalized, put=__cordl_internal_set__finalized)) bool  _finalized;

/// @brief Field _initialized, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _lastDecode, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastDecode, put=__cordl_internal_set__lastDecode)) ::System::Threading::Tasks::Task*  _lastDecode;

/// @brief Field _lastResponse, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastResponse, put=__cordl_internal_set__lastResponse)) TResponseData  _lastResponse;

/// @brief Field _rawDecoded, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__rawDecoded, put=__cordl_internal_set__rawDecoded)) int32_t  _rawDecoded;

/// @brief Field _rawQueued, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__rawQueued, put=__cordl_internal_set__rawQueued)) int32_t  _rawQueued;

/// @brief Field _rawResponseFinal, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__rawResponseFinal, put=__cordl_internal_set__rawResponseFinal)) bool  _rawResponseFinal;

/// @brief Field _rawResponseLast, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__rawResponseLast, put=__cordl_internal_set__rawResponseLast)) ::StringW  _rawResponseLast;

/// @brief Method ApplyResponseData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyResponseData(TResponseData  responseData, bool  final) ;

/// @brief Method CompleteEarly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CompleteEarly() ;

/// @brief Method DecodeRawResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void DecodeRawResponse(::StringW  rawResponse, bool  final) ;

/// @brief Method EnqueueDecode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void EnqueueDecode(::StringW  rawResponse, bool  final) ;

/// @brief Method GetActivateAudioError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetActivateAudioError() ;

/// @brief Method GetSendError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetSendError() ;

/// @brief Method HandleRawResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandleRawResponse(::StringW  rawResponse, bool  final) ;

/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Log(::StringW  log, ::Meta::Voice::Logging::VLoggerVerbosity  logLevel) ;

/// @brief Method MakeLastResponseFinal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void MakeLastResponseFinal() ;

static inline ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* New_ctor(::Meta::Voice::NLPRequestInputType  inputType, TOptions  options, TEvents  newEvents) ;

/// @brief Method OnFullResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnFullResponse(TResponseData  responseData) ;

/// @brief Method OnPartialResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnPartialResponse(TResponseData  responseData) ;

/// @brief Method OnRawResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnRawResponse(::StringW  rawResponse) ;

/// @brief Method SetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetState(::Meta::Voice::VoiceRequestState  newState) ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr bool const& __cordl_internal_get__finalized() const;

constexpr bool& __cordl_internal_get__finalized() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__lastDecode() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__lastDecode() ;

constexpr TResponseData const& __cordl_internal_get__lastResponse() const;

constexpr TResponseData& __cordl_internal_get__lastResponse() ;

constexpr int32_t const& __cordl_internal_get__rawDecoded() const;

constexpr int32_t& __cordl_internal_get__rawDecoded() ;

constexpr int32_t const& __cordl_internal_get__rawQueued() const;

constexpr int32_t& __cordl_internal_get__rawQueued() ;

constexpr bool const& __cordl_internal_get__rawResponseFinal() const;

constexpr bool& __cordl_internal_get__rawResponseFinal() ;

constexpr ::StringW const& __cordl_internal_get__rawResponseLast() const;

constexpr ::StringW& __cordl_internal_get__rawResponseLast() ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__finalized(bool  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__lastDecode(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__lastResponse(TResponseData  value) ;

constexpr void __cordl_internal_set__rawDecoded(int32_t  value) ;

constexpr void __cordl_internal_set__rawQueued(int32_t  value) ;

constexpr void __cordl_internal_set__rawResponseFinal(bool  value) ;

constexpr void __cordl_internal_set__rawResponseLast(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::NLPRequestInputType  inputType, TOptions  options, TEvents  newEvents) ;

/// @brief Method get_DecodeRawResponses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_DecodeRawResponses() ;

/// @brief Method get_InputType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::NLPRequestInputType get_InputType() ;

/// @brief Method get_IsDecoding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsDecoding() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// @brief Method get_ResponseData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResponseData get_ResponseData() ;

/// @brief Method get_ResponseDecoder, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Meta::Voice::INLPRequestResponseDecoder_1<TResponseData>* get_ResponseDecoder() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NLPRequest_5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NLPRequest_5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NLPRequest_5(NLPRequest_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NLPRequest_5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NLPRequest_5(NLPRequest_5 const& ) = delete;

/// @brief Field DECODE_DELAY_MS offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_DELAY_MS{static_cast<int32_t>(0x5)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25442};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// @brief Field _initialized, offset: 0x60, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _finalized, offset: 0x61, size: 0x1, def value: None
 bool  ____finalized;

/// @brief Field _rawResponseLast, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____rawResponseLast;

/// @brief Field _rawQueued, offset: 0x70, size: 0x4, def value: None
 int32_t  ____rawQueued;

/// @brief Field _rawDecoded, offset: 0x74, size: 0x4, def value: None
 int32_t  ____rawDecoded;

/// @brief Field _rawResponseFinal, offset: 0x78, size: 0x1, def value: None
 bool  ____rawResponseFinal;

/// @brief Field _lastDecode, offset: 0x80, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____lastDecode;

/// @brief Field _lastResponse, offset: 0x88, size: 0x8, def value: None
 TResponseData  ____lastResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice {
// cpp template
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
// Is value type: false
// CS Name: Meta.Voice.NLPRequest`5/<>c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>
class CORDL_TYPE NLPRequest_5___c__DisplayClass33_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  __4__this;

/// @brief Field responseData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseData, put=__cordl_internal_set_responseData)) TResponseData  responseData;

static inline ::Meta::Voice::NLPRequest_5___c__DisplayClass33_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* New_ctor() ;

/// @brief Method <OnFullResponse>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _OnFullResponse_b__0() ;

constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*& __cordl_internal_get___4__this() ;

constexpr TResponseData const& __cordl_internal_get_responseData() const;

constexpr TResponseData& __cordl_internal_get_responseData() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  value) ;

constexpr void __cordl_internal_set_responseData(TResponseData  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NLPRequest_5___c__DisplayClass33_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NLPRequest_5___c__DisplayClass33_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NLPRequest_5___c__DisplayClass33_0(NLPRequest_5___c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NLPRequest_5___c__DisplayClass33_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NLPRequest_5___c__DisplayClass33_0(NLPRequest_5___c__DisplayClass33_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25441};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  _____4__this;

/// @brief Field responseData, offset: 0x18, size: 0x8, def value: None
 TResponseData  ___responseData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice {
// cpp template
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
// Is value type: false
// CS Name: Meta.Voice.NLPRequest`5/<>c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>
class CORDL_TYPE NLPRequest_5___c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  __4__this;

/// @brief Field responseData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseData, put=__cordl_internal_set_responseData)) TResponseData  responseData;

static inline ::Meta::Voice::NLPRequest_5___c__DisplayClass32_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* New_ctor() ;

/// @brief Method <OnPartialResponse>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _OnPartialResponse_b__0() ;

constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*& __cordl_internal_get___4__this() ;

constexpr TResponseData const& __cordl_internal_get_responseData() const;

constexpr TResponseData& __cordl_internal_get_responseData() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  value) ;

constexpr void __cordl_internal_set_responseData(TResponseData  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NLPRequest_5___c__DisplayClass32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NLPRequest_5___c__DisplayClass32_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NLPRequest_5___c__DisplayClass32_0(NLPRequest_5___c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NLPRequest_5___c__DisplayClass32_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NLPRequest_5___c__DisplayClass32_0(NLPRequest_5___c__DisplayClass32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25440};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  _____4__this;

/// @brief Field responseData, offset: 0x18, size: 0x8, def value: None
 TResponseData  ___responseData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice {
// cpp template
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
// Is value type: false
// CS Name: Meta.Voice.NLPRequest`5/<>c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>
class CORDL_TYPE NLPRequest_5___c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
using __EnqueueDecode_b__0_d = ::GlobalNamespace::__c__DisplayClass29_0_NLPRequest_5___EnqueueDecode_b__0_d<TUnityEvent, TOptions, TEvents, TResults, TResponseData>;

/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  __4__this;

/// @brief Field blockingTask, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockingTask, put=__cordl_internal_set_blockingTask)) ::System::Threading::Tasks::Task*  blockingTask;

/// @brief Field final, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_final, put=__cordl_internal_set_final)) bool  final;

/// @brief Field rawResponse, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawResponse, put=__cordl_internal_set_rawResponse)) ::StringW  rawResponse;

static inline ::Meta::Voice::NLPRequest_5___c__DisplayClass29_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* New_ctor() ;

/// [AsyncStateMachine(typeof(Meta.Voice.NLPRequest`5::<>c__DisplayClass29_0::<<EnqueueDecode>b__0>d<TUnityEvent, TOptions, TEvents, TResults, TResponseData>))]
/// @brief Method <EnqueueDecode>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _EnqueueDecode_b__0() ;

constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_blockingTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_blockingTask() ;

constexpr bool const& __cordl_internal_get_final() const;

constexpr bool& __cordl_internal_get_final() ;

constexpr ::StringW const& __cordl_internal_get_rawResponse() const;

constexpr ::StringW& __cordl_internal_get_rawResponse() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  value) ;

constexpr void __cordl_internal_set_blockingTask(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set_final(bool  value) ;

constexpr void __cordl_internal_set_rawResponse(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NLPRequest_5___c__DisplayClass29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NLPRequest_5___c__DisplayClass29_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NLPRequest_5___c__DisplayClass29_0(NLPRequest_5___c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NLPRequest_5___c__DisplayClass29_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NLPRequest_5___c__DisplayClass29_0(NLPRequest_5___c__DisplayClass29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25439};

/// @brief Field blockingTask, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ___blockingTask;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  _____4__this;

/// @brief Field rawResponse, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___rawResponse;

/// @brief Field final, offset: 0x28, size: 0x1, def value: None
 bool  ___final;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice {
// cpp template
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults,typename TResponseData>
// Is value type: false
// CS Name: Meta.Voice.NLPRequest`5/<>c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>
class CORDL_TYPE NLPRequest_5___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  __4__this;

/// @brief Field rawResponse, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawResponse, put=__cordl_internal_set_rawResponse)) ::StringW  rawResponse;

static inline ::Meta::Voice::NLPRequest_5___c__DisplayClass26_0<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* New_ctor() ;

/// @brief Method <OnRawResponse>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _OnRawResponse_b__0() ;

constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_rawResponse() const;

constexpr ::StringW& __cordl_internal_get_rawResponse() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  value) ;

constexpr void __cordl_internal_set_rawResponse(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NLPRequest_5___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NLPRequest_5___c__DisplayClass26_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NLPRequest_5___c__DisplayClass26_0(NLPRequest_5___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NLPRequest_5___c__DisplayClass26_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NLPRequest_5___c__DisplayClass26_0(NLPRequest_5___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25437};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::NLPRequest_5<TUnityEvent,TOptions,TEvents,TResults,TResponseData>*  _____4__this;

/// @brief Field rawResponse, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___rawResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
