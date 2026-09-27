#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/DateTimeHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Common/zzzz__DateTimeHelper_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Common::DateTimeHelper.Now
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)()>(&::Backtrace::Unity::Common::DateTimeHelper::Now)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f26790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::DateTimeHelper*>(),
                        {"Now", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::DateTimeHelper.Timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Backtrace::Unity::Common::DateTimeHelper::Timestamp)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f162f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::DateTimeHelper*>(),
                        {"Timestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::DateTimeHelper.TimestampMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Backtrace::Unity::Common::DateTimeHelper::TimestampMs)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f1e520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::DateTimeHelper*>(),
                        {"TimestampMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::TimeSpan Backtrace::Unity::Common::DateTimeHelper::Now()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::DateTimeHelper*>(),
                        {"Now", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method);
}
inline int32_t Backtrace::Unity::Common::DateTimeHelper::Timestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::DateTimeHelper*>(),
                        {"Timestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline double_t Backtrace::Unity::Common::DateTimeHelper::TimestampMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::DateTimeHelper*>(),
                        {"TimestampMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Common::DateTimeHelper::DateTimeHelper()   {
}
