#pragma once
// IWYU pragma private; include "GlobalNamespace/Id128Ext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Id128Ext_def.hpp"
#include "GlobalNamespace/zzzz__Id128_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Id128Ext.ToId128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id128 (*)(::UnityEngine::Hash128)>(&::GlobalNamespace::Id128Ext::ToId128)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a1cfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128Ext*>(),
                        {"ToId128", {}, {::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Id128Ext.ToId128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id128 (*)(::System::Guid)>(&::GlobalNamespace::Id128Ext::ToId128)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1d008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128Ext*>(),
                        {"ToId128", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::Id128 GlobalNamespace::Id128Ext::ToId128(::UnityEngine::Hash128  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128Ext*>(),
                        {"ToId128", {}, {::i2c::type_of<::UnityEngine::Hash128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id128>(nullptr, ___internal_method, h);
}
inline ::GlobalNamespace::Id128 GlobalNamespace::Id128Ext::ToId128(::System::Guid  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Id128Ext*>(),
                        {"ToId128", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id128>(nullptr, ___internal_method, g);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Id128Ext::Id128Ext()   {
}
