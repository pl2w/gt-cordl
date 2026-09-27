#pragma once
// IWYU pragma private; include "Ionic/Zlib/SharedUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Ionic/Zlib/zzzz__SharedUtils_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::SharedUtils.URShift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Ionic::Zlib::SharedUtils::URShift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79af7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::SharedUtils*>(),
                        {"URShift", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::SharedUtils.ReadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::TextReader*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::SharedUtils::ReadInput)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa79af84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::SharedUtils*>(),
                        {"ReadInput", {}, {::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::SharedUtils.ToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Ionic::Zlib::SharedUtils::ToByteArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa79b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::SharedUtils*>(),
                        {"ToByteArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::SharedUtils.ToCharArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::SharedUtils::ToCharArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa79b0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::SharedUtils*>(),
                        {"ToCharArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::SharedUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::SharedUtils::*)()>(&::Ionic::Zlib::SharedUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79b0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::SharedUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Ionic::Zlib::SharedUtils::URShift(int32_t  number, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::SharedUtils*>(),
                        {"URShift", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, number, bits);
}
inline int32_t Ionic::Zlib::SharedUtils::ReadInput(::System::IO::TextReader*  sourceTextReader, ::ArrayW<uint8_t>  target, int32_t  start, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::SharedUtils*>(),
                        {"ReadInput", {}, {::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sourceTextReader, target, start, count);
}
inline ::ArrayW<uint8_t> Ionic::Zlib::SharedUtils::ToByteArray(::StringW  sourceString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::SharedUtils*>(),
                        {"ToByteArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, sourceString);
}
inline ::ArrayW<char16_t> Ionic::Zlib::SharedUtils::ToCharArray(::ArrayW<uint8_t>  byteArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::SharedUtils*>(),
                        {"ToCharArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, byteArray);
}
inline void Ionic::Zlib::SharedUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::SharedUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ionic::Zlib::SharedUtils* Ionic::Zlib::SharedUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::SharedUtils*>());
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::SharedUtils::SharedUtils()   {
}
