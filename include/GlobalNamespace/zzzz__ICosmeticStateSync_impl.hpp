#pragma once
// IWYU pragma private; include "GlobalNamespace/ICosmeticStateSync.hpp"
#include "GlobalNamespace/zzzz__ICosmeticStateSync_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICosmeticStateSync.get_StateValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ICosmeticStateSync::*)()>(&::GlobalNamespace::ICosmeticStateSync::get_StateValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ICosmeticStateSync*>(),
                    {::i2c::class_of<::GlobalNamespace::ICosmeticStateSync*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ICosmeticStateSync.OnStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ICosmeticStateSync::*)(int32_t)>(&::GlobalNamespace::ICosmeticStateSync::OnStateUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ICosmeticStateSync*>(),
                    {::i2c::class_of<::GlobalNamespace::ICosmeticStateSync*>(), 1}
                ));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ICosmeticStateSync::get_StateValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ICosmeticStateSync*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ICosmeticStateSync::OnStateUpdate(int32_t  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ICosmeticStateSync*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
