#pragma once
// IWYU pragma private; include "GlobalNamespace/TestManipulatableCube.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ManipulatableObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TestManipulatableCube)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TestManipulatableCube;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TestManipulatableCube*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestManipulatableCube*, "", "TestManipulatableCube");
// Dependencies ManipulatableObject, UnityEngine.Matrix4x4, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestManipulatableCube
class CORDL_TYPE TestManipulatableCube : public ::GlobalNamespace::ManipulatableObject {
public:
// Declarations
/// @brief Field applyReleaseVelocity, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyReleaseVelocity, put=__cordl_internal_set_applyReleaseVelocity)) bool  applyReleaseVelocity;

/// @brief Field breakDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_breakDistance, put=__cordl_internal_set_breakDistance)) float_t  breakDistance;

/// @brief Field localSpace, offset 0x54, size 0x40 
 __declspec(property(get=__cordl_internal_get_localSpace, put=__cordl_internal_set_localSpace)) ::UnityEngine::Matrix4x4  localSpace;

/// @brief Field maxXOffset, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxXOffset, put=__cordl_internal_set_maxXOffset)) float_t  maxXOffset;

/// @brief Field maxYOffset, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxYOffset, put=__cordl_internal_set_maxYOffset)) float_t  maxYOffset;

/// @brief Field maxZOffset, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxZOffset, put=__cordl_internal_set_maxZOffset)) float_t  maxZOffset;

/// @brief Field minXOffset, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_minXOffset, put=__cordl_internal_set_minXOffset)) float_t  minXOffset;

/// @brief Field minYOffset, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_minYOffset, put=__cordl_internal_set_minYOffset)) float_t  minYOffset;

/// @brief Field minZOffset, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_minZOffset, put=__cordl_internal_set_minZOffset)) float_t  minZOffset;

/// @brief Field releaseDrag, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_releaseDrag, put=__cordl_internal_set_releaseDrag)) float_t  releaseDrag;

/// @brief Field startingPos, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingPos, put=__cordl_internal_set_startingPos)) ::UnityEngine::Vector3  startingPos;

/// @brief Field velocity, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method Awake, addr 0x575cedc, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetLocalSpace, addr 0x575d300, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetLocalSpace() ;

static inline ::GlobalNamespace::TestManipulatableCube* New_ctor() ;

/// @brief Method OnHeldUpdate, addr 0x575d014, size 0xe8, virtual true, abstract: false, final false
inline void OnHeldUpdate(::UnityEngine::GameObject*  hand) ;

/// @brief Method OnReleasedUpdate, addr 0x575d0fc, size 0x204, virtual true, abstract: false, final false
inline void OnReleasedUpdate() ;

/// @brief Method OnStartManipulation, addr 0x575cf48, size 0x4, virtual true, abstract: false, final false
inline void OnStartManipulation(::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnStopManipulation, addr 0x575cf4c, size 0x2c, virtual true, abstract: false, final false
inline void OnStopManipulation(::UnityEngine::GameObject*  releasingHand, ::UnityEngine::Vector3  releaseVelocity) ;

/// @brief Method SetCubeToSpecificPosition, addr 0x575d31c, size 0xcc, virtual false, abstract: false, final false
inline void SetCubeToSpecificPosition(::UnityEngine::Vector3  pos) ;

/// @brief Method SetCubeToSpecificPosition, addr 0x575d3e8, size 0xb8, virtual false, abstract: false, final false
inline void SetCubeToSpecificPosition(float_t  x, float_t  y, float_t  z) ;

/// @brief Method ShouldHandDetach, addr 0x575cf78, size 0x9c, virtual true, abstract: false, final false
inline bool ShouldHandDetach(::UnityEngine::GameObject*  hand) ;

constexpr bool const& __cordl_internal_get_applyReleaseVelocity() const;

constexpr bool& __cordl_internal_get_applyReleaseVelocity() ;

constexpr float_t const& __cordl_internal_get_breakDistance() const;

constexpr float_t& __cordl_internal_get_breakDistance() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_localSpace() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_localSpace() ;

constexpr float_t const& __cordl_internal_get_maxXOffset() const;

constexpr float_t& __cordl_internal_get_maxXOffset() ;

constexpr float_t const& __cordl_internal_get_maxYOffset() const;

constexpr float_t& __cordl_internal_get_maxYOffset() ;

constexpr float_t const& __cordl_internal_get_maxZOffset() const;

constexpr float_t& __cordl_internal_get_maxZOffset() ;

constexpr float_t const& __cordl_internal_get_minXOffset() const;

constexpr float_t& __cordl_internal_get_minXOffset() ;

constexpr float_t const& __cordl_internal_get_minYOffset() const;

constexpr float_t& __cordl_internal_get_minYOffset() ;

constexpr float_t const& __cordl_internal_get_minZOffset() const;

constexpr float_t& __cordl_internal_get_minZOffset() ;

constexpr float_t const& __cordl_internal_get_releaseDrag() const;

constexpr float_t& __cordl_internal_get_releaseDrag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_applyReleaseVelocity(bool  value) ;

constexpr void __cordl_internal_set_breakDistance(float_t  value) ;

constexpr void __cordl_internal_set_localSpace(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_maxXOffset(float_t  value) ;

constexpr void __cordl_internal_set_maxYOffset(float_t  value) ;

constexpr void __cordl_internal_set_maxZOffset(float_t  value) ;

constexpr void __cordl_internal_set_minXOffset(float_t  value) ;

constexpr void __cordl_internal_set_minYOffset(float_t  value) ;

constexpr void __cordl_internal_set_minZOffset(float_t  value) ;

constexpr void __cordl_internal_set_releaseDrag(float_t  value) ;

constexpr void __cordl_internal_set_startingPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x575d4a0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestManipulatableCube() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestManipulatableCube", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestManipulatableCube(TestManipulatableCube && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestManipulatableCube", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestManipulatableCube(TestManipulatableCube const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1335};

/// @brief Field breakDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ___breakDistance;

/// @brief Field maxXOffset, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxXOffset;

/// @brief Field minXOffset, offset: 0x38, size: 0x4, def value: None
 float_t  ___minXOffset;

/// @brief Field maxYOffset, offset: 0x3c, size: 0x4, def value: None
 float_t  ___maxYOffset;

/// @brief Field minYOffset, offset: 0x40, size: 0x4, def value: None
 float_t  ___minYOffset;

/// @brief Field maxZOffset, offset: 0x44, size: 0x4, def value: None
 float_t  ___maxZOffset;

/// @brief Field minZOffset, offset: 0x48, size: 0x4, def value: None
 float_t  ___minZOffset;

/// @brief Field applyReleaseVelocity, offset: 0x4c, size: 0x1, def value: None
 bool  ___applyReleaseVelocity;

/// @brief Field releaseDrag, offset: 0x50, size: 0x4, def value: None
 float_t  ___releaseDrag;

/// @brief Field localSpace, offset: 0x54, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___localSpace;

/// @brief Field startingPos, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingPos;

/// @brief Field velocity, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___breakDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___maxXOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___minXOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___maxYOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___minYOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___maxZOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___minZOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___applyReleaseVelocity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___releaseDrag) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___localSpace) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___startingPos) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestManipulatableCube, ___velocity) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TestManipulatableCube) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
