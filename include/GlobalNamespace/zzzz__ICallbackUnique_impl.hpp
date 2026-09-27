#pragma once
// IWYU pragma private; include "GlobalNamespace/ICallbackUnique.hpp"
#include "GlobalNamespace/zzzz__ICallbackUnique_def.hpp"
#include "GlobalNamespace/zzzz__ICallBack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICallbackUnique.get_Registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ICallbackUnique::*)()>(&::GlobalNamespace::ICallbackUnique::get_Registered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ICallbackUnique*>(),
                    {::i2c::class_of<::GlobalNamespace::ICallbackUnique*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ICallbackUnique.set_Registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ICallbackUnique::*)(bool)>(&::GlobalNamespace::ICallbackUnique::set_Registered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ICallbackUnique*>(),
                    {::i2c::class_of<::GlobalNamespace::ICallbackUnique*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ICallbackUnique::get_Registered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ICallbackUnique*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ICallbackUnique::set_Registered(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ICallbackUnique*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr  GlobalNamespace::ICallbackUnique::operator ::GlobalNamespace::ICallBack*() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* GlobalNamespace::ICallbackUnique::i___GlobalNamespace__ICallBack() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
