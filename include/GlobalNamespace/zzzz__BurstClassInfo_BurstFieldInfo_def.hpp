#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstClassInfo_BurstFieldInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BurstClassInfo_EFieldTypes_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstClassInfo_BurstFieldInfo)
// Forward declare root types
namespace GlobalNamespace {
struct BurstClassInfo_BurstFieldInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstClassInfo_BurstFieldInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstClassInfo_BurstFieldInfo, "", "BurstClassInfo/BurstFieldInfo");
// [BurstCompile]
// Dependencies BurstClassInfo::EFieldTypes, Unity.Collections.FixedString32Bytes
namespace GlobalNamespace {
// Is value type: true
// CS Name: BurstClassInfo/BurstFieldInfo
struct CORDL_TYPE BurstClassInfo_BurstFieldInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BurstClassInfo_BurstFieldInfo() ;

// Ctor Parameters [CppParam { name: "NameHash", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "MetatableName", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FieldType", ty: "::GlobalNamespace::BurstClassInfo_EFieldTypes", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BurstClassInfo_BurstFieldInfo(int32_t  NameHash, ::Unity::Collections::FixedString32Bytes  Name, ::Unity::Collections::FixedString32Bytes  MetatableName, int32_t  Offset, ::GlobalNamespace::BurstClassInfo_EFieldTypes  FieldType, int32_t  Size) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3204};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field NameHash, offset: 0x0, size: 0x4, def value: None
 int32_t  NameHash;

/// @brief Field Name, offset: 0x4, size: 0x20, def value: None
 ::Unity::Collections::FixedString32Bytes  Name;

/// @brief Field MetatableName, offset: 0x24, size: 0x20, def value: None
 ::Unity::Collections::FixedString32Bytes  MetatableName;

/// @brief Field Offset, offset: 0x44, size: 0x4, def value: None
 int32_t  Offset;

/// @brief Field FieldType, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::BurstClassInfo_EFieldTypes  FieldType;

/// @brief Field Size, offset: 0x4c, size: 0x4, def value: None
 int32_t  Size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstClassInfo_BurstFieldInfo, NameHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstClassInfo_BurstFieldInfo, Name) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstClassInfo_BurstFieldInfo, MetatableName) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstClassInfo_BurstFieldInfo, Offset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstClassInfo_BurstFieldInfo, FieldType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstClassInfo_BurstFieldInfo, Size) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BurstClassInfo_BurstFieldInfo) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
