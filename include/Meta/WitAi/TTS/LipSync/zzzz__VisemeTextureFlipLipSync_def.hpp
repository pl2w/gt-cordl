#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/VisemeTextureFlipLipSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseTextureFlipLipSync_def.hpp"
CORDL_MODULE_EXPORT(VisemeTextureFlipLipSync)
namespace Meta::WitAi::TTS::LipSync {
class VisemeLipSyncAnimator;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Meta::WitAi::TTS::LipSync {
class VisemeTextureFlipLipSync;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync*, "Meta.WitAi.TTS.LipSync", "VisemeTextureFlipLipSync");
// Dependencies Meta.WitAi.TTS.LipSync.BaseTextureFlipLipSync
namespace Meta::WitAi::TTS::LipSync {
// Is value type: false
// CS Name: Meta.WitAi.TTS.LipSync.VisemeTextureFlipLipSync
class CORDL_TYPE VisemeTextureFlipLipSync : public ::Meta::WitAi::TTS::LipSync::BaseTextureFlipLipSync {
public:
// Declarations
 __declspec(property(get=get_Renderer)) ::UnityW<::UnityEngine::Renderer>  Renderer;

/// @brief Field _lipSyncAnimator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__lipSyncAnimator, put=__cordl_internal_set__lipSyncAnimator)) ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>  _lipSyncAnimator;

/// @brief Field visemeRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_visemeRenderer, put=__cordl_internal_set_visemeRenderer)) ::UnityW<::UnityEngine::Renderer>  visemeRenderer;

/// @brief Method Awake, addr 0x9e54140, size 0x10c, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e543d4, size 0xac, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e5424c, size 0x188, virtual true, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator> const& __cordl_internal_get__lipSyncAnimator() const;

constexpr ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>& __cordl_internal_get__lipSyncAnimator() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_visemeRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_visemeRenderer() ;

constexpr void __cordl_internal_set__lipSyncAnimator(::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>  value) ;

constexpr void __cordl_internal_set_visemeRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x9e54480, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Renderer, addr 0x9e54138, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> get_Renderer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisemeTextureFlipLipSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisemeTextureFlipLipSync", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisemeTextureFlipLipSync(VisemeTextureFlipLipSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisemeTextureFlipLipSync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisemeTextureFlipLipSync(VisemeTextureFlipLipSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29098};

/// [FormerlySerializedAs("renderer")]
/// [SerializeField]
/// @brief Field visemeRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___visemeRenderer;

/// [SerializeField]
/// @brief Field _lipSyncAnimator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>  ____lipSyncAnimator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync, ___visemeRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync, ____lipSyncAnimator) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::LipSync::VisemeTextureFlipLipSync) == 0x48, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::LipSync
