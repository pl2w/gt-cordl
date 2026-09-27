#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityZone.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntityZone_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameEntityZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntityZone::*)()>(&::GlobalNamespace::GameEntityZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58322e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameEntityZone::__cordl_internal_get_zoneId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneId;
}
constexpr int32_t const& GlobalNamespace::GameEntityZone::__cordl_internal_get_zoneId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneId;
}
constexpr void GlobalNamespace::GameEntityZone::__cordl_internal_set_zoneId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneId = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GameEntityZone::__cordl_internal_get_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GameEntityZone::__cordl_internal_get_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr void GlobalNamespace::GameEntityZone::__cordl_internal_set_owner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owner = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*& GlobalNamespace::GameEntityZone::__cordl_internal_get_entities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entities;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>* const& GlobalNamespace::GameEntityZone::__cordl_internal_get_entities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entities;
}
constexpr void GlobalNamespace::GameEntityZone::__cordl_internal_set_entities(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entities = value;
}
inline void GlobalNamespace::GameEntityZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntityZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityZone* GlobalNamespace::GameEntityZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntityZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityZone::GameEntityZone()   {
}
