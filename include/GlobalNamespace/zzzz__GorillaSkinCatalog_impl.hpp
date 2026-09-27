#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSkinCatalog.hpp"
#include "GlobalNamespace/zzzz__GorillaSkin_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSkinCatalog_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinCatalog._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinCatalog::*)()>(&::GlobalNamespace::GorillaSkinCatalog::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5652260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinCatalog*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaSkin>>& GlobalNamespace::GorillaSkinCatalog::__cordl_internal_get_skins()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skins;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaSkin>> const& GlobalNamespace::GorillaSkinCatalog::__cordl_internal_get_skins() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skins;
}
constexpr void GlobalNamespace::GorillaSkinCatalog::__cordl_internal_set_skins(::ArrayW<::UnityW<::GlobalNamespace::GorillaSkin>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skins = value;
}
inline void GlobalNamespace::GorillaSkinCatalog::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinCatalog*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSkinCatalog* GlobalNamespace::GorillaSkinCatalog::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSkinCatalog*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSkinCatalog::GorillaSkinCatalog()   {
}
