#pragma once
// IWYU pragma private; include "GlobalNamespace/BushFieldReactorMain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BushFieldReactorMain)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BushFieldReactorMain;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BushFieldReactorMain*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BushFieldReactorMain*, "", "BushFieldReactorMain");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: BushFieldReactorMain
class CORDL_TYPE BushFieldReactorMain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Blossom, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Blossom, put=__cordl_internal_set_Blossom)) ::UnityW<::UnityEngine::GameObject>  Blossom;

/// @brief Field BlossomScaleRange, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlossomScaleRange, put=__cordl_internal_set_BlossomScaleRange)) ::UnityEngine::Vector2  BlossomScaleRange;

/// @brief Field Bush, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Bush, put=__cordl_internal_set_Bush)) ::UnityW<::UnityEngine::GameObject>  Bush;

/// @brief Field BushScaleRange, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get_BushScaleRange, put=__cordl_internal_set_BushScaleRange)) ::UnityEngine::Vector2  BushScaleRange;

/// @brief Field CircleSpeed, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_CircleSpeed, put=__cordl_internal_set_CircleSpeed)) float_t  CircleSpeed;

/// @brief Field FieldBounds, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_FieldBounds, put=__cordl_internal_set_FieldBounds)) ::UnityEngine::Vector2  FieldBounds;

/// @brief Field MaxCircleRadius, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxCircleRadius, put=__cordl_internal_set_MaxCircleRadius)) float_t  MaxCircleRadius;

/// @brief Field NumBlossoms, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumBlossoms, put=__cordl_internal_set_NumBlossoms)) int32_t  NumBlossoms;

/// @brief Field NumBushes, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumBushes, put=__cordl_internal_set_NumBushes)) int32_t  NumBushes;

/// @brief Field NumCircles, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumCircles, put=__cordl_internal_set_NumCircles)) int32_t  NumCircles;

/// @brief Field NumSpheresPerCircle, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumSpheresPerCircle, put=__cordl_internal_set_NumSpheresPerCircle)) int32_t  NumSpheresPerCircle;

/// @brief Field Sphere, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sphere, put=__cordl_internal_set_Sphere)) ::UnityW<::UnityEngine::GameObject>  Sphere;

/// @brief Field m_aSphere, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_aSphere, put=__cordl_internal_set_m_aSphere)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  m_aSphere;

/// @brief Field m_basePhase, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_basePhase, put=__cordl_internal_set_m_basePhase)) float_t  m_basePhase;

static inline ::GlobalNamespace::BushFieldReactorMain* New_ctor() ;

/// @brief Method Start, addr 0x55ea980, size 0x520, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x55eaea0, size 0x170, virtual false, abstract: false, final false
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

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Sphere() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Sphere() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_aSphere() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_aSphere() ;

constexpr float_t const& __cordl_internal_get_m_basePhase() const;

constexpr float_t& __cordl_internal_get_m_basePhase() ;

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

constexpr void __cordl_internal_set_Sphere(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_aSphere(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_m_basePhase(float_t  value) ;

/// @brief Method .ctor, addr 0x55eb010, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BushFieldReactorMain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BushFieldReactorMain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BushFieldReactorMain(BushFieldReactorMain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BushFieldReactorMain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BushFieldReactorMain(BushFieldReactorMain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{36};

/// @brief Field Bush, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Bush;

/// @brief Field Blossom, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Blossom;

/// @brief Field Sphere, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Sphere;

/// @brief Field NumBushes, offset: 0x38, size: 0x4, def value: None
 int32_t  ___NumBushes;

/// @brief Field BushScaleRange, offset: 0x3c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___BushScaleRange;

/// @brief Field NumBlossoms, offset: 0x44, size: 0x4, def value: None
 int32_t  ___NumBlossoms;

/// @brief Field BlossomScaleRange, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___BlossomScaleRange;

/// @brief Field FieldBounds, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___FieldBounds;

/// @brief Field NumSpheresPerCircle, offset: 0x58, size: 0x4, def value: None
 int32_t  ___NumSpheresPerCircle;

/// @brief Field NumCircles, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___NumCircles;

/// @brief Field MaxCircleRadius, offset: 0x60, size: 0x4, def value: None
 float_t  ___MaxCircleRadius;

/// @brief Field CircleSpeed, offset: 0x64, size: 0x4, def value: None
 float_t  ___CircleSpeed;

/// @brief Field m_aSphere, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___m_aSphere;

/// @brief Field m_basePhase, offset: 0x70, size: 0x4, def value: None
 float_t  ___m_basePhase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___Bush) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___Blossom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___Sphere) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___NumBushes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___BushScaleRange) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___NumBlossoms) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___BlossomScaleRange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___FieldBounds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___NumSpheresPerCircle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___NumCircles) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___MaxCircleRadius) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___CircleSpeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___m_aSphere) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BushFieldReactorMain, ___m_basePhase) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BushFieldReactorMain) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
