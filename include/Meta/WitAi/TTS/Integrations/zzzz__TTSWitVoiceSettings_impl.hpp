#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSWitVoiceSettings.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSVoiceSettings_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWitVoiceSettings_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseClass_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings.get_UniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::get_UniqueId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e5b3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings.RefreshUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::RefreshUniqueId)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x9e5b41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {"RefreshUniqueId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings.get_EncodedValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::get_EncodedValues)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e5b5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings.RefreshEncodedValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::RefreshEncodedValues)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9e5b650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {"RefreshEncodedValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings.CanDecode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::CanDecode)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e56e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {"CanDecode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings.DeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::*)(::Meta::WitAi::Json::WitResponseClass*)>(&::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::DeserializeObject)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9e5b87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings.DecodeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::*)(::Meta::WitAi::Json::WitResponseClass*, ::StringW, ::StringW)>(&::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::DecodeString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9e5b9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {"DecodeString", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseClass*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings.DecodeInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::*)(::Meta::WitAi::Json::WitResponseClass*, ::StringW, int32_t, int32_t, int32_t)>(&::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::DecodeInt)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e5ba44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {"DecodeInt", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseClass*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::*)()>(&::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9e56f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get_voice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voice;
}
constexpr ::StringW const& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get_voice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voice;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_set_voice(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voice = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get_style()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___style;
}
constexpr ::StringW const& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get_style() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___style;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_set_style(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___style = value;
}
constexpr int32_t& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr int32_t const& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_set_speed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr int32_t& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get_pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr int32_t const& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get_pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_set_pitch(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitch = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get__uniqueId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueId;
}
constexpr ::StringW const& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get__uniqueId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueId;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_set__uniqueId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uniqueId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get__encoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoded;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_get__encoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoded;
}
constexpr void Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::__cordl_internal_set__encoded(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoded = value;
}
inline ::StringW Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::get_UniqueId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::RefreshUniqueId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {"RefreshUniqueId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::get_EncodedValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::RefreshEncodedValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {"RefreshEncodedValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::CanDecode(::Meta::WitAi::Json::WitResponseNode*  responseNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {"CanDecode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, responseNode);
}
inline bool Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::DeserializeObject(::Meta::WitAi::Json::WitResponseClass*  jsonObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jsonObject);
}
inline ::StringW Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::DecodeString(::Meta::WitAi::Json::WitResponseClass*  responseClass, ::StringW  id, ::StringW  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {"DecodeString", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseClass*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, responseClass, id, defaultValue);
}
inline int32_t Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::DecodeInt(::Meta::WitAi::Json::WitResponseClass*  responseClass, ::StringW  id, int32_t  defaultValue, int32_t  minValue, int32_t  maxValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {"DecodeInt", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseClass*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, responseClass, id, defaultValue, minValue, maxValue);
}
inline void Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings* Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings::TTSWitVoiceSettings()   {
}
