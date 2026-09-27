#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSClipData.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipLoadState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioType_impl.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioClipStream_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipLoadState_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSDiskCacheSettings_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSEventContainer_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSVoiceSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.get_queryRequestId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Data::TTSClipData::*)()>(&::Meta::WitAi::TTS::Data::TTSClipData::get_queryRequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e684f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_queryRequestId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.get_clipStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::IAudioClipStream* (::Meta::WitAi::TTS::Data::TTSClipData::*)()>(&::Meta::WitAi::TTS::Data::TTSClipData::get_clipStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e684fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_clipStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.set_clipStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSClipData::*)(::Meta::Voice::Audio::IAudioClipStream*)>(&::Meta::WitAi::TTS::Data::TTSClipData::set_clipStream)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9e68504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"set_clipStream", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioClipStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.get_clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Meta::WitAi::TTS::Data::TTSClipData::*)()>(&::Meta::WitAi::TTS::Data::TTSClipData::get_clip)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e68704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_clip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.get_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSEventContainer* (::Meta::WitAi::TTS::Data::TTSClipData::*)()>(&::Meta::WitAi::TTS::Data::TTSClipData::get_Events)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e687b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_Events", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.get_LoadStatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::TTS::Data::TTSClipData::*)()>(&::Meta::WitAi::TTS::Data::TTSClipData::get_LoadStatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e687c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_LoadStatusCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.set_LoadStatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSClipData::*)(int32_t)>(&::Meta::WitAi::TTS::Data::TTSClipData::set_LoadStatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e687c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"set_LoadStatusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.get_LoadError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Data::TTSClipData::*)()>(&::Meta::WitAi::TTS::Data::TTSClipData::get_LoadError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e687d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_LoadError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.set_LoadError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSClipData::*)(::StringW)>(&::Meta::WitAi::TTS::Data::TTSClipData::set_LoadError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e687d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"set_LoadError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.get_LoadReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<bool>* (::Meta::WitAi::TTS::Data::TTSClipData::*)()>(&::Meta::WitAi::TTS::Data::TTSClipData::get_LoadReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e687e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_LoadReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.get_LoadCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<bool>* (::Meta::WitAi::TTS::Data::TTSClipData::*)()>(&::Meta::WitAi::TTS::Data::TTSClipData::get_LoadCompletion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e687e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_LoadCompletion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Data::TTSClipData::*)(::System::Object*)>(&::Meta::WitAi::TTS::Data::TTSClipData::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e687f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Data::TTSClipData::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Data::TTSClipData::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9e6887c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.HasClipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Data::TTSClipData::*)(::StringW)>(&::Meta::WitAi::TTS::Data::TTSClipData::HasClipId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e688a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"HasClipId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::TTS::Data::TTSClipData::*)()>(&::Meta::WitAi::TTS::Data::TTSClipData::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e688b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Data::TTSClipData::*)()>(&::Meta::WitAi::TTS::Data::TTSClipData::ToString)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x9e688d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSClipData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSClipData::*)()>(&::Meta::WitAi::TTS::Data::TTSClipData::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e68c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_textToSpeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr ::StringW const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_textToSpeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToSpeak;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_textToSpeak(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textToSpeak = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_clipID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipID;
}
constexpr ::StringW const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_clipID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipID;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_clipID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipID = value;
}
constexpr ::UnityEngine::AudioType& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_audioType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioType;
}
constexpr ::UnityEngine::AudioType const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_audioType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioType;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_audioType(::UnityEngine::AudioType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioType = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_voiceSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_voiceSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceSettings;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_voiceSettings(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceSettings = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_diskCacheSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_diskCacheSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diskCacheSettings;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diskCacheSettings = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__queryRequestId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queryRequestId_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__queryRequestId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queryRequestId_k__BackingField;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set__queryRequestId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queryRequestId_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_queryOperationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queryOperationId;
}
constexpr ::StringW const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_queryOperationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queryOperationId;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_queryOperationId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queryOperationId = value;
}
constexpr bool& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_queryStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queryStream;
}
constexpr bool const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_queryStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queryStream;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_queryStream(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queryStream = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_queryParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queryParameters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_queryParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queryParameters;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_queryParameters(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queryParameters = value;
}
constexpr ::Meta::Voice::Audio::IAudioClipStream*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__clipStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipStream;
}
constexpr ::Meta::Voice::Audio::IAudioClipStream* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__clipStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipStream;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set__clipStream(::Meta::Voice::Audio::IAudioClipStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipStream = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipLoadState& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_loadState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadState;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipLoadState const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_loadState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadState;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_loadState(::Meta::WitAi::TTS::Data::TTSClipLoadState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadState = value;
}
constexpr float_t& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_loadProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadProgress;
}
constexpr float_t const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_loadProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadProgress;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_loadProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadProgress = value;
}
constexpr float_t& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_readyDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyDuration;
}
constexpr float_t const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_readyDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyDuration;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_readyDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyDuration = value;
}
constexpr float_t& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_completeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completeDuration;
}
constexpr float_t const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_completeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completeDuration;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_completeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completeDuration = value;
}
constexpr ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::Meta::WitAi::TTS::Data::TTSClipLoadState>*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onStateChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStateChange;
}
constexpr ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::Meta::WitAi::TTS::Data::TTSClipLoadState>* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onStateChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStateChange;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_onStateChange(::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::Meta::WitAi::TTS::Data::TTSClipLoadState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStateChange = value;
}
constexpr bool& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_useEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useEvents;
}
constexpr bool const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_useEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useEvents;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_useEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useEvents = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__Events_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events_k__BackingField;
}
constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__Events_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events_k__BackingField;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set__Events_k__BackingField(::Meta::WitAi::TTS::Data::TTSEventContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Events_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_extension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extension;
}
constexpr ::StringW const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_extension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extension;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_extension(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extension = value;
}
constexpr int32_t& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__LoadStatusCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadStatusCode_k__BackingField;
}
constexpr int32_t const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__LoadStatusCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadStatusCode_k__BackingField;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set__LoadStatusCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LoadStatusCode_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__LoadError_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadError_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__LoadError_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadError_k__BackingField;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set__LoadError_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LoadError_k__BackingField = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__LoadReady_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadReady_k__BackingField;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__LoadReady_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadReady_k__BackingField;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set__LoadReady_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LoadReady_k__BackingField = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__LoadCompletion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadCompletion_k__BackingField;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get__LoadCompletion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadCompletion_k__BackingField;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set__LoadCompletion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LoadCompletion_k__BackingField = value;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onPlaybackReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaybackReady;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onPlaybackReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaybackReady;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_onPlaybackReady(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPlaybackReady = value;
}
constexpr ::System::Action_1<::StringW>*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onDownloadComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDownloadComplete;
}
constexpr ::System::Action_1<::StringW>* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onDownloadComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDownloadComplete;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_onDownloadComplete(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDownloadComplete = value;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onRequestBegin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRequestBegin;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onRequestBegin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRequestBegin;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_onRequestBegin(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRequestBegin = value;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onRequestComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRequestComplete;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onRequestComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRequestComplete;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_onRequestComplete(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRequestComplete = value;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onPlaybackQueued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaybackQueued;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onPlaybackQueued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaybackQueued;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_onPlaybackQueued(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPlaybackQueued = value;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onPlaybackBegin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaybackBegin;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onPlaybackBegin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaybackBegin;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_onPlaybackBegin(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPlaybackBegin = value;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onPlaybackComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaybackComplete;
}
constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_get_onPlaybackComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPlaybackComplete;
}
constexpr void Meta::WitAi::TTS::Data::TTSClipData::__cordl_internal_set_onPlaybackComplete(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPlaybackComplete = value;
}
inline ::StringW Meta::WitAi::TTS::Data::TTSClipData::get_queryRequestId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_queryRequestId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::IAudioClipStream* Meta::WitAi::TTS::Data::TTSClipData::get_clipStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_clipStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::IAudioClipStream*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Data::TTSClipData::set_clipStream(::Meta::Voice::Audio::IAudioClipStream*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"set_clipStream", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioClipStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> Meta::WitAi::TTS::Data::TTSClipData::get_clip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_clip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSEventContainer* Meta::WitAi::TTS::Data::TTSClipData::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSEventContainer*>(this, ___internal_method);
}
inline int32_t Meta::WitAi::TTS::Data::TTSClipData::get_LoadStatusCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_LoadStatusCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Data::TTSClipData::set_LoadStatusCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"set_LoadStatusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::TTS::Data::TTSClipData::get_LoadError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_LoadError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Data::TTSClipData::set_LoadError(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"set_LoadError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* Meta::WitAi::TTS::Data::TTSClipData::get_LoadReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_LoadReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* Meta::WitAi::TTS::Data::TTSClipData::get_LoadCompletion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"get_LoadCompletion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Data::TTSClipData::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Meta::WitAi::TTS::Data::TTSClipData::Equals(::Meta::WitAi::TTS::Data::TTSClipData*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool Meta::WitAi::TTS::Data::TTSClipData::HasClipId(::StringW  clipId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {"HasClipId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipId);
}
inline int32_t Meta::WitAi::TTS::Data::TTSClipData::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::TTS::Data::TTSClipData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Data::TTSClipData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSClipData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::Data::TTSClipData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Data::TTSClipData*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Data::TTSClipData::TTSClipData()   {
}
