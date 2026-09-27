#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstClassInfo_ClassInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BurstClassInfo_BurstFieldInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstClassInfo_ClassInfo)
// Forward declare root types
namespace GlobalNamespace {
struct BurstClassInfo_ClassInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstClassInfo_ClassInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstClassInfo_ClassInfo, "", "BurstClassInfo/ClassInfo");
// [BurstCompile]
// Dependencies BurstClassInfo::BurstFieldInfo, System.IntPtr, Unity.Collections.FixedString32Bytes, Unity.Collections.NativeHashMap`2<TKey, TValue>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BurstClassInfo/ClassInfo
struct CORDL_TYPE BurstClassInfo_ClassInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BurstClassInfo_ClassInfo() ;

// Ctor Parameters [CppParam { name: "NameHash", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "FieldList", ty: "::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_BurstFieldInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "FunctionList", ty: "::Unity::Collections::NativeHashMap_2<int32_t,::System::IntPtr>", modifiers: "", def_value: None, comment: None }]
constexpr BurstClassInfo_ClassInfo(int32_t  NameHash, int32_t  Size, ::Unity::Collections::FixedString32Bytes  Name, ::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_BurstFieldInfo>  FieldList, ::Unity::Collections::NativeHashMap_2<int32_t,::System::IntPtr>  FunctionList) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3205};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field NameHash, offset: 0x0, size: 0x4, def value: None
 int32_t  NameHash;

/// @brief Field Size, offset: 0x4, size: 0x4, def value: None
 int32_t  Size;

/// @brief Field Name, offset: 0x8, size: 0x20, def value: None
 ::Unity::Collections::FixedString32Bytes  Name;

/// @brief Field FieldList, offset: 0x28, size: 0x8, def value: None
 ::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_BurstFieldInfo>  FieldList;

/// @brief Field FunctionList, offset: 0x30, size: 0x8, def value: None
 ::Unity::Collections::NativeHashMap_2<int32_t,::System::IntPtr>  FunctionList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstClassInfo_ClassInfo, NameHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstClassInfo_ClassInfo, Size) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstClassInfo_ClassInfo, Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstClassInfo_ClassInfo, FieldList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstClassInfo_ClassInfo, FunctionList) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BurstClassInfo_ClassInfo) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
