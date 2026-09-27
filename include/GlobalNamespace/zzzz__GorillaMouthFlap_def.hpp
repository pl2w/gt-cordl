#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaMouthFlap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MouthFlapLevel_def.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaMouthFlap)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class ISpeakerLoudness;
}
namespace GlobalNamespace {
struct MouthFlapLevel;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaMouthFlap;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaMouthFlap*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaMouthFlap*, "", "GorillaMouthFlap");
// Dependencies MouthFlapLevel, ShaderHashId, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaMouthFlap
class CORDL_TYPE GorillaMouthFlap : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _BaseMap, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get__BaseMap, put=__cordl_internal_set__BaseMap)) ::GlobalNamespace::ShaderHashId  _BaseMap;

/// @brief Field _MouthMap, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get__MouthMap, put=__cordl_internal_set__MouthMap)) ::GlobalNamespace::ShaderHashId  _MouthMap;

/// @brief Field activeFlipbookIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeFlipbookIndex, put=__cordl_internal_set_activeFlipbookIndex)) int32_t  activeFlipbookIndex;

/// @brief Field activeFlipbookPlayTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeFlipbookPlayTime, put=__cordl_internal_set_activeFlipbookPlayTime)) float_t  activeFlipbookPlayTime;

/// @brief Field defaultFaceMaterial, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultFaceMaterial, put=__cordl_internal_set_defaultFaceMaterial)) ::UnityW<::UnityEngine::Material>  defaultFaceMaterial;

/// @brief Field defaultMouthAtlas, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMouthAtlas, put=__cordl_internal_set_defaultMouthAtlas)) ::UnityW<::UnityEngine::Texture>  defaultMouthAtlas;

/// @brief Field deltaTime, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_deltaTime, put=__cordl_internal_set_deltaTime)) float_t  deltaTime;

/// @brief Field facePropBlock, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_facePropBlock, put=__cordl_internal_set_facePropBlock)) ::UnityEngine::MaterialPropertyBlock*  facePropBlock;

/// @brief Field hasDefaultFaceMaterial, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasDefaultFaceMaterial, put=__cordl_internal_set_hasDefaultFaceMaterial)) bool  hasDefaultFaceMaterial;

/// @brief Field hasDefaultMouthAtlas, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasDefaultMouthAtlas, put=__cordl_internal_set_hasDefaultMouthAtlas)) bool  hasDefaultMouthAtlas;

/// @brief Field lastTimeUpdated, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTimeUpdated, put=__cordl_internal_set_lastTimeUpdated)) float_t  lastTimeUpdated;

/// @brief Field leafBlowerActiveUntilTimestamp, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_leafBlowerActiveUntilTimestamp, put=__cordl_internal_set_leafBlowerActiveUntilTimestamp)) float_t  leafBlowerActiveUntilTimestamp;

/// @brief Field leafBlowerFace, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_leafBlowerFace, put=__cordl_internal_set_leafBlowerFace)) ::GlobalNamespace::MouthFlapLevel  leafBlowerFace;

/// @brief Field mouthFlapLevels, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mouthFlapLevels, put=__cordl_internal_set_mouthFlapLevels)) ::ArrayW<::GlobalNamespace::MouthFlapLevel>  mouthFlapLevels;

/// @brief Field noMicFace, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_noMicFace, put=__cordl_internal_set_noMicFace)) ::GlobalNamespace::MouthFlapLevel  noMicFace;

/// @brief Field speaker, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_speaker, put=__cordl_internal_set_speaker)) ::GlobalNamespace::ISpeakerLoudness*  speaker;

/// @brief Field targetFace, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetFace, put=__cordl_internal_set_targetFace)) ::UnityW<::UnityEngine::GameObject>  targetFace;

/// @brief Field targetFaceRenderer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetFaceRenderer, put=__cordl_internal_set_targetFaceRenderer)) ::UnityW<::UnityEngine::Renderer>  targetFaceRenderer;

/// @brief Field useMicEnabled, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_useMicEnabled, put=__cordl_internal_set_useMicEnabled)) bool  useMicEnabled;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method CheckMouthflapChange, addr 0x591a484, size 0x9c, virtual false, abstract: false, final false
inline void CheckMouthflapChange(bool  isMicEnabled, float_t  currentLoudness) ;

