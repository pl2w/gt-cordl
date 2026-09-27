#pragma once
// IWYU pragma private; include "GlobalNamespace/UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData)
// Forward declare root types
namespace GlobalNamespace {
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, "", "UnitySourceGeneratedAssemblyMonoScriptTypes_v1/MonoScriptData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnitySourceGeneratedAssemblyMonoScriptTypes_v1/MonoScriptData
struct CORDL_TYPE UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData() ;

// Ctor Parameters [CppParam { name: "FilePathsData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TypesData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TotalTypes", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TotalFiles", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsEditorOnly", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData(::ArrayW<uint8_t>  FilePathsData, ::ArrayW<uint8_t>  TypesData, int32_t  TotalTypes, int32_t  TotalFiles, bool  IsEditorOnly) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29991};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field FilePathsData, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  FilePathsData;

/// @brief Field TypesData, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  TypesData;

/// @brief Field TotalTypes, offset: 0x10, size: 0x4, def value: None
 int32_t  TotalTypes;

/// @brief Field TotalFiles, offset: 0x14, size: 0x4, def value: None
 int32_t  TotalFiles;

/// @brief Field IsEditorOnly, offset: 0x18, size: 0x1, def value: None
 bool  IsEditorOnly;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, FilePathsData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, TypesData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, TotalTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, TotalFiles) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData, IsEditorOnly) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
