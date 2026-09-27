#pragma once
// IWYU pragma private; include "Modio/Unity/UI/StringFormat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/zzzz__StringFormat_def.hpp"
#include "Modio/Unity/UI/zzzz__StringFormatBytes_def.hpp"
#include "Modio/Unity/UI/zzzz__StringFormatKilo_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::StringFormat.Bytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Unity::UI::StringFormatBytes, int64_t, ::StringW, bool)>(&::Modio::Unity::UI::StringFormat::Bytes)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x9f9dd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::StringFormat*>(),
                        {"Bytes", {}, {::i2c::type_of<::Modio::Unity::UI::StringFormatBytes>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::StringFormat.BytesComma
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::Modio::Unity::UI::StringFormat::BytesComma)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f9dedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::StringFormat*>(),
                        {"BytesComma", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::StringFormat.BytesSuffix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, bool)>(&::Modio::Unity::UI::StringFormat::BytesSuffix)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x9f9df8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::StringFormat*>(),
                        {"BytesSuffix", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::StringFormat.Kilo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Unity::UI::StringFormatKilo, int64_t, ::StringW)>(&::Modio::Unity::UI::StringFormat::Kilo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f9e1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::StringFormat*>(),
                        {"Kilo", {}, {::i2c::type_of<::Modio::Unity::UI::StringFormatKilo>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::StringFormat.Kilo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::Modio::Unity::UI::StringFormat::Kilo)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9f9e2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::StringFormat*>(),
                        {"Kilo", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::StringFormat::setStaticF_BytesSuffixes(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "BytesSuffixes", ::Modio::Unity::UI::StringFormat*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Modio::Unity::UI::StringFormat::getStaticF_BytesSuffixes()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "BytesSuffixes", ::Modio::Unity::UI::StringFormat*>();
}
inline void Modio::Unity::UI::StringFormat::setStaticF_BytesSuffixesLoc(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "BytesSuffixesLoc", ::Modio::Unity::UI::StringFormat*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Modio::Unity::UI::StringFormat::getStaticF_BytesSuffixesLoc()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "BytesSuffixesLoc", ::Modio::Unity::UI::StringFormat*>();
}
inline ::StringW Modio::Unity::UI::StringFormat::Bytes(::Modio::Unity::UI::StringFormatBytes  format, int64_t  bytes, ::StringW  custom, bool  reducePrecision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::StringFormat*>(),
                        {"Bytes", {}, {::i2c::type_of<::Modio::Unity::UI::StringFormatBytes>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, bytes, custom, reducePrecision);
}
inline ::StringW Modio::Unity::UI::StringFormat::BytesComma(int64_t  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::StringFormat*>(),
                        {"BytesComma", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline ::StringW Modio::Unity::UI::StringFormat::BytesSuffix(int64_t  bytes, bool  reducePrecision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::StringFormat*>(),
                        {"BytesSuffix", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes, reducePrecision);
}
inline ::StringW Modio::Unity::UI::StringFormat::Kilo(::Modio::Unity::UI::StringFormatKilo  format, int64_t  value, ::StringW  custom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::StringFormat*>(),
                        {"Kilo", {}, {::i2c::type_of<::Modio::Unity::UI::StringFormatKilo>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, value, custom);
}
inline ::StringW Modio::Unity::UI::StringFormat::Kilo(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::StringFormat*>(),
                        {"Kilo", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::StringFormat::StringFormat()   {
}
