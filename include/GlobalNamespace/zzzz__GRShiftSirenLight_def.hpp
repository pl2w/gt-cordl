#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShiftSirenLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRShiftSirenLight)
namespace GlobalNamespace {
class GhostReactorShiftManager;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRShiftSirenLight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRShiftSirenLight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRShiftSirenLight*, "", "GRShiftSirenLight");
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRShiftSirenLight
class CORDL_TYPE GRShiftSirenLight : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field brightLight, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_brightLight, put=__cordl_internal_set_brightLight)) float_t  brightLight;

/// @brief Field dimLight, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_dimLight, put=__cordl_internal_set_dimLight)) float_t  dimLight;

/// @brief Field greenLight, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_greenLight, put=__cordl_internal_set_greenLight)) ::UnityW<::UnityEngine::GameObject>  greenLight;

/// @brief Field greenLightParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_greenLightParent, put=__cordl_internal_set_greenLightParent)) ::UnityW<::UnityEngine::Transform>  greenLightParent;

/// @brief Field readyRoomLight, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_readyRoomLight, put=__cordl_internal_set_readyRoomLight)) ::UnityW<::UnityEngine::Light>  readyRoomLight;

/// @brief Field redLight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_redLight, put=__cordl_internal_set_redLight)) ::UnityW<::UnityEngine::GameObject>  redLight;

/// @brief Field redLightParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_redLightParent, put=__cordl_internal_set_redLightParent)) ::UnityW<::UnityEngine::Transform>  redLightParent;

/// @brief Field rotationRate, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationRate, put=__cordl_internal_set_rotationRate)) float_t  rotationRate;

/// @brief Field shiftManager, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftManager, put=__cordl_internal_set_shiftManager)) ::UnityW<::GlobalNamespace::GhostReactorShiftManager>  shiftManager;

static inline ::GlobalNamespace::GRShiftSirenLight* New_ctor() ;

/// @brief Method Tick, addr 0x58b3d0c, size 0x1ec, virtual true, abstract: false, final false
inline void Tick() ;

constexpr float_t const& __cordl_internal_get_brightLight() const;

constexpr float_t& __cordl_internal_get_brightLight() ;

constexpr float_t const& __cordl_internal_get_dimLight() const;

constexpr float_t& __cordl_internal_get_dimLight() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_greenLight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_greenLight() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_greenLightParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_greenLightParent() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_readyRoomLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_readyRoomLight() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_redLight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_redLight() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_redLightParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_redLightParent() ;

constexpr float_t const& __cordl_internal_get_rotationRate() const;

constexpr float_t& __cordl_internal_get_rotationRate() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager> const& __cordl_internal_get_shiftManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager>& __cordl_internal_get_shiftManager() ;

constexpr void __cordl_internal_set_brightLight(float_t  value) ;

constexpr void __cordl_internal_set_dimLight(float_t  value) ;

constexpr void __cordl_internal_set_greenLight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_greenLightParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_readyRoomLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_redLight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_redLightParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rotationRate(float_t  value) ;

constexpr void __cordl_internal_set_shiftManager(::UnityW<::GlobalNamespace::GhostReactorShiftManager>  value) ;

/// @brief Method .ctor, addr 0x58b3ef8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRShiftSirenLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRShiftSirenLight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRShiftSirenLight(GRShiftSirenLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRShiftSirenLight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRShiftSirenLight(GRShiftSirenLight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2037};

/// @brief Field rotationRate, offset: 0x24, size: 0x4, def value: None
 float_t  ___rotationRate;

/// @brief Field greenLightParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___greenLightParent;

/// @brief Field redLightParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___redLightParent;

/// @brief Field redLight, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___redLight;

/// @brief Field greenLight, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___greenLight;

/// @brief Field shiftManager, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorShiftManager>  ___shiftManager;

/// @brief Field dimLight, offset: 0x50, size: 0x4, def value: None
 float_t  ___dimLight;

/// @brief Field brightLight, offset: 0x54, size: 0x4, def value: None
 float_t  ___brightLight;

/// @brief Field readyRoomLight, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___readyRoomLight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRShiftSirenLight, ___rotationRate) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShiftSirenLight, ___greenLightParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShiftSirenLight, ___redLightParent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShiftSirenLight, ___redLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShiftSirenLight, ___greenLight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShiftSirenLight, ___shiftManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShiftSirenLight, ___dimLight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShiftSirenLight, ___brightLight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShiftSirenLight, ___readyRoomLight) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRShiftSirenLight) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
