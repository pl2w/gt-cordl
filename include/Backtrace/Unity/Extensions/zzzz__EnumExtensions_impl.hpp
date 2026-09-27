#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/EnumExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Extensions/zzzz__EnumExtensions_def.hpp"
#include "System/zzzz__Enum_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Extensions::EnumExtensions.HasFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Enum*, ::System::Enum*)>(&::Backtrace::Unity::Extensions::EnumExtensions::HasFlag)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5f258c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::EnumExtensions*>(),
                        {"HasFlag", {}, {::i2c::type_of<::System::Enum*>(), ::i2c::type_of<::System::Enum*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Backtrace::Unity::Extensions::EnumExtensions::HasFlag(::System::Enum*  variable, ::System::Enum*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::EnumExtensions*>(),
                        {"HasFlag", {}, {::i2c::type_of<::System::Enum*>(), ::i2c::type_of<::System::Enum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, variable, value);
}
template<typename T>
inline bool Backtrace::Unity::Extensions::EnumExtensions::HasAllFlags(T  rawSource)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Extensions::EnumExtensions*>(),
                    {"HasAllFlags", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rawSource);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Extensions::EnumExtensions::EnumExtensions()   {
}
