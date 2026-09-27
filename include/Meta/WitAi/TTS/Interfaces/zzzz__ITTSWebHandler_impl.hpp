#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ITTSWebHandler.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSWebHandler_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSDiskCacheSettings_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSVoiceSettings_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler.GetWebErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::GetWebErrors)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler.CreateClipData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSClipData* (::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::*)(::StringW, ::StringW, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::CreateClipData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler.DecodeTtsFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::*)(::Meta::WitAi::Json::WitResponseNode*, ::by_ref<::StringW>, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>)>(&::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::DecodeTtsFromJson)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler.RequestStreamFromWeb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*)>(&::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::RequestStreamFromWeb)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler.IsDownloadedToDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::*)(::StringW)>(&::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::IsDownloadedToDisk)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler.RequestStreamFromDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*)>(&::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::RequestStreamFromDisk)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler.RequestDownloadFromWeb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::RequestDownloadFromWeb)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler.CancelRequests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Interfaces::ITTSWebHandler::CancelRequests)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 7}
                ));
    return ___internal_method;
  }
};
inline ::StringW Meta::WitAi::TTS::Interfaces::ITTSWebHandler::GetWebErrors(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, clipData);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::Interfaces::ITTSWebHandler::CreateClipData(::StringW  clipId, ::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSClipData*>(this, ___internal_method, clipId, textToSpeak, voiceSettings, diskCacheSettings);
}
inline bool Meta::WitAi::TTS::Interfaces::ITTSWebHandler::DecodeTtsFromJson(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::by_ref<::StringW>  textToSpeak, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>  voiceSettings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode, textToSpeak, voiceSettings);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Interfaces::ITTSWebHandler::RequestStreamFromWeb(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData, onReady);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Interfaces::ITTSWebHandler::IsDownloadedToDisk(::StringW  diskPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, diskPath);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Interfaces::ITTSWebHandler::RequestStreamFromDisk(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData, diskPath, onReady);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::Interfaces::ITTSWebHandler::RequestDownloadFromWeb(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  diskPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData, diskPath);
}
inline bool Meta::WitAi::TTS::Interfaces::ITTSWebHandler::CancelRequests(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipData);
}
