#pragma once
// IWYU pragma private; include "GlobalNamespace/AssetContentAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LazyLoadReference_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssetContentAPI)
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class AssetContentAPI;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AssetContentAPI*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AssetContentAPI*, "", "AssetContentAPI");
// Dependencies UnityEngine.LazyLoadReference`1<T>, UnityEngine.Object, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AssetContentAPI
class CORDL_TYPE AssetContentAPI : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field assets, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_assets, put=__cordl_internal_set_assets)) ::ArrayW<::UnityW<::UnityEngine::Object>>  assets;

/// @brief Field bundleFile, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_bundleFile, put=__cordl_internal_set_bundleFile)) ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::TextAsset>>  bundleFile;

/// @brief Field bundleName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundleName, put=__cordl_internal_set_bundleName)) ::StringW  bundleName;

static inline ::GlobalNamespace::AssetContentAPI* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get_assets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& __cordl_internal_get_assets() ;

constexpr ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::TextAsset>> const& __cordl_internal_get_bundleFile() const;

constexpr ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::TextAsset>>& __cordl_internal_get_bundleFile() ;

constexpr ::StringW const& __cordl_internal_get_bundleName() const;

constexpr ::StringW& __cordl_internal_get_bundleName() ;

constexpr void __cordl_internal_set_assets(::ArrayW<::UnityW<::UnityEngine::Object>>  value) ;

constexpr void __cordl_internal_set_bundleFile(::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::TextAsset>>  value) ;

constexpr void __cordl_internal_set_bundleName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b20820, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetContentAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetContentAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetContentAPI(AssetContentAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetContentAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetContentAPI(AssetContentAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3603};

/// @brief Field bundleName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___bundleName;

/// @brief Field bundleFile, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::TextAsset>>  ___bundleFile;

/// @brief Field assets, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Object>>  ___assets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AssetContentAPI, ___bundleName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssetContentAPI, ___bundleFile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssetContentAPI, ___assets) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AssetContentAPI) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
