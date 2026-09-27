#pragma once
// IWYU pragma private; include "System/IO/Path.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__Path_def.hpp"
#include "System/Buffers/zzzz__SpanAction_2_def.hpp"
#include "System/IO/zzzz__Path_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ValueTuple_1_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "System/zzzz__ValueTuple_8_def.hpp"
//  Writing Method size for method: ::System::IO::Path.ChangeExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::IO::Path::ChangeExtension)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa2b1a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"ChangeExtension", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa2b1c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.CleanPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::CleanPath)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0xa2b1ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"CleanPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetDirectoryName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetDirectoryName)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xa2adf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetDirectoryName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetDirectoryName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::GetDirectoryName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa2b2878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetDirectoryName", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetExtension)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa2b2948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFileName)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa2a7c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileNameWithoutExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFileNameWithoutExtension)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa2b2a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileNameWithoutExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFullPath)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa2ae2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFullPathInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetFullPathInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa2b2ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPathInternal", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.InsecureGetFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::InsecureGetFullPath)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0xa2ad820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"InsecureGetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsDirectorySeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::IO::Path::IsDirectorySeparator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa2a7bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsDirectorySeparator", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetPathRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::GetPathRoot)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xa2b2458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetPathRoot", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetTempPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::IO::Path::GetTempPath)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa2b2f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetTempPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.get_temp_path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::IO::Path::get_temp_path)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa2b3028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"get_temp_path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.HasExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::Path::HasExtension)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa2b302c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"HasExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsPathRooted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::IsPathRooted)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa2b3138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsPathRooted", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.IsPathRooted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::Path::IsPathRooted)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa2b1ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsPathRooted", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetInvalidFileNameChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)()>(&::System::IO::Path::GetInvalidFileNameChars)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa2b323c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetInvalidFileNameChars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetInvalidPathChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)()>(&::System::IO::Path::GetInvalidPathChars)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa2b32ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetInvalidPathChars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetRandomFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::IO::Path::GetRandomFileName)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa2b337c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetRandomFileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.findExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::IO::Path::findExtension)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa2b1be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"findExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.CanonicalizePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Path::CanonicalizePath)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0xa2b2b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"CanonicalizePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xa2b36e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa2b39d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::IO::Path::Combine)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa2b3b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::IO::Path::Validate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa2b3d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Validate", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::Path::Validate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa2b3d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Validate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.GetFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::GetFileName)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa2b3eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileName", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Join
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::Join)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa2b4014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Join", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.Join
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::Join)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa2b4344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Join", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.TryJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::IO::Path::TryJoin)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xa2b47b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"TryJoin", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.JoinInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::JoinInternal)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xa2b40cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"JoinInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path.JoinInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::Path::JoinInternal)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xa2b4454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"JoinInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Path::setStaticF_InvalidPathChars(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "InvalidPathChars", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_InvalidPathChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "InvalidPathChars", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_AltDirectorySeparatorChar(char16_t  value)  {
::cordl_internals::setStaticField<char16_t, "AltDirectorySeparatorChar", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_AltDirectorySeparatorChar()  {
return ::cordl_internals::getStaticField<char16_t, "AltDirectorySeparatorChar", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_DirectorySeparatorChar(char16_t  value)  {
::cordl_internals::setStaticField<char16_t, "DirectorySeparatorChar", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_DirectorySeparatorChar()  {
return ::cordl_internals::getStaticField<char16_t, "DirectorySeparatorChar", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_PathSeparator(char16_t  value)  {
::cordl_internals::setStaticField<char16_t, "PathSeparator", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_PathSeparator()  {
return ::cordl_internals::getStaticField<char16_t, "PathSeparator", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_DirectorySeparatorStr(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "DirectorySeparatorStr", ::System::IO::Path*>(std::forward<::StringW>(value));
}
inline ::StringW System::IO::Path::getStaticF_DirectorySeparatorStr()  {
return ::cordl_internals::getStaticField<::StringW, "DirectorySeparatorStr", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_VolumeSeparatorChar(char16_t  value)  {
::cordl_internals::setStaticField<char16_t, "VolumeSeparatorChar", ::System::IO::Path*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::Path::getStaticF_VolumeSeparatorChar()  {
return ::cordl_internals::getStaticField<char16_t, "VolumeSeparatorChar", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_PathSeparatorChars(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "PathSeparatorChars", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_PathSeparatorChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "PathSeparatorChars", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_dirEqualsVolume(bool  value)  {
::cordl_internals::setStaticField<bool, "dirEqualsVolume", ::System::IO::Path*>(std::forward<bool>(value));
}
inline bool System::IO::Path::getStaticF_dirEqualsVolume()  {
return ::cordl_internals::getStaticField<bool, "dirEqualsVolume", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_trimEndCharsWindows(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "trimEndCharsWindows", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_trimEndCharsWindows()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "trimEndCharsWindows", ::System::IO::Path*>();
}
inline void System::IO::Path::setStaticF_trimEndCharsUnix(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "trimEndCharsUnix", ::System::IO::Path*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Path::getStaticF_trimEndCharsUnix()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "trimEndCharsUnix", ::System::IO::Path*>();
}
inline ::StringW System::IO::Path::ChangeExtension(::StringW  path, ::StringW  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"ChangeExtension", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path, extension);
}
inline ::StringW System::IO::Path::Combine(::StringW  path1, ::StringW  path2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2);
}
inline ::StringW System::IO::Path::CleanPath(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"CleanPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline ::StringW System::IO::Path::GetDirectoryName(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetDirectoryName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Path::GetDirectoryName(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetDirectoryName", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetExtension(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFileName(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFileNameWithoutExtension(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileNameWithoutExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFullPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetFullPathInternal(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFullPathInternal", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::InsecureGetFullPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"InsecureGetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline bool System::IO::Path::IsDirectorySeparator(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsDirectorySeparator", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline ::StringW System::IO::Path::GetPathRoot(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetPathRoot", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::GetTempPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetTempPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW System::IO::Path::get_temp_path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"get_temp_path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool System::IO::Path::HasExtension(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"HasExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::Path::IsPathRooted(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsPathRooted", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::Path::IsPathRooted(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"IsPathRooted", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::ArrayW<char16_t> System::IO::Path::GetInvalidFileNameChars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetInvalidFileNameChars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method);
}
inline ::ArrayW<char16_t> System::IO::Path::GetInvalidPathChars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetInvalidPathChars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method);
}
inline ::StringW System::IO::Path::GetRandomFileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetRandomFileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t System::IO::Path::findExtension(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"findExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::CanonicalizePath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"CanonicalizePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::Combine(/* [ParamArray] */ ::ArrayW<::StringW>  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, paths);
}
inline ::StringW System::IO::Path::Combine(::StringW  path1, ::StringW  path2, ::StringW  path3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2, path3);
}
inline ::StringW System::IO::Path::Combine(::StringW  path1, ::StringW  path2, ::StringW  path3, ::StringW  path4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Combine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2, path3, path4);
}
inline void System::IO::Path::Validate(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Validate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
inline void System::IO::Path::Validate(::StringW  path, ::StringW  parameterName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Validate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, parameterName);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::Path::GetFileName(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"GetFileName", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Path::Join(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Join", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2);
}
inline ::StringW System::IO::Path::Join(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2, ::System::ReadOnlySpan_1<char16_t>  path3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"Join", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path1, path2, path3);
}
inline bool System::IO::Path::TryJoin(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"TryJoin", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path1, path2, destination, charsWritten);
}
inline ::StringW System::IO::Path::JoinInternal(::System::ReadOnlySpan_1<char16_t>  first, ::System::ReadOnlySpan_1<char16_t>  second)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"JoinInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, first, second);
}
inline ::StringW System::IO::Path::JoinInternal(::System::ReadOnlySpan_1<char16_t>  first, ::System::ReadOnlySpan_1<char16_t>  second, ::System::ReadOnlySpan_1<char16_t>  third)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path*>(),
                        {"JoinInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, first, second, third);
}
// Ctor Parameters []
constexpr ::System::IO::Path::Path()   {
}
//  Writing Method size for method: ::System::IO::Path___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Path___c::*)()>(&::System::IO::Path___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2b4a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path___c._JoinInternal_b__56_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Path___c::*)(::System::Span_1<char16_t>, ::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>)>(&::System::IO::Path___c::_JoinInternal_b__56_0)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa2b4a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {"<JoinInternal>b__56_0", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Path___c._JoinInternal_b__57_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Path___c::*)(::System::Span_1<char16_t>, ::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>)>(&::System::IO::Path___c::_JoinInternal_b__57_0)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa2b4be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {"<JoinInternal>b__57_0", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Path___c::setStaticF___9(::System::IO::Path___c*  value)  {
::cordl_internals::setStaticField<::System::IO::Path___c*, "<>9", ::System::IO::Path___c*>(std::forward<::System::IO::Path___c*>(value));
}
inline ::System::IO::Path___c* System::IO::Path___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::IO::Path___c*, "<>9", ::System::IO::Path___c*>();
}
inline void System::IO::Path___c::setStaticF___9__56_0(::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*  value)  {
::cordl_internals::setStaticField<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*, "<>9__56_0", ::System::IO::Path___c*>(std::forward<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*>(value));
}
inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>* System::IO::Path___c::getStaticF___9__56_0()  {
return ::cordl_internals::getStaticField<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*, "<>9__56_0", ::System::IO::Path___c*>();
}
inline void System::IO::Path___c::setStaticF___9__57_0(::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*  value)  {
::cordl_internals::setStaticField<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*, "<>9__57_0", ::System::IO::Path___c*>(std::forward<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*>(value));
}
inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>* System::IO::Path___c::getStaticF___9__57_0()  {
return ::cordl_internals::getStaticField<::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*, "<>9__57_0", ::System::IO::Path___c*>();
}
inline void System::IO::Path___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::Path___c::_JoinInternal_b__56_0(::System::Span_1<char16_t>  destination, /* [TupleElementNames(new[] { "First", "FirstLength", "Second", "SecondLength", "HasSeparator" })] */ ::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {"<JoinInternal>b__56_0", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, state);
}
inline void System::IO::Path___c::_JoinInternal_b__57_0(::System::Span_1<char16_t>  destination, /* [TupleElementNames(new[] { "First", "FirstLength", "Second", "SecondLength", "Third", "ThirdLength", "FirstHasSeparator", "ThirdHasSeparator", null })] */ ::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Path___c*>(),
                        {"<JoinInternal>b__57_0", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, state);
}
inline ::System::IO::Path___c* System::IO::Path___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Path___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::Path___c::Path___c()   {
}
