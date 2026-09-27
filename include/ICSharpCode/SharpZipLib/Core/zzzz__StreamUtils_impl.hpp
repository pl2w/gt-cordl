#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/StreamUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__StreamUtils_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ProgressHandler_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::StreamUtils.ReadFully
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Core::StreamUtils::ReadFully)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ffc7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"ReadFully", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::StreamUtils.ReadFully
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Core::StreamUtils::ReadFully)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9ffc7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"ReadFully", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::StreamUtils.ReadRequestedBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Core::StreamUtils::ReadRequestedBytes)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9ff916c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"ReadRequestedBytes", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::StreamUtils.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*, ::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Core::StreamUtils::Copy)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9ff5e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::StreamUtils.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*, ::ArrayW<uint8_t>, ::ICSharpCode::SharpZipLib::Core::ProgressHandler*, ::System::TimeSpan, ::System::Object*, ::StringW)>(&::ICSharpCode::SharpZipLib::Core::StreamUtils::Copy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ffc92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::StreamUtils.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*, ::ArrayW<uint8_t>, ::ICSharpCode::SharpZipLib::Core::ProgressHandler*, ::System::TimeSpan, ::System::Object*, ::StringW, int64_t)>(&::ICSharpCode::SharpZipLib::Core::StreamUtils::Copy)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x9ffc948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::StreamUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::StreamUtils::*)()>(&::ICSharpCode::SharpZipLib::Core::StreamUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ffcd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Core::StreamUtils::ReadFully(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"ReadFully", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, buffer);
}
inline void ICSharpCode::SharpZipLib::Core::StreamUtils::ReadFully(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"ReadFully", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, buffer, offset, count);
}
inline int32_t ICSharpCode::SharpZipLib::Core::StreamUtils::ReadRequestedBytes(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"ReadRequestedBytes", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, stream, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Core::StreamUtils::Copy(::System::IO::Stream*  source, ::System::IO::Stream*  destination, ::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, buffer);
}
inline void ICSharpCode::SharpZipLib::Core::StreamUtils::Copy(::System::IO::Stream*  source, ::System::IO::Stream*  destination, ::ArrayW<uint8_t>  buffer, ::ICSharpCode::SharpZipLib::Core::ProgressHandler*  progressHandler, ::System::TimeSpan  updateInterval, ::System::Object*  sender, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, buffer, progressHandler, updateInterval, sender, name);
}
inline void ICSharpCode::SharpZipLib::Core::StreamUtils::Copy(::System::IO::Stream*  source, ::System::IO::Stream*  destination, ::ArrayW<uint8_t>  buffer, ::ICSharpCode::SharpZipLib::Core::ProgressHandler*  progressHandler, ::System::TimeSpan  updateInterval, ::System::Object*  sender, ::StringW  name, int64_t  fixedTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {"Copy", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::ProgressHandler*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination, buffer, progressHandler, updateInterval, sender, name, fixedTarget);
}
inline void ICSharpCode::SharpZipLib::Core::StreamUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::StreamUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Core::StreamUtils* ICSharpCode::SharpZipLib::Core::StreamUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::StreamUtils*>());
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::StreamUtils::StreamUtils()   {
}
