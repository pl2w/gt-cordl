#pragma once
// IWYU pragma private; include "BuildSafe/AssetDatabase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssetDatabase)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace BuildSafe {
class AssetDatabase;
}
// Write type traits
MARK_REF_T(::BuildSafe::AssetDatabase*);
DEFINE_IL2CPP_CLASS(::BuildSafe::AssetDatabase*, "BuildSafe", "AssetDatabase");
// Dependencies System.Object, UnityEngine.Object
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.AssetDatabase
class CORDL_TYPE AssetDatabase : public ::System::Object {
public:
// Declarations
/// @brief Method FindAssetsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline ::ArrayW<::StringW> FindAssetsOfType() ;

/// @brief Method LoadAssetAtPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline T LoadAssetAtPath(::StringW  assetPath) ;

/// @brief Method LoadAssetsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline ::ArrayW<T> LoadAssetsOfType() ;

/// @brief Method SaveAssetsToDisk, addr 0x5c4ec44, size 0x4, virtual false, abstract: false, final false
static inline void SaveAssetsToDisk(::ArrayW<::UnityEngine::Object*>  assetsToSave, bool  saveProject) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method SaveToDisk, addr 0x5c4ec40, size 0x4, virtual false, abstract: false, final false
static inline void SaveToDisk(/* [ParamArray] */ ::ArrayW<::UnityEngine::Object*>  assetsToSave) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetDatabase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetDatabase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetDatabase(AssetDatabase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetDatabase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetDatabase(AssetDatabase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4244};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::AssetDatabase) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe
