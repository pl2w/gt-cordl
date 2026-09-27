#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitTTSVRequest.hpp"
#include "Meta/WitAi/Requests/zzzz__WitVRequest_impl.hpp"
#include "Meta/WitAi/zzzz__TTSWitAudioType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__WitTTSVRequest_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioJsonDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioSampleDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__IAudioDecoder_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitTTSVRequest__RequestDownload_d__25_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitTTSVRequest__RequestStreamFromDisk_d__23_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitTTSVRequest__RequestStream_d__24_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitTTSVRequest__SetupTts_d__26_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitTTSVRequest_def.hpp"
#include "Meta/WitAi/zzzz__IWitRequestConfiguration_def.hpp"
#include "Meta/WitAi/zzzz__TTSWitAudioType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.get_TextToSpeak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::WitTTSVRequest::*)()>(&::Meta::WitAi::Requests::WitTTSVRequest::get_TextToSpeak)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"get_TextToSpeak", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.set_TextToSpeak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitTTSVRequest::*)(::StringW)>(&::Meta::WitAi::Requests::WitTTSVRequest::set_TextToSpeak)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"set_TextToSpeak", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.get_TtsParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::WitAi::Requests::WitTTSVRequest::*)()>(&::Meta::WitAi::Requests::WitTTSVRequest::get_TtsParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"get_TtsParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.set_TtsParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitTTSVRequest::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::WitAi::Requests::WitTTSVRequest::set_TtsParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"set_TtsParameters", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.get_FileType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTSWitAudioType (::Meta::WitAi::Requests::WitTTSVRequest::*)()>(&::Meta::WitAi::Requests::WitTTSVRequest::get_FileType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"get_FileType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.set_FileType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitTTSVRequest::*)(::Meta::WitAi::TTSWitAudioType)>(&::Meta::WitAi::Requests::WitTTSVRequest::set_FileType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"set_FileType", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.get_Stream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::WitTTSVRequest::*)()>(&::Meta::WitAi::Requests::WitTTSVRequest::get_Stream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"get_Stream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.set_Stream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitTTSVRequest::*)(bool)>(&::Meta::WitAi::Requests::WitTTSVRequest::set_Stream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"set_Stream", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.get_UseEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::WitTTSVRequest::*)()>(&::Meta::WitAi::Requests::WitTTSVRequest::get_UseEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"get_UseEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.set_UseEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitTTSVRequest::*)(bool)>(&::Meta::WitAi::Requests::WitTTSVRequest::set_UseEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"set_UseEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitTTSVRequest::*)(::Meta::WitAi::IWitRequestConfiguration*, ::StringW, ::StringW)>(&::Meta::WitAi::Requests::WitTTSVRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8e8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.GetHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::WitAi::Requests::WitTTSVRequest::*)()>(&::Meta::WitAi::Requests::WitTTSVRequest::GetHeaders)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e8e8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.RequestStreamFromDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* (::Meta::WitAi::Requests::WitTTSVRequest::*)(::StringW, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*)>(&::Meta::WitAi::Requests::WitTTSVRequest::RequestStreamFromDisk)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9e8e968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"RequestStreamFromDisk", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.RequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* (::Meta::WitAi::Requests::WitTTSVRequest::*)(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*)>(&::Meta::WitAi::Requests::WitTTSVRequest::RequestStream)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e8eab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"RequestStream", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.RequestDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* (::Meta::WitAi::Requests::WitTTSVRequest::*)(::StringW)>(&::Meta::WitAi::Requests::WitTTSVRequest::RequestDownload)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e8ebf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"RequestDownload", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.SetupTts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::Requests::WitTTSVRequest::*)(bool, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*)>(&::Meta::WitAi::Requests::WitTTSVRequest::SetupTts)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9e8ed10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"SetupTts", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.GetWebErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::WitTTSVRequest::*)(bool)>(&::Meta::WitAi::Requests::WitTTSVRequest::GetWebErrors)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x9e8ee58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"GetWebErrors", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest.EncodePostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Meta::WitAi::Requests::WitTTSVRequest::*)()>(&::Meta::WitAi::Requests::WitTTSVRequest::EncodePostData)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x9e8f148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"EncodePostData", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__TextToSpeak_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextToSpeak_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__TextToSpeak_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextToSpeak_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_set__TextToSpeak_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TextToSpeak_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__TtsParameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TtsParameters_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__TtsParameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TtsParameters_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_set__TtsParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TtsParameters_k__BackingField = value;
}
constexpr ::Meta::WitAi::TTSWitAudioType& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__FileType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileType_k__BackingField;
}
constexpr ::Meta::WitAi::TTSWitAudioType const& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__FileType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileType_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_set__FileType_k__BackingField(::Meta::WitAi::TTSWitAudioType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FileType_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__Stream_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stream_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__Stream_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stream_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_set__Stream_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Stream_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__UseEvents_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseEvents_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__UseEvents_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseEvents_k__BackingField;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_set__UseEvents_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseEvents_k__BackingField = value;
}
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder*& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* const& Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_get__decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest::__cordl_internal_set__decoder(::Meta::Voice::Audio::Decoding::IAudioDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decoder = value;
}
inline ::StringW Meta::WitAi::Requests::WitTTSVRequest::get_TextToSpeak()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"get_TextToSpeak", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitTTSVRequest::set_TextToSpeak(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"set_TextToSpeak", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::Requests::WitTTSVRequest::get_TtsParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"get_TtsParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitTTSVRequest::set_TtsParameters(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"set_TtsParameters", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::TTSWitAudioType Meta::WitAi::Requests::WitTTSVRequest::get_FileType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"get_FileType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTSWitAudioType>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitTTSVRequest::set_FileType(::Meta::WitAi::TTSWitAudioType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"set_FileType", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::WitTTSVRequest::get_Stream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"get_Stream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitTTSVRequest::set_Stream(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"set_Stream", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::WitTTSVRequest::get_UseEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"get_UseEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitTTSVRequest::set_UseEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"set_UseEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::WitTTSVRequest::_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configuration, requestId, operationId);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::Requests::WitTTSVRequest::GetHeaders()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* Meta::WitAi::Requests::WitTTSVRequest::RequestStreamFromDisk(::StringW  diskPath, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"RequestStreamFromDisk", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>*>(this, ___internal_method, diskPath, onSamplesDecoded, onJsonDecoded);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* Meta::WitAi::Requests::WitTTSVRequest::RequestStream(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"RequestStream", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>*>(this, ___internal_method, onSamplesDecoded, onJsonDecoded);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* Meta::WitAi::Requests::WitTTSVRequest::RequestDownload(::StringW  downloadPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"RequestDownload", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>*>(this, ___internal_method, downloadPath);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::Requests::WitTTSVRequest::SetupTts(bool  download, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"SetupTts", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, download, onSamplesDecoded, onJsonDecoded);
}
inline ::StringW Meta::WitAi::Requests::WitTTSVRequest::GetWebErrors(bool  downloadOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"GetWebErrors", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, downloadOnly);
}
inline ::ArrayW<uint8_t> Meta::WitAi::Requests::WitTTSVRequest::EncodePostData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest*>(),
                        {"EncodePostData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::WitTTSVRequest* Meta::WitAi::Requests::WitTTSVRequest::New_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  requestId, ::StringW  operationId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::WitTTSVRequest*>(configuration, requestId, operationId));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::WitTTSVRequest::WitTTSVRequest()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::*)()>(&::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8f46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0._SetupTts_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::*)()>(&::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::_SetupTts_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e8f474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0*>(),
                        {"<SetupTts>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::WitTTSVRequest*& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::Requests::WitTTSVRequest* const& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_set___4__this(::Meta::WitAi::Requests::WitTTSVRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<uint8_t>& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_get_postData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postData;
}
constexpr ::ArrayW<uint8_t> const& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_get_postData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postData;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_set_postData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postData = value;
}
constexpr bool& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_get_download()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___download;
}
constexpr bool const& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_get_download() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___download;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_set_download(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___download = value;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_get_onSamplesDecoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSamplesDecoded;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* const& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_get_onSamplesDecoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSamplesDecoded;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::__cordl_internal_set_onSamplesDecoded(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSamplesDecoded = value;
}
inline void Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::_SetupTts_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0*>(),
                        {"<SetupTts>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0* Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass26_0::WitTTSVRequest___c__DisplayClass26_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::*)()>(&::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8f3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0._RequestStreamFromDisk_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::*)()>(&::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::_RequestStreamFromDisk_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e8f3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0*>(),
                        {"<RequestStreamFromDisk>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::WitTTSVRequest*& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::Requests::WitTTSVRequest* const& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::__cordl_internal_set___4__this(::Meta::WitAi::Requests::WitTTSVRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::__cordl_internal_get_onSamplesDecoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSamplesDecoded;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* const& Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::__cordl_internal_get_onSamplesDecoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSamplesDecoded;
}
constexpr void Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::__cordl_internal_set_onSamplesDecoded(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSamplesDecoded = value;
}
inline void Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::_RequestStreamFromDisk_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0*>(),
                        {"<RequestStreamFromDisk>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0* Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::WitTTSVRequest___c__DisplayClass23_0::WitTTSVRequest___c__DisplayClass23_0()   {
}
