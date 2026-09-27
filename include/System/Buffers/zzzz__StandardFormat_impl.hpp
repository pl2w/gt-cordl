#pragma once
// IWYU pragma private; include "System/Buffers/StandardFormat.hpp"
#include "System/Buffers/zzzz__StandardFormat_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Buffers::StandardFormat.get_Symbol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Buffers::StandardFormat::*)()>(&::System::Buffers::StandardFormat::get_Symbol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa271f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"get_Symbol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.get_Precision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Buffers::StandardFormat::*)()>(&::System::Buffers::StandardFormat::get_Precision)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa271f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"get_Precision", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.get_HasPrecision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Buffers::StandardFormat::*)()>(&::System::Buffers::StandardFormat::get_HasPrecision)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa271f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"get_HasPrecision", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.get_IsDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Buffers::StandardFormat::*)()>(&::System::Buffers::StandardFormat::get_IsDefault)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa271f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"get_IsDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Buffers::StandardFormat::*)(char16_t, uint8_t)>(&::System::Buffers::StandardFormat::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa271fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.op_Implicit___System__Buffers__StandardFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Buffers::StandardFormat (*)(char16_t)>(&::System::Buffers::StandardFormat::op_Implicit___System__Buffers__StandardFormat)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa272008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"op_Implicit", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Buffers::StandardFormat (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::Buffers::StandardFormat::Parse)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa272030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.ParseHelper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::Buffers::StandardFormat>, bool)>(&::System::Buffers::StandardFormat::ParseHelper)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa272050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"ParseHelper", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Buffers::StandardFormat>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Buffers::StandardFormat::*)(::System::Object*)>(&::System::Buffers::StandardFormat::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa2721cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Buffers::StandardFormat>(),
                    {::i2c::class_of<::System::Buffers::StandardFormat>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Buffers::StandardFormat::*)()>(&::System::Buffers::StandardFormat::GetHashCode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa272278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Buffers::StandardFormat>(),
                    {::i2c::class_of<::System::Buffers::StandardFormat>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Buffers::StandardFormat::*)(::System::Buffers::StandardFormat)>(&::System::Buffers::StandardFormat::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa272250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"Equals", {}, {::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Buffers::StandardFormat::*)()>(&::System::Buffers::StandardFormat::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa2722ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Buffers::StandardFormat>(),
                    {::i2c::class_of<::System::Buffers::StandardFormat>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Buffers::StandardFormat::*)(::System::Span_1<char16_t>)>(&::System::Buffers::StandardFormat::Format)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa272398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"Format", {}, {::i2c::type_of<::System::Span_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::StandardFormat.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Buffers::StandardFormat, ::System::Buffers::StandardFormat)>(&::System::Buffers::StandardFormat::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa272494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Buffers::StandardFormat>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
inline char16_t System::Buffers::StandardFormat::get_Symbol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"get_Symbol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method);
}
inline uint8_t System::Buffers::StandardFormat::get_Precision()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"get_Precision", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline bool System::Buffers::StandardFormat::get_HasPrecision()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"get_HasPrecision", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::Buffers::StandardFormat::get_IsDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"get_IsDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::Buffers::StandardFormat::_ctor(char16_t  symbol, uint8_t  precision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {".ctor", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, symbol, precision);
}
inline ::System::Buffers::StandardFormat System::Buffers::StandardFormat::op_Implicit___System__Buffers__StandardFormat(char16_t  symbol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"op_Implicit", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::StandardFormat>(nullptr, ___internal_method, symbol);
}
inline ::System::Buffers::StandardFormat System::Buffers::StandardFormat::Parse(::System::ReadOnlySpan_1<char16_t>  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::StandardFormat>(nullptr, ___internal_method, format);
}
inline bool System::Buffers::StandardFormat::ParseHelper(::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<::System::Buffers::StandardFormat>  standardFormat, bool  throws)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"ParseHelper", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Buffers::StandardFormat>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format, standardFormat, throws);
}
inline bool System::Buffers::StandardFormat::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::StandardFormat>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::Buffers::StandardFormat::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::StandardFormat>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Buffers::StandardFormat::Equals(::System::Buffers::StandardFormat  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"Equals", {}, {::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW System::Buffers::StandardFormat::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::StandardFormat>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t System::Buffers::StandardFormat::Format(::System::Span_1<char16_t>  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"Format", {}, {::i2c::type_of<::System::Span_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, destination);
}
inline bool System::Buffers::StandardFormat::op_Inequality(::System::Buffers::StandardFormat  left, ::System::Buffers::StandardFormat  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::StandardFormat>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Buffers::StandardFormat>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Buffers::StandardFormat>"
constexpr  System::Buffers::StandardFormat::operator ::System::IEquatable_1<::System::Buffers::StandardFormat>*()  {
return static_cast<::System::IEquatable_1<::System::Buffers::StandardFormat>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Buffers::StandardFormat>"
constexpr ::System::IEquatable_1<::System::Buffers::StandardFormat>* System::Buffers::StandardFormat::i___System__IEquatable_1___System__Buffers__StandardFormat_()  {
return static_cast<::System::IEquatable_1<::System::Buffers::StandardFormat>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_format", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_precision", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Buffers::StandardFormat::StandardFormat(uint8_t  _format, uint8_t  _precision) noexcept  {
this->_format = _format;
this->_precision = _precision;
}
// Ctor Parameters []
constexpr ::System::Buffers::StandardFormat::StandardFormat()   {
}
