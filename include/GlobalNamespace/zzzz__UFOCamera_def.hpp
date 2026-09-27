#pragma once
// IWYU pragma private; include "GlobalNamespace/UFOCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__Vector3Spring_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(UFOCamera)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class UFOCamera;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UFOCamera*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UFOCamera*, "", "UFOCamera");
// Dependencies BoingKit.Vector3Spring, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: UFOCamera
class CORDL_TYPE UFOCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) ::UnityW<::UnityEngine::Transform>  Target;

/// @brief Field m_spring, offset 0x34, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_spring, put=__cordl_internal_set_m_spring)) ::BoingKit::Vector3Spring  m_spring;

/// @brief Field m_targetOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_targetOffset, put=__cordl_internal_set_m_targetOffset)) ::UnityEngine::Vector3  m_targetOffset;

/// @brief Method FixedUpdate, addr 0x55e79ac, size 0x124, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::UFOCamera* New_ctor() ;

/// @brief Method Start, addr 0x55e7878, size 0x134, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Target() ;

constexpr ::BoingKit::Vector3Spring const& __cordl_internal_get_m_spring() const;

constexpr ::BoingKit::Vector3Spring& __cordl_internal_get_m_spring() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_targetOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_targetOffset() ;

constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_spring(::BoingKit::Vector3Spring  value) ;

constexpr void __cordl_internal_set_m_targetOffset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x55e7ad0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UFOCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UFOCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UFOCamera(UFOCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UFOCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UFOCamera(UFOCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26};

/// @brief Field Target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Target;

/// @brief Field m_targetOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_targetOffset;

/// @brief Field m_spring, offset: 0x34, size: 0x20, def value: None
 ::BoingKit::Vector3Spring  ___m_spring;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UFOCamera, ___Target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UFOCamera, ___m_targetOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UFOCamera, ___m_spring) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UFOCamera) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
