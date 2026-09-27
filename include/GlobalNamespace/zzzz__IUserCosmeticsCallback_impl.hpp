#pragma once
// IWYU pragma private; include "GlobalNamespace/IUserCosmeticsCallback.hpp"
#include "GlobalNamespace/zzzz__IUserCosmeticsCallback_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IUserCosmeticsCallback.OnGetUserCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IUserCosmeticsCallback::*)(::StringW)>(&::GlobalNamespace::IUserCosmeticsCallback::OnGetUserCosmetics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IUserCosmeticsCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::IUserCosmeticsCallback*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUserCosmeticsCallback.get_PendingUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IUserCosmeticsCallback::*)()>(&::GlobalNamespace::IUserCosmeticsCallback::get_PendingUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IUserCosmeticsCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::IUserCosmeticsCallback*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IUserCosmeticsCallback.set_PendingUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IUserCosmeticsCallback::*)(bool)>(&::GlobalNamespace::IUserCosmeticsCallback::set_PendingUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IUserCosmeticsCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::IUserCosmeticsCallback*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IUserCosmeticsCallback::OnGetUserCosmetics(::StringW  cosmetics)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IUserCosmeticsCallback*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cosmetics);
}
inline bool GlobalNamespace::IUserCosmeticsCallback::get_PendingUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IUserCosmeticsCallback*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::IUserCosmeticsCallback::set_PendingUpdate(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IUserCosmeticsCallback*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
