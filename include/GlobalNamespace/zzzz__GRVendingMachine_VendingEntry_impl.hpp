#pragma once
// IWYU pragma private; include "GlobalNamespace/GRVendingMachine_VendingEntry.hpp"
#include "GlobalNamespace/zzzz__GRVendingMachine_VendingEntry_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine_VendingEntry.GetEntityTypeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRVendingMachine_VendingEntry::*)()>(&::GlobalNamespace::GRVendingMachine_VendingEntry::GetEntityTypeId)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58efaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine_VendingEntry>(),
                        {"GetEntityTypeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::GRVendingMachine_VendingEntry::GetEntityTypeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine_VendingEntry>(),
                        {"GetEntityTypeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "transportVisual", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entityPrefab", ty: "::UnityW<::GlobalNamespace::GameEntity>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "itemName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entityTypeId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entityTypeIdSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRVendingMachine_VendingEntry::GRVendingMachine_VendingEntry(::UnityW<::UnityEngine::Transform>  transportVisual, ::UnityW<::GlobalNamespace::GameEntity>  entityPrefab, ::StringW  itemName, int32_t  entityTypeId, bool  entityTypeIdSet) noexcept  {
this->transportVisual = transportVisual;
this->entityPrefab = entityPrefab;
this->itemName = itemName;
this->entityTypeId = entityTypeId;
this->entityTypeIdSet = entityTypeIdSet;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRVendingMachine_VendingEntry::GRVendingMachine_VendingEntry()   {
}
