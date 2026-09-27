#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyValuePairSet.hpp"
#include "GlobalNamespace/zzzz__KeyValueStringPair_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__KeyValuePairSet_def.hpp"
#include "GlobalNamespace/zzzz__KeyValueStringPair_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KeyValuePairSet.get_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::KeyValueStringPair> (::GlobalNamespace::KeyValuePairSet::*)()>(&::GlobalNamespace::KeyValuePairSet::get_Entries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f0094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyValuePairSet*>(),
                        {"get_Entries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyValuePairSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyValuePairSet::*)()>(&::GlobalNamespace::KeyValuePairSet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f009c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyValuePairSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair>& GlobalNamespace::KeyValuePairSet::__cordl_internal_get_m_entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_entries;
}
constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair> const& GlobalNamespace::KeyValuePairSet::__cordl_internal_get_m_entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_entries;
}
constexpr void GlobalNamespace::KeyValuePairSet::__cordl_internal_set_m_entries(::ArrayW<::GlobalNamespace::KeyValueStringPair>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_entries = value;
}
inline ::ArrayW<::GlobalNamespace::KeyValueStringPair> GlobalNamespace::KeyValuePairSet::get_Entries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyValuePairSet*>(),
                        {"get_Entries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::KeyValueStringPair>>(this, ___internal_method);
}
inline void GlobalNamespace::KeyValuePairSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyValuePairSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KeyValuePairSet* GlobalNamespace::KeyValuePairSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KeyValuePairSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeyValuePairSet::KeyValuePairSet()   {
}
