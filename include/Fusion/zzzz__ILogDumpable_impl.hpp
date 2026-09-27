#pragma once
// IWYU pragma private; include "Fusion/ILogDumpable.hpp"
#include "Fusion/zzzz__ILogDumpable_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Fusion::ILogDumpable.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ILogDumpable::*)(::System::Text::StringBuilder*)>(&::Fusion::ILogDumpable::Dump)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ILogDumpable*>(),
                    {::i2c::class_of<::Fusion::ILogDumpable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Fusion::ILogDumpable::Dump(::System::Text::StringBuilder*  builder)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ILogDumpable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
