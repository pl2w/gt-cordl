#pragma once
// IWYU pragma private; include "GlobalNamespace/EqualizerAnim.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EqualizerAnim)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class EqualizerAnim;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EqualizerAnim*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EqualizerAnim*, "", "EqualizerAnim");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EqualizerAnim
class CORDL_TYPE EqualizerAnim : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field blueCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_blueCurve, put=__cordl_internal_set_blueCurve)) ::UnityEngine::AnimationCurve*  blueCurve;

/// @brief Field greenCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_greenCurve, put=__cordl_internal_set_greenCurve)) ::UnityEngine::AnimationCurve*  greenCurve;

/// @brief Field inputColorHash, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputColorHash, put=__cordl_internal_set_inputColorHash)) int32_t  inputColorHash;

/// @brief Field inputColorProperty, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputColorProperty, put=__cordl_internal_set_inputColorProperty)) ::StringW  inputColorProperty;

/// @brief Field loopDuration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopDuration, put=__cordl_internal_set_loopDuration)) float_t  loopDuration;

/// @brief Field material, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field materialsUpdatedThisFrame, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_materialsUpdatedThisFrame, put=setStaticF_materialsUpdatedThisFrame)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*  materialsUpdatedThisFrame;

/// @brief Field redCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_redCurve, put=__cordl_internal_set_redCurve)) ::UnityEngine::AnimationCurve*  redCurve;

/// @brief Field thisFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_thisFrame, put=setStaticF_thisFrame)) int32_t  thisFrame;

static inline ::GlobalNamespace::EqualizerAnim* New_ctor() ;

/// @brief Method Start, addr 0x564d834, size 0x20, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x564d854, size 0x1f0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_blueCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_blueCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_greenCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_greenCurve() ;

constexpr int32_t const& __cordl_internal_get_inputColorHash() const;

constexpr int32_t& __cordl_internal_get_inputColorHash() ;

constexpr ::StringW const& __cordl_internal_get_inputColorProperty() const;

constexpr ::StringW& __cordl_internal_get_inputColorProperty() ;

constexpr float_t const& __cordl_internal_get_loopDuration() const;

constexpr float_t& __cordl_internal_get_loopDuration() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_redCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_redCurve() ;

constexpr void __cordl_internal_set_blueCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_greenCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_inputColorHash(int32_t  value) ;

constexpr void __cordl_internal_set_inputColorProperty(::StringW  value) ;

constexpr void __cordl_internal_set_loopDuration(float_t  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_redCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x564da44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* getStaticF_materialsUpdatedThisFrame() ;

static inline int32_t getStaticF_thisFrame() ;

static inline void setStaticF_materialsUpdatedThisFrame(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*  value) ;

static inline void setStaticF_thisFrame(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EqualizerAnim() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EqualizerAnim", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EqualizerAnim(EqualizerAnim && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EqualizerAnim", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EqualizerAnim(EqualizerAnim const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{712};

/// [SerializeField]
/// @brief Field redCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___redCurve;

/// [SerializeField]
/// @brief Field greenCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___greenCurve;

/// [SerializeField]
/// @brief Field blueCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___blueCurve;

/// [SerializeField]
/// @brief Field loopDuration, offset: 0x38, size: 0x4, def value: None
 float_t  ___loopDuration;

/// [SerializeField]
/// @brief Field material, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// [SerializeField]
/// @brief Field inputColorProperty, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___inputColorProperty;

/// @brief Field inputColorHash, offset: 0x50, size: 0x4, def value: None
 int32_t  ___inputColorHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EqualizerAnim, ___redCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EqualizerAnim, ___greenCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EqualizerAnim, ___blueCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EqualizerAnim, ___loopDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EqualizerAnim, ___material) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EqualizerAnim, ___inputColorProperty) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EqualizerAnim, ___inputColorHash) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EqualizerAnim) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
