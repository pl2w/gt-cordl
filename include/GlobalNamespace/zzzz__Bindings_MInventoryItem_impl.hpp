#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_MInventoryItem.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_impl.hpp"
#include "GlobalNamespace/zzzz__Bindings_MInventoryItem_def.hpp"
// Ctor Parameters [CppParam { name: "Name", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Quantity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InGameId", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DisplayName", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DisplayDescription", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_cordl_ID", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Bindings_MInventoryItem::Bindings_MInventoryItem(::Unity::Collections::FixedString512Bytes  Name, int32_t  Quantity, ::Unity::Collections::FixedString512Bytes  InGameId, ::Unity::Collections::FixedString512Bytes  DisplayName, ::Unity::Collections::FixedString512Bytes  DisplayDescription, ::Unity::Collections::FixedString512Bytes  _cordl_ID) noexcept  {
this->Name = Name;
this->Quantity = Quantity;
this->InGameId = InGameId;
this->DisplayName = DisplayName;
this->DisplayDescription = DisplayDescription;
this->_cordl_ID = _cordl_ID;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_MInventoryItem::Bindings_MInventoryItem()   {
}
