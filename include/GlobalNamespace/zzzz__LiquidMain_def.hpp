#pragma once
// IWYU pragma private; include "GlobalNamespace/LiquidMain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LiquidMain)
namespace BoingKit {
class BoingReactorField;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class LiquidMain;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LiquidMain*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LiquidMain*, "", "LiquidMain");
// Dependencies UnityEngine.GameObject, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LiquidMain
class CORDL_TYPE LiquidMain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Effector, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Effector, put=__cordl_internal_set_Effector)) ::UnityW<::UnityEngine::GameObject>  Effector;

/// @brief Field PlaneMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlaneMaterial, put=__cordl_internal_set_PlaneMaterial)) ::UnityW<::UnityEngine::Material>  PlaneMaterial;

/// @brief Field ReactorField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReactorField, put=__cordl_internal_set_ReactorField)) ::UnityW<::BoingKit::BoingReactorField>  ReactorField;

/// @brief Field kMovingEffectorPhaseSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kMovingEffectorPhaseSpeed, put=setStaticF_kMovingEffectorPhaseSpeed)) float_t  kMovingEffectorPhaseSpeed;

/// @brief Field kNumInstancedPlaneCellPerDrawCall, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kNumInstancedPlaneCellPerDrawCall, put=setStaticF_kNumInstancedPlaneCellPerDrawCall)) int32_t  kNumInstancedPlaneCellPerDrawCall;

/// @brief Field kNumMovingEffectors, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kNumMovingEffectors, put=setStaticF_kNumMovingEffectors)) int32_t  kNumMovingEffectors;

/// @brief Field kNumPlaneCells, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kNumPlaneCells, put=setStaticF_kNumPlaneCells)) int32_t  kNumPlaneCells;

/// @brief Field kPlaneMeshCellSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kPlaneMeshCellSize, put=setStaticF_kPlaneMeshCellSize)) float_t  kPlaneMeshCellSize;

/// @brief Field kPlaneMeshResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kPlaneMeshResolution, put=setStaticF_kPlaneMeshResolution)) int32_t  kPlaneMeshResolution;

/// @brief Field m_aMovingEffector, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_aMovingEffector, put=__cordl_internal_set_m_aMovingEffector)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  m_aMovingEffector;

/// @brief Field m_aMovingEffectorPhase, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_aMovingEffectorPhase, put=__cordl_internal_set_m_aMovingEffectorPhase)) ::ArrayW<float_t>  m_aMovingEffectorPhase;

/// @brief Field m_aaInstancedPlaneCellMatrix, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_aaInstancedPlaneCellMatrix, put=__cordl_internal_set_m_aaInstancedPlaneCellMatrix)) ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>  m_aaInstancedPlaneCellMatrix;

/// @brief Field m_planeMesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_planeMesh, put=__cordl_internal_set_m_planeMesh)) ::UnityW<::UnityEngine::Mesh>  m_planeMesh;

static inline ::GlobalNamespace::LiquidMain* New_ctor() ;

/// @brief Method ResetEffector, addr 0x55e8f44, size 0xf0, virtual false, abstract: false, final false
inline void ResetEffector(::UnityEngine::GameObject*  obj) ;

/// @brief Method Start, addr 0x55e9034, size 0x798, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x55e97cc, size 0x34c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Effector() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Effector() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_PlaneMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_PlaneMaterial() ;

constexpr ::UnityW<::BoingKit::BoingReactorField> const& __cordl_internal_get_ReactorField() const;

constexpr ::UnityW<::BoingKit::BoingReactorField>& __cordl_internal_get_ReactorField() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_m_aMovingEffector() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_m_aMovingEffector() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_aMovingEffectorPhase() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_aMovingEffectorPhase() ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>> const& __cordl_internal_get_m_aaInstancedPlaneCellMatrix() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>& __cordl_internal_get_m_aaInstancedPlaneCellMatrix() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_planeMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_planeMesh() ;

constexpr void __cordl_internal_set_Effector(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_PlaneMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ReactorField(::UnityW<::BoingKit::BoingReactorField>  value) ;

constexpr void __cordl_internal_set_m_aMovingEffector(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_m_aMovingEffectorPhase(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_aaInstancedPlaneCellMatrix(::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>  value) ;

constexpr void __cordl_internal_set_m_planeMesh(::UnityW<::UnityEngine::Mesh>  value) ;

/// @brief Method .ctor, addr 0x55e9b18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_kMovingEffectorPhaseSpeed() ;

static inline int32_t getStaticF_kNumInstancedPlaneCellPerDrawCall() ;

static inline int32_t getStaticF_kNumMovingEffectors() ;

static inline int32_t getStaticF_kNumPlaneCells() ;

static inline float_t getStaticF_kPlaneMeshCellSize() ;

static inline int32_t getStaticF_kPlaneMeshResolution() ;

static inline void setStaticF_kMovingEffectorPhaseSpeed(float_t  value) ;

static inline void setStaticF_kNumInstancedPlaneCellPerDrawCall(int32_t  value) ;

static inline void setStaticF_kNumMovingEffectors(int32_t  value) ;

static inline void setStaticF_kNumPlaneCells(int32_t  value) ;

static inline void setStaticF_kPlaneMeshCellSize(float_t  value) ;

static inline void setStaticF_kPlaneMeshResolution(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LiquidMain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LiquidMain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LiquidMain(LiquidMain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LiquidMain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LiquidMain(LiquidMain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33};

/// @brief Field PlaneMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___PlaneMaterial;

/// @brief Field ReactorField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::BoingKit::BoingReactorField>  ___ReactorField;

/// @brief Field Effector, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Effector;

/// @brief Field m_planeMesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___m_planeMesh;

/// @brief Field m_aaInstancedPlaneCellMatrix, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>  ___m_aaInstancedPlaneCellMatrix;

/// @brief Field m_aMovingEffector, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___m_aMovingEffector;

/// @brief Field m_aMovingEffectorPhase, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_aMovingEffectorPhase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LiquidMain, ___PlaneMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiquidMain, ___ReactorField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiquidMain, ___Effector) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiquidMain, ___m_planeMesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiquidMain, ___m_aaInstancedPlaneCellMatrix) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiquidMain, ___m_aMovingEffector) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LiquidMain, ___m_aMovingEffectorPhase) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LiquidMain) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
