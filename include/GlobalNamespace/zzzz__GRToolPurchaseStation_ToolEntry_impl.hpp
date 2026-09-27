#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolPurchaseStation_ToolEntry.hpp"
#include "GlobalNamespace/zzzz__GRToolPurchaseStation_ToolEntry_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolPurchaseStation_ToolEntry.GetEntityTypeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolPurchaseStation_ToolEntry::*)()>(&::GlobalNamespace::GRToolPurchaseStation_ToolEntry::GetEntityTypeId)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58c57f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation_ToolEntry>(),
                        {"GetEntityTypeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::GRToolPurchaseStation_ToolEntry::GetEntityTypeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolPurchaseStation_ToolEntry>(),
                        {"GetEntityTypeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "displayToolParent", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entityPrefab", ty: "::UnityW<::GlobalNamespace::GameEntity>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "toolName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "toolCost", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entityTypeId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entityTypeIdSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRToolPurchaseStation_ToolEntry::GRToolPurchaseStation_ToolEntry(::UnityW<::UnityEngine::Transform>  displayToolParent, ::UnityW<::GlobalNamespace::GameEntity>  entityPrefab, ::StringW  toolName, int32_t  toolCost, int32_t  entityTypeId, bool  entityTypeIdSet) noexcept  {
this->displayToolParent = displayToolParent;
this->entityPrefab = entityPrefab;
this->toolName = toolName;
this->toolCost = toolCost;
this->entityTypeId = entityTypeId;
this->entityTypeIdSet = entityTypeIdSet;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolPurchaseStation_ToolEntry::GRToolPurchaseStation_ToolEntry()   {
}
