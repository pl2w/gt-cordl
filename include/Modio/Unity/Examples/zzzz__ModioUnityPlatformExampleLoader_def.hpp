#pragma once
// IWYU pragma private; include "Modio/Unity/Examples/ModioUnityPlatformExampleLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUnityPlatformExampleLoader)
namespace Modio::Unity::Examples {
class ModioUnityPlatformExampleLoader_PlatformExamples;
}
// Forward declare root types
namespace Modio::Unity::Examples {
class ModioUnityPlatformExampleLoader;
}
namespace Modio::Unity::Examples {
class ModioUnityPlatformExampleLoader_PlatformExamples;
}
// Write type traits
MARK_REF_T(::Modio::Unity::Examples::ModioUnityPlatformExampleLoader*);
MARK_REF_T(::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::Examples::ModioUnityPlatformExampleLoader*, "Modio.Unity.Examples", "ModioUnityPlatformExampleLoader");
DEFINE_IL2CPP_CLASS(::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*, "Modio.Unity.Examples", "ModioUnityPlatformExampleLoader/PlatformExamples");
// Dependencies Modio.Unity.Examples.ModioUnityPlatformExampleLoader::PlatformExamples, UnityEngine.MonoBehaviour
namespace Modio::Unity::Examples {
// Is value type: false
// CS Name: Modio.Unity.Examples.ModioUnityPlatformExampleLoader
class CORDL_TYPE ModioUnityPlatformExampleLoader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PlatformExamples = ::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples;

/// @brief Field platformExamplesPerPlatform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformExamplesPerPlatform, put=__cordl_internal_set_platformExamplesPerPlatform)) ::ArrayW<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*>  platformExamplesPerPlatform;

/// @brief Method Awake, addr 0x9f9cb78, size 0x2cc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::Examples::ModioUnityPlatformExampleLoader* New_ctor() ;

/// [ContextMenu("TestAllPrefabNamesAreFound")]
/// @brief Method TestAllPrefabNamesAreFound, addr 0x9f9ce44, size 0x22c, virtual false, abstract: false, final false
inline void TestAllPrefabNamesAreFound() ;

constexpr ::ArrayW<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*> const& __cordl_internal_get_platformExamplesPerPlatform() const;

constexpr ::ArrayW<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*>& __cordl_internal_get_platformExamplesPerPlatform() ;

constexpr void __cordl_internal_set_platformExamplesPerPlatform(::ArrayW<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*>  value) ;

/// @brief Method .ctor, addr 0x9f9d070, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUnityPlatformExampleLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityPlatformExampleLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUnityPlatformExampleLoader(ModioUnityPlatformExampleLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityPlatformExampleLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUnityPlatformExampleLoader(ModioUnityPlatformExampleLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32504};

/// [SerializeField]
/// @brief Field platformExamplesPerPlatform, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples*>  ___platformExamplesPerPlatform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::Examples::ModioUnityPlatformExampleLoader, ___platformExamplesPerPlatform) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::Examples::ModioUnityPlatformExampleLoader) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::Examples
// Dependencies System.Object, UnityEngine.RuntimePlatform
namespace Modio::Unity::Examples {
// Is value type: false
// CS Name: Modio.Unity.Examples.ModioUnityPlatformExampleLoader/PlatformExamples
class CORDL_TYPE ModioUnityPlatformExampleLoader_PlatformExamples : public ::System::Object {
public:
// Declarations
/// @brief Field platforms, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_platforms, put=__cordl_internal_set_platforms)) ::ArrayW<::UnityEngine::RuntimePlatform>  platforms;

/// @brief Field prefabNames, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabNames, put=__cordl_internal_set_prefabNames)) ::ArrayW<::StringW>  prefabNames;

static inline ::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples* New_ctor() ;

constexpr ::ArrayW<::UnityEngine::RuntimePlatform> const& __cordl_internal_get_platforms() const;

constexpr ::ArrayW<::UnityEngine::RuntimePlatform>& __cordl_internal_get_platforms() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_prefabNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_prefabNames() ;

constexpr void __cordl_internal_set_platforms(::ArrayW<::UnityEngine::RuntimePlatform>  value) ;

constexpr void __cordl_internal_set_prefabNames(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x9f9d078, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUnityPlatformExampleLoader_PlatformExamples() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityPlatformExampleLoader_PlatformExamples", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUnityPlatformExampleLoader_PlatformExamples(ModioUnityPlatformExampleLoader_PlatformExamples && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUnityPlatformExampleLoader_PlatformExamples", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUnityPlatformExampleLoader_PlatformExamples(ModioUnityPlatformExampleLoader_PlatformExamples const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32503};

/// @brief Field platforms, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RuntimePlatform>  ___platforms;

/// @brief Field prefabNames, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___prefabNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples, ___platforms) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples, ___prefabNames) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::Examples::ModioUnityPlatformExampleLoader_PlatformExamples) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::Examples
