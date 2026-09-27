#pragma once
// IWYU pragma private; include "CSCore/IWriteable.hpp"
#include "CSCore/zzzz__IWriteable_def.hpp"
//  Writing Method size for method: ::CSCore::IWriteable.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::IWriteable::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::CSCore::IWriteable::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::IWriteable*>(),
                    {::i2c::class_of<::CSCore::IWriteable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void CSCore::IWriteable::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::IWriteable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
