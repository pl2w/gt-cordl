#pragma once
// IWYU pragma private; include "System/Environment.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Environment_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Environment_SpecialFolderOption_def.hpp"
#include "System/zzzz__Environment_SpecialFolder_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__OperatingSystem_def.hpp"
#include "System/zzzz__PlatformID_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Environment.GetResourceString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Environment::GetResourceString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa322ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetResourceString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetResourceString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::System::Environment::GetResourceString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa324ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetResourceString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetResourceStringEncodingName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::Environment::GetResourceStringEncodingName)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa3266ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetResourceStringEncodingName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_CurrentDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Environment::get_CurrentDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa326864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_CurrentDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_CurrentManagedThreadId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Environment::get_CurrentManagedThreadId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa32686c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_CurrentManagedThreadId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_HasShutdownStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Environment::get_HasShutdownStarted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa32688c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_HasShutdownStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_MachineName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Environment::get_MachineName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_MachineName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetNewLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Environment::GetNewLine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetNewLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_NewLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Environment::get_NewLine)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa326898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_NewLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_Platform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::PlatformID (*)()>(&::System::Environment::get_Platform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_Platform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetOSVersionString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Environment::GetOSVersionString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetOSVersionString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_OSVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::OperatingSystem* (*)()>(&::System::Environment::get_OSVersion)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa326918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_OSVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.CreateVersionFromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)(::StringW)>(&::System::Environment::CreateVersionFromString)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xa3269dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"CreateVersionFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_StackTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Environment::get_StackTrace)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa326bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_StackTrace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_TickCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Environment::get_TickCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_TickCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_UserDomainName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Environment::get_UserDomainName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_UserDomainName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_UserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Environment::get_UserName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_UserName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.Exit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Environment::Exit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"Exit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetCommandLineArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::System::Environment::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetCommandLineArgs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.internalGetEnvironmentVariable_native
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::System::Environment::internalGetEnvironmentVariable_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"internalGetEnvironmentVariable_native", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.internalGetEnvironmentVariable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Environment::internalGetEnvironmentVariable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa326c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"internalGetEnvironmentVariable", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetEnvironmentVariable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Environment::GetEnvironmentVariable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetEnvironmentVariable", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetEnvironmentVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (*)()>(&::System::Environment::GetEnvironmentVariables)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa326d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetEnvironmentVariables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetFolderPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::Environment_SpecialFolder)>(&::System::Environment::GetFolderPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa326dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetFolderPath", {}, {::i2c::type_of<::GlobalNamespace::Environment_SpecialFolder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetWindowsFolderPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::Environment::GetWindowsFolderPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetWindowsFolderPath", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetFolderPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::Environment_SpecialFolder, ::GlobalNamespace::Environment_SpecialFolderOption)>(&::System::Environment::GetFolderPath)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa326df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetFolderPath", {}, {::i2c::type_of<::GlobalNamespace::Environment_SpecialFolder>(), ::i2c::type_of<::GlobalNamespace::Environment_SpecialFolderOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.ReadXdgUserDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Environment::ReadXdgUserDir)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0xa3272fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"ReadXdgUserDir", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.UnixGetFolderPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::Environment_SpecialFolder, ::GlobalNamespace::Environment_SpecialFolderOption)>(&::System::Environment::UnixGetFolderPath)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0xa326e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"UnixGetFolderPath", {}, {::i2c::type_of<::GlobalNamespace::Environment_SpecialFolder>(), ::i2c::type_of<::GlobalNamespace::Environment_SpecialFolderOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetLogicalDrives
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::System::Environment::GetLogicalDrives)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa327768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetLogicalDrives", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.FailFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Environment::FailFast)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa327770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"FailFast", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.FailFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Exception*)>(&::System::Environment::FailFast)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa327780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"FailFast", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.FailFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Exception*, ::StringW)>(&::System::Environment::FailFast)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa32777c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"FailFast", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetIs64BitOperatingSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Environment::GetIs64BitOperatingSystem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa327788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetIs64BitOperatingSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_Is64BitOperatingSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Environment::get_Is64BitOperatingSystem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa32778c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_Is64BitOperatingSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_Is64BitProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Environment::get_Is64BitProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa327790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_Is64BitProcess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_ProcessorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Environment::get_ProcessorCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa3277a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_ProcessorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_IsRunningOnWindows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Environment::get_IsRunningOnWindows)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa326e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_IsRunningOnWindows", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetLogicalDrivesInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::System::Environment::GetLogicalDrivesInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa32776c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetLogicalDrivesInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetEnvironmentVariableNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::System::Environment::GetEnvironmentVariableNames)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa326de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetEnvironmentVariableNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetMachineConfigPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Environment::GetMachineConfigPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa3277a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetMachineConfigPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.internalGetHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Environment::internalGetHome)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa327764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"internalGetHome", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetPageSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Environment::GetPageSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa3277a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetPageSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.get_IsUnix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Environment::get_IsUnix)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa3277ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_IsUnix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Environment.GetStackTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Exception*, bool)>(&::System::Environment::GetStackTrace)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa3277d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetStackTrace", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Environment::setStaticF_nl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "nl", ::System::Environment*>(std::forward<::StringW>(value));
}
inline ::StringW System::Environment::getStaticF_nl()  {
return ::cordl_internals::getStaticField<::StringW, "nl", ::System::Environment*>();
}
inline void System::Environment::setStaticF_os(::System::OperatingSystem*  value)  {
::cordl_internals::setStaticField<::System::OperatingSystem*, "os", ::System::Environment*>(std::forward<::System::OperatingSystem*>(value));
}
inline ::System::OperatingSystem* System::Environment::getStaticF_os()  {
return ::cordl_internals::getStaticField<::System::OperatingSystem*, "os", ::System::Environment*>();
}
inline ::StringW System::Environment::GetResourceString(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetResourceString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key);
}
inline ::StringW System::Environment::GetResourceString(::StringW  key, /* [ParamArray] */ ::ArrayW<::System::Object*>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetResourceString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key, values);
}
inline ::StringW System::Environment::GetResourceStringEncodingName(int32_t  codePage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetResourceStringEncodingName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, codePage);
}
inline ::StringW System::Environment::get_CurrentDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_CurrentDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t System::Environment::get_CurrentManagedThreadId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_CurrentManagedThreadId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool System::Environment::get_HasShutdownStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_HasShutdownStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::get_MachineName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_MachineName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::GetNewLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetNewLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::get_NewLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_NewLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::System::PlatformID System::Environment::get_Platform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_Platform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::PlatformID>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::GetOSVersionString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetOSVersionString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::System::OperatingSystem* System::Environment::get_OSVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_OSVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::OperatingSystem*>(nullptr, ___internal_method);
}
inline ::System::Version* System::Environment::CreateVersionFromString(::StringW  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"CreateVersionFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method, info);
}
inline ::StringW System::Environment::get_StackTrace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_StackTrace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t System::Environment::get_TickCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_TickCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::get_UserDomainName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_UserDomainName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::get_UserName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_UserName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void System::Environment::Exit(int32_t  exitCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"Exit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exitCode);
}
inline ::ArrayW<::StringW> System::Environment::GetCommandLineArgs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetCommandLineArgs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::internalGetEnvironmentVariable_native(::System::IntPtr  variable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"internalGetEnvironmentVariable_native", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, variable);
}
inline ::StringW System::Environment::internalGetEnvironmentVariable(::StringW  variable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"internalGetEnvironmentVariable", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, variable);
}
inline ::StringW System::Environment::GetEnvironmentVariable(::StringW  variable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetEnvironmentVariable", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, variable);
}
inline ::System::Collections::IDictionary* System::Environment::GetEnvironmentVariables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetEnvironmentVariables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::GetFolderPath(::GlobalNamespace::Environment_SpecialFolder  folder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetFolderPath", {}, {::i2c::type_of<::GlobalNamespace::Environment_SpecialFolder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, folder);
}
inline ::StringW System::Environment::GetWindowsFolderPath(int32_t  folder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetWindowsFolderPath", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, folder);
}
inline ::StringW System::Environment::GetFolderPath(::GlobalNamespace::Environment_SpecialFolder  folder, ::GlobalNamespace::Environment_SpecialFolderOption  option)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetFolderPath", {}, {::i2c::type_of<::GlobalNamespace::Environment_SpecialFolder>(), ::i2c::type_of<::GlobalNamespace::Environment_SpecialFolderOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, folder, option);
}
inline ::StringW System::Environment::ReadXdgUserDir(::StringW  config_dir, ::StringW  home_dir, ::StringW  key, ::StringW  fallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"ReadXdgUserDir", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, config_dir, home_dir, key, fallback);
}
inline ::StringW System::Environment::UnixGetFolderPath(::GlobalNamespace::Environment_SpecialFolder  folder, ::GlobalNamespace::Environment_SpecialFolderOption  option)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"UnixGetFolderPath", {}, {::i2c::type_of<::GlobalNamespace::Environment_SpecialFolder>(), ::i2c::type_of<::GlobalNamespace::Environment_SpecialFolderOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, folder, option);
}
inline ::ArrayW<::StringW> System::Environment::GetLogicalDrives()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetLogicalDrives", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline void System::Environment::FailFast(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"FailFast", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void System::Environment::FailFast(::StringW  message, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"FailFast", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, exception);
}
inline void System::Environment::FailFast(::StringW  message, ::System::Exception*  exception, ::StringW  errorSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"FailFast", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, exception, errorSource);
}
inline bool System::Environment::GetIs64BitOperatingSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetIs64BitOperatingSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Environment::get_Is64BitOperatingSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_Is64BitOperatingSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Environment::get_Is64BitProcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_Is64BitProcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t System::Environment::get_ProcessorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_ProcessorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool System::Environment::get_IsRunningOnWindows()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_IsRunningOnWindows", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> System::Environment::GetLogicalDrivesInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetLogicalDrivesInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> System::Environment::GetEnvironmentVariableNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetEnvironmentVariableNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::GetMachineConfigPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetMachineConfigPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::internalGetHome()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"internalGetHome", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t System::Environment::GetPageSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetPageSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool System::Environment::get_IsUnix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"get_IsUnix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW System::Environment::GetStackTrace(::System::Exception*  e, bool  needFileInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Environment*>(),
                        {"GetStackTrace", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, e, needFileInfo);
}
// Ctor Parameters []
constexpr ::System::Environment::Environment()   {
}
