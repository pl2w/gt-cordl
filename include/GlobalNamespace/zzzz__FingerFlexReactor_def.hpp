#pragma once
// IWYU pragma private; include "GlobalNamespace/FingerFlexReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FingerFlexReactor_FingerMap_def.hpp"
#include "GlobalNamespace/zzzz__VRMap_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerFlexReactor)
namespace GlobalNamespace {
class FingerFlexReactor_BlendShapeTarget;
}
namespace GlobalNamespace {
struct FingerFlexReactor_FingerMap;
}
namespace GlobalNamespace {
class VRMap;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class FingerFlexReactor;
}
namespace GlobalNamespace {
class FingerFlexReactor_BlendShapeTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FingerFlexReactor*);
MARK_REF_T(::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FingerFlexReactor*, "", "FingerFlexReactor");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*, "", "FingerFlexReactor/BlendShapeTarget");
// Dependencies FingerFlexReactor::BlendShapeTarget, UnityEngine.MonoBehaviour, VRMap
namespace GlobalNamespace {
// Is value type: false
// CS Name: FingerFlexReactor
class CORDL_TYPE FingerFlexReactor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BlendShapeTarget = ::GlobalNamespace::FingerFlexReactor_BlendShapeTarget;

using FingerMap = ::GlobalNamespace::FingerFlexReactor_FingerMap;

/// @brief Field _blendShapeTargets, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__blendShapeTargets, put=__cordl_internal_set__blendShapeTargets)) ::ArrayW<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>  _blendShapeTargets;

/// @brief Field _fingers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingers, put=__cordl_internal_set__fingers)) ::ArrayW<::GlobalNamespace::VRMap*>  _fingers;

/// @brief Field _rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rig, put=__cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::VRRig>  _rig;

/// @brief Method Awake, addr 0x5803a28, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5803a2c, size 0x4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetLerpValue, addr 0x5803b74, size 0x108, virtual false, abstract: false, final false
static inline float_t GetLerpValue(::GlobalNamespace::VRMap*  map) ;

static inline ::GlobalNamespace::FingerFlexReactor* New_ctor() ;

/// @brief Method Setup, addr 0x58037b4, size 0x274, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateBlendShapes, addr 0x5803a30, size 0x144, virtual false, abstract: false, final false
inline void UpdateBlendShapes() ;

constexpr ::ArrayW<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*> const& __cordl_internal_get__blendShapeTargets() const;

constexpr ::ArrayW<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>& __cordl_internal_get__blendShapeTargets() ;

constexpr ::ArrayW<::GlobalNamespace::VRMap*> const& __cordl_internal_get__fingers() const;

constexpr ::ArrayW<::GlobalNamespace::VRMap*>& __cordl_internal_get__fingers() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__rig() ;

constexpr void __cordl_internal_set__blendShapeTargets(::ArrayW<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>  value) ;

constexpr void __cordl_internal_set__fingers(::ArrayW<::GlobalNamespace::VRMap*>  value) ;

constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5803c7c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFlexReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFlexReactor(FingerFlexReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFlexReactor(FingerFlexReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1690};

/// [SerializeField]
/// @brief Field _rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____rig;

/// [SerializeField]
/// @brief Field _fingers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VRMap*>  ____fingers;

/// [SerializeField]
/// @brief Field _blendShapeTargets, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FingerFlexReactor_BlendShapeTarget*>  ____blendShapeTargets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FingerFlexReactor, ____rig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlexReactor, ____fingers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlexReactor, ____blendShapeTargets) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FingerFlexReactor) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies FingerFlexReactor::FingerMap, System.Object, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: FingerFlexReactor/BlendShapeTarget
class CORDL_TYPE FingerFlexReactor_BlendShapeTarget : public ::System::Object {
public:
// Declarations
/// @brief Field blendShapeIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendShapeIndex, put=__cordl_internal_set_blendShapeIndex)) int32_t  blendShapeIndex;

/// @brief Field currentValue, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentValue, put=__cordl_internal_set_currentValue)) float_t  currentValue;

/// @brief Field inputRange, offset 0x24, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputRange, put=__cordl_internal_set_inputRange)) ::UnityEngine::Vector2  inputRange;

/// @brief Field outputRange, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputRange, put=__cordl_internal_set_outputRange)) ::UnityEngine::Vector2  outputRange;

/// @brief Field sourceFinger, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_sourceFinger, put=__cordl_internal_set_sourceFinger)) ::GlobalNamespace::FingerFlexReactor_FingerMap  sourceFinger;

/// @brief Field targetRenderer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRenderer, put=__cordl_internal_set_targetRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  targetRenderer;

static inline ::GlobalNamespace::FingerFlexReactor_BlendShapeTarget* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_blendShapeIndex() const;

constexpr int32_t& __cordl_internal_get_blendShapeIndex() ;

constexpr float_t const& __cordl_internal_get_currentValue() const;

constexpr float_t& __cordl_internal_get_currentValue() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_inputRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_inputRange() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_outputRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_outputRange() ;

constexpr ::GlobalNamespace::FingerFlexReactor_FingerMap const& __cordl_internal_get_sourceFinger() const;

constexpr ::GlobalNamespace::FingerFlexReactor_FingerMap& __cordl_internal_get_sourceFinger() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_targetRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_targetRenderer() ;

constexpr void __cordl_internal_set_blendShapeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentValue(float_t  value) ;

constexpr void __cordl_internal_set_inputRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_outputRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_sourceFinger(::GlobalNamespace::FingerFlexReactor_FingerMap  value) ;

constexpr void __cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x5803d18, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFlexReactor_BlendShapeTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexReactor_BlendShapeTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFlexReactor_BlendShapeTarget(FingerFlexReactor_BlendShapeTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFlexReactor_BlendShapeTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFlexReactor_BlendShapeTarget(FingerFlexReactor_BlendShapeTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1688};

/// @brief Field sourceFinger, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::FingerFlexReactor_FingerMap  ___sourceFinger;

/// @brief Field targetRenderer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___targetRenderer;

/// @brief Field blendShapeIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___blendShapeIndex;

/// @brief Field inputRange, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___inputRange;

/// @brief Field outputRange, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___outputRange;

/// @brief Field currentValue, offset: 0x34, size: 0x4, def value: None
 float_t  ___currentValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FingerFlexReactor_BlendShapeTarget, ___sourceFinger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlexReactor_BlendShapeTarget, ___targetRenderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlexReactor_BlendShapeTarget, ___blendShapeIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlexReactor_BlendShapeTarget, ___inputRange) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlexReactor_BlendShapeTarget, ___outputRange) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FingerFlexReactor_BlendShapeTarget, ___currentValue) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FingerFlexReactor_BlendShapeTarget) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
