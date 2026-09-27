#pragma once
// IWYU pragma private; include "GlobalNamespace/BushFieldReactorFieldMain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BushFieldReactorFieldMain)
namespace BoingKit {
class BoingEffector;
}
namespace BoingKit {
class BoingReactorField;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class BushFieldReactorFieldMain;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BushFieldReactorFieldMain*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BushFieldReactorFieldMain*, "", "BushFieldReactorFieldMain");
// Dependencies UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: BushFieldReactorFieldMain
class CORDL_TYPE BushFieldReactorFieldMain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Blossom, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Blossom, put=__cordl_internal_set_Blossom)) ::UnityW<::UnityEngine::GameObject>  Blossom;

/// @brief Field BlossomScaleRange, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlossomScaleRange, put=__cordl_internal_set_BlossomScaleRange)) ::UnityEngine::Vector2  BlossomScaleRange;

/// @brief Field Bush, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Bush, put=__cordl_internal_set_Bush)) ::UnityW<::UnityEngine::GameObject>  Bush;

/// @brief Field BushScaleRange, offset 0x44, size 0x8 
 __declspec(property(get=__cordl_internal_get_BushScaleRange, put=__cordl_internal_set_BushScaleRange)) ::UnityEngine::Vector2  BushScaleRange;

/// @brief Field CircleSpeed, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CircleSpeed, put=__cordl_internal_set_CircleSpeed)) float_t  CircleSpeed;

/// @brief Field FieldBounds, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_FieldBounds, put=__cordl_internal_set_FieldBounds)) ::UnityEngine::Vector2  FieldBounds;

/// @brief Field MaxCircleRadius, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxCircleRadius, put=__cordl_internal_set_MaxCircleRadius)) float_t  MaxCircleRadius;

/// @brief Field NumBlossoms, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumBlossoms, put=__cordl_internal_set_NumBlossoms)) int32_t  NumBlossoms;

/// @brief Field NumBushes, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumBushes, put=__cordl_internal_set_NumBushes)) int32_t  NumBushes;

/// @brief Field NumCircles, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumCircles, put=__cordl_internal_set_NumCircles)) int32_t  NumCircles;

/// @brief Field NumSpheresPerCircle, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumSpheresPerCircle, put=__cordl_internal_set_NumSpheresPerCircle)) int32_t  NumSpheresPerCircle;

/// @brief Field ReactorField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReactorField, put=__cordl_internal_set_ReactorField)) ::UnityW<::BoingKit::BoingReactorField>  ReactorField;

/// @brief Field Sphere, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sphere, put=__cordl_internal_set_Sphere)) ::UnityW<::UnityEngine::GameObject>  Sphere;

/// @brief Field kNumInstancedBushesPerDrawCall, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kNumInstancedBushesPerDrawCall, put=setStaticF_kNumInstancedBushesPerDrawCall)) int32_t  kNumInstancedBushesPerDrawCall;

/// @brief Field m_aSphere, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_aSphere, put=__cordl_internal_set_m_aSphere)) ::System::Collections::Generic::List_1<::UnityW<::BoingKit::BoingEffector>>*  m_aSphere;

/// @brief Field m_aaInstancedBushMatrix, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_aaInstancedBushMatrix, put=__cordl_internal_set_m_aaInstancedBushMatrix)) ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>  m_aaInstancedBushMatrix;

/// @brief Field m_basePhase, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_basePhase, put=__cordl_internal_set_m_basePhase)) float_t  m_basePhase;

/// @brief Field m_bushMaterialProps, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_bushMaterialProps, put=__cordl_internal_set_m_bushMaterialProps)) ::UnityEngine::MaterialPropertyBlock*  m_bushMaterialProps;

static inline ::GlobalNamespace::BushFieldReactorFieldMain* New_ctor() ;

/// @brief Method Start, addr 0x55e9d38, size 0x924, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x55ea65c, size 0x2d0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Blossom() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Blossom() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_BlossomScaleRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_BlossomScaleRange() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Bush() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Bush() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_BushScaleRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_BushScaleRange() ;

constexpr float_t const& __cordl_internal_get_CircleSpeed() const;

constexpr float_t& __cordl_internal_get_CircleSpeed() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_FieldBounds() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_FieldBounds() ;

constexpr float_t const& __cordl_internal_get_MaxCircleRadius() const;

constexpr float_t& __cordl_internal_get_MaxCircleRadius() ;

constexpr int32_t const& __cordl_internal_get_NumBlossoms() const;

constexpr int32_t& __cordl_internal_get_NumBlossoms() ;

constexpr int32_t const& __cordl_internal_get_NumBushes() const;

constexpr int32_t& __cordl_internal_get_NumBushes() ;

constexpr int32_t const& __cordl_internal_get_NumCircles() const;

