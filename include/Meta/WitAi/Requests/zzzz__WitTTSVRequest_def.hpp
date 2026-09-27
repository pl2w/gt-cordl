#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitTTSVRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__WitVRequest_def.hpp"
#include "Meta/WitAi/zzzz__TTSWitAudioType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitTTSVRequest)
namespace GlobalNamespace {
struct WitTTSVRequest__RequestDownload_d__25;
}
namespace GlobalNamespace {
struct WitTTSVRequest__RequestStreamFromDisk_d__23;
}
namespace GlobalNamespace {
struct WitTTSVRequest__RequestStream_d__24;
}
namespace GlobalNamespace {
struct WitTTSVRequest__SetupTts_d__26;
}
namespace Meta::Voice::Audio::Decoding {
class AudioJsonDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class AudioSampleDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class IAudioDecoder;
}
namespace Meta::WitAi::Requests {
template<typename TValue>
struct VRequestResponse_1;
}
namespace Meta::WitAi::Requests {
class WitTTSVRequest___c__DisplayClass23_0;
}
namespace Meta::WitAi::Requests {
class WitTTSVRequest___c__DisplayClass26_0;
}
namespace Meta::WitAi {
class IWitRequestConfiguration;
}
namespace Meta::WitAi {
struct TTSWitAudioType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class WitTTSVRequest;
}
namespace Meta::WitAi::Requests {
class WitTTSVRequest___c__DisplayClass23_0;
}
namespace Meta::WitAi::Requests {
class WitTTSVRequest___c__DisplayClass26_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::WitTTSVRequest*);
MARK_REF_T(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0*);
MARK_REF_T(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::WitTTSVRequest*, "Meta.WitAi.Requests", "WitTTSVRequest");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0*, "Meta.WitAi.Requests", "WitTTSVRequest/<>c__DisplayClass23_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0*, "Meta.WitAi.Requests", "WitTTSVRequest/<>c__DisplayClass26_0");
// Dependencies Meta.WitAi.Requests.WitVRequest, Meta.WitAi.TTSWitAudioType
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.WitTTSVRequest
class CORDL_TYPE WitTTSVRequest : public ::Meta::WitAi::Requests::WitVRequest {
public:
// Declarations
using _RequestDownload_d__25 = ::GlobalNamespace::WitTTSVRequest__RequestDownload_d__25;

using _RequestStreamFromDisk_d__23 = ::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23;

using _RequestStream_d__24 = ::GlobalNamespace::WitTTSVRequest__RequestStream_d__24;

using _SetupTts_d__26 = ::GlobalNamespace::WitTTSVRequest__SetupTts_d__26;

using __c__DisplayClass23_0 = ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0;

using __c__DisplayClass26_0 = ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0;

 __declspec(property(get=get_FileType, put=set_FileType)) ::Meta::WitAi::TTSWitAudioType  FileType;

 __declspec(property(get=get_Stream, put=set_Stream)) bool  Stream;

 __declspec(property(get=get_TextToSpeak, put=set_TextToSpeak)) ::StringW  TextToSpeak;

