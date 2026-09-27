#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterSpawnerShadeHidden.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerTimed_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerShadeHidden_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerShadeHidden.SetRandomVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerShadeHidden::*)(::GlobalNamespace::CosmeticCritter*)>(&::GlobalNamespace::CosmeticCritterSpawnerShadeHidden::SetRandomVariables)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x57f3348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeHidden*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeHidden*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerShadeHidden._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerShadeHidden::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerShadeHidden::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57f3430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeHidden*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& GlobalNamespace::CosmeticCritterSpawnerShadeHidden::__cordl_internal_get_orbitHeightOffsetMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitHeightOffsetMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CosmeticCritterSpawnerShadeHidden::__cordl_internal_get_orbitHeightOffsetMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitHeightOffsetMinMax;
}
constexpr void GlobalNamespace::CosmeticCritterSpawnerShadeHidden::__cordl_internal_set_orbitHeightOffsetMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitHeightOffsetMinMax = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CosmeticCritterSpawnerShadeHidden::__cordl_internal_get_orbitRadiusMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitRadiusMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CosmeticCritterSpawnerShadeHidden::__cordl_internal_get_orbitRadiusMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitRadiusMinMax;
}
constexpr void GlobalNamespace::CosmeticCritterSpawnerShadeHidden::__cordl_internal_set_orbitRadiusMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitRadiusMinMax = value;
}
inline void GlobalNamespace::CosmeticCritterSpawnerShadeHidden::SetRandomVariables(::GlobalNamespace::CosmeticCritter*  critter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeHidden*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter);
}
inline void GlobalNamespace::CosmeticCritterSpawnerShadeHidden::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeHidden*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterSpawnerShadeHidden* GlobalNamespace::CosmeticCritterSpawnerShadeHidden::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterSpawnerShadeHidden*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterSpawnerShadeHidden::CosmeticCritterSpawnerShadeHidden()   {
}
