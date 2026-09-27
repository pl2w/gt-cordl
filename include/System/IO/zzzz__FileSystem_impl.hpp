#pragma once
// IWYU pragma private; include "System/IO/FileSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__FileSystem_def.hpp"
#include "GlobalNamespace/zzzz__Interop_ErrorInfo_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::FileSystem.CopyDanglingSymlink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::CopyDanglingSymlink)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa27f368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"CopyDanglingSymlink", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.CopyFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, bool)>(&::System::IO::FileSystem::CopyFile)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0xa27f4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"CopyFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.LinkOrCopyFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::LinkOrCopyFile)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa27f8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"LinkOrCopyFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.MoveFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::MoveFile)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa27fa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"MoveFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DeleteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::IO::FileSystem::DeleteFile)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa27fb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DeleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.CreateDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::IO::FileSystem::CreateDirectory)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0xa27fe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.MoveDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::MoveDirectory)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xa280484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"MoveDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.RemoveDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::System::IO::FileSystem::RemoveDirectory)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa280794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.RemoveDirectoryInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::DirectoryInfo*, bool, bool)>(&::System::IO::FileSystem::RemoveDirectoryInternal)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0xa28085c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveDirectoryInternal", {}, {::i2c::type_of<::System::IO::DirectoryInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DirectoryExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileSystem::DirectoryExists)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa27f88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DirectoryExists", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DirectoryExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::GlobalNamespace::Interop_ErrorInfo>)>(&::System::IO::FileSystem::DirectoryExists)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa280478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DirectoryExists", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Interop_ErrorInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.FileExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileSystem::FileExists)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa2803f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"FileExists", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.FileExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, ::by_ref<::GlobalNamespace::Interop_ErrorInfo>)>(&::System::IO::FileSystem::FileExists)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa27fcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"FileExists", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Interop_ErrorInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.ShouldIgnoreDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::FileSystem::ShouldIgnoreDirectory)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa280ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"ShouldIgnoreDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileAttributes (*)(::StringW)>(&::System::IO::FileSystem::GetAttributes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa280f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.SetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::IO::FileAttributes)>(&::System::IO::FileSystem::SetAttributes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa281010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"SetAttributes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileAttributes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.GetCreationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::IO::FileSystem::GetCreationTime)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa281094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"GetCreationTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.SetCreationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTimeOffset, bool)>(&::System::IO::FileSystem::SetCreationTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa281140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"SetCreationTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.SetLastAccessTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTimeOffset, bool)>(&::System::IO::FileSystem::SetLastAccessTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa281210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"SetLastAccessTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.GetLastWriteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::IO::FileSystem::GetLastWriteTime)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa2812e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"GetLastWriteTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.SetLastWriteTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::DateTimeOffset, bool)>(&::System::IO::FileSystem::SetLastWriteTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa28138c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"SetLastWriteTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::IO::FileSystem::CopyDanglingSymlink(::StringW  sourceFullPath, ::StringW  destFullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"CopyDanglingSymlink", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline void System::IO::FileSystem::CopyFile(::StringW  sourceFullPath, ::StringW  destFullPath, bool  overwrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"CopyFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFullPath, destFullPath, overwrite);
}
inline void System::IO::FileSystem::LinkOrCopyFile(::StringW  sourceFullPath, ::StringW  destFullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"LinkOrCopyFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline void System::IO::FileSystem::MoveFile(::StringW  sourceFullPath, ::StringW  destFullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"MoveFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline void System::IO::FileSystem::DeleteFile(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DeleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::CreateDirectory(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::MoveDirectory(::StringW  sourceFullPath, ::StringW  destFullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"MoveDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline void System::IO::FileSystem::RemoveDirectory(::StringW  fullPath, bool  recursive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath, recursive);
}
inline void System::IO::FileSystem::RemoveDirectoryInternal(::System::IO::DirectoryInfo*  directory, bool  recursive, bool  throwOnTopLevelDirectoryNotFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"RemoveDirectoryInternal", {}, {::i2c::type_of<::System::IO::DirectoryInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, directory, recursive, throwOnTopLevelDirectoryNotFound);
}
inline bool System::IO::FileSystem::DirectoryExists(::System::ReadOnlySpan_1<char16_t>  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DirectoryExists", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPath);
}
inline bool System::IO::FileSystem::DirectoryExists(::System::ReadOnlySpan_1<char16_t>  fullPath, ::by_ref<::GlobalNamespace::Interop_ErrorInfo>  errorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"DirectoryExists", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Interop_ErrorInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPath, errorInfo);
}
inline bool System::IO::FileSystem::FileExists(::System::ReadOnlySpan_1<char16_t>  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"FileExists", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPath);
}
inline bool System::IO::FileSystem::FileExists(::System::ReadOnlySpan_1<char16_t>  fullPath, int32_t  fileType, ::by_ref<::GlobalNamespace::Interop_ErrorInfo>  errorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"FileExists", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Interop_ErrorInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPath, fileType, errorInfo);
}
inline bool System::IO::FileSystem::ShouldIgnoreDirectory(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"ShouldIgnoreDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline ::System::IO::FileAttributes System::IO::FileSystem::GetAttributes(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::SetAttributes(::StringW  fullPath, ::System::IO::FileAttributes  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"SetAttributes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::FileAttributes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath, attributes);
}
inline ::System::DateTimeOffset System::IO::FileSystem::GetCreationTime(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"GetCreationTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::SetCreationTime(::StringW  fullPath, ::System::DateTimeOffset  time, bool  asDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"SetCreationTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath, time, asDirectory);
}
inline void System::IO::FileSystem::SetLastAccessTime(::StringW  fullPath, ::System::DateTimeOffset  time, bool  asDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"SetLastAccessTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath, time, asDirectory);
}
inline ::System::DateTimeOffset System::IO::FileSystem::GetLastWriteTime(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"GetLastWriteTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::SetLastWriteTime(::StringW  fullPath, ::System::DateTimeOffset  time, bool  asDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystem*>(),
                        {"SetLastWriteTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath, time, asDirectory);
}
// Ctor Parameters []
constexpr ::System::IO::FileSystem::FileSystem()   {
}
