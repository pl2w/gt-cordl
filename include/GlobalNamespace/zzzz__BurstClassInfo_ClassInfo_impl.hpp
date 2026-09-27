#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstClassInfo_ClassInfo.hpp"
#include "GlobalNamespace/zzzz__BurstClassInfo_BurstFieldInfo_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_impl.hpp"
#include "GlobalNamespace/zzzz__BurstClassInfo_ClassInfo_def.hpp"
// Ctor Parameters [CppParam { name: "NameHash", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FieldList", ty: "::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_BurstFieldInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FunctionList", ty: "::Unity::Collections::NativeHashMap_2<int32_t,::System::IntPtr>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BurstClassInfo_ClassInfo::BurstClassInfo_ClassInfo(int32_t  NameHash, int32_t  Size, ::Unity::Collections::FixedString32Bytes  Name, ::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_BurstFieldInfo>  FieldList, ::Unity::Collections::NativeHashMap_2<int32_t,::System::IntPtr>  FunctionList) noexcept  {
this->NameHash = NameHash;
this->Size = Size;
this->Name = Name;
this->FieldList = FieldList;
this->FunctionList = FunctionList;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstClassInfo_ClassInfo::BurstClassInfo_ClassInfo()   {
}
