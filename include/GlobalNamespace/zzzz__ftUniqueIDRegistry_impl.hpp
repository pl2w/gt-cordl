#pragma once
// IWYU pragma private; include "GlobalNamespace/ftUniqueIDRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ftUniqueIDRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ftUniqueIDRegistry.Deregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::ftUniqueIDRegistry::Deregister)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f2b9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftUniqueIDRegistry*>(),
                        {"Deregister", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftUniqueIDRegistry.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::GlobalNamespace::ftUniqueIDRegistry::Register)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f2bb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftUniqueIDRegistry*>(),
                        {"Register", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftUniqueIDRegistry.GetInstanceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::ftUniqueIDRegistry::GetInstanceId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f2baac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftUniqueIDRegistry*>(),
                        {"GetInstanceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftUniqueIDRegistry.GetUID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::ftUniqueIDRegistry::GetUID)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f2bc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftUniqueIDRegistry*>(),
                        {"GetUID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ftUniqueIDRegistry::setStaticF_Mapping(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "Mapping", ::GlobalNamespace::ftUniqueIDRegistry*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* GlobalNamespace::ftUniqueIDRegistry::getStaticF_Mapping()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "Mapping", ::GlobalNamespace::ftUniqueIDRegistry*>();
}
inline void GlobalNamespace::ftUniqueIDRegistry::setStaticF_MappingInv(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "MappingInv", ::GlobalNamespace::ftUniqueIDRegistry*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* GlobalNamespace::ftUniqueIDRegistry::getStaticF_MappingInv()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "MappingInv", ::GlobalNamespace::ftUniqueIDRegistry*>();
}
inline void GlobalNamespace::ftUniqueIDRegistry::Deregister(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftUniqueIDRegistry*>(),
                        {"Deregister", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
inline void GlobalNamespace::ftUniqueIDRegistry::Register(int32_t  id, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftUniqueIDRegistry*>(),
                        {"Register", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, value);
}
inline int32_t GlobalNamespace::ftUniqueIDRegistry::GetInstanceId(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftUniqueIDRegistry*>(),
                        {"GetInstanceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, id);
}
inline int32_t GlobalNamespace::ftUniqueIDRegistry::GetUID(int32_t  instanceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftUniqueIDRegistry*>(),
                        {"GetUID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, instanceId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ftUniqueIDRegistry::ftUniqueIDRegistry()   {
}
