#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticRPCEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StaticRPCEntry_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticRPCEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticRPCEntry::*)(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*, uint8_t, ::GlobalNamespace::NetworkSystem_StaticRPC*)>(&::GlobalNamespace::StaticRPCEntry::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x570d964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticRPCEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetworkSystem_StaticRPC*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*& GlobalNamespace::StaticRPCEntry::__cordl_internal_get_placeholder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeholder;
}
constexpr ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder* const& GlobalNamespace::StaticRPCEntry::__cordl_internal_get_placeholder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeholder;
}
constexpr void GlobalNamespace::StaticRPCEntry::__cordl_internal_set_placeholder(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeholder = value;
}
constexpr uint8_t& GlobalNamespace::StaticRPCEntry::__cordl_internal_get_code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr uint8_t const& GlobalNamespace::StaticRPCEntry::__cordl_internal_get_code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___code;
}
constexpr void GlobalNamespace::StaticRPCEntry::__cordl_internal_set_code(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___code = value;
}
constexpr ::GlobalNamespace::NetworkSystem_StaticRPC*& GlobalNamespace::StaticRPCEntry::__cordl_internal_get_lookupMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookupMethod;
}
constexpr ::GlobalNamespace::NetworkSystem_StaticRPC* const& GlobalNamespace::StaticRPCEntry::__cordl_internal_get_lookupMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookupMethod;
}
constexpr void GlobalNamespace::StaticRPCEntry::__cordl_internal_set_lookupMethod(::GlobalNamespace::NetworkSystem_StaticRPC*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookupMethod = value;
}
inline void GlobalNamespace::StaticRPCEntry::_ctor(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  placeholder, uint8_t  code, ::GlobalNamespace::NetworkSystem_StaticRPC*  lookupMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticRPCEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetworkSystem_StaticRPC*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, placeholder, code, lookupMethod);
}
inline ::GlobalNamespace::StaticRPCEntry* GlobalNamespace::StaticRPCEntry::New_ctor(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  placeholder, uint8_t  code, ::GlobalNamespace::NetworkSystem_StaticRPC*  lookupMethod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StaticRPCEntry*>(placeholder, code, lookupMethod));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticRPCEntry::StaticRPCEntry()   {
}
