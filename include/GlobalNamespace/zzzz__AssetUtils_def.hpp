#pragma once
// IWYU pragma private; include "GlobalNamespace/AssetUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetUtils)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class AssetUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AssetUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AssetUtils*, "", "AssetUtils");
// [Extension]
// Dependencies System.Object, UnityEngine.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AssetUtils
class CORDL_TYPE AssetUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ComputeAssetId, addr 0x5ae0ec0, size 0x8, virtual false, abstract: false, final false
static inline int64_t ComputeAssetId(::UnityEngine::Object*  asset, bool  _cordl_unsigned) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method ExecAndUnloadUnused, addr 0x5ae0eb8, size 0x4, virtual false, abstract: false, final false
static inline void ExecAndUnloadUnused(::System::Action*  action) ;

/// @brief Method FindAllAssetsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline ::ArrayW<T> FindAllAssetsOfType() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method FindAllAssetsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline void FindAllAssetsOfType(::by_ref<::ArrayW<T>>  results, ::by_ref<::ArrayW<::StringW>>  assetPaths) ;

/// [Extension]
/// [HideInCallstack]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method ForceSave, addr 0x5ae0ebc, size 0x4, virtual false, abstract: false, final false
static inline void ForceSave(::UnityEngine::Object*  asset) ;

/// [Extension]
/// [HideInCallstack]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method ForceSave, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline void ForceSave(::System::Collections::Generic::IList_1<T>*  assets, ::System::Action_1<T>*  onPreSave, bool  unloadUnusedAfter) ;

/// @brief Method GetGameObjectPath, addr 0x5ae0ec8, size 0x130, virtual false, abstract: false, final false
static inline ::StringW GetGameObjectPath(::UnityEngine::GameObject*  obj) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method LoadAssetOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
static inline void LoadAssetOfType(::by_ref<T>  result, ::by_ref<::StringW>  resultPath) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetUtils(AssetUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetUtils(AssetUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3457};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AssetUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
