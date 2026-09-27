#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSVoiceSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSVoiceSettings_def.hpp"
#include "Meta/WitAi/Json/zzzz__IJsonDeserializer_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseClass_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSVoiceSettings.get_UniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Data::TTSVoiceSettings::*)()>(&::Meta::WitAi::TTS::Data::TTSVoiceSettings::get_UniqueId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSVoiceSettings.get_EncodedValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::WitAi::TTS::Data::TTSVoiceSettings::*)()>(&::Meta::WitAi::TTS::Data::TTSVoiceSettings::get_EncodedValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSVoiceSettings.DeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::Data::TTSVoiceSettings::*)(::Meta::WitAi::Json::WitResponseClass*)>(&::Meta::WitAi::TTS::Data::TTSVoiceSettings::DeserializeObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSVoiceSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSVoiceSettings::*)()>(&::Meta::WitAi::TTS::Data::TTSVoiceSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e69728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::TTS::Data::TTSVoiceSettings::__cordl_internal_get_SettingsId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SettingsId;
}
constexpr ::StringW const& Meta::WitAi::TTS::Data::TTSVoiceSettings::__cordl_internal_get_SettingsId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SettingsId;
}
constexpr void Meta::WitAi::TTS::Data::TTSVoiceSettings::__cordl_internal_set_SettingsId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SettingsId = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Data::TTSVoiceSettings::__cordl_internal_get_PrependedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrependedText;
}
constexpr ::StringW const& Meta::WitAi::TTS::Data::TTSVoiceSettings::__cordl_internal_get_PrependedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrependedText;
}
constexpr void Meta::WitAi::TTS::Data::TTSVoiceSettings::__cordl_internal_set_PrependedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrependedText = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Data::TTSVoiceSettings::__cordl_internal_get_AppendedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppendedText;
}
constexpr ::StringW const& Meta::WitAi::TTS::Data::TTSVoiceSettings::__cordl_internal_get_AppendedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppendedText;
}
constexpr void Meta::WitAi::TTS::Data::TTSVoiceSettings::__cordl_internal_set_AppendedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppendedText = value;
}
inline ::StringW Meta::WitAi::TTS::Data::TTSVoiceSettings::get_UniqueId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::TTS::Data::TTSVoiceSettings::get_EncodedValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::Data::TTSVoiceSettings::DeserializeObject(::Meta::WitAi::Json::WitResponseClass*  jsonObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jsonObject);
}
inline void Meta::WitAi::TTS::Data::TTSVoiceSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSVoiceSettings* Meta::WitAi::TTS::Data::TTSVoiceSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>());
}
/// @brief Convert operator to "::Meta::WitAi::Json::IJsonDeserializer"
constexpr  Meta::WitAi::TTS::Data::TTSVoiceSettings::operator ::Meta::WitAi::Json::IJsonDeserializer*() noexcept {
return static_cast<::Meta::WitAi::Json::IJsonDeserializer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Json::IJsonDeserializer"
constexpr ::Meta::WitAi::Json::IJsonDeserializer* Meta::WitAi::TTS::Data::TTSVoiceSettings::i___Meta__WitAi__Json__IJsonDeserializer() noexcept {
return static_cast<::Meta::WitAi::Json::IJsonDeserializer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings::TTSVoiceSettings()   {
}
