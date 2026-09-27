#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterSpawnerButterflyNet.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerTimed_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerButterflyNet_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerButterflyNet.SetRandomVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerButterflyNet::*)(::GlobalNamespace::CosmeticCritter*)>(&::GlobalNamespace::CosmeticCritterSpawnerButterflyNet::SetRandomVariables)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x57f1d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerButterflyNet*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerButterflyNet*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerButterflyNet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerButterflyNet::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerButterflyNet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57f1e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerButterflyNet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CosmeticCritterSpawnerButterflyNet::__cordl_internal_get_spawnRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRadius;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterSpawnerButterflyNet::__cordl_internal_get_spawnRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRadius;
}
constexpr void GlobalNamespace::CosmeticCritterSpawnerButterflyNet::__cordl_internal_set_spawnRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnRadius = value;
}
inline void GlobalNamespace::CosmeticCritterSpawnerButterflyNet::SetRandomVariables(::GlobalNamespace::CosmeticCritter*  critter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerButterflyNet*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter);
}
inline void GlobalNamespace::CosmeticCritterSpawnerButterflyNet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerButterflyNet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterSpawnerButterflyNet* GlobalNamespace::CosmeticCritterSpawnerButterflyNet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterSpawnerButterflyNet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterSpawnerButterflyNet::CosmeticCritterSpawnerButterflyNet()   {
}
