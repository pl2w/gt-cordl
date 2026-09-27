#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/BaseTextureFlipLipSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseTextureFlipLipSync_VisemeTextureData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseTextureFlipLipSync)
namespace GlobalNamespace {
struct BaseTextureFlipLipSync_VisemeTextureData;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi::TTS::Data {
struct Viseme;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::WitAi::TTS::LipSync {
class BaseTextureFlipLipSync;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync*, "Meta.WitAi.TTS.LipSync", "BaseTextureFlipLipSync");
// Dependencies Meta.WitAi.TTS.LipSync.BaseTextureFlipLipSync::VisemeTextureData, UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::LipSync {
// Is value type: false
// CS Name: Meta.WitAi.TTS.LipSync.BaseTextureFlipLipSync
class CORDL_TYPE BaseTextureFlipLipSync : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VisemeTextureData = ::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData;

 __declspec(property(get=get_Renderer)) ::UnityW<::UnityEngine::Renderer>  Renderer;

/// @brief Field VisemeTextures, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_VisemeTextures, put=__cordl_internal_set_VisemeTextures)) ::ArrayW<::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData>  VisemeTextures;

/// @brief Field _log, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__log, put=__cordl_internal_set__log)) ::Meta::Voice::Logging::IVLogger*  _log;

/// @brief Field _textureLookup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__textureLookup, put=__cordl_internal_set__textureLookup)) ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*  _textureLookup;

/// @brief Method Awake, addr 0x9e51d60, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckForMissingVisemes, addr 0x9e52324, size 0x380, virtual false, abstract: false, final false
inline void CheckForMissingVisemes(::System::Text::StringBuilder*  log) ;

static inline ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync* New_ctor() ;

/// @brief Method OnVisemeFinished, addr 0x9e52780, size 0x4, virtual true, abstract: false, final true
inline void OnVisemeFinished(::Meta::WitAi::TTS::Data::Viseme  viseme) ;

/// @brief Method OnVisemeLerp, addr 0x9e52784, size 0x4, virtual true, abstract: false, final true
inline void OnVisemeLerp(::Meta::WitAi::TTS::Data::Viseme  oldVieseme, ::Meta::WitAi::TTS::Data::Viseme  newViseme, float_t  percentage) ;

/// @brief Method OnVisemeStarted, addr 0x9e5277c, size 0x4, virtual true, abstract: false, final true
inline void OnVisemeStarted(::Meta::WitAi::TTS::Data::Viseme  viseme) ;

/// @brief Method RefreshTextureLookup, addr 0x9e51d64, size 0x310, virtual false, abstract: false, final false
inline void RefreshTextureLookup() ;

/// @brief Method Reset, addr 0x9e51964, size 0x3fc, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetTexture, addr 0x9e526a4, size 0xd8, virtual true, abstract: false, final false
inline void SetTexture(::UnityEngine::Texture2D*  texture) ;

/// @brief Method SetViseme, addr 0x9e52210, size 0x114, virtual false, abstract: false, final false
inline void SetViseme(::Meta::WitAi::TTS::Data::Viseme  v) ;

/// @brief Method Start, addr 0x9e52074, size 0x19c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData> const& __cordl_internal_get_VisemeTextures() const;

constexpr ::ArrayW<::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData>& __cordl_internal_get_VisemeTextures() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__log() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__log() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>* const& __cordl_internal_get__textureLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*& __cordl_internal_get__textureLookup() ;

constexpr void __cordl_internal_set_VisemeTextures(::ArrayW<::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData>  value) ;

constexpr void __cordl_internal_set__log(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__textureLookup(::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x9e52788, size 0x174, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Renderer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Renderer> get_Renderer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseTextureFlipLipSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseTextureFlipLipSync", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTextureFlipLipSync(BaseTextureFlipLipSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTextureFlipLipSync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTextureFlipLipSync(BaseTextureFlipLipSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29090};

/// @brief Field _log, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____log;

/// [Header("Texture Settings")]
/// @brief Field VisemeTextures, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData>  ___VisemeTextures;

/// @brief Field _textureLookup, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Meta::WitAi::TTS::Data::Viseme,int32_t>*  ____textureLookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync, ____log) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync, ___VisemeTextures) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync, ____textureLookup) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::LipSync
