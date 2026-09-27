#pragma once
// IWYU pragma private; include "GorillaTag/WatchableIntSO.hpp"
#include "GlobalNamespace/zzzz__WatchableGenericSO_1_impl.hpp"
#include "GorillaTag/zzzz__WatchableIntSO_def.hpp"
//  Writing Method size for method: ::GorillaTag::WatchableIntSO.get_currentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::WatchableIntSO::*)()>(&::GorillaTag::WatchableIntSO::get_currentValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d2800c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::WatchableIntSO*>(),
                        {"get_currentValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::WatchableIntSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::WatchableIntSO::*)()>(&::GorillaTag::WatchableIntSO::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d28054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::WatchableIntSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GorillaTag::WatchableIntSO::get_currentValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::WatchableIntSO*>(),
                        {"get_currentValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::WatchableIntSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::WatchableIntSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::WatchableIntSO* GorillaTag::WatchableIntSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::WatchableIntSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::WatchableIntSO::WatchableIntSO()   {
}
