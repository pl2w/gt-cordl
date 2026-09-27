#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabTable_PrefabAcquireData.hpp"
#include "Fusion/zzzz__NetworkPrefabTable_PrefabAcquireData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData.get_InstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::*)()>(&::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::get_InstanceCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fcf128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>(),
                        {"get_InstanceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData.set_InstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::*)(int32_t)>(&::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::set_InstanceCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fcf2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>(),
                        {"set_InstanceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData.get_IsSynchronous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::*)()>(&::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::get_IsSynchronous)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fcfeb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>(),
                        {"get_IsSynchronous", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData.set_IsSynchronous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::*)(bool)>(&::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::set_IsSynchronous)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fcfe98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>(),
                        {"set_IsSynchronous", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::get_InstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>(),
                        {"get_InstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::set_InstanceCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>(),
                        {"set_InstanceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::get_IsSynchronous()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>(),
                        {"get_IsSynchronous", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::set_IsSynchronous(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData>(),
                        {"set_IsSynchronous", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "RawValue", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::NetworkPrefabTable_PrefabAcquireData(uint32_t  RawValue) noexcept  {
this->RawValue = RawValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData::NetworkPrefabTable_PrefabAcquireData()   {
}
