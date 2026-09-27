#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringBuffer_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonNameTable_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReaderException_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__DoReadAsync_d__3_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__EatWhitespaceAsync_d__17_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__MatchAndSetAsync_d__21_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__MatchValueAsync_d__19_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseCommentAsync_d__16_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseConstructorAsync_d__25_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseNumberAsync_d__29_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseNumberNaNAsync_d__26_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseNumberNegativeInfinityAsync_d__28_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseNumberPositiveInfinityAsync_d__27_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseObjectAsync_d__15_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParsePostValueAsync_d__4_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParsePropertyAsync_d__31_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseStringAsync_d__18_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseUnicodeAsync_d__12_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseUnquotedPropertyAsync_d__33_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ParseValueAsync_d__8_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ProcessCarriageReturnAsync_d__11_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ReadCharsAsync_d__14_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ReadDataAsync_d__7_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ReadFromFinishedAsync_d__5_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ReadNumberIntoBufferAsync_d__32_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader__ReadStringIntoBufferAsync_d__9_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa378c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::DoReadAsync)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa378c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"DoReadAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.DoReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::Tasks::Task_1<bool>*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::DoReadAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa37924c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"DoReadAsync", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParsePostValueAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(bool, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParsePostValueAsync)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa379114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParsePostValueAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadFromFinishedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadFromFinishedAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa379388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadFromFinishedAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::Newtonsoft::Json::JsonTextReader::*)(bool, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadDataAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa3794a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadDataAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadDataAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa3794b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadDataAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseValueAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseValueAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa378ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseValueAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadStringIntoBufferAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(char16_t, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadStringIntoBufferAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa3795f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadStringIntoBufferAsync", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessCarriageReturnAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(bool, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa3796f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ProcessCarriageReturnAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessCarriageReturnAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::Tasks::Task_1<bool>*)>(&::Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa379920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ProcessCarriageReturnAsync", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUnicodeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<char16_t>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseUnicodeAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa379a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUnicodeAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EnsureCharsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::EnsureCharsAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa3797f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EnsureCharsAsync", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadCharsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadCharsAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa379b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadCharsAsync", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseObjectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseObjectAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa378ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseObjectAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseCommentAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(bool, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseCommentAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa379c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseCommentAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EatWhitespaceAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::EatWhitespaceAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa379d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EatWhitespaceAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(char16_t, ::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseStringAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa379e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseStringAsync", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValueAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::StringW, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::MatchValueAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa379f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchValueAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValueWithTrailingSeparatorAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::StringW, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparatorAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa37a0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchValueWithTrailingSeparatorAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchAndSetAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::StringW, ::Newtonsoft::Json::JsonToken, ::System::Object*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::MatchAndSetAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa37a1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchAndSetAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseTrueAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseTrueAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa37a328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseTrueAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseFalseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseFalseAsync)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa37a3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseFalseAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNullAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseNullAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa37a45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNullAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseConstructorAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseConstructorAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa37a4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseConstructorAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNaNAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNaNAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa37a5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNaNAsync", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinityAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinityAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa37a700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberPositiveInfinityAsync", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinityAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Object*>* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinityAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa37a830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNegativeInfinityAsync", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa37a960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberAsync", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUndefinedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseUndefinedAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa37aa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUndefinedAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParsePropertyAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParsePropertyAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa37aad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParsePropertyAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberIntoBufferAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ReadNumberIntoBufferAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa37abf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadNumberIntoBufferAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUnquotedPropertyAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::JsonTextReader::*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::JsonTextReader::ParseUnquotedPropertyAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa37acf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUnquotedPropertyAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::System::IO::TextReader*)>(&::Newtonsoft::Json::JsonTextReader::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa36fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.get_PropertyNameTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonNameTable* (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::get_PropertyNameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa37ade8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"get_PropertyNameTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.set_PropertyNameTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::JsonNameTable*)>(&::Newtonsoft::Json::JsonTextReader::set_PropertyNameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa37adf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"set_PropertyNameTable", {}, {::i2c::type_of<::Newtonsoft::Json::JsonNameTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EnsureBufferNotEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::EnsureBufferNotEmpty)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa37adf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EnsureBufferNotEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.SetNewLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::SetNewLine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3798c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"SetNewLine", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.OnNewLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(int32_t)>(&::Newtonsoft::Json::JsonTextReader::OnNewLine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa37ae4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"OnNewLine", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t, ::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa37ae5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseString", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseReadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t, ::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseReadString)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xa37b3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseReadString", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.BlockCopyChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<char16_t>, int32_t, ::ArrayW<char16_t>, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::BlockCopyChars)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa37b76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"BlockCopyChars", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ShiftBufferIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ShiftBufferIfNeeded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa37aea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ShiftBufferIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ReadData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa37b780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.PrepareBufferForReadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t)>(&::Newtonsoft::Json::JsonTextReader::PrepareBufferForReadData)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa37b818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"PrepareBufferForReadData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t)>(&::Newtonsoft::Json::JsonTextReader::ReadData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa37b788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EnsureChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool)>(&::Newtonsoft::Json::JsonTextReader::EnsureChars)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa37b9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EnsureChars", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool)>(&::Newtonsoft::Json::JsonTextReader::ReadChars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa37b9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadChars", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::Read)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa37ba64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsInt32)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa37c8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsDateTime)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa37cd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsString)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa37d338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsBytes)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xa37d36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ReadStringValue)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0xa37ce38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadStringValue", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.FinishReadQuotedStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::FinishReadQuotedStringValue)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa37dbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"FinishReadQuotedStringValue", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.CreateUnexpectedCharacterException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonReaderException* (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&::Newtonsoft::Json::JsonTextReader::CreateUnexpectedCharacterException)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa37d980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"CreateUnexpectedCharacterException", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsBoolean)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0xa37e0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessValueComma
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ProcessValueComma)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa37d91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ProcessValueComma", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ReadNumberValue)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0xa37c98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadNumberValue", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.FinishReadQuotedNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::FinishReadQuotedNumber)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa37e654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"FinishReadQuotedNumber", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffset)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa37e7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Decimal> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsDecimal)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa37e8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadAsDouble)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa37e99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.HandleNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::HandleNull)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa37d84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"HandleNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadFinished)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa37daa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNullChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadNullChar)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa37d7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadNullChar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EnsureBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::EnsureBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa378e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EnsureBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadStringIntoBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&::Newtonsoft::Json::JsonTextReader::ReadStringIntoBuffer)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0xa37af64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadStringIntoBuffer", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.FinishReadStringIntoBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(int32_t, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::FinishReadStringIntoBuffer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa37eb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"FinishReadStringIntoBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.WriteCharToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::WriteCharToBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa37eb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"WriteCharToBuffer", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ConvertUnicode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ConvertUnicode)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa37ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ConvertUnicode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUnicode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseUnicode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa37eb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUnicode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberIntoBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ReadNumberIntoBuffer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa37ed94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadNumberIntoBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadNumberCharIntoBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::ReadNumberCharIntoBuffer)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa37ee18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadNumberCharIntoBuffer", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ClearRecentString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ClearRecentString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa37ef7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ClearRecentString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParsePostValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ParsePostValue)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xa37c298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParsePostValue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseObject)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa37c128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseProperty)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa37ef88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseProperty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ValidIdentifierChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&::Newtonsoft::Json::JsonTextReader::ValidIdentifierChar)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa37f1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ValidIdentifierChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUnquotedProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseUnquotedProperty)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa37f204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUnquotedProperty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadUnquotedPropertyReportIfDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::ReadUnquotedPropertyReportIfDone)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa37f2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadUnquotedPropertyReportIfDone", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseValue)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0xa37bc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessLineFeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ProcessLineFeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa37da84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ProcessLineFeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ProcessCarriageReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ProcessCarriageReturn)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa37da3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ProcessCarriageReturn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EatWhitespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::EatWhitespace)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa37c540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EatWhitespace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseConstructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseConstructor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xa37f5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseConstructor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseNumber)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa37dea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumber", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseReadNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, char16_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::ParseReadNumber)> {
  constexpr static std::size_t size = 0x1070;
  constexpr static std::size_t addrs = 0xa37f9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseReadNumber", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ThrowReaderError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonReaderException* (::Newtonsoft::Json::JsonTextReader::*)(::StringW, ::System::Exception*)>(&::Newtonsoft::Json::JsonTextReader::ThrowReaderError)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa380a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ThrowReaderError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.BigIntegerParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::System::Globalization::CultureInfo*)>(&::Newtonsoft::Json::JsonTextReader::BigIntegerParse)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa380a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"BigIntegerParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(&::Newtonsoft::Json::JsonTextReader::ParseComment)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xa37c634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseComment", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.EndComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::EndComment)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa380b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EndComment", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(::StringW)>(&::Newtonsoft::Json::JsonTextReader::MatchValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa380b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(bool, ::StringW)>(&::Newtonsoft::Json::JsonTextReader::MatchValue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa380ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchValue", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.MatchValueWithTrailingSeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(::StringW)>(&::Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa37df10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchValueWithTrailingSeparator", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.IsSeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&::Newtonsoft::Json::JsonTextReader::IsSeparator)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa380c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"IsSeparator", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseTrue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseTrue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa37f424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseTrue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseNull)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa37ea60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseUndefined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseUndefined)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa37f8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUndefined", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseFalse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::ParseFalse)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa37f4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseFalse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa37de28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNegativeInfinity", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, bool)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa380dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNegativeInfinity", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa37dfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberPositiveInfinity", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, bool)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa380f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberPositiveInfinity", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNaN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNaN)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa37e034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNaN", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNumberNaN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType, bool)>(&::Newtonsoft::Json::JsonTextReader::ParseNumberNaN)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa381050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNaN", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::Close)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa381198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.HasLineInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::HasLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa381218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"HasLineInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.get_LineNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::get_LineNumber)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa381220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"get_LineNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.get_LinePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)()>(&::Newtonsoft::Json::JsonTextReader::get_LinePosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa381268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"get_LinePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__safeAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeAsync;
}
constexpr bool const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__safeAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeAsync;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__safeAsync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____safeAsync = value;
}
constexpr ::System::IO::TextReader*& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reader;
}
constexpr ::System::IO::TextReader* const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reader;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__reader(::System::IO::TextReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reader = value;
}
constexpr ::ArrayW<char16_t>& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__chars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chars;
}
constexpr ::ArrayW<char16_t> const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__chars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chars;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__chars(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chars = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charsUsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charsUsed;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charsUsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charsUsed;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__charsUsed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charsUsed = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charPos;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charPos;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__charPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charPos = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineStartPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineStartPos;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineStartPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineStartPos;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__lineStartPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineStartPos = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineNumber;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineNumber;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__lineNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineNumber = value;
}
constexpr bool& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__isEndOfFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEndOfFile;
}
constexpr bool const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__isEndOfFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEndOfFile;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__isEndOfFile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEndOfFile = value;
}
constexpr ::Newtonsoft::Json::Utilities::StringBuffer& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringBuffer;
}
constexpr ::Newtonsoft::Json::Utilities::StringBuffer const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringBuffer;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__stringBuffer(::Newtonsoft::Json::Utilities::StringBuffer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stringBuffer = value;
}
constexpr ::Newtonsoft::Json::Utilities::StringReference& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringReference;
}
constexpr ::Newtonsoft::Json::Utilities::StringReference const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringReference;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__stringReference(::Newtonsoft::Json::Utilities::StringReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stringReference = value;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__arrayPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayPool;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>* const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__arrayPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayPool;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arrayPool = value;
}
constexpr ::Newtonsoft::Json::JsonNameTable*& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__PropertyNameTable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyNameTable_k__BackingField;
}
constexpr ::Newtonsoft::Json::JsonNameTable* const& Newtonsoft::Json::JsonTextReader::__cordl_internal_get__PropertyNameTable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyNameTable_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__PropertyNameTable_k__BackingField(::Newtonsoft::Json::JsonNameTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PropertyNameTable_k__BackingField = value;
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ReadAsync(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::DoReadAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"DoReadAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::DoReadAsync(::System::Threading::Tasks::Task_1<bool>*  task, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"DoReadAsync", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, task, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ParsePostValueAsync(bool  ignoreComments, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParsePostValueAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, ignoreComments, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ReadFromFinishedAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadFromFinishedAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Newtonsoft::Json::JsonTextReader::ReadDataAsync(bool  append, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadDataAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, append, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Newtonsoft::Json::JsonTextReader::ReadDataAsync(bool  append, int32_t  charsRequired, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadDataAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, append, charsRequired, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ParseValueAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseValueAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ReadStringIntoBufferAsync(char16_t  quote, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadStringIntoBufferAsync", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, quote, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync(bool  append, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ProcessCarriageReturnAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, append, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync(::System::Threading::Tasks::Task_1<bool>*  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ProcessCarriageReturnAsync", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, task);
}
inline ::System::Threading::Tasks::Task_1<char16_t>* Newtonsoft::Json::JsonTextReader::ParseUnicodeAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUnicodeAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<char16_t>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::EnsureCharsAsync(int32_t  relativePosition, bool  append, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EnsureCharsAsync", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, relativePosition, append, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ReadCharsAsync(int32_t  relativePosition, bool  append, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadCharsAsync", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, relativePosition, append, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ParseObjectAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseObjectAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseCommentAsync(bool  setToken, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseCommentAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, setToken, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::EatWhitespaceAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EatWhitespaceAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseStringAsync(char16_t  quote, ::Newtonsoft::Json::ReadType  readType, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseStringAsync", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, quote, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::MatchValueAsync(::StringW  value, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchValueAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparatorAsync(::StringW  value, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchValueWithTrailingSeparatorAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::MatchAndSetAsync(::StringW  value, ::Newtonsoft::Json::JsonToken  newToken, /* [Nullable(2)] */ ::System::Object*  tokenValue, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchAndSetAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonToken>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value, newToken, tokenValue, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseTrueAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseTrueAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseFalseAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseFalseAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseNullAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNullAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseConstructorAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseConstructorAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* Newtonsoft::Json::JsonTextReader::ParseNumberNaNAsync(::Newtonsoft::Json::ReadType  readType, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNaNAsync", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinityAsync(::Newtonsoft::Json::ReadType  readType, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberPositiveInfinityAsync", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object*>* Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinityAsync(::Newtonsoft::Json::ReadType  readType, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNegativeInfinityAsync", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Object*>*>(this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseNumberAsync(::Newtonsoft::Json::ReadType  readType, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberAsync", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseUndefinedAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUndefinedAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::JsonTextReader::ParsePropertyAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParsePropertyAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ReadNumberIntoBufferAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadNumberIntoBufferAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::JsonTextReader::ParseUnquotedPropertyAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUnquotedPropertyAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline void Newtonsoft::Json::JsonTextReader::_ctor(::System::IO::TextReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::Newtonsoft::Json::JsonNameTable* Newtonsoft::Json::JsonTextReader::get_PropertyNameTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"get_PropertyNameTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonNameTable*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::set_PropertyNameTable(::Newtonsoft::Json::JsonNameTable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"set_PropertyNameTable", {}, {::i2c::type_of<::Newtonsoft::Json::JsonNameTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextReader::EnsureBufferNotEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EnsureBufferNotEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::SetNewLine(bool  hasNextChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"SetNewLine", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasNextChar);
}
inline void Newtonsoft::Json::JsonTextReader::OnNewLine(int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"OnNewLine", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void Newtonsoft::Json::JsonTextReader::ParseString(char16_t  quote, ::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseString", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quote, readType);
}
inline void Newtonsoft::Json::JsonTextReader::ParseReadString(char16_t  quote, ::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseReadString", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quote, readType);
}
inline void Newtonsoft::Json::JsonTextReader::BlockCopyChars(::ArrayW<char16_t>  src, int32_t  srcOffset, ::ArrayW<char16_t>  dst, int32_t  dstOffset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"BlockCopyChars", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcOffset, dst, dstOffset, count);
}
inline void Newtonsoft::Json::JsonTextReader::ShiftBufferIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ShiftBufferIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::ReadData(bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, append);
}
inline void Newtonsoft::Json::JsonTextReader::PrepareBufferForReadData(bool  append, int32_t  charsRequired)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"PrepareBufferForReadData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, append, charsRequired);
}
inline int32_t Newtonsoft::Json::JsonTextReader::ReadData(bool  append, int32_t  charsRequired)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, append, charsRequired);
}
inline bool Newtonsoft::Json::JsonTextReader::EnsureChars(int32_t  relativePosition, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EnsureChars", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, relativePosition, append);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadChars(int32_t  relativePosition, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadChars", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, relativePosition, append);
}
inline bool Newtonsoft::Json::JsonTextReader::Read()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonTextReader::ReadAsInt32()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::JsonTextReader::ReadAsDateTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonTextReader::ReadAsString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Newtonsoft::Json::JsonTextReader::ReadAsBytes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ReadStringValue(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadStringValue", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::FinishReadQuotedStringValue(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"FinishReadQuotedStringValue", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::Newtonsoft::Json::JsonReaderException* Newtonsoft::Json::JsonTextReader::CreateUnexpectedCharacterException(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"CreateUnexpectedCharacterException", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReaderException*>(this, ___internal_method, c);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::JsonTextReader::ReadAsBoolean()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ProcessValueComma()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ProcessValueComma", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ReadNumberValue(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadNumberValue", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::FinishReadQuotedNumber(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"FinishReadQuotedNumber", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::JsonTextReader::ReadAsDecimal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>>(this, ___internal_method);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::JsonTextReader::ReadAsDouble()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::HandleNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"HandleNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ReadFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadNullChar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadNullChar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::EnsureBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EnsureBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ReadStringIntoBuffer(char16_t  quote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadStringIntoBuffer", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quote);
}
inline void Newtonsoft::Json::JsonTextReader::FinishReadStringIntoBuffer(int32_t  charPos, int32_t  initialPosition, int32_t  lastWritePosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"FinishReadStringIntoBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, charPos, initialPosition, lastWritePosition);
}
inline void Newtonsoft::Json::JsonTextReader::WriteCharToBuffer(char16_t  writeChar, int32_t  lastWritePosition, int32_t  writeToPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"WriteCharToBuffer", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writeChar, lastWritePosition, writeToPosition);
}
inline char16_t Newtonsoft::Json::JsonTextReader::ConvertUnicode(bool  enoughChars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ConvertUnicode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, enoughChars);
}
inline char16_t Newtonsoft::Json::JsonTextReader::ParseUnicode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUnicode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ReadNumberIntoBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadNumberIntoBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadNumberCharIntoBuffer(char16_t  currentChar, int32_t  charPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadNumberCharIntoBuffer", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentChar, charPos);
}
inline void Newtonsoft::Json::JsonTextReader::ClearRecentString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ClearRecentString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ParsePostValue(bool  ignoreComments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParsePostValue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ignoreComments);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ValidIdentifierChar(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ValidIdentifierChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextReader::ParseUnquotedProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUnquotedProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadUnquotedPropertyReportIfDone(char16_t  currentChar, int32_t  initialPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ReadUnquotedPropertyReportIfDone", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentChar, initialPosition);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ProcessLineFeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ProcessLineFeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ProcessCarriageReturn(bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ProcessCarriageReturn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, append);
}
inline void Newtonsoft::Json::JsonTextReader::EatWhitespace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EatWhitespace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseConstructor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseConstructor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseNumber(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumber", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, readType);
}
inline void Newtonsoft::Json::JsonTextReader::ParseReadNumber(::Newtonsoft::Json::ReadType  readType, char16_t  firstChar, int32_t  initialPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseReadNumber", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, readType, firstChar, initialPosition);
}
inline ::Newtonsoft::Json::JsonReaderException* Newtonsoft::Json::JsonTextReader::ThrowReaderError(::StringW  message, /* [Nullable(2)] */ ::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ThrowReaderError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReaderException*>(this, ___internal_method, message, ex);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::BigIntegerParse(::StringW  number, ::System::Globalization::CultureInfo*  culture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"BigIntegerParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, number, culture);
}
inline void Newtonsoft::Json::JsonTextReader::ParseComment(bool  setToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseComment", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setToken);
}
inline void Newtonsoft::Json::JsonTextReader::EndComment(bool  setToken, int32_t  initialPosition, int32_t  endPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"EndComment", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setToken, initialPosition, endPosition);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValue(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValue(bool  enoughChars, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchValue", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, enoughChars, value);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparator(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"MatchValueWithTrailingSeparator", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonTextReader::IsSeparator(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"IsSeparator", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Newtonsoft::Json::JsonTextReader::ParseTrue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseTrue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseUndefined()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseUndefined", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseFalse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseFalse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNegativeInfinity", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType  readType, bool  matched)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNegativeInfinity", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType, matched);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberPositiveInfinity", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType  readType, bool  matched)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberPositiveInfinity", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType, matched);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNaN(::Newtonsoft::Json::ReadType  readType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNaN", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType);
}
inline ::System::Object* Newtonsoft::Json::JsonTextReader::ParseNumberNaN(::Newtonsoft::Json::ReadType  readType, bool  matched)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"ParseNumberNaN", {}, {::i2c::type_of<::Newtonsoft::Json::ReadType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, readType, matched);
}
inline void Newtonsoft::Json::JsonTextReader::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::HasLineInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"HasLineInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::get_LineNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"get_LineNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::get_LinePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonTextReader*>(),
                        {"get_LinePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonTextReader* Newtonsoft::Json::JsonTextReader::New_ctor(::System::IO::TextReader*  reader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonTextReader*>(reader));
}
/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr  Newtonsoft::Json::JsonTextReader::operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept {
return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* Newtonsoft::Json::JsonTextReader::i___Newtonsoft__Json__IJsonLineInfo() noexcept {
return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader::JsonTextReader()   {
}
