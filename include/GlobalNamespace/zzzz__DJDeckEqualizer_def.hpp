#pragma once
// IWYU pragma private; include "GlobalNamespace/DJDeckEqualizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DJDeckEqualizer)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class DJDeckEqualizer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DJDeckEqualizer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DJDeckEqualizer*, "", "DJDeckEqualizer");
// Dependencies ShaderHashId, UnityEngine.AnimationCurve, UnityEngine.AudioSource, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DJDeckEqualizer
class CORDL_TYPE DJDeckEqualizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field display, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_display, put=__cordl_internal_set_display)) ::UnityW<::UnityEngine::MeshRenderer>  display;

/// @brief Field greenTrackCurves, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_greenTrackCurves, put=__cordl_internal_set_greenTrackCurves)) ::ArrayW<::UnityEngine::AnimationCurve*>  greenTrackCurves;

/// @brief Field greenTracks, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_greenTracks, put=__cordl_internal_set_greenTracks)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  greenTracks;

/// @brief Field inputColorHash, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_inputColorHash, put=__cordl_internal_set_inputColorHash)) ::GlobalNamespace::ShaderHashId  inputColorHash;

/// @brief Field inputColorProperty, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputColorProperty, put=__cordl_internal_set_inputColorProperty)) ::StringW  inputColorProperty;

/// @brief Field material, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field redTrackCurves, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_redTrackCurves, put=__cordl_internal_set_redTrackCurves)) ::ArrayW<::UnityEngine::AnimationCurve*>  redTrackCurves;

/// @brief Field redTracks, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_redTracks, put=__cordl_internal_set_redTracks)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  redTracks;

static inline ::GlobalNamespace::DJDeckEqualizer* New_ctor() ;

/// @brief Method Start, addr 0x564b71c, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x564b774, size 0x1a0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_display() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_display() ;

constexpr ::ArrayW<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_greenTrackCurves() const;

constexpr ::ArrayW<::UnityEngine::AnimationCurve*>& __cordl_internal_get_greenTrackCurves() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get_greenTracks() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get_greenTracks() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get_inputColorHash() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get_inputColorHash() ;

constexpr ::StringW const& __cordl_internal_get_inputColorProperty() const;

constexpr ::StringW& __cordl_internal_get_inputColorProperty() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::ArrayW<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_redTrackCurves() const;

constexpr ::ArrayW<::UnityEngine::AnimationCurve*>& __cordl_internal_get_redTrackCurves() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get_redTracks() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get_redTracks() ;

constexpr void __cordl_internal_set_display(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_greenTrackCurves(::ArrayW<::UnityEngine::AnimationCurve*>  value) ;

constexpr void __cordl_internal_set_greenTracks(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

constexpr void __cordl_internal_set_inputColorHash(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set_inputColorProperty(::StringW  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_redTrackCurves(::ArrayW<::UnityEngine::AnimationCurve*>  value) ;

constexpr void __cordl_internal_set_redTracks(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

/// @brief Method .ctor, addr 0x564b914, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DJDeckEqualizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DJDeckEqualizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DJDeckEqualizer(DJDeckEqualizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DJDeckEqualizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DJDeckEqualizer(DJDeckEqualizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{705};

/// [SerializeField]
/// @brief Field display, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___display;

/// [SerializeField]
/// @brief Field redTrackCurves, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::AnimationCurve*>  ___redTrackCurves;

/// [SerializeField]
/// @brief Field greenTrackCurves, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::AnimationCurve*>  ___greenTrackCurves;

/// [SerializeField]
/// @brief Field redTracks, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ___redTracks;

/// [SerializeField]
/// @brief Field greenTracks, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ___greenTracks;

/// @brief Field material, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// [SerializeField]
/// @brief Field inputColorProperty, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___inputColorProperty;

/// @brief Field inputColorHash, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ___inputColorHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DJDeckEqualizer, ___display) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJDeckEqualizer, ___redTrackCurves) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJDeckEqualizer, ___greenTrackCurves) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJDeckEqualizer, ___redTracks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJDeckEqualizer, ___greenTracks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJDeckEqualizer, ___material) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJDeckEqualizer, ___inputColorProperty) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJDeckEqualizer, ___inputColorHash) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DJDeckEqualizer) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