 __declspec(property(get=get_TtsParameters, put=set_TtsParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  TtsParameters;

 __declspec(property(get=get_UseEvents, put=set_UseEvents)) bool  UseEvents;

/// @brief Field <FileType>k__BackingField, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__FileType_k__BackingField, put=__cordl_internal_set__FileType_k__BackingField)) ::Meta::WitAi::TTSWitAudioType  _FileType_k__BackingField;

/// @brief Field <Stream>k__BackingField, offset 0xd4, size 0x1 
 __declspec(property(get=__cordl_internal_get__Stream_k__BackingField, put=__cordl_internal_set__Stream_k__BackingField)) bool  _Stream_k__BackingField;

/// @brief Field <TextToSpeak>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__TextToSpeak_k__BackingField, put=__cordl_internal_set__TextToSpeak_k__BackingField)) ::StringW  _TextToSpeak_k__BackingField;

/// @brief Field <TtsParameters>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__TtsParameters_k__BackingField, put=__cordl_internal_set__TtsParameters_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _TtsParameters_k__BackingField;

/// @brief Field <UseEvents>k__BackingField, offset 0xd5, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseEvents_k__BackingField, put=__cordl_internal_set__UseEvents_k__BackingField)) bool  _UseEvents_k__BackingField;

/// @brief Field _decoder, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__decoder, put=__cordl_internal_set__decoder)) ::Meta::Voice::Audio::Decoding::IAudioDecoder*  _decoder;

/// @brief Method EncodePostData, addr 0x9e8f148, size 0x29c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> EncodePostData() ;

/// @brief Method GetHeaders, addr 0x9e8e8ac, size 0x90, virtual true, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetHeaders() ;

/// @brief Method GetWebErrors, addr 0x9e8ee58, size 0x2f0, virtual false, abstract: false, final false
inline ::StringW GetWebErrors(bool  downloadOnly) ;

static inline ::Meta::WitAi::Requests::WitTTSVRequest* New_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.WitTTSVRequest::<RequestDownload>d__25))]
/// @brief Method RequestDownload, addr 0x9e8ebf4, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* RequestDownload(::StringW  downloadPath) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.WitTTSVRequest::<RequestStream>d__24))]
/// @brief Method RequestStream, addr 0x9e8eab8, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* RequestStream(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.WitTTSVRequest::<RequestStreamFromDisk>d__23))]
/// @brief Method RequestStreamFromDisk, addr 0x9e8e968, size 0x150, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* RequestStreamFromDisk(::StringW  diskPath, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Requests.WitTTSVRequest::<SetupTts>d__26))]
/// @brief Method SetupTts, addr 0x9e8ed10, size 0x148, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* SetupTts(bool  download, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded) ;

constexpr ::Meta::WitAi::TTSWitAudioType const& __cordl_internal_get__FileType_k__BackingField() const;

constexpr ::Meta::WitAi::TTSWitAudioType& __cordl_internal_get__FileType_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Stream_k__BackingField() const;

constexpr bool& __cordl_internal_get__Stream_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__TextToSpeak_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TextToSpeak_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__TtsParameters_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__TtsParameters_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseEvents_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseEvents_k__BackingField() ;

constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* const& __cordl_internal_get__decoder() const;

constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder*& __cordl_internal_get__decoder() ;

constexpr void __cordl_internal_set__FileType_k__BackingField(::Meta::WitAi::TTSWitAudioType  value) ;

constexpr void __cordl_internal_set__Stream_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TextToSpeak_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__TtsParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__UseEvents_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__decoder(::Meta::Voice::Audio::Decoding::IAudioDecoder*  value) ;

/// @brief Method .ctor, addr 0x9e8e8a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId) ;

/// [CompilerGenerated]
/// @brief Method get_FileType, addr 0x9e8e874, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTSWitAudioType get_FileType() ;

/// [CompilerGenerated]
/// @brief Method get_Stream, addr 0x9e8e884, size 0x8, virtual false, abstract: false, final false
inline bool get_Stream() ;

/// [CompilerGenerated]
/// @brief Method get_TextToSpeak, addr 0x9e8e854, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TextToSpeak() ;

/// [CompilerGenerated]
/// @brief Method get_TtsParameters, addr 0x9e8e864, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_TtsParameters() ;

/// [CompilerGenerated]
/// @brief Method get_UseEvents, addr 0x9e8e894, size 0x8, virtual false, abstract: false, final false
inline bool get_UseEvents() ;

/// [CompilerGenerated]
/// @brief Method set_FileType, addr 0x9e8e87c, size 0x8, virtual false, abstract: false, final false
inline void set_FileType(::Meta::WitAi::TTSWitAudioType  value) ;

