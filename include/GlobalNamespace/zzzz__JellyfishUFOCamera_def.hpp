#pragma once
// IWYU pragma private; include "GlobalNamespace/JellyfishUFOCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__Vector3Spring_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(JellyfishUFOCamera)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class JellyfishUFOCamera;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::JellyfishUFOCamera*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JellyfishUFOCamera*, "", "JellyfishUFOCamera");
// Dependencies BoingKit.Vector3Spring, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: JellyfishUFOCamera
class CORDL_TYPE JellyfishUFOCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) ::UnityW<::UnityEngine::Transform>  Target;

/// @brief Field m_spring, offset 0x28, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_spring, put=__cordl_internal_set_m_spring)) ::BoingKit::Vector3Spring  m_spring;

/// @brief Method FixedUpdate, addr 0x55e6244, size 0x224, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::JellyfishUFOCamera* New_ctor() ;

/// @brief Method Start, addr 0x55e6154, size 0xf0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Target() ;

constexpr ::BoingKit::Vector3Spring const& __cordl_internal_get_m_spring() const;

constexpr ::BoingKit::Vector3Spring& __cordl_internal_get_m_spring() ;

constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_spring(::BoingKit::Vector3Spring  value) ;

/// @brief Method .ctor, addr 0x55e6468, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JellyfishUFOCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JellyfishUFOCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JellyfishUFOCamera(JellyfishUFOCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JellyfishUFOCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JellyfishUFOCamera(JellyfishUFOCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21};

/// @brief Field Target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Target;

/// @brief Field m_spring, offset: 0x28, size: 0x20, def value: None
 ::BoingKit::Vector3Spring  ___m_spring;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JellyfishUFOCamera, ___Target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JellyfishUFOCamera, ___m_spring) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JellyfishUFOCamera) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
