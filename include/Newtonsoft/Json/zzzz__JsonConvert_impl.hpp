#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonConvert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConvert_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.get_DefaultSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* (*)()>(&::Newtonsoft::Json::JsonConvert::get_DefaultSettings)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa36ea68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"get_DefaultSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa36eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa36eb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(float_t, ::Newtonsoft::Json::FloatFormatHandling, char16_t, bool)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa36ec14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.EnsureFloatFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t, ::StringW, ::Newtonsoft::Json::FloatFormatHandling, char16_t, bool)>(&::Newtonsoft::Json::JsonConvert::EnsureFloatFormat)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa36edc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"EnsureFloatFormat", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t, ::Newtonsoft::Json::FloatFormatHandling, char16_t, bool)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa36eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.EnsureDecimalPlace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t, ::StringW)>(&::Newtonsoft::Json::JsonConvert::EnsureDecimalPlace)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa36ed04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"EnsureDecimalPlace", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.EnsureDecimalPlace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::JsonConvert::EnsureDecimalPlace)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa36efcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"EnsureDecimalPlace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Decimal)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa36f040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa36ebbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa36f134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t, ::Newtonsoft::Json::StringEscapeHandling)>(&::Newtonsoft::Json::JsonConvert::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa36f19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa36f280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::Newtonsoft::Json::Formatting)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa36f358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa36f430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa36f2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa36f3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonConvert::SerializeObject)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa36f720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.SerializeObjectInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::JsonConvert::SerializeObjectInternal)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xa36f4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObjectInternal", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConvert.DeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonConvert::DeserializeObject)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa36f7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"DeserializeObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonConvert::setStaticF__DefaultSettings_k__BackingField(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*, "<DefaultSettings>k__BackingField", ::Newtonsoft::Json::JsonConvert*>(std::forward<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*>(value));
}
inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* Newtonsoft::Json::JsonConvert::getStaticF__DefaultSettings_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*, "<DefaultSettings>k__BackingField", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_True(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "True", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_True()  {
return ::cordl_internals::getStaticField<::StringW, "True", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_False(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "False", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_False()  {
return ::cordl_internals::getStaticField<::StringW, "False", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_Null(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Null", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::StringW, "Null", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_Undefined(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Undefined", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_Undefined()  {
return ::cordl_internals::getStaticField<::StringW, "Undefined", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_PositiveInfinity(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "PositiveInfinity", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_PositiveInfinity()  {
return ::cordl_internals::getStaticField<::StringW, "PositiveInfinity", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_NegativeInfinity(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "NegativeInfinity", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_NegativeInfinity()  {
return ::cordl_internals::getStaticField<::StringW, "NegativeInfinity", ::Newtonsoft::Json::JsonConvert*>();
}
inline void Newtonsoft::Json::JsonConvert::setStaticF_NaN(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "NaN", ::Newtonsoft::Json::JsonConvert*>(std::forward<::StringW>(value));
}
inline ::StringW Newtonsoft::Json::JsonConvert::getStaticF_NaN()  {
return ::cordl_internals::getStaticField<::StringW, "NaN", ::Newtonsoft::Json::JsonConvert*>();
}
inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* Newtonsoft::Json::JsonConvert::get_DefaultSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"get_DefaultSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*>(nullptr, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(float_t  value, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, floatFormatHandling, quoteChar, nullable);
}
inline ::StringW Newtonsoft::Json::JsonConvert::EnsureFloatFormat(double_t  value, ::StringW  text, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"EnsureFloatFormat", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, text, floatFormatHandling, quoteChar, nullable);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(double_t  value, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Newtonsoft::Json::FloatFormatHandling>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, floatFormatHandling, quoteChar, nullable);
}
inline ::StringW Newtonsoft::Json::JsonConvert::EnsureDecimalPlace(double_t  value, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"EnsureDecimalPlace", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, text);
}
inline ::StringW Newtonsoft::Json::JsonConvert::EnsureDecimalPlace(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"EnsureDecimalPlace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(/* [Nullable(2)] */ ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(/* [Nullable(2)] */ ::StringW  value, char16_t  delimiter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, delimiter);
}
inline ::StringW Newtonsoft::Json::JsonConvert::ToString(/* [Nullable(2)] */ ::StringW  value, char16_t  delimiter, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::StringEscapeHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, delimiter, stringEscapeHandling);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(/* [Nullable(2)] */ ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(/* [Nullable(2)] */ ::System::Object*  value, ::Newtonsoft::Json::Formatting  formatting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, formatting);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object*  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, settings);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, type, settings);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object*  value, ::Newtonsoft::Json::Formatting  formatting, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, formatting, settings);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObject(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::Formatting  formatting, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Formatting>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, type, formatting, settings);
}
inline ::StringW Newtonsoft::Json::JsonConvert::SerializeObjectInternal(/* [Nullable(2)] */ ::System::Object*  value, /* [Nullable(2)] */ ::System::Type*  type, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"SerializeObjectInternal", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, type, jsonSerializer);
}
template<typename T>
inline T Newtonsoft::Json::JsonConvert::DeserializeObject(/* [Nullable(1)] */ ::StringW  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                    {"DeserializeObject", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, value);
}
template<typename T>
inline T Newtonsoft::Json::JsonConvert::DeserializeObject(/* [Nullable(1)] */ ::StringW  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                    {"DeserializeObject", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, value, settings);
}
inline ::System::Object* Newtonsoft::Json::JsonConvert::DeserializeObject(/* [Nullable(1)] */ ::StringW  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonConvert*>(),
                        {"DeserializeObject", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, type, settings);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonConvert::JsonConvert()   {
}
