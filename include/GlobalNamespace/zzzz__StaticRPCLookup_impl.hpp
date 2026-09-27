#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticRPCLookup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StaticRPCLookup_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystem_def.hpp"
#include "GlobalNamespace/zzzz__StaticRPCEntry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticRPCLookup.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticRPCLookup::*)(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*, uint8_t, ::GlobalNamespace::NetworkSystem_StaticRPC*)>(&::GlobalNamespace::StaticRPCLookup::Add)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x570d9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticRPCLookup*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetworkSystem_StaticRPC*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticRPCLookup.CodeToMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkSystem_StaticRPC* (::GlobalNamespace::StaticRPCLookup::*)(uint8_t)>(&::GlobalNamespace::StaticRPCLookup::CodeToMethod)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x570db18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticRPCLookup*>(),
                        {"CodeToMethod", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticRPCLookup.PlaceholderToCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GlobalNamespace::StaticRPCLookup::*)(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*)>(&::GlobalNamespace::StaticRPCLookup::PlaceholderToCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x570dba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticRPCLookup*>(),
                        {"PlaceholderToCode", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticRPCLookup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticRPCLookup::*)()>(&::GlobalNamespace::StaticRPCLookup::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x570dc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticRPCLookup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StaticRPCEntry*>*& GlobalNamespace::StaticRPCLookup::__cordl_internal_get_entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StaticRPCEntry*>* const& GlobalNamespace::StaticRPCLookup::__cordl_internal_get_entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr void GlobalNamespace::StaticRPCLookup::__cordl_internal_set_entries(::System::Collections::Generic::List_1<::GlobalNamespace::StaticRPCEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entries = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*& GlobalNamespace::StaticRPCLookup::__cordl_internal_get_eventCodeEntryLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventCodeEntryLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>* const& GlobalNamespace::StaticRPCLookup::__cordl_internal_get_eventCodeEntryLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventCodeEntryLookup;
}
constexpr void GlobalNamespace::StaticRPCLookup::__cordl_internal_set_eventCodeEntryLookup(::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventCodeEntryLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*,int32_t>*& GlobalNamespace::StaticRPCLookup::__cordl_internal_get_placeholderEntryLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeholderEntryLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*,int32_t>* const& GlobalNamespace::StaticRPCLookup::__cordl_internal_get_placeholderEntryLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeholderEntryLookup;
}
constexpr void GlobalNamespace::StaticRPCLookup::__cordl_internal_set_placeholderEntryLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeholderEntryLookup = value;
}
inline void GlobalNamespace::StaticRPCLookup::Add(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  placeholder, uint8_t  code, ::GlobalNamespace::NetworkSystem_StaticRPC*  lookupMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticRPCLookup*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetworkSystem_StaticRPC*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, placeholder, code, lookupMethod);
}
inline ::GlobalNamespace::NetworkSystem_StaticRPC* GlobalNamespace::StaticRPCLookup::CodeToMethod(uint8_t  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticRPCLookup*>(),
                        {"CodeToMethod", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkSystem_StaticRPC*>(this, ___internal_method, code);
}
inline uint8_t GlobalNamespace::StaticRPCLookup::PlaceholderToCode(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*  placeholder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticRPCLookup*>(),
                        {"PlaceholderToCode", {}, {::i2c::type_of<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, placeholder);
}
inline void GlobalNamespace::StaticRPCLookup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticRPCLookup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StaticRPCLookup* GlobalNamespace::StaticRPCLookup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StaticRPCLookup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticRPCLookup::StaticRPCLookup()   {
}
