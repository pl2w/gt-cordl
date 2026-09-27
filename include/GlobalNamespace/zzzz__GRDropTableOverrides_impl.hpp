#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDropTableOverrides.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GRDropTableOverrides_def.hpp"
#include "GlobalNamespace/zzzz__GRBreakableItemSpawnConfig_def.hpp"
#include "GlobalNamespace/zzzz__GRDropTableOverrides_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRDropTableOverrides.GetOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> (::GlobalNamespace::GRDropTableOverrides::*)(::GlobalNamespace::GRBreakableItemSpawnConfig*)>(&::GlobalNamespace::GRDropTableOverrides::GetOverride)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5877578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropTableOverrides*>(),
                        {"GetOverride", {}, {::i2c::type_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDropTableOverrides._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDropTableOverrides::*)()>(&::GlobalNamespace::GRDropTableOverrides::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5877674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropTableOverrides*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>*& GlobalNamespace::GRDropTableOverrides::__cordl_internal_get_overrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrides;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>* const& GlobalNamespace::GRDropTableOverrides::__cordl_internal_get_overrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrides;
}
constexpr void GlobalNamespace::GRDropTableOverrides::__cordl_internal_set_overrides(::System::Collections::Generic::List_1<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrides = value;
}
inline ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> GlobalNamespace::GRDropTableOverrides::GetOverride(::GlobalNamespace::GRBreakableItemSpawnConfig*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropTableOverrides*>(),
                        {"GetOverride", {}, {::i2c::type_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>>(this, ___internal_method, table);
}
inline void GlobalNamespace::GRDropTableOverrides::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropTableOverrides*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRDropTableOverrides* GlobalNamespace::GRDropTableOverrides::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRDropTableOverrides*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDropTableOverrides::GRDropTableOverrides()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRDropTableOverrides_DropTableOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDropTableOverrides_DropTableOverride::*)()>(&::GlobalNamespace::GRDropTableOverrides_DropTableOverride::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587767c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& GlobalNamespace::GRDropTableOverrides_DropTableOverride::__cordl_internal_get_table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& GlobalNamespace::GRDropTableOverrides_DropTableOverride::__cordl_internal_get_table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr void GlobalNamespace::GRDropTableOverrides_DropTableOverride::__cordl_internal_set_table(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___table = value;
}
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& GlobalNamespace::GRDropTableOverrides_DropTableOverride::__cordl_internal_get_overrideTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTable;
}
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& GlobalNamespace::GRDropTableOverrides_DropTableOverride::__cordl_internal_get_overrideTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideTable;
}
constexpr void GlobalNamespace::GRDropTableOverrides_DropTableOverride::__cordl_internal_set_overrideTable(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideTable = value;
}
inline void GlobalNamespace::GRDropTableOverrides_DropTableOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRDropTableOverrides_DropTableOverride* GlobalNamespace::GRDropTableOverrides_DropTableOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDropTableOverrides_DropTableOverride::GRDropTableOverrides_DropTableOverride()   {
}
