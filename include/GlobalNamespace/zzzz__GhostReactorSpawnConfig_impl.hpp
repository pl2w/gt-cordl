#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorSpawnConfig.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_EntitySpawnGroup_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_SpawnPointType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorSpawnConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorSpawnConfig::*)()>(&::GlobalNamespace::GhostReactorSpawnConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5866040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSpawnConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>*& GlobalNamespace::GhostReactorSpawnConfig::__cordl_internal_get_entitySpawnGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entitySpawnGroups;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>* const& GlobalNamespace::GhostReactorSpawnConfig::__cordl_internal_get_entitySpawnGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entitySpawnGroups;
}
constexpr void GlobalNamespace::GhostReactorSpawnConfig::__cordl_internal_set_entitySpawnGroups(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entitySpawnGroups = value;
}
inline void GlobalNamespace::GhostReactorSpawnConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSpawnConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorSpawnConfig* GlobalNamespace::GhostReactorSpawnConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorSpawnConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorSpawnConfig::GhostReactorSpawnConfig()   {
}
