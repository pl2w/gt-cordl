#pragma once
// IWYU pragma private; include "GlobalNamespace/SpringyWobbler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpringyWobbler)
// Forward declare root types
namespace GlobalNamespace {
class SpringyWobbler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpringyWobbler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpringyWobbler*, "", "SpringyWobbler");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpringyWobbler
class CORDL_TYPE SpringyWobbler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field children, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_children, put=__cordl_internal_set_children)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  children;

/// @brief Field drag, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field endStiffness, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_endStiffness, put=__cordl_internal_set_endStiffness)) float_t  endStiffness;

/// @brief Field endpointVelocity, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_endpointVelocity, put=__cordl_internal_set_endpointVelocity)) ::UnityEngine::Vector3  endpointVelocity;

/// @brief Field idealEndpointLocalPos, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_idealEndpointLocalPos, put=__cordl_internal_set_idealEndpointLocalPos)) ::UnityEngine::Vector3  idealEndpointLocalPos;

/// @brief Field lastEndpointWorldPos, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastEndpointWorldPos, put=__cordl_internal_set_lastEndpointWorldPos)) ::UnityEngine::Vector3  lastEndpointWorldPos;

/// @brief Field lastIdealEndpointWorldPos, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastIdealEndpointWorldPos, put=__cordl_internal_set_lastIdealEndpointWorldPos)) ::UnityEngine::Vector3  lastIdealEndpointWorldPos;

/// @brief Field maxDisplacement, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDisplacement, put=__cordl_internal_set_maxDisplacement)) float_t  maxDisplacement;

/// @brief Field rotateToFaceLocalPos, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotateToFaceLocalPos, put=__cordl_internal_set_rotateToFaceLocalPos)) ::UnityEngine::Vector3  rotateToFaceLocalPos;

/// @brief Field stabilizingForce, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_stabilizingForce, put=__cordl_internal_set_stabilizingForce)) float_t  stabilizingForce;

/// @brief Field startStiffness, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_startStiffness, put=__cordl_internal_set_startStiffness)) float_t  startStiffness;

static inline ::GlobalNamespace::SpringyWobbler* New_ctor() ;

/// @brief Method Start, addr 0x565bd58, size 0x1c4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x565bf1c, size 0x658, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_children() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_children() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr float_t const& __cordl_internal_get_endStiffness() const;

constexpr float_t& __cordl_internal_get_endStiffness() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endpointVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endpointVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_idealEndpointLocalPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_idealEndpointLocalPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastEndpointWorldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastEndpointWorldPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastIdealEndpointWorldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastIdealEndpointWorldPos() ;

constexpr float_t const& __cordl_internal_get_maxDisplacement() const;

constexpr float_t& __cordl_internal_get_maxDisplacement() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotateToFaceLocalPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotateToFaceLocalPos() ;

constexpr float_t const& __cordl_internal_get_stabilizingForce() const;

constexpr float_t& __cordl_internal_get_stabilizingForce() ;

constexpr float_t const& __cordl_internal_get_startStiffness() const;

constexpr float_t& __cordl_internal_get_startStiffness() ;

constexpr void __cordl_internal_set_children(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_endStiffness(float_t  value) ;

constexpr void __cordl_internal_set_endpointVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_idealEndpointLocalPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastEndpointWorldPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastIdealEndpointWorldPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxDisplacement(float_t  value) ;

constexpr void __cordl_internal_set_rotateToFaceLocalPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_stabilizingForce(float_t  value) ;

constexpr void __cordl_internal_set_startStiffness(float_t  value) ;

/// @brief Method .ctor, addr 0x565c574, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpringyWobbler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpringyWobbler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpringyWobbler(SpringyWobbler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpringyWobbler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpringyWobbler(SpringyWobbler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{767};

/// [SerializeField]
/// @brief Field stabilizingForce, offset: 0x20, size: 0x4, def value: None
 float_t  ___stabilizingForce;

/// [SerializeField]
/// @brief Field drag, offset: 0x24, size: 0x4, def value: None
 float_t  ___drag;

/// [SerializeField]
/// @brief Field maxDisplacement, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxDisplacement;

/// @brief Field children, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___children;

/// [SerializeField]
/// @brief Field idealEndpointLocalPos, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___idealEndpointLocalPos;

/// [SerializeField]
/// @brief Field rotateToFaceLocalPos, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotateToFaceLocalPos;

/// [SerializeField]
/// @brief Field startStiffness, offset: 0x50, size: 0x4, def value: None
 float_t  ___startStiffness;

/// [SerializeField]
/// @brief Field endStiffness, offset: 0x54, size: 0x4, def value: None
 float_t  ___endStiffness;

/// @brief Field lastIdealEndpointWorldPos, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastIdealEndpointWorldPos;

/// @brief Field lastEndpointWorldPos, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastEndpointWorldPos;

/// @brief Field endpointVelocity, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endpointVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpringyWobbler, ___stabilizingForce) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringyWobbler, ___drag) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringyWobbler, ___maxDisplacement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringyWobbler, ___children) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringyWobbler, ___idealEndpointLocalPos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringyWobbler, ___rotateToFaceLocalPos) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringyWobbler, ___startStiffness) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringyWobbler, ___endStiffness) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringyWobbler, ___lastIdealEndpointWorldPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringyWobbler, ___lastEndpointWorldPos) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpringyWobbler, ___endpointVelocity) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpringyWobbler) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
