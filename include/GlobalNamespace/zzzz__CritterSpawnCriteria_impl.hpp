#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterSpawnCriteria.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__CritterSpawnCriteria_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CritterSpawnCriteria.CanSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CritterSpawnCriteria::*)()>(&::GlobalNamespace::CritterSpawnCriteria::CanSpawn)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x56f29c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnCriteria*>(),
                        {"CanSpawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterSpawnCriteria._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterSpawnCriteria::*)()>(&::GlobalNamespace::CritterSpawnCriteria::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56f2ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnCriteria*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::CritterSpawnCriteria::__cordl_internal_get_spawnTimings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTimings;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::CritterSpawnCriteria::__cordl_internal_get_spawnTimings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTimings;
}
constexpr void GlobalNamespace::CritterSpawnCriteria::__cordl_internal_set_spawnTimings(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnTimings = value;
}
inline bool GlobalNamespace::CritterSpawnCriteria::CanSpawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnCriteria*>(),
                        {"CanSpawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CritterSpawnCriteria::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnCriteria*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CritterSpawnCriteria* GlobalNamespace::CritterSpawnCriteria::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CritterSpawnCriteria*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CritterSpawnCriteria::CritterSpawnCriteria()   {
}
