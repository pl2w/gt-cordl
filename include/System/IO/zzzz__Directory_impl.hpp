#pragma once
// IWYU pragma private; include "System/IO/Directory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__Directory_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/IO/zzzz__SearchOption_def.hpp"
#include "System/IO/zzzz__SearchTarget_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::IO::Directory.GetParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::DirectoryInfo* (*)(::StringW)>(&::System::IO::Directory::GetParent)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa296120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetParent", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.CreateDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::DirectoryInfo* (*)(::StringW)>(&::System::IO::Directory::CreateDirectory)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa2962e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::Directory::Exists)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa29646c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"Exists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.SetCreationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::Directory::SetCreationTime)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa2965e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetCreationTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.SetCreationTimeUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::Directory::SetCreationTimeUtc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa29669c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetCreationTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.SetLastWriteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::Directory::SetLastWriteTime)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa296808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetLastWriteTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.SetLastWriteTimeUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::Directory::SetLastWriteTimeUtc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa2968c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetLastWriteTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.SetLastAccessTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::Directory::SetLastAccessTime)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa296954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetLastAccessTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.SetLastAccessTimeUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTime)>(&::System::IO::Directory::SetLastAccessTimeUtc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa296a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetLastAccessTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa296aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW)>(&::System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa296bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa296b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetDirectories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::System::IO::Directory::GetDirectories)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa296e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetDirectories", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetDirectories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::GetDirectories)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa296eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetDirectories", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFileSystemEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::System::IO::Directory::GetFileSystemEntries)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa296f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFileSystemEntries", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFileSystemEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::GetFileSystemEntries)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa296fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.InternalEnumeratePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::SearchTarget, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::InternalEnumeratePaths)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa296c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InternalEnumeratePaths", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchTarget>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateDirectories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW)>(&::System::IO::Directory::EnumerateDirectories)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa297030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateDirectories", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateDirectories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::SearchOption)>(&::System::IO::Directory::EnumerateDirectories)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa2970e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateDirectories", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateDirectories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::EnumerateDirectories)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa2970dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateDirectories", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::SearchOption)>(&::System::IO::Directory::EnumerateFiles)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa2972ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::EnumerateFiles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa297324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateFileSystemEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW)>(&::System::IO::Directory::EnumerateFileSystemEntries)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa297330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFileSystemEntries", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateFileSystemEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW)>(&::System::IO::Directory::EnumerateFileSystemEntries)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa2973e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateFileSystemEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::EnumerateFileSystemEntries)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa2973dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.InternalGetDirectoryRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Directory::InternalGetDirectoryRoot)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa29748c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InternalGetDirectoryRoot", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetCurrentDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::IO::Directory::GetCurrentDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa297544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetCurrentDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::Directory::Move)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0xa29754c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"Move", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::System::IO::Directory::Delete)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa297944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.InsecureGetCurrentDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::IO::Directory::InsecureGetCurrentDirectory)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa2979b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InsecureGetCurrentDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IO::DirectoryInfo* System::IO::Directory::GetParent(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetParent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::DirectoryInfo*>(nullptr, ___internal_method, path);
}
inline ::System::IO::DirectoryInfo* System::IO::Directory::CreateDirectory(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::DirectoryInfo*>(nullptr, ___internal_method, path);
}
inline bool System::IO::Directory::Exists(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"Exists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline void System::IO::Directory::SetCreationTime(::StringW  path, ::System::DateTime  creationTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetCreationTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, creationTime);
}
inline void System::IO::Directory::SetCreationTimeUtc(::StringW  path, ::System::DateTime  creationTimeUtc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetCreationTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, creationTimeUtc);
}
inline void System::IO::Directory::SetLastWriteTime(::StringW  path, ::System::DateTime  lastWriteTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetLastWriteTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, lastWriteTime);
}
inline void System::IO::Directory::SetLastWriteTimeUtc(::StringW  path, ::System::DateTime  lastWriteTimeUtc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetLastWriteTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, lastWriteTimeUtc);
}
inline void System::IO::Directory::SetLastAccessTime(::StringW  path, ::System::DateTime  lastAccessTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetLastAccessTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, lastAccessTime);
}
inline void System::IO::Directory::SetLastAccessTimeUtc(::StringW  path, ::System::DateTime  lastAccessTimeUtc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"SetLastAccessTimeUtc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, lastAccessTimeUtc);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetFiles(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetFiles(::StringW  path, ::StringW  searchPattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path, searchPattern);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetFiles(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetDirectories(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetDirectories", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetDirectories(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetDirectories", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetFileSystemEntries(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFileSystemEntries", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path);
}
inline ::ArrayW<::StringW> System::IO::Directory::GetFileSystemEntries(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::InternalEnumeratePaths(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchTarget  searchTarget, ::System::IO::EnumerationOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InternalEnumeratePaths", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchTarget>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path, searchPattern, searchTarget, options);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateDirectories(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateDirectories", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateDirectories(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchOption  searchOption)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateDirectories", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path, searchPattern, searchOption);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateDirectories(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateDirectories", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateFiles(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchOption  searchOption)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::SearchOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path, searchPattern, searchOption);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateFiles(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFiles", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateFileSystemEntries(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFileSystemEntries", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateFileSystemEntries(::StringW  path, ::StringW  searchPattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path, searchPattern);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateFileSystemEntries(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"EnumerateFileSystemEntries", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::EnumerationOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::StringW System::IO::Directory::InternalGetDirectoryRoot(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InternalGetDirectoryRoot", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Directory::GetCurrentDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"GetCurrentDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void System::IO::Directory::Move(::StringW  sourceDirName, ::StringW  destDirName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"Move", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceDirName, destDirName);
}
inline void System::IO::Directory::Delete(::StringW  path, bool  recursive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, recursive);
}
inline ::StringW System::IO::Directory::InsecureGetCurrentDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Directory*>(),
                        {"InsecureGetCurrentDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::Directory::Directory()   {
}
