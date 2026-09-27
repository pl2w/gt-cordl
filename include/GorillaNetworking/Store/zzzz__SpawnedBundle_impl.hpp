#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/SpawnedBundle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/Store/zzzz__SpawnedBundle_def.hpp"
#include "GorillaNetworking/Store/zzzz__BundleStand_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::SpawnedBundle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::SpawnedBundle::*)()>(&::GorillaNetworking::Store::SpawnedBundle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca3c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::SpawnedBundle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::Store::SpawnedBundle::__cordl_internal_get_spawnLocationPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocationPath;
}
constexpr ::StringW const& GorillaNetworking::Store::SpawnedBundle::__cordl_internal_get_spawnLocationPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocationPath;
}
constexpr void GorillaNetworking::Store::SpawnedBundle::__cordl_internal_set_spawnLocationPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnLocationPath = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::BundleStand>& GorillaNetworking::Store::SpawnedBundle::__cordl_internal_get_bundleStand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleStand;
}
constexpr ::UnityW<::GorillaNetworking::Store::BundleStand> const& GorillaNetworking::Store::SpawnedBundle::__cordl_internal_get_bundleStand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleStand;
}
constexpr void GorillaNetworking::Store::SpawnedBundle::__cordl_internal_set_bundleStand(::UnityW<::GorillaNetworking::Store::BundleStand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundleStand = value;
}
inline void GorillaNetworking::Store::SpawnedBundle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::SpawnedBundle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::SpawnedBundle* GorillaNetworking::Store::SpawnedBundle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::SpawnedBundle*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::SpawnedBundle::SpawnedBundle()   {
}
