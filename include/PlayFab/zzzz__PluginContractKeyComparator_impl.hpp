#pragma once
// IWYU pragma private; include "PlayFab/PluginContractKeyComparator.hpp"
#include "PlayFab/zzzz__PluginContractKey_impl.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_impl.hpp"
#include "PlayFab/zzzz__PluginContractKeyComparator_def.hpp"
#include "PlayFab/zzzz__PluginContractKey_def.hpp"
//  Writing Method size for method: ::PlayFab::PluginContractKeyComparator.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::PluginContractKeyComparator::*)(::PlayFab::PluginContractKey, ::PlayFab::PluginContractKey)>(&::PlayFab::PluginContractKeyComparator::Equals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa7de90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::PluginContractKeyComparator*>(),
                    {::i2c::class_of<::PlayFab::PluginContractKeyComparator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PluginContractKeyComparator.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::PlayFab::PluginContractKeyComparator::*)(::PlayFab::PluginContractKey)>(&::PlayFab::PluginContractKeyComparator::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa7de938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::PluginContractKeyComparator*>(),
                    {::i2c::class_of<::PlayFab::PluginContractKeyComparator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PluginContractKeyComparator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PluginContractKeyComparator::*)()>(&::PlayFab::PluginContractKeyComparator::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa7de964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginContractKeyComparator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayFab::PluginContractKeyComparator::Equals(::PlayFab::PluginContractKey  x, ::PlayFab::PluginContractKey  y)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::PluginContractKeyComparator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t PlayFab::PluginContractKeyComparator::GetHashCode(::PlayFab::PluginContractKey  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::PluginContractKeyComparator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void PlayFab::PluginContractKeyComparator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PluginContractKeyComparator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::PluginContractKeyComparator* PlayFab::PluginContractKeyComparator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PluginContractKeyComparator*>());
}
// Ctor Parameters []
constexpr ::PlayFab::PluginContractKeyComparator::PluginContractKeyComparator()   {
}
