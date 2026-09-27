#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/GuidHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Extensions/zzzz__GuidHelper_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Extensions::GuidHelper.FromLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(int64_t)>(&::Backtrace::Unity::Extensions::GuidHelper::FromLong)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f15b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::GuidHelper*>(),
                        {"FromLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Extensions::GuidHelper.IsNullOrEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Backtrace::Unity::Extensions::GuidHelper::IsNullOrEmpty)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f155b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::GuidHelper*>(),
                        {"IsNullOrEmpty", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Guid Backtrace::Unity::Extensions::GuidHelper::FromLong(int64_t  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::GuidHelper*>(),
                        {"FromLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, source);
}
inline bool Backtrace::Unity::Extensions::GuidHelper::IsNullOrEmpty(::StringW  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::GuidHelper*>(),
                        {"IsNullOrEmpty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, guid);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Extensions::GuidHelper::GuidHelper()   {
}
