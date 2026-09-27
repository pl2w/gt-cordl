#pragma once
// IWYU pragma private; include "GlobalNamespace/SpoonClacker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpoonClacker)
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class HingeJoint;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SpoonClacker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpoonClacker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpoonClacker*, "", "SpoonClacker");
// Dependencies TimeSince, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpoonClacker
class CORDL_TYPE SpoonClacker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnHitMax, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHitMax, put=__cordl_internal_set_OnHitMax)) ::UnityEngine::Events::UnityEvent*  OnHitMax;

/// @brief Field OnHitMin, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHitMin, put=__cordl_internal_set_OnHitMin)) ::UnityEngine::Events::UnityEvent*  OnHitMin;

/// @brief Field _lockMax, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__lockMax, put=__cordl_internal_set__lockMax)) bool  _lockMax;

/// @brief Field _lockMin, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__lockMin, put=__cordl_internal_set__lockMin)) bool  _lockMin;

/// @brief Field _sincelastHit, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__sincelastHit, put=__cordl_internal_set__sincelastHit)) ::GlobalNamespace::TimeSince  _sincelastHit;

/// @brief Field hingeJoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hingeJoint, put=__cordl_internal_set_hingeJoint)) ::UnityW<::UnityEngine::HingeJoint>  hingeJoint;

/// @brief Field hingeMax, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_hingeMax, put=__cordl_internal_set_hingeMax)) float_t  hingeMax;

/// @brief Field hingeMin, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hingeMin, put=__cordl_internal_set_hingeMin)) float_t  hingeMin;

/// @brief Field hysterisisFactor, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_hysterisisFactor, put=__cordl_internal_set_hysterisisFactor)) float_t  hysterisisFactor;

/// @brief Field invertOut, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_invertOut, put=__cordl_internal_set_invertOut)) bool  invertOut;

/// @brief Field maxThreshold, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxThreshold, put=__cordl_internal_set_maxThreshold)) float_t  maxThreshold;

/// @brief Field minThreshold, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_minThreshold, put=__cordl_internal_set_minThreshold)) float_t  minThreshold;

/// @brief Field multiHitCutoff, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_multiHitCutoff, put=__cordl_internal_set_multiHitCutoff)) float_t  multiHitCutoff;

/// @brief Field skinnedMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinnedMesh, put=__cordl_internal_set_skinnedMesh)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  skinnedMesh;

/// @brief Field soundsMulti, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundsMulti, put=__cordl_internal_set_soundsMulti)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundsMulti;

/// @brief Field soundsSingle, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundsSingle, put=__cordl_internal_set_soundsSingle)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundsSingle;

/// @brief Field targetBlendShape, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetBlendShape, put=__cordl_internal_set_targetBlendShape)) int32_t  targetBlendShape;

/// @brief Field transferObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferObject, put=__cordl_internal_set_transferObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferObject;

/// @brief Method Awake, addr 0x5986a60, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SpoonClacker* New_ctor() ;

/// @brief Method Setup, addr 0x5986a64, size 0x6c, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Update, addr 0x5986ad0, size 0x1c4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnHitMax() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnHitMax() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnHitMin() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnHitMin() ;

constexpr bool const& __cordl_internal_get__lockMax() const;

constexpr bool& __cordl_internal_get__lockMax() ;

constexpr bool const& __cordl_internal_get__lockMin() const;

constexpr bool& __cordl_internal_get__lockMin() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__sincelastHit() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__sincelastHit() ;

constexpr ::UnityW<::UnityEngine::HingeJoint> const& __cordl_internal_get_hingeJoint() const;

constexpr ::UnityW<::UnityEngine::HingeJoint>& __cordl_internal_get_hingeJoint() ;

constexpr float_t const& __cordl_internal_get_hingeMax() const;

constexpr float_t& __cordl_internal_get_hingeMax() ;

constexpr float_t const& __cordl_internal_get_hingeMin() const;

constexpr float_t& __cordl_internal_get_hingeMin() ;

constexpr float_t const& __cordl_internal_get_hysterisisFactor() const;

constexpr float_t& __cordl_internal_get_hysterisisFactor() ;

constexpr bool const& __cordl_internal_get_invertOut() const;

