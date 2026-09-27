#pragma once
// IWYU pragma private; include "System/IO/FileStatus.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_FileStatus_impl.hpp"
#include "System/IO/zzzz__FileStatus_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::FileStatus.get_InitiallyDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileStatus::*)()>(&::System::IO::FileStatus::get_InitiallyDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa29ab8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"get_InitiallyDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.set_InitiallyDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStatus::*)(bool)>(&::System::IO::FileStatus::set_InitiallyDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa29ab94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"set_InitiallyDirectory", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IO::FileStatus>, bool)>(&::System::IO::FileStatus::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa29ab9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::System::IO::FileStatus>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.Invalidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStatus::*)()>(&::System::IO::FileStatus::Invalidate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa29abac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"Invalidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::FileStatus::IsReadOnly)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa29abb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"IsReadOnly", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileAttributes (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileStatus::GetAttributes)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa29ad64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.SetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStatus::*)(::StringW, ::System::IO::FileAttributes)>(&::System::IO::FileStatus::SetAttributes)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa29ae4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"SetAttributes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileAttributes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.GetExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileStatus::GetExists)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa29b0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetExists", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.GetCreationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::FileStatus::GetCreationTime)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa29b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetCreationTime", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.SetCreationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStatus::*)(::StringW, ::System::DateTimeOffset)>(&::System::IO::FileStatus::SetCreationTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa29b44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"SetCreationTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.GetLastAccessTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::FileStatus::GetLastAccessTime)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa29b588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetLastAccessTime", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.SetLastAccessTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStatus::*)(::StringW, ::System::DateTimeOffset)>(&::System::IO::FileStatus::SetLastAccessTime)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa29b450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"SetLastAccessTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.GetLastWriteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::FileStatus::GetLastWriteTime)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa29b7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetLastWriteTime", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.SetLastWriteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStatus::*)(::StringW, ::System::DateTimeOffset)>(&::System::IO::FileStatus::SetLastWriteTime)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa29b870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"SetLastWriteTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.UnixTimeToDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::IO::FileStatus::*)(int64_t, int64_t)>(&::System::IO::FileStatus::UnixTimeToDateTimeOffset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa29b394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"UnixTimeToDateTimeOffset", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.SetAccessWriteTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStatus::*)(::StringW, ::System::Nullable_1<int64_t>, ::System::Nullable_1<int64_t>, ::System::Nullable_1<int64_t>, ::System::Nullable_1<int64_t>)>(&::System::IO::FileStatus::SetAccessWriteTimes)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa29b624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"SetAccessWriteTimes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.GetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::FileStatus::GetLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa29b9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetLength", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileStatus::Refresh)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa29b120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"Refresh", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileStatus.EnsureStatInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileStatus::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::FileStatus::EnsureStatInitialized)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa29aca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"EnsureStatInitialized", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::IO::FileStatus::get_InitiallyDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"get_InitiallyDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::IO::FileStatus::set_InitiallyDirectory(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"set_InitiallyDirectory", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::IO::FileStatus::Initialize(::by_ref<::System::IO::FileStatus>  status, bool  isDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::System::IO::FileStatus>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status, isDirectory);
}
inline void System::IO::FileStatus::Invalidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"Invalidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool System::IO::FileStatus::IsReadOnly(::System::ReadOnlySpan_1<char16_t>  path, bool  continueOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"IsReadOnly", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, path, continueOnError);
}
inline ::System::IO::FileAttributes System::IO::FileStatus::GetAttributes(::System::ReadOnlySpan_1<char16_t>  path, ::System::ReadOnlySpan_1<char16_t>  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes>(*this, ___internal_method, path, fileName);
}
inline void System::IO::FileStatus::SetAttributes(::StringW  path, ::System::IO::FileAttributes  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"SetAttributes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileAttributes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path, attributes);
}
inline bool System::IO::FileStatus::GetExists(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetExists", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, path);
}
inline ::System::DateTimeOffset System::IO::FileStatus::GetCreationTime(::System::ReadOnlySpan_1<char16_t>  path, bool  continueOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetCreationTime", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(*this, ___internal_method, path, continueOnError);
}
inline void System::IO::FileStatus::SetCreationTime(::StringW  path, ::System::DateTimeOffset  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"SetCreationTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path, time);
}
inline ::System::DateTimeOffset System::IO::FileStatus::GetLastAccessTime(::System::ReadOnlySpan_1<char16_t>  path, bool  continueOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetLastAccessTime", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(*this, ___internal_method, path, continueOnError);
}
inline void System::IO::FileStatus::SetLastAccessTime(::StringW  path, ::System::DateTimeOffset  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"SetLastAccessTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path, time);
}
inline ::System::DateTimeOffset System::IO::FileStatus::GetLastWriteTime(::System::ReadOnlySpan_1<char16_t>  path, bool  continueOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetLastWriteTime", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(*this, ___internal_method, path, continueOnError);
}
inline void System::IO::FileStatus::SetLastWriteTime(::StringW  path, ::System::DateTimeOffset  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"SetLastWriteTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path, time);
}
inline ::System::DateTimeOffset System::IO::FileStatus::UnixTimeToDateTimeOffset(int64_t  seconds, int64_t  nanoseconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"UnixTimeToDateTimeOffset", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(*this, ___internal_method, seconds, nanoseconds);
}
inline void System::IO::FileStatus::SetAccessWriteTimes(::StringW  path, ::System::Nullable_1<int64_t>  accessSec, ::System::Nullable_1<int64_t>  accessUSec, ::System::Nullable_1<int64_t>  writeSec, ::System::Nullable_1<int64_t>  writeUSec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"SetAccessWriteTimes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path, accessSec, accessUSec, writeSec, writeUSec);
}
inline int64_t System::IO::FileStatus::GetLength(::System::ReadOnlySpan_1<char16_t>  path, bool  continueOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"GetLength", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, path, continueOnError);
}
inline void System::IO::FileStatus::Refresh(::System::ReadOnlySpan_1<char16_t>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"Refresh", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path);
}
inline void System::IO::FileStatus::EnsureStatInitialized(::System::ReadOnlySpan_1<char16_t>  path, bool  continueOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileStatus>(),
                        {"EnsureStatInitialized", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path, continueOnError);
}
// Ctor Parameters [CppParam { name: "_fileStatus", ty: "::GlobalNamespace::Sys_Interop_FileStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_fileStatusInitialized", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_InitiallyDirectory_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_isDirectory", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_exists", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::IO::FileStatus::FileStatus(::GlobalNamespace::Sys_Interop_FileStatus  _fileStatus, int32_t  _fileStatusInitialized, bool  _InitiallyDirectory_k__BackingField, bool  _isDirectory, bool  _exists) noexcept  {
this->_fileStatus = _fileStatus;
this->_fileStatusInitialized = _fileStatusInitialized;
this->_InitiallyDirectory_k__BackingField = _InitiallyDirectory_k__BackingField;
this->_isDirectory = _isDirectory;
this->_exists = _exists;
}
// Ctor Parameters []
constexpr ::System::IO::FileStatus::FileStatus()   {
}
