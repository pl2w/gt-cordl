#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeakerAutoLoader.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeakerAutoLoader_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.get_Phrases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::get_Phrases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e64b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                        {"get_Phrases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.get_Clips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::get_Clips)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e64b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                        {"get_Clips", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.get_IsLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::get_IsLoaded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e64b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                        {"get_IsLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e64ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.LoadClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::LoadClips)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x9e64bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.GetAllPhrases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::GetAllPhrases)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9e64e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.AddUniquePhrases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)(::System::Collections::Generic::List_1<::StringW>*, ::ArrayW<::StringW>)>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::AddUniquePhrases)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9e64ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                        {"AddUniquePhrases", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.SetupSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::SetupSpeaker)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e6511c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.OnClipReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::OnClipReady)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e65238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e65248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.UnloadClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::UnloadClips)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e65254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.GetVoiceIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::GetVoiceIds)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e65308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader.GetVoicePhrases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)(::StringW)>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::GetVoicePhrases)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e65430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::*)()>(&::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6543c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get_Speaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Speaker;
}
constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get_Speaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Speaker;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_set_Speaker(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Speaker = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get_PhraseFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PhraseFile;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get_PhraseFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PhraseFile;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_set_PhraseFile(::UnityW<::UnityEngine::TextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PhraseFile = value;
}
constexpr ::ArrayW<::StringW>& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get__phrases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____phrases;
}
constexpr ::ArrayW<::StringW> const& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get__phrases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____phrases;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_set__phrases(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____phrases = value;
}
constexpr bool& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get_LoadManually()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadManually;
}
constexpr bool const& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get_LoadManually() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LoadManually;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_set_LoadManually(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LoadManually = value;
}
constexpr ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*>& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get__clips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clips;
}
constexpr ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> const& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get__clips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clips;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_set__clips(::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clips = value;
}
constexpr int32_t& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get__clipsLoading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipsLoading;
}
constexpr int32_t const& Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_get__clipsLoading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipsLoading;
}
constexpr void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::__cordl_internal_set__clipsLoading(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipsLoading = value;
}
inline ::ArrayW<::StringW> Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::get_Phrases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                        {"get_Phrases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::get_Clips()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                        {"get_Clips", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*>>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::get_IsLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                        {"get_IsLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::LoadClips()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::GetAllPhrases()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::AddUniquePhrases(::System::Collections::Generic::List_1<::StringW>*  list, ::ArrayW<::StringW>  newPhrases)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                        {"AddUniquePhrases", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, newPhrases);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::SetupSpeaker()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::OnClipReady(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, error);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::UnloadClips()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::GetVoiceIds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::GetVoicePhrases(::StringW  voiceId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method, voiceId);
}
inline void Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader* Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerAutoLoader::TTSSpeakerAutoLoader()   {
}