/// [CompilerGenerated]
/// @brief Method set_Stream, addr 0x9e8e88c, size 0x8, virtual false, abstract: false, final false
inline void set_Stream(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TextToSpeak, addr 0x9e8e85c, size 0x8, virtual false, abstract: false, final false
inline void set_TextToSpeak(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_TtsParameters, addr 0x9e8e86c, size 0x8, virtual false, abstract: false, final false
inline void set_TtsParameters(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_UseEvents, addr 0x9e8e89c, size 0x8, virtual false, abstract: false, final false
inline void set_UseEvents(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitTTSVRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitTTSVRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitTTSVRequest(WitTTSVRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitTTSVRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitTTSVRequest(WitTTSVRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25634};

/// [CompilerGenerated]
/// @brief Field <TextToSpeak>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ____TextToSpeak_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TtsParameters>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____TtsParameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FileType>k__BackingField, offset: 0xd0, size: 0x4, def value: None
 ::Meta::WitAi::TTSWitAudioType  ____FileType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Stream>k__BackingField, offset: 0xd4, size: 0x1, def value: None
 bool  ____Stream_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UseEvents>k__BackingField, offset: 0xd5, size: 0x1, def value: None
 bool  ____UseEvents_k__BackingField;

/// @brief Field _decoder, offset: 0xd8, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::IAudioDecoder*  ____decoder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest, ____TextToSpeak_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest, ____TtsParameters_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest, ____FileType_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest, ____Stream_k__BackingField) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest, ____UseEvents_k__BackingField) == 0xd5, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest, ____decoder) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::WitTTSVRequest) == 0xe0, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass26_0
class CORDL_TYPE WitTTSVRequest___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::WitTTSVRequest*  __4__this;

/// @brief Field download, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_download, put=__cordl_internal_set_download)) bool  download;

/// @brief Field onSamplesDecoded, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSamplesDecoded, put=__cordl_internal_set_onSamplesDecoded)) ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded;

/// @brief Field postData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_postData, put=__cordl_internal_set_postData)) ::ArrayW<uint8_t>  postData;

static inline ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <SetupTts>b__0, addr 0x9e8f474, size 0xdc, virtual false, abstract: false, final false
inline void _SetupTts_b__0() ;

constexpr ::Meta::WitAi::Requests::WitTTSVRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::WitTTSVRequest*& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_download() const;

constexpr bool& __cordl_internal_get_download() ;

constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* const& __cordl_internal_get_onSamplesDecoded() const;

constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*& __cordl_internal_get_onSamplesDecoded() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_postData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_postData() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::WitTTSVRequest*  value) ;

constexpr void __cordl_internal_set_download(bool  value) ;

constexpr void __cordl_internal_set_onSamplesDecoded(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  value) ;

constexpr void __cordl_internal_set_postData(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x9e8f46c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitTTSVRequest___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitTTSVRequest___c__DisplayClass26_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitTTSVRequest___c__DisplayClass26_0(WitTTSVRequest___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitTTSVRequest___c__DisplayClass26_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitTTSVRequest___c__DisplayClass26_0(WitTTSVRequest___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25629};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitTTSVRequest*  _____4__this;

/// @brief Field postData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___postData;

/// @brief Field download, offset: 0x20, size: 0x1, def value: None
 bool  ___download;

/// @brief Field onSamplesDecoded, offset: 0x28, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  ___onSamplesDecoded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0, ___postData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0, ___download) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0, ___onSamplesDecoded) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass23_0
class CORDL_TYPE WitTTSVRequest___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Requests::WitTTSVRequest*  __4__this;

/// @brief Field onSamplesDecoded, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSamplesDecoded, put=__cordl_internal_set_onSamplesDecoded)) ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded;

static inline ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <RequestStreamFromDisk>b__0, addr 0x9e8f3ec, size 0x80, virtual false, abstract: false, final false
inline void _RequestStreamFromDisk_b__0() ;

constexpr ::Meta::WitAi::Requests::WitTTSVRequest* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Requests::WitTTSVRequest*& __cordl_internal_get___4__this() ;

constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* const& __cordl_internal_get_onSamplesDecoded() const;

constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*& __cordl_internal_get_onSamplesDecoded() ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Requests::WitTTSVRequest*  value) ;

constexpr void __cordl_internal_set_onSamplesDecoded(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  value) ;

/// @brief Method .ctor, addr 0x9e8f3e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitTTSVRequest___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitTTSVRequest___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitTTSVRequest___c__DisplayClass23_0(WitTTSVRequest___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitTTSVRequest___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitTTSVRequest___c__DisplayClass23_0(WitTTSVRequest___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25628};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitTTSVRequest*  _____4__this;

/// @brief Field onSamplesDecoded, offset: 0x18, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  ___onSamplesDecoded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0, ___onSamplesDecoded) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