/// @brief Method ClearFaceMaterialReplacement, addr 0x591a7a4, size 0x2c, virtual false, abstract: false, final false
inline void ClearFaceMaterialReplacement() ;

/// @brief Method ClearMouthTextureReplacement, addr 0x591a680, size 0x34, virtual false, abstract: false, final false
inline void ClearMouthTextureReplacement() ;

/// @brief Method EnableLeafBlower, addr 0x591a184, size 0x28, virtual false, abstract: false, final false
inline void EnableLeafBlower() ;

static inline ::GlobalNamespace::GorillaMouthFlap* New_ctor() ;

/// @brief Method OnDisable, addr 0x591a1e0, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x591a1ac, size 0x34, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetDefaultMouthAtlas, addr 0x591a138, size 0x4c, virtual false, abstract: false, final false
inline void SetDefaultMouthAtlas(::UnityEngine::Material*  face) ;

/// @brief Method SetFaceMaterialReplacement, addr 0x591a6b4, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> SetFaceMaterialReplacement(::UnityEngine::Material*  replacementFaceMaterial) ;

/// @brief Method SetMouthTextureReplacement, addr 0x591a62c, size 0x54, virtual false, abstract: false, final false
inline void SetMouthTextureReplacement(::UnityEngine::Texture2D*  replacementMouthAtlas) ;

/// @brief Method SliceUpdate, addr 0x591a1ec, size 0x298, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5919ff0, size 0x148, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateMouthFlapFlipbook, addr 0x591a520, size 0x10c, virtual false, abstract: false, final false
inline void UpdateMouthFlapFlipbook(::GlobalNamespace::MouthFlapLevel  mouthFlap) ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__BaseMap() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__BaseMap() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__MouthMap() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__MouthMap() ;

constexpr int32_t const& __cordl_internal_get_activeFlipbookIndex() const;

constexpr int32_t& __cordl_internal_get_activeFlipbookIndex() ;

constexpr float_t const& __cordl_internal_get_activeFlipbookPlayTime() const;

constexpr float_t& __cordl_internal_get_activeFlipbookPlayTime() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultFaceMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultFaceMaterial() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_defaultMouthAtlas() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_defaultMouthAtlas() ;

constexpr float_t const& __cordl_internal_get_deltaTime() const;

constexpr float_t& __cordl_internal_get_deltaTime() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_facePropBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_facePropBlock() ;

constexpr bool const& __cordl_internal_get_hasDefaultFaceMaterial() const;

constexpr bool& __cordl_internal_get_hasDefaultFaceMaterial() ;

constexpr bool const& __cordl_internal_get_hasDefaultMouthAtlas() const;

constexpr bool& __cordl_internal_get_hasDefaultMouthAtlas() ;

constexpr float_t const& __cordl_internal_get_lastTimeUpdated() const;

constexpr float_t& __cordl_internal_get_lastTimeUpdated() ;

constexpr float_t const& __cordl_internal_get_leafBlowerActiveUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_leafBlowerActiveUntilTimestamp() ;

constexpr ::GlobalNamespace::MouthFlapLevel const& __cordl_internal_get_leafBlowerFace() const;

constexpr ::GlobalNamespace::MouthFlapLevel& __cordl_internal_get_leafBlowerFace() ;

constexpr ::ArrayW<::GlobalNamespace::MouthFlapLevel> const& __cordl_internal_get_mouthFlapLevels() const;

constexpr ::ArrayW<::GlobalNamespace::MouthFlapLevel>& __cordl_internal_get_mouthFlapLevels() ;

constexpr ::GlobalNamespace::MouthFlapLevel const& __cordl_internal_get_noMicFace() const;

constexpr ::GlobalNamespace::MouthFlapLevel& __cordl_internal_get_noMicFace() ;

constexpr ::GlobalNamespace::ISpeakerLoudness* const& __cordl_internal_get_speaker() const;

constexpr ::GlobalNamespace::ISpeakerLoudness*& __cordl_internal_get_speaker() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_targetFace() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_targetFace() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_targetFaceRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_targetFaceRenderer() ;

