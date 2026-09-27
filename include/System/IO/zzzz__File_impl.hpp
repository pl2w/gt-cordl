#pragma once
// IWYU pragma private; include "System/IO/File.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__File_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::IO::File.OpenText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamReader* (*)(::StringW)>(&::System::IO::File::OpenText)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa298584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"OpenText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.CreateText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamWriter* (*)(::StringW)>(&::System::IO::File::CreateText)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa298640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"CreateText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.AppendText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamWriter* (*)(::StringW)>(&::System::IO::File::AppendText)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa2986e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"AppendText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::File::Copy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa298790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Copy", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, bool)>(&::System::IO::File::Copy)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa298798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Copy", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&::System::IO::File::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa298930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW, int32_t)>(&::System::IO::File::Create)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa298938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::IO::File::Delete)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa2989b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::File::Exists)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa286980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Exists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW, ::System::IO::FileMode)>(&::System::IO::File::Open)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa298a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Open", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW, ::System::IO::FileMode, ::System::IO::FileAccess, ::System::IO::FileShare)>(&::System::IO::File::Open)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa298a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Open", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.GetUtcDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::System::DateTime)>(&::System::IO::File::GetUtcDateTimeOffset)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa29672c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"GetUtcDateTimeOffset", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.SetCreationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::File::SetCreationTime)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa298af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetCreationTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.SetCreationTimeUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::File::SetCreationTimeUtc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa298bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetCreationTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.GetCreationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::IO::File::GetCreationTime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa298c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"GetCreationTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.SetLastAccessTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::File::SetLastAccessTime)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa298ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetLastAccessTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.SetLastAccessTimeUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::File::SetLastAccessTimeUtc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa298da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetLastAccessTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.SetLastWriteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::File::SetLastWriteTime)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa298e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetLastWriteTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.SetLastWriteTimeUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::File::SetLastWriteTimeUtc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa298ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetLastWriteTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.GetLastWriteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::IO::File::GetLastWriteTime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa298f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"GetLastWriteTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.GetLastWriteTimeUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::IO::File::GetLastWriteTimeUtc)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa299028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"GetLastWriteTimeUtc", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileAttributes (*)(::StringW)>(&::System::IO::File::GetAttributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa2990d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.SetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::IO::FileAttributes)>(&::System::IO::File::SetAttributes)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa299130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetAttributes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileAttributes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.OpenRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&::System::IO::File::OpenRead)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa299248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"OpenRead", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.OpenWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&::System::IO::File::OpenWrite)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa2992b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"OpenWrite", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.ReadAllText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::File::ReadAllText)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa299318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.InternalReadAllText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&::System::IO::File::InternalReadAllText)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa2993dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"InternalReadAllText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.WriteAllText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::File::WriteAllText)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa299554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"WriteAllText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.ReadAllBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::IO::File::ReadAllBytes)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xa299748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllBytes", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.ReadAllBytesUnknownLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::FileStream*)>(&::System::IO::File::ReadAllBytesUnknownLength)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0xa2999c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllBytesUnknownLength", {}, {::i2c::type_of<::System::IO::FileStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.WriteAllBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&::System::IO::File::WriteAllBytes)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa299e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"WriteAllBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.InternalWriteAllBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&::System::IO::File::InternalWriteAllBytes)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa299f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"InternalWriteAllBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.ReadAllLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::System::IO::File::ReadAllLines)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa29a100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllLines", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.InternalReadAllLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::System::Text::Encoding*)>(&::System::IO::File::InternalReadAllLines)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa29a1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"InternalReadAllLines", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::File.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::File::Move)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa29a424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Move", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IO::StreamReader* System::IO::File::OpenText(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"OpenText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::StreamReader*>(nullptr, ___internal_method, path);
}
inline ::System::IO::StreamWriter* System::IO::File::CreateText(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"CreateText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::StreamWriter*>(nullptr, ___internal_method, path);
}
inline ::System::IO::StreamWriter* System::IO::File::AppendText(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"AppendText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::StreamWriter*>(nullptr, ___internal_method, path);
}
inline void System::IO::File::Copy(::StringW  sourceFileName, ::StringW  destFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Copy", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFileName, destFileName);
}
inline void System::IO::File::Copy(::StringW  sourceFileName, ::StringW  destFileName, bool  overwrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Copy", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFileName, destFileName, overwrite);
}
inline ::System::IO::FileStream* System::IO::File::Create(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileStream* System::IO::File::Create(::StringW  path, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path, bufferSize);
}
inline void System::IO::File::Delete(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
inline bool System::IO::File::Exists(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Exists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileStream* System::IO::File::Open(::StringW  path, ::System::IO::FileMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Open", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path, mode);
}
inline ::System::IO::FileStream* System::IO::File::Open(::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  share)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Open", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<::System::IO::FileShare>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path, mode, access, share);
}
inline ::System::DateTimeOffset System::IO::File::GetUtcDateTimeOffset(::System::DateTime  dateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"GetUtcDateTimeOffset", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, dateTime);
}
inline void System::IO::File::SetCreationTime(::StringW  path, ::System::DateTime  creationTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetCreationTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, creationTime);
}
inline void System::IO::File::SetCreationTimeUtc(::StringW  path, ::System::DateTime  creationTimeUtc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetCreationTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, creationTimeUtc);
}
inline ::System::DateTime System::IO::File::GetCreationTime(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"GetCreationTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, path);
}
inline void System::IO::File::SetLastAccessTime(::StringW  path, ::System::DateTime  lastAccessTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetLastAccessTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, lastAccessTime);
}
inline void System::IO::File::SetLastAccessTimeUtc(::StringW  path, ::System::DateTime  lastAccessTimeUtc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetLastAccessTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, lastAccessTimeUtc);
}
inline void System::IO::File::SetLastWriteTime(::StringW  path, ::System::DateTime  lastWriteTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetLastWriteTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, lastWriteTime);
}
inline void System::IO::File::SetLastWriteTimeUtc(::StringW  path, ::System::DateTime  lastWriteTimeUtc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetLastWriteTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, lastWriteTimeUtc);
}
inline ::System::DateTime System::IO::File::GetLastWriteTime(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"GetLastWriteTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, path);
}
inline ::System::DateTime System::IO::File::GetLastWriteTimeUtc(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"GetLastWriteTimeUtc", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileAttributes System::IO::File::GetAttributes(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes>(nullptr, ___internal_method, path);
}
inline void System::IO::File::SetAttributes(::StringW  path, ::System::IO::FileAttributes  fileAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"SetAttributes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileAttributes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, fileAttributes);
}
inline ::System::IO::FileStream* System::IO::File::OpenRead(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"OpenRead", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path);
}
inline ::System::IO::FileStream* System::IO::File::OpenWrite(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"OpenWrite", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileStream*>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::File::ReadAllText(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::File::InternalReadAllText(::StringW  path, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"InternalReadAllText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path, encoding);
}
inline void System::IO::File::WriteAllText(::StringW  path, ::StringW  contents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"WriteAllText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, contents);
}
inline ::ArrayW<uint8_t> System::IO::File::ReadAllBytes(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllBytes", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, path);
}
inline ::ArrayW<uint8_t> System::IO::File::ReadAllBytesUnknownLength(::System::IO::FileStream*  fs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllBytesUnknownLength", {}, {::i2c::type_of<::System::IO::FileStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, fs);
}
inline void System::IO::File::WriteAllBytes(::StringW  path, ::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"WriteAllBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, bytes);
}
inline void System::IO::File::InternalWriteAllBytes(::StringW  path, ::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"InternalWriteAllBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, bytes);
}
inline ::ArrayW<::StringW> System::IO::File::ReadAllLines(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"ReadAllLines", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path);
}
inline ::ArrayW<::StringW> System::IO::File::InternalReadAllLines(::StringW  path, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"InternalReadAllLines", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path, encoding);
}
inline void System::IO::File::Move(::StringW  sourceFileName, ::StringW  destFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::File*>(),
                        {"Move", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFileName, destFileName);
}
// Ctor Parameters []
constexpr ::System::IO::File::File()   {
}
