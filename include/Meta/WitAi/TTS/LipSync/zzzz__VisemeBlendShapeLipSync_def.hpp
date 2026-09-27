#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/VisemeBlendShapeLipSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseVisemeBlendShapeLipSync_def.hpp"
CORDL_MODULE_EXPORT(VisemeBlendShapeLipSync)
namespace Meta::WitAi::TTS::LipSync {
class VisemeLipSyncAnimator;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace Meta::WitAi::TTS::LipSync {
class VisemeBlendShapeLipSync;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync*, "Meta.WitAi.TTS.LipSync", "VisemeBlendShapeLipSync");
// Dependencies Meta.WitAi.TTS.LipSync.BaseVisemeBlendShapeLipSync
namespace Meta::WitAi::TTS::LipSync {
// Is value type: false
// CS Name: Meta.WitAi.TTS.LipSync.VisemeBlendShapeLipSync
class CORDL_TYPE VisemeBlendShapeLipSync : public ::Meta::WitAi::TTS::LipSync::BaseVisemeBlendShapeLipSync {
public:
// Declarations
 __declspec(property(get=get_SkinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  SkinnedMeshRenderer;

/// @brief Field _lipsyncAnimator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__lipsyncAnimator, put=__cordl_internal_set__lipsyncAnimator)) ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>  _lipsyncAnimator;

/// @brief Field meshRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  meshRenderer;

/// @brief Method Awake, addr 0x9e53c6c, size 0x9c, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e53d9c, size 0x94, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e53d08, size 0x94, virtual true, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator> const& __cordl_internal_get__lipsyncAnimator() const;

constexpr ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>& __cordl_internal_get__lipsyncAnimator() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr void __cordl_internal_set__lipsyncAnimator(::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x9e53e30, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SkinnedMeshRenderer, addr 0x9e53c64, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> get_SkinnedMeshRenderer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisemeBlendShapeLipSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisemeBlendShapeLipSync", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisemeBlendShapeLipSync(VisemeBlendShapeLipSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisemeBlendShapeLipSync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisemeBlendShapeLipSync(VisemeBlendShapeLipSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29094};

/// @brief Field meshRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___meshRenderer;

/// [SerializeField]
/// @brief Field _lipsyncAnimator, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::LipSync::VisemeLipSyncAnimator>  ____lipsyncAnimator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync, ___meshRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync, ____lipsyncAnimator) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::LipSync::VisemeBlendShapeLipSync) == 0x58, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::LipSync