constexpr bool const& __cordl_internal_get_useMicEnabled() const;

constexpr bool& __cordl_internal_get_useMicEnabled() ;

constexpr void __cordl_internal_set__BaseMap(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__MouthMap(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set_activeFlipbookIndex(int32_t  value) ;

constexpr void __cordl_internal_set_activeFlipbookPlayTime(float_t  value) ;

constexpr void __cordl_internal_set_defaultFaceMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_defaultMouthAtlas(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_deltaTime(float_t  value) ;

constexpr void __cordl_internal_set_facePropBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_hasDefaultFaceMaterial(bool  value) ;

constexpr void __cordl_internal_set_hasDefaultMouthAtlas(bool  value) ;

constexpr void __cordl_internal_set_lastTimeUpdated(float_t  value) ;

constexpr void __cordl_internal_set_leafBlowerActiveUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_leafBlowerFace(::GlobalNamespace::MouthFlapLevel  value) ;

constexpr void __cordl_internal_set_mouthFlapLevels(::ArrayW<::GlobalNamespace::MouthFlapLevel>  value) ;

constexpr void __cordl_internal_set_noMicFace(::GlobalNamespace::MouthFlapLevel  value) ;

constexpr void __cordl_internal_set_speaker(::GlobalNamespace::ISpeakerLoudness*  value) ;

constexpr void __cordl_internal_set_targetFace(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_targetFaceRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_useMicEnabled(bool  value) ;

/// @brief Method .ctor, addr 0x591a7d0, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaMouthFlap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaMouthFlap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaMouthFlap(GorillaMouthFlap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaMouthFlap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaMouthFlap(GorillaMouthFlap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2200};

/// @brief Field targetFace, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___targetFace;

/// @brief Field mouthFlapLevels, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MouthFlapLevel>  ___mouthFlapLevels;

/// @brief Field noMicFace, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::MouthFlapLevel  ___noMicFace;

/// @brief Field leafBlowerFace, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::MouthFlapLevel  ___leafBlowerFace;

/// @brief Field useMicEnabled, offset: 0x60, size: 0x1, def value: None
 bool  ___useMicEnabled;

/// @brief Field leafBlowerActiveUntilTimestamp, offset: 0x64, size: 0x4, def value: None
 float_t  ___leafBlowerActiveUntilTimestamp;

/// @brief Field activeFlipbookIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___activeFlipbookIndex;

/// @brief Field activeFlipbookPlayTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ___activeFlipbookPlayTime;

/// @brief Field speaker, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::ISpeakerLoudness*  ___speaker;

/// @brief Field lastTimeUpdated, offset: 0x78, size: 0x4, def value: None
 float_t  ___lastTimeUpdated;

/// @brief Field deltaTime, offset: 0x7c, size: 0x4, def value: None
 float_t  ___deltaTime;

/// @brief Field targetFaceRenderer, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___targetFaceRenderer;

/// @brief Field facePropBlock, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___facePropBlock;

/// @brief Field defaultMouthAtlas, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___defaultMouthAtlas;

/// @brief Field defaultFaceMaterial, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultFaceMaterial;

/// @brief Field hasDefaultMouthAtlas, offset: 0xa0, size: 0x1, def value: None
 bool  ___hasDefaultMouthAtlas;

/// @brief Field hasDefaultFaceMaterial, offset: 0xa1, size: 0x1, def value: None
 bool  ___hasDefaultFaceMaterial;

/// @brief Field _MouthMap, offset: 0xa8, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____MouthMap;

/// @brief Field _BaseMap, offset: 0xb8, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____BaseMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___targetFace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___mouthFlapLevels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___noMicFace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___leafBlowerFace) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___useMicEnabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___leafBlowerActiveUntilTimestamp) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___activeFlipbookIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___activeFlipbookPlayTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___speaker) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___lastTimeUpdated) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___deltaTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___targetFaceRenderer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___facePropBlock) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___defaultMouthAtlas) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___defaultFaceMaterial) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___hasDefaultMouthAtlas) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ___hasDefaultFaceMaterial) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ____MouthMap) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMouthFlap, ____BaseMap) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaMouthFlap) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
