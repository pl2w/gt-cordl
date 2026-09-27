#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/MinidumpHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Common/zzzz__MinidumpHelper_def.hpp"
#include "Backtrace/Unity/Common/zzzz__MiniDumpExceptionInformation_def.hpp"
#include "Backtrace/Unity/Types/zzzz__MiniDumpType_def.hpp"
#include "Backtrace/Unity/Types/zzzz__MinidumpException_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Common::MinidumpHelper.IsMemoryDumpAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Backtrace::Unity::Common::MinidumpHelper::IsMemoryDumpAvailable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f26ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MinidumpHelper*>(),
                        {"IsMemoryDumpAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::MinidumpHelper.MiniDumpWriteDump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, uint32_t, ::System::Runtime::InteropServices::SafeHandle*, uint32_t, ::by_ref<::Backtrace::Unity::Common::MiniDumpExceptionInformation>, ::System::IntPtr, ::System::IntPtr)>(&::Backtrace::Unity::Common::MinidumpHelper::MiniDumpWriteDump)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5f26cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MinidumpHelper*>(),
                        {"MiniDumpWriteDump", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Backtrace::Unity::Common::MiniDumpExceptionInformation>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::MinidumpHelper.MiniDumpWriteDump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, uint32_t, ::System::Runtime::InteropServices::SafeHandle*, uint32_t, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Backtrace::Unity::Common::MinidumpHelper::MiniDumpWriteDump)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f26e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MinidumpHelper*>(),
                        {"MiniDumpWriteDump", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::MinidumpHelper.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::Backtrace::Unity::Types::MiniDumpType, ::Backtrace::Unity::Types::MinidumpException)>(&::Backtrace::Unity::Common::MinidumpHelper::Write)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5f1c0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MinidumpHelper*>(),
                        {"Write", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Types::MiniDumpType>(), ::i2c::type_of<::Backtrace::Unity::Types::MinidumpException>()}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Common::MinidumpHelper::setStaticF_Libraries(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "Libraries", ::Backtrace::Unity::Common::MinidumpHelper*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Backtrace::Unity::Common::MinidumpHelper::getStaticF_Libraries()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "Libraries", ::Backtrace::Unity::Common::MinidumpHelper*>();
}
inline bool Backtrace::Unity::Common::MinidumpHelper::IsMemoryDumpAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MinidumpHelper*>(),
                        {"IsMemoryDumpAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Backtrace::Unity::Common::MinidumpHelper::MiniDumpWriteDump(::System::IntPtr  hProcess, uint32_t  processId, ::System::Runtime::InteropServices::SafeHandle*  hFile, uint32_t  dumpType, ::by_ref<::Backtrace::Unity::Common::MiniDumpExceptionInformation>  expParam, ::System::IntPtr  userStreamParam, ::System::IntPtr  callbackParam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MinidumpHelper*>(),
                        {"MiniDumpWriteDump", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Backtrace::Unity::Common::MiniDumpExceptionInformation>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hProcess, processId, hFile, dumpType, expParam, userStreamParam, callbackParam);
}
inline bool Backtrace::Unity::Common::MinidumpHelper::MiniDumpWriteDump(::System::IntPtr  hProcess, uint32_t  processId, ::System::Runtime::InteropServices::SafeHandle*  hFile, uint32_t  dumpType, ::System::IntPtr  expParam, ::System::IntPtr  userStreamParam, ::System::IntPtr  callbackParam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MinidumpHelper*>(),
                        {"MiniDumpWriteDump", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hProcess, processId, hFile, dumpType, expParam, userStreamParam, callbackParam);
}
inline bool Backtrace::Unity::Common::MinidumpHelper::Write(::StringW  filePath, ::Backtrace::Unity::Types::MiniDumpType  options, ::Backtrace::Unity::Types::MinidumpException  exceptionType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MinidumpHelper*>(),
                        {"Write", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Types::MiniDumpType>(), ::i2c::type_of<::Backtrace::Unity::Types::MinidumpException>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filePath, options, exceptionType);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Common::MinidumpHelper::MinidumpHelper()   {
}
