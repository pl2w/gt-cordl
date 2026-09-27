#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstClassInfo_BurstFieldInfo.hpp"
#include "GlobalNamespace/zzzz__BurstClassInfo_EFieldTypes_impl.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_impl.hpp"
#include "GlobalNamespace/zzzz__BurstClassInfo_BurstFieldInfo_def.hpp"
// Ctor Parameters [CppParam { name: "NameHash", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MetatableName", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FieldType", ty: "::GlobalNamespace::BurstClassInfo_EFieldTypes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BurstClassInfo_BurstFieldInfo::BurstClassInfo_BurstFieldInfo(int32_t  NameHash, ::Unity::Collections::FixedString32Bytes  Name, ::Unity::Collections::FixedString32Bytes  MetatableName, int32_t  Offset, ::GlobalNamespace::BurstClassInfo_EFieldTypes  FieldType, int32_t  Size) noexcept  {
this->NameHash = NameHash;
this->Name = Name;
this->MetatableName = MetatableName;
this->Offset = Offset;
this->FieldType = FieldType;
this->Size = Size;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstClassInfo_BurstFieldInfo::BurstClassInfo_BurstFieldInfo()   {
}
