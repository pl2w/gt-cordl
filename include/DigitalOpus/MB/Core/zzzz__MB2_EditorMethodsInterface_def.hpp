#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_EditorMethodsInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB2_EditorMethodsInterface)
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
struct MB_ObjsToCombineTypes;
}
namespace DigitalOpus::MB::Core {
struct MB_TextureCompressionQuality;
}
namespace DigitalOpus::MB::Core {
class ProgressUpdateDelegate;
}
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Texture2DArray;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, "DigitalOpus.MB.Core", "MB2_EditorMethodsInterface");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_EditorMethodsInterface
class CORDL_TYPE MB2_EditorMethodsInterface {
public:
// Declarations
/// @brief Method CheckBuildSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CheckBuildSettings(int64_t  estimatedAtlasSize) ;

/// @brief Method CheckPrefabTypes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CheckPrefabTypes(::DigitalOpus::MB::Core::MB_ObjsToCombineTypes  prefabType, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Clear() ;

/// @brief Method CommitChangesToAssets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CommitChangesToAssets() ;

/// @brief Method ConvertTexture2DArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ConvertTexture2DArray(::UnityEngine::Texture2DArray*  inArray, ::UnityEngine::Texture2DArray*  outArray, ::UnityEngine::TextureFormat  outFormat) ;

/// @brief Method ConvertTextureFormat_DefaultPlatform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ConvertTextureFormat_DefaultPlatform(::UnityEngine::Texture2D*  tx, ::UnityEngine::TextureFormat  targetFormat, bool  isNormalMap) ;

/// @brief Method ConvertTextureFormat_PlatformOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ConvertTextureFormat_PlatformOverride(::UnityEngine::Texture2D*  tx, ::UnityEngine::TextureFormat  targetFormat, ::DigitalOpus::MB::Core::MB_TextureCompressionQuality  compressionQuality, bool  isNormalMap) ;

/// @brief Method CreateTemporaryAssetCopyForTextureArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Texture2D> CreateTemporaryAssetCopyForTextureArray(::DigitalOpus::MB::Core::ShaderTextureProperty*  prop, ::UnityEngine::Texture2D*  sliceTex, int32_t  w, int32_t  h, ::UnityEngine::TextureFormat  format, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Destroy(::UnityEngine::Object*  o) ;

/// @brief Method DestroyAsset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DestroyAsset(::UnityEngine::Object*  o) ;

/// @brief Method GetMaterialPrimaryKeysIfAddressables, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetMaterialPrimaryKeysIfAddressables(::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults) ;

/// @brief Method GetPlatformString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetPlatformString() ;

/// @brief Method IsAnAsset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsAnAsset(::UnityEngine::Object*  o) ;

/// @brief Method IsCompressed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsCompressed(::UnityEngine::Texture2D*  tx) ;

/// @brief Method IsNormalMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsNormalMap(::UnityEngine::Texture2D*  tx) ;

/// @brief Method OnPostTextureBake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPostTextureBake() ;

/// @brief Method OnPreTextureBake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPreTextureBake() ;

/// @brief Method RestoreReadFlagsAndFormats, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RestoreReadFlagsAndFormats(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo) ;

/// @brief Method SaveAtlasToAssetDatabase, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SaveAtlasToAssetDatabase(::UnityEngine::Texture2D*  atlas, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName, int32_t  atlasNum, bool  doAnySrcMatsHaveProperty, ::UnityEngine::Material*  resMat) ;

/// @brief Method SaveTextureArrayToAssetDatabase, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SaveTextureArrayToAssetDatabase(::UnityEngine::Texture2DArray*  atlas, ::UnityEngine::TextureFormat  foramt, ::StringW  texPropertyName, int32_t  atlasNum, ::UnityEngine::Material*  resMat) ;

/// @brief Method SetReadWriteFlag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetReadWriteFlag(::UnityEngine::Texture2D*  tx, bool  isReadable, bool  addToList) ;

/// @brief Method SetTextureSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetTextureSize(::UnityEngine::Texture2D*  tx, int32_t  size) ;

/// @brief Method TextureImporterFormatExistsForTextureFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TextureImporterFormatExistsForTextureFormat(::UnityEngine::TextureFormat  texFormat) ;

/// @brief Method ValidateSkinnedMeshes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ValidateSkinnedMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  mom) ;

// Ctor Parameters [CppParam { name: "", ty: "MB2_EditorMethodsInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_EditorMethodsInterface(MB2_EditorMethodsInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22604};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
