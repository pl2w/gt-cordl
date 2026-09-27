#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf8ValueStringBuilder.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Text/zzzz__Utf8ValueStringBuilder_def.hpp"
#include "Cysharp/Text/zzzz__IResettableBufferWriter_1_def.hpp"
#include "Cysharp/Text/zzzz__Utf8ValueStringBuilder_def.hpp"
#include "System/Buffers/zzzz__IBufferWriter_1_def.hpp"
#include "System/Buffers/zzzz__StandardFormat_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.CreateFormatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::Cysharp::Text::Utf8ValueStringBuilder::CreateFormatter)> {
  constexpr static std::size_t size = 0x16cc;
  constexpr static std::size_t addrs = 0xb9b4ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"CreateFormatter", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint8_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb9b65ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint8_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9b6a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint8_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9b6c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint8_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9b6c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::DateTime)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb9b6d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::DateTime, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9b6f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::DateTime)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9b7100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::DateTime, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9b7174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::DateTimeOffset)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb9b71f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::DateTimeOffset, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb9b73f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::DateTimeOffset)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9b7604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::DateTimeOffset, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb9b7680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::Decimal)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb9b770c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::Decimal, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb9b7910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::Decimal)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9b7b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::Decimal, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb9b7b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(double_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xb9b7c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(double_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9b7e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(double_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9b8024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(double_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb9b8098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int16_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb9b811c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int16_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9b8314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int16_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9b8510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int16_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9b8584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int32_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb9b8600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int32_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9b87f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int32_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9b89f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int32_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9b8a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int64_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb9b8ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int64_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9b8cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int64_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9b8ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int64_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9b8f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int8_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb9b8fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int8_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9b91c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int8_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int8_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9b93bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int8_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9b9430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int8_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(float_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xb9b94ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(float_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9b96ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(float_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9b98a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(float_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb9b991c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::TimeSpan)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb9b99a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::TimeSpan, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9b9b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::TimeSpan)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9b9d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::TimeSpan, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9b9e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint16_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb9b9e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint16_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9ba07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint16_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9ba278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint16_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9ba2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint32_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb9ba368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint32_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9ba560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint32_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9ba75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint32_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9ba7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint64_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb9ba84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint64_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9baa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint64_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9bac40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(uint64_t, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9bacb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::Guid)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb9bad30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::Guid, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb9baf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::Guid)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9bb144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::Guid, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb9bb1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(bool)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb9bb24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(bool, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9bb444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(bool)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9bb640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(bool, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9bb6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Text::Utf8ValueStringBuilder::*)()>(&::Cysharp::Text::Utf8ValueStringBuilder::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9bb840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AsSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::Cysharp::Text::Utf8ValueStringBuilder::*)()>(&::Cysharp::Text::Utf8ValueStringBuilder::AsSpan)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb9bb848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AsSpan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AsMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlyMemory_1<uint8_t> (::Cysharp::Text::Utf8ValueStringBuilder::*)()>(&::Cysharp::Text::Utf8ValueStringBuilder::AsMemory)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9bb8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AsMemory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AsArraySegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Cysharp::Text::Utf8ValueStringBuilder::*)()>(&::Cysharp::Text::Utf8ValueStringBuilder::AsArraySegment)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb9bb964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AsArraySegment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(bool)>(&::Cysharp::Text::Utf8ValueStringBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9bb9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)()>(&::Cysharp::Text::Utf8ValueStringBuilder::Dispose)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb9bbc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)()>(&::Cysharp::Text::Utf8ValueStringBuilder::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9bbd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.TryGrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int32_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::TryGrow)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bbd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"TryGrow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Grow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int32_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Grow)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xb9b67a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)()>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb9bbe0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(char16_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb9bbfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(char16_t, int32_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xb9bc0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(char16_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9bc4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::StringW, int32_t, int32_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb9bc528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::StringW)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb9bc658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::StringW)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb9bc704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::ReadOnlySpan_1<char16_t>)>(&::Cysharp::Text::Utf8ValueStringBuilder::Append)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb9bc7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::ReadOnlySpan_1<char16_t>)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9bc98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.AppendLiteral
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::Cysharp::Text::Utf8ValueStringBuilder::AppendLiteral)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb9bca08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLiteral", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::Buffers::IBufferWriter_1<uint8_t>*)>(&::Cysharp::Text::Utf8ValueStringBuilder::CopyTo)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb9bcb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Buffers::IBufferWriter_1<uint8_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.TryCopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::Cysharp::Text::Utf8ValueStringBuilder::TryCopyTo)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb9bcca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"TryCopyTo", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.WriteToAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::IO::Stream*)>(&::Cysharp::Text::Utf8ValueStringBuilder::WriteToAsync)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb9bcdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"WriteToAsync", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.WriteToAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Cysharp::Text::Utf8ValueStringBuilder::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(&::Cysharp::Text::Utf8ValueStringBuilder::WriteToAsync)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb9bcdd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"WriteToAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Cysharp::Text::Utf8ValueStringBuilder::*)()>(&::Cysharp::Text::Utf8ValueStringBuilder::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb9bce0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.GetMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Memory_1<uint8_t> (::Cysharp::Text::Utf8ValueStringBuilder::*)(int32_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::GetMemory)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb9bceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"GetMemory", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.GetSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<uint8_t> (::Cysharp::Text::Utf8ValueStringBuilder::*)(int32_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::GetSpan)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb9bc3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"GetSpan", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Advance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(int32_t)>(&::Cysharp::Text::Utf8ValueStringBuilder::Advance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9bc4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Advance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.Cysharp_Text_IResettableBufferWriter_System_Byte__Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)()>(&::Cysharp::Text::Utf8ValueStringBuilder::Cysharp_Text_IResettableBufferWriter_System_Byte__Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9bcf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Cysharp.Text.IResettableBufferWriter<System.Byte>.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.ThrowArgumentException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)(::StringW)>(&::Cysharp::Text::Utf8ValueStringBuilder::ThrowArgumentException)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb9b69c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"ThrowArgumentException", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.ThrowFormatException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder::*)()>(&::Cysharp::Text::Utf8ValueStringBuilder::ThrowFormatException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb9bcf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"ThrowFormatException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder.ThrowNestedException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Cysharp::Text::Utf8ValueStringBuilder::ThrowNestedException)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb9bbbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"ThrowNestedException", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Text::Utf8ValueStringBuilder::setStaticF_UTF8NoBom(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "UTF8NoBom", ::Cysharp::Text::Utf8ValueStringBuilder>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* Cysharp::Text::Utf8ValueStringBuilder::getStaticF_UTF8NoBom()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "UTF8NoBom", ::Cysharp::Text::Utf8ValueStringBuilder>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder::setStaticF_newLine1(uint8_t  value)  {
::cordl_internals::setStaticField<uint8_t, "newLine1", ::Cysharp::Text::Utf8ValueStringBuilder>(std::forward<uint8_t>(value));
}
inline uint8_t Cysharp::Text::Utf8ValueStringBuilder::getStaticF_newLine1()  {
return ::cordl_internals::getStaticField<uint8_t, "newLine1", ::Cysharp::Text::Utf8ValueStringBuilder>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder::setStaticF_newLine2(uint8_t  value)  {
::cordl_internals::setStaticField<uint8_t, "newLine2", ::Cysharp::Text::Utf8ValueStringBuilder>(std::forward<uint8_t>(value));
}
inline uint8_t Cysharp::Text::Utf8ValueStringBuilder::getStaticF_newLine2()  {
return ::cordl_internals::getStaticField<uint8_t, "newLine2", ::Cysharp::Text::Utf8ValueStringBuilder>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder::setStaticF_crlf(bool  value)  {
::cordl_internals::setStaticField<bool, "crlf", ::Cysharp::Text::Utf8ValueStringBuilder>(std::forward<bool>(value));
}
inline bool Cysharp::Text::Utf8ValueStringBuilder::getStaticF_crlf()  {
return ::cordl_internals::getStaticField<bool, "crlf", ::Cysharp::Text::Utf8ValueStringBuilder>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder::setStaticF_scratchBuffer(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "scratchBuffer", ::Cysharp::Text::Utf8ValueStringBuilder>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Cysharp::Text::Utf8ValueStringBuilder::getStaticF_scratchBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "scratchBuffer", ::Cysharp::Text::Utf8ValueStringBuilder>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder::setStaticF_scratchBufferUsed(bool  value)  {
::cordl_internals::setStaticField<bool, "scratchBufferUsed", ::Cysharp::Text::Utf8ValueStringBuilder>(std::forward<bool>(value));
}
inline bool Cysharp::Text::Utf8ValueStringBuilder::getStaticF_scratchBufferUsed()  {
return ::cordl_internals::getStaticField<bool, "scratchBufferUsed", ::Cysharp::Text::Utf8ValueStringBuilder>();
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(char16_t  separator, /* [ParamArray] */ ::ArrayW<T>  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(char16_t  separator, ::System::Collections::Generic::List_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(char16_t  separator, /* [Nullable(new[] { 0, 1 })] */ ::System::ReadOnlySpan_1<T>  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(char16_t  separator, ::System::Collections::Generic::IEnumerable_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(char16_t  separator, ::System::Collections::Generic::ICollection_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(char16_t  separator, ::System::Collections::Generic::IList_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(char16_t  separator, ::System::Collections::Generic::IReadOnlyList_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(char16_t  separator, ::System::Collections::Generic::IReadOnlyCollection_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyCollection_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(::StringW  separator, /* [ParamArray] */ ::ArrayW<T>  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(::StringW  separator, ::System::Collections::Generic::List_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(::StringW  separator, /* [Nullable(new[] { 0, 1 })] */ ::System::ReadOnlySpan_1<T>  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ReadOnlySpan_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(::StringW  separator, ::System::Collections::Generic::IEnumerable_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(::StringW  separator, ::System::Collections::Generic::ICollection_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(::StringW  separator, ::System::Collections::Generic::IList_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(::StringW  separator, ::System::Collections::Generic::IReadOnlyList_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoin(::StringW  separator, ::System::Collections::Generic::IReadOnlyCollection_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoin", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyCollection_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoinInternal(::System::ReadOnlySpan_1<char16_t>  separator, /* [Nullable(1)] */ ::System::Collections::Generic::IList_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoinInternal", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoinInternal(::System::ReadOnlySpan_1<char16_t>  separator, /* [Nullable(1)] */ ::System::Collections::Generic::IReadOnlyList_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoinInternal", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoinInternal(::System::ReadOnlySpan_1<char16_t>  separator, /* [Nullable(new[] { 0, 1 })] */ ::System::ReadOnlySpan_1<T>  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoinInternal", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendJoinInternal(::System::ReadOnlySpan_1<char16_t>  separator, /* [Nullable(1)] */ ::System::Collections::Generic::IEnumerable_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendJoinInternal", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, separator, values);
}
template<typename T1>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1);
}
template<typename T1,typename T2>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2);
}
template<typename T1,typename T2,typename T3>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3);
}
template<typename T1,typename T2,typename T3,typename T4>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5, arg6);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<T13>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<T13>(), ::i2c::type_of<T14>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14, T15  arg15)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<T13>(), ::i2c::type_of<T14>(), ::i2c::type_of<T15>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename T16>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14, T15  arg15, T16  arg16)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormat", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>(), ::i2c::class_of<T16>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<T13>(), ::i2c::type_of<T14>(), ::i2c::type_of<T15>(), ::i2c::type_of<T16>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>(), ::i2c::class_of<T16>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
}
inline ::System::Object* Cysharp::Text::Utf8ValueStringBuilder::CreateFormatter(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"CreateFormatter", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(uint8_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(uint8_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::System::DateTime  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::System::DateTime  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::System::DateTimeOffset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::System::DateTimeOffset  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::System::DateTimeOffset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::System::DateTimeOffset  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::System::Decimal  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::System::Decimal  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(double_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(double_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(int16_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(int16_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(int32_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(int32_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(int64_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(int64_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(int8_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<int8_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(int8_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<int8_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(float_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(float_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::System::TimeSpan  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::System::TimeSpan  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(uint16_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(uint16_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(uint32_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(uint32_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(uint64_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(uint64_t  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::System::Guid  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::System::Guid  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(bool  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(bool  value, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, format);
}
inline int32_t Cysharp::Text::Utf8ValueStringBuilder::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> Cysharp::Text::Utf8ValueStringBuilder::AsSpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AsSpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(*this, ___internal_method);
}
inline ::System::ReadOnlyMemory_1<uint8_t> Cysharp::Text::Utf8ValueStringBuilder::AsMemory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AsMemory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlyMemory_1<uint8_t>>(*this, ___internal_method);
}
inline ::System::ArraySegment_1<uint8_t> Cysharp::Text::Utf8ValueStringBuilder::AsArraySegment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AsArraySegment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(*this, ___internal_method);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::_ctor(bool  disposeImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, disposeImmediately);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::TryGrow(int32_t  sizeHint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"TryGrow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sizeHint);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Grow(int32_t  sizeHint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Grow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sizeHint);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(char16_t  value, int32_t  repeatCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, repeatCount);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::StringW  value, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, startIndex, count);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(::System::ReadOnlySpan_1<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Append", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(::System::ReadOnlySpan_1<char16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLine", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLiteral(::System::ReadOnlySpan_1<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"AppendLiteral", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::Append(T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"Append", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendLine(T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendLine", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::CopyTo(::System::Buffers::IBufferWriter_1<uint8_t>*  bufferWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Buffers::IBufferWriter_1<uint8_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bufferWriter);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder::TryCopyTo(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"TryCopyTo", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, bytesWritten);
}
inline ::System::Threading::Tasks::Task* Cysharp::Text::Utf8ValueStringBuilder::WriteToAsync(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"WriteToAsync", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(*this, ___internal_method, stream);
}
inline ::System::Threading::Tasks::Task* Cysharp::Text::Utf8ValueStringBuilder::WriteToAsync(::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"WriteToAsync", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(*this, ___internal_method, stream, cancellationToken);
}
inline ::StringW Cysharp::Text::Utf8ValueStringBuilder::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Memory_1<uint8_t> Cysharp::Text::Utf8ValueStringBuilder::GetMemory(int32_t  sizeHint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"GetMemory", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Memory_1<uint8_t>>(*this, ___internal_method, sizeHint);
}
inline ::System::Span_1<uint8_t> Cysharp::Text::Utf8ValueStringBuilder::GetSpan(int32_t  sizeHint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"GetSpan", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>>(*this, ___internal_method, sizeHint);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Advance(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Advance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::Cysharp_Text_IResettableBufferWriter_System_Byte__Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"Cysharp.Text.IResettableBufferWriter<System.Byte>.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::ThrowArgumentException(::StringW  paramName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"ThrowArgumentException", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, paramName);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::ThrowFormatException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"ThrowFormatException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Text::Utf8ValueStringBuilder::ThrowNestedException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                        {"ThrowNestedException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::AppendFormatInternal(T  arg, int32_t  width, ::System::Buffers::StandardFormat  format, ::StringW  argName)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"AppendFormatInternal", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, arg, width, format, argName);
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder::RegisterTryFormat(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*  formatMethod)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"RegisterTryFormat", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, formatMethod);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>* Cysharp::Text::Utf8ValueStringBuilder::CreateNullableFormatter()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"CreateNullableFormatter", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>*>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Cysharp::Text::Utf8ValueStringBuilder::EnableNullableFormat()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder>(),
                    {"EnableNullableFormat", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Cysharp::Text::Utf8ValueStringBuilder::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Cysharp::Text::Utf8ValueStringBuilder::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Buffers::IBufferWriter_1<uint8_t>"
constexpr  Cysharp::Text::Utf8ValueStringBuilder::operator ::System::Buffers::IBufferWriter_1<uint8_t>*()  {
return static_cast<::System::Buffers::IBufferWriter_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Buffers::IBufferWriter_1<uint8_t>"
constexpr ::System::Buffers::IBufferWriter_1<uint8_t>* Cysharp::Text::Utf8ValueStringBuilder::i___System__Buffers__IBufferWriter_1_uint8_t_()  {
return static_cast<::System::Buffers::IBufferWriter_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Cysharp::Text::IResettableBufferWriter_1<uint8_t>"
constexpr  Cysharp::Text::Utf8ValueStringBuilder::operator ::Cysharp::Text::IResettableBufferWriter_1<uint8_t>*()  {
return static_cast<::Cysharp::Text::IResettableBufferWriter_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Cysharp::Text::IResettableBufferWriter_1<uint8_t>"
constexpr ::Cysharp::Text::IResettableBufferWriter_1<uint8_t>* Cysharp::Text::Utf8ValueStringBuilder::i___Cysharp__Text__IResettableBufferWriter_1_uint8_t_()  {
return static_cast<::Cysharp::Text::IResettableBufferWriter_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disposeImmediately", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Cysharp::Text::Utf8ValueStringBuilder::Utf8ValueStringBuilder(::ArrayW<uint8_t>  buffer, int32_t  index, bool  disposeImmediately) noexcept  {
this->buffer = buffer;
this->index = index;
this->disposeImmediately = disposeImmediately;
}
// Ctor Parameters []
constexpr ::Cysharp::Text::Utf8ValueStringBuilder::Utf8ValueStringBuilder()   {
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>::setStaticF___9(::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*, "<>9", ::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*>(value));
}
template<typename T>
inline ::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>* Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*, "<>9", ::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*>();
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>::setStaticF___9__150_0(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>*, "<>9__150_0", ::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>*>(value));
}
template<typename T>
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>* Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>::getStaticF___9__150_0()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>*, "<>9__150_0", ::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*>();
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>::_CreateNullableFormatter_b__150_0(::System::Nullable_1<T>  x, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*>(),
                        {"<CreateNullableFormatter>b__150_0", {}, {::i2c::type_of<::System::Nullable_1<T>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, destination, written, format);
}
template<typename T>
inline ::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>* Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>::Utf8ValueStringBuilder___c__150_1()   {
}
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::Utf8ValueStringBuilder___c::*)()>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9bd00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(uint8_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bd014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_0", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(::System::DateTime, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bd09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_1", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(::System::DateTimeOffset, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_2)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb9bd124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_2", {}, {::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(::System::Decimal, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_3)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb9bd1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_3", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(double_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_4)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb9bd254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_4", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(int16_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_5)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bd2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_5", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(int32_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_6)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bd36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_6", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(int64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_7)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bd3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_7", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(int8_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_8)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bd47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_8", {}, {::i2c::type_of<int8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(float_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_9)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb9bd504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_9", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(::System::TimeSpan, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_10)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bd594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_10", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(uint16_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_11)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bd61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_11", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_12
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(uint32_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_12)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bd6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_12", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_13
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(uint64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_13)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bd72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_13", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_14
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(::System::Guid, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_14)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb9bd7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_14", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_15
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(bool, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_15)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bd84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_15", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(::System::IntPtr, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_16)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb9bd8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_16", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::Utf8ValueStringBuilder___c._CreateFormatter_b__36_17
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Text::Utf8ValueStringBuilder___c::*)(::System::UIntPtr, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_17)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb9bd9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_17", {}, {::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9(::Cysharp::Text::Utf8ValueStringBuilder___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder___c*, "<>9", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder___c*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder___c* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder___c*, "<>9", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_0(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint8_t>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint8_t>*, "<>9__36_0", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint8_t>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint8_t>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_0()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint8_t>*, "<>9__36_0", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_1(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTime>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTime>*, "<>9__36_1", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTime>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTime>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_1()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTime>*, "<>9__36_1", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_2(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTimeOffset>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTimeOffset>*, "<>9__36_2", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTimeOffset>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTimeOffset>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_2()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTimeOffset>*, "<>9__36_2", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_3(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Decimal>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Decimal>*, "<>9__36_3", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Decimal>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Decimal>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_3()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Decimal>*, "<>9__36_3", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_4(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<double_t>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<double_t>*, "<>9__36_4", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<double_t>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<double_t>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_4()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<double_t>*, "<>9__36_4", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_5(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int16_t>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int16_t>*, "<>9__36_5", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int16_t>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int16_t>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_5()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int16_t>*, "<>9__36_5", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_6(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int32_t>*, "<>9__36_6", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int32_t>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int32_t>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_6()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int32_t>*, "<>9__36_6", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_7(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int64_t>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int64_t>*, "<>9__36_7", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int64_t>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int64_t>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_7()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int64_t>*, "<>9__36_7", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_8(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int8_t>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int8_t>*, "<>9__36_8", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int8_t>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int8_t>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_8()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int8_t>*, "<>9__36_8", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_9(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<float_t>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<float_t>*, "<>9__36_9", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<float_t>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<float_t>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_9()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<float_t>*, "<>9__36_9", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_10(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::TimeSpan>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::TimeSpan>*, "<>9__36_10", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::TimeSpan>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::TimeSpan>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_10()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::TimeSpan>*, "<>9__36_10", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_11(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint16_t>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint16_t>*, "<>9__36_11", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint16_t>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint16_t>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_11()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint16_t>*, "<>9__36_11", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_12(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint32_t>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint32_t>*, "<>9__36_12", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint32_t>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint32_t>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_12()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint32_t>*, "<>9__36_12", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_13(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint64_t>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint64_t>*, "<>9__36_13", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint64_t>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint64_t>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_13()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint64_t>*, "<>9__36_13", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_14(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Guid>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Guid>*, "<>9__36_14", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Guid>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Guid>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_14()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Guid>*, "<>9__36_14", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_15(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<bool>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<bool>*, "<>9__36_15", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<bool>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<bool>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_15()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<bool>*, "<>9__36_15", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_16(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::IntPtr>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::IntPtr>*, "<>9__36_16", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::IntPtr>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::IntPtr>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_16()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::IntPtr>*, "<>9__36_16", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::setStaticF___9__36_17(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::UIntPtr>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::UIntPtr>*, "<>9__36_17", ::Cysharp::Text::Utf8ValueStringBuilder___c*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::UIntPtr>*>(value));
}
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::UIntPtr>* Cysharp::Text::Utf8ValueStringBuilder___c::getStaticF___9__36_17()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::UIntPtr>*, "<>9__36_17", ::Cysharp::Text::Utf8ValueStringBuilder___c*>();
}
inline void Cysharp::Text::Utf8ValueStringBuilder___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_0(uint8_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_0", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_1(::System::DateTime  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_1", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_2(::System::DateTimeOffset  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_2", {}, {::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_3(::System::Decimal  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_3", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_4(double_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_4", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_5(int16_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_5", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_6(int32_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_6", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_7(int64_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_7", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_8(int8_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_8", {}, {::i2c::type_of<int8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_9(float_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_9", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_10(::System::TimeSpan  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_10", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_11(uint16_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_11", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_12(uint32_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_12", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_13(uint64_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_13", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_14(::System::Guid  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_14", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_15(bool  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_15", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_16(::System::IntPtr  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_16", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline bool Cysharp::Text::Utf8ValueStringBuilder___c::_CreateFormatter_b__36_17(::System::UIntPtr  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder___c*>(),
                        {"<CreateFormatter>b__36_17", {}, {::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, dest, written, format);
}
inline ::Cysharp::Text::Utf8ValueStringBuilder___c* Cysharp::Text::Utf8ValueStringBuilder___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Text::Utf8ValueStringBuilder___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Text::Utf8ValueStringBuilder___c::Utf8ValueStringBuilder___c()   {
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder_FormatterCache_1<T>::setStaticF_TryFormatDelegate(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*, "TryFormatDelegate", ::Cysharp::Text::Utf8ValueStringBuilder_FormatterCache_1<T>*>(std::forward<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*>(value));
}
template<typename T>
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>* Cysharp::Text::Utf8ValueStringBuilder_FormatterCache_1<T>::getStaticF_TryFormatDelegate()  {
return ::cordl_internals::getStaticField<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*, "TryFormatDelegate", ::Cysharp::Text::Utf8ValueStringBuilder_FormatterCache_1<T>*>();
}
template<typename T>
inline bool Cysharp::Text::Utf8ValueStringBuilder_FormatterCache_1<T>::TryFormatDefault(/* [Nullable(1)] */ T  value, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder_FormatterCache_1<T>*>(),
                        {"TryFormatDefault", {}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, dest, written, format);
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Text::Utf8ValueStringBuilder_FormatterCache_1<T>::Utf8ValueStringBuilder_FormatterCache_1()   {
}
template<typename T>
inline void Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline bool Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>::Invoke(/* [Nullable(1)] */ T  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, destination, written, format);
}
template<typename T>
inline ::System::IAsyncResult* Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>::BeginInvoke(/* [Nullable(1)] */ T  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, value, destination, written, format, callback, object);
}
template<typename T>
inline bool Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>::EndInvoke(::by_ref<int32_t>  written, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, written, result);
}
template<typename T>
inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>* Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>::Utf8ValueStringBuilder_TryFormat_1()   {
}