constexpr bool& __cordl_internal_get_invertOut() ;

constexpr float_t const& __cordl_internal_get_maxThreshold() const;

constexpr float_t& __cordl_internal_get_maxThreshold() ;

constexpr float_t const& __cordl_internal_get_minThreshold() const;

constexpr float_t& __cordl_internal_get_minThreshold() ;

constexpr float_t const& __cordl_internal_get_multiHitCutoff() const;

constexpr float_t& __cordl_internal_get_multiHitCutoff() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_skinnedMesh() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_skinnedMesh() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundsMulti() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundsMulti() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundsSingle() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundsSingle() ;

constexpr int32_t const& __cordl_internal_get_targetBlendShape() const;

constexpr int32_t& __cordl_internal_get_targetBlendShape() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferObject() ;

constexpr void __cordl_internal_set_OnHitMax(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnHitMin(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__lockMax(bool  value) ;

constexpr void __cordl_internal_set__lockMin(bool  value) ;

constexpr void __cordl_internal_set__sincelastHit(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set_hingeJoint(::UnityW<::UnityEngine::HingeJoint>  value) ;

constexpr void __cordl_internal_set_hingeMax(float_t  value) ;

constexpr void __cordl_internal_set_hingeMin(float_t  value) ;

constexpr void __cordl_internal_set_hysterisisFactor(float_t  value) ;

constexpr void __cordl_internal_set_invertOut(bool  value) ;

constexpr void __cordl_internal_set_maxThreshold(float_t  value) ;

constexpr void __cordl_internal_set_minThreshold(float_t  value) ;

constexpr void __cordl_internal_set_multiHitCutoff(float_t  value) ;

constexpr void __cordl_internal_set_skinnedMesh(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_soundsMulti(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_soundsSingle(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_targetBlendShape(int32_t  value) ;

constexpr void __cordl_internal_set_transferObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x5986c94, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpoonClacker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpoonClacker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpoonClacker(SpoonClacker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpoonClacker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpoonClacker(SpoonClacker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2550};

/// @brief Field transferObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferObject;

/// @brief Field skinnedMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___skinnedMesh;

/// @brief Field hingeJoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::HingeJoint>  ___hingeJoint;

/// @brief Field targetBlendShape, offset: 0x38, size: 0x4, def value: None
 int32_t  ___targetBlendShape;

/// @brief Field hingeMin, offset: 0x3c, size: 0x4, def value: None
 float_t  ___hingeMin;

/// @brief Field hingeMax, offset: 0x40, size: 0x4, def value: None
 float_t  ___hingeMax;

/// @brief Field invertOut, offset: 0x44, size: 0x1, def value: None
 bool  ___invertOut;

/// @brief Field minThreshold, offset: 0x48, size: 0x4, def value: None
 float_t  ___minThreshold;

/// @brief Field maxThreshold, offset: 0x4c, size: 0x4, def value: None
 float_t  ___maxThreshold;

/// @brief Field hysterisisFactor, offset: 0x50, size: 0x4, def value: None
 float_t  ___hysterisisFactor;

/// @brief Field OnHitMin, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnHitMin;

/// @brief Field OnHitMax, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnHitMax;

/// @brief Field _lockMin, offset: 0x68, size: 0x1, def value: None
 bool  ____lockMin;

/// @brief Field _lockMax, offset: 0x69, size: 0x1, def value: None
 bool  ____lockMax;

/// @brief Field soundsSingle, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundsSingle;

/// @brief Field soundsMulti, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundsMulti;

/// @brief Field _sincelastHit, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____sincelastHit;

/// [FormerlySerializedAs("multiHitInterval")]
/// @brief Field multiHitCutoff, offset: 0x88, size: 0x4, def value: None
 float_t  ___multiHitCutoff;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___transferObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___skinnedMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___hingeJoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___targetBlendShape) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___hingeMin) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___hingeMax) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___invertOut) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___minThreshold) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___maxThreshold) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___hysterisisFactor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___OnHitMin) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___OnHitMax) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ____lockMin) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ____lockMax) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___soundsSingle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___soundsMulti) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ____sincelastHit) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpoonClacker, ___multiHitCutoff) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpoonClacker) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
