#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JRaw.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JRaw_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonCloneSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JRaw::*)(::Newtonsoft::Json::Linq::JRaw*, ::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JRaw::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3db054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JRaw*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JRaw::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JRaw::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa3db05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JRaw* (*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Linq::JRaw::Create)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xa3db068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(),
                        {"Create", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JRaw.CloneToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JRaw::*)(::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JRaw::CloneToken)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa3db34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(), 11}
                ));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Linq::JRaw::_ctor(::Newtonsoft::Json::Linq::JRaw*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JRaw*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, settings);
}
inline void Newtonsoft::Json::Linq::JRaw::_ctor(::System::Object*  rawJson)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawJson);
}
inline ::Newtonsoft::Json::Linq::JRaw* Newtonsoft::Json::Linq::JRaw::Create(::Newtonsoft::Json::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(),
                        {"Create", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JRaw*>(nullptr, ___internal_method, reader);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JRaw::CloneToken(/* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JRaw*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, settings);
}
inline ::Newtonsoft::Json::Linq::JRaw* Newtonsoft::Json::Linq::JRaw::New_ctor(::Newtonsoft::Json::Linq::JRaw*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JRaw*>(other, settings));
}
/// @brief [NullableContext(2)]
inline ::Newtonsoft::Json::Linq::JRaw* Newtonsoft::Json::Linq::JRaw::New_ctor(::System::Object*  rawJson)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JRaw*>(rawJson));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JRaw::JRaw()   {
}
