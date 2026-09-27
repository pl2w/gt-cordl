#pragma once
// IWYU pragma private; include "GlobalNamespace/OrbitCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OrbitCamera)
// Forward declare root types
namespace GlobalNamespace {
class OrbitCamera;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OrbitCamera*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OrbitCamera*, "", "OrbitCamera");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OrbitCamera
class CORDL_TYPE OrbitCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field kOrbitSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kOrbitSpeed, put=setStaticF_kOrbitSpeed)) float_t  kOrbitSpeed;

/// @brief Field m_phase, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_phase, put=__cordl_internal_set_m_phase)) float_t  m_phase;

static inline ::GlobalNamespace::OrbitCamera* New_ctor() ;

/// @brief Method Start, addr 0x55e8900, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x55e8904, size 0x214, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_m_phase() const;

constexpr float_t& __cordl_internal_get_m_phase() ;

constexpr void __cordl_internal_set_m_phase(float_t  value) ;

/// @brief Method .ctor, addr 0x55e8b18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_kOrbitSpeed() ;

static inline void setStaticF_kOrbitSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrbitCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrbitCamera", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OrbitCamera(OrbitCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrbitCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrbitCamera(OrbitCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31};

/// @brief Field m_phase, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_phase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OrbitCamera, ___m_phase) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OrbitCamera) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
