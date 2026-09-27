#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Utilities/DateTimeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Voice/Core/Utilities/zzzz__DateTimeUtility_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Core::Utilities::DateTimeUtility.get_UtcNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)()>(&::Oculus::Voice::Core::Utilities::DateTimeUtility::get_UtcNow)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e30268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Utilities::DateTimeUtility*>(),
                        {"get_UtcNow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Utilities::DateTimeUtility.get_ElapsedMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::Oculus::Voice::Core::Utilities::DateTimeUtility::get_ElapsedMilliseconds)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e302b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Utilities::DateTimeUtility*>(),
                        {"get_ElapsedMilliseconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::DateTime Oculus::Voice::Core::Utilities::DateTimeUtility::get_UtcNow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Utilities::DateTimeUtility*>(),
                        {"get_UtcNow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method);
}
inline int64_t Oculus::Voice::Core::Utilities::DateTimeUtility::get_ElapsedMilliseconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Utilities::DateTimeUtility*>(),
                        {"get_ElapsedMilliseconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Core::Utilities::DateTimeUtility::DateTimeUtility()   {
}