constexpr int32_t& __cordl_internal_get_NumCircles() ;

constexpr int32_t const& __cordl_internal_get_NumSpheresPerCircle() const;

constexpr int32_t& __cordl_internal_get_NumSpheresPerCircle() ;

constexpr ::UnityW<::BoingKit::BoingReactorField> const& __cordl_internal_get_ReactorField() const;

constexpr ::UnityW<::BoingKit::BoingReactorField>& __cordl_internal_get_ReactorField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Sphere() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Sphere() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::BoingKit::BoingEffector>>* const& __cordl_internal_get_m_aSphere() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::BoingKit::BoingEffector>>*& __cordl_internal_get_m_aSphere() ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>> const& __cordl_internal_get_m_aaInstancedBushMatrix() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>& __cordl_internal_get_m_aaInstancedBushMatrix() ;

constexpr float_t const& __cordl_internal_get_m_basePhase() const;

constexpr float_t& __cordl_internal_get_m_basePhase() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_bushMaterialProps() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_bushMaterialProps() ;

constexpr void __cordl_internal_set_Blossom(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_BlossomScaleRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_Bush(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_BushScaleRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_CircleSpeed(float_t  value) ;

constexpr void __cordl_internal_set_FieldBounds(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_MaxCircleRadius(float_t  value) ;

constexpr void __cordl_internal_set_NumBlossoms(int32_t  value) ;

constexpr void __cordl_internal_set_NumBushes(int32_t  value) ;

constexpr void __cordl_internal_set_NumCircles(int32_t  value) ;

constexpr void __cordl_internal_set_NumSpheresPerCircle(int32_t  value) ;

constexpr void __cordl_internal_set_ReactorField(::UnityW<::BoingKit::BoingReactorField>  value) ;

constexpr void __cordl_internal_set_Sphere(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_aSphere(::System::Collections::Generic::List_1<::UnityW<::BoingKit::BoingEffector>>*  value) ;

constexpr void __cordl_internal_set_m_aaInstancedBushMatrix(::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>  value) ;

constexpr void __cordl_internal_set_m_basePhase(float_t  value) ;

constexpr void __cordl_internal_set_m_bushMaterialProps(::UnityEngine::MaterialPropertyBlock*  value) ;

/// @brief Method .ctor, addr 0x55ea92c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_kNumInstancedBushesPerDrawCall() ;

static inline void setStaticF_kNumInstancedBushesPerDrawCall(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BushFieldReactorFieldMain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BushFieldReactorFieldMain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BushFieldReactorFieldMain(BushFieldReactorFieldMain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BushFieldReactorFieldMain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BushFieldReactorFieldMain(BushFieldReactorFieldMain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{35};

/// @brief Field Bush, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Bush;

/// @brief Field Blossom, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Blossom;

/// @brief Field Sphere, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Sphere;

/// @brief Field ReactorField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::BoingKit::BoingReactorField>  ___ReactorField;

/// @brief Field NumBushes, offset: 0x40, size: 0x4, def value: None
 int32_t  ___NumBushes;

/// @brief Field BushScaleRange, offset: 0x44, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___BushScaleRange;

/// @brief Field NumBlossoms, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___NumBlossoms;

/// @brief Field BlossomScaleRange, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___BlossomScaleRange;

/// @brief Field FieldBounds, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___FieldBounds;

/// @brief Field NumSpheresPerCircle, offset: 0x60, size: 0x4, def value: None
 int32_t  ___NumSpheresPerCircle;

/// @brief Field NumCircles, offset: 0x64, size: 0x4, def value: None
 int32_t  ___NumCircles;

/// @brief Field MaxCircleRadius, offset: 0x68, size: 0x4, def value: None
 float_t  ___MaxCircleRadius;

/// @brief Field CircleSpeed, offset: 0x6c, size: 0x4, def value: None
 float_t  ___CircleSpeed;

/// @brief Field m_aSphere, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::BoingKit::BoingEffector>>*  ___m_aSphere;

/// @brief Field m_basePhase, offset: 0x78, size: 0x4, def value: None
 float_t  ___m_basePhase;

/// @brief Field m_aaInstancedBushMatrix, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>  ___m_aaInstancedBushMatrix;

/// @brief Field m_bushMaterialProps, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___m_bushMaterialProps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___Bush) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___Blossom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___Sphere) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___ReactorField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___NumBushes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___BushScaleRange) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___NumBlossoms) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___BlossomScaleRange) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___FieldBounds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___NumSpheresPerCircle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___NumCircles) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___MaxCircleRadius) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___CircleSpeed) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___m_aSphere) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___m_basePhase) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___m_aaInstancedBushMatrix) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorFieldMain, ___m_bushMaterialProps) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BushFieldReactorFieldMain) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
