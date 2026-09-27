#pragma once
// IWYU pragma private; include "GlobalNamespace/BootscreenPositioner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BootscreenPositioner)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BootscreenPositioner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BootscreenPositioner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BootscreenPositioner*, "", "BootscreenPositioner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BootscreenPositioner
class CORDL_TYPE BootscreenPositioner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _distanceThreshold, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceThreshold, put=__cordl_internal_set__distanceThreshold)) float_t  _distanceThreshold;

/// @brief Field _pov, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pov, put=__cordl_internal_set__pov)) ::UnityW<::UnityEngine::Transform>  _pov;

/// @brief Field _rotationThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationThreshold, put=__cordl_internal_set__rotationThreshold)) float_t  _rotationThreshold;

/// @brief Method Awake, addr 0x55ebb14, size 0xbc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x55ebbd0, size 0x208, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::BootscreenPositioner* New_ctor() ;

constexpr float_t const& __cordl_internal_get__distanceThreshold() const;

constexpr float_t& __cordl_internal_get__distanceThreshold() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pov() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pov() ;

constexpr float_t const& __cordl_internal_get__rotationThreshold() const;

constexpr float_t& __cordl_internal_get__rotationThreshold() ;

constexpr void __cordl_internal_set__distanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set__pov(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rotationThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0x55ebdd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BootscreenPositioner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BootscreenPositioner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BootscreenPositioner(BootscreenPositioner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BootscreenPositioner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BootscreenPositioner(BootscreenPositioner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{45};

/// [SerializeField]
/// @brief Field _pov, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____pov;

/// [SerializeField]
/// @brief Field _distanceThreshold, offset: 0x28, size: 0x4, def value: None
 float_t  ____distanceThreshold;

/// [SerializeField]
/// @brief Field _rotationThreshold, offset: 0x2c, size: 0x4, def value: None
 float_t  ____rotationThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BootscreenPositioner, ____pov) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootscreenPositioner, ____distanceThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BootscreenPositioner, ____rotationThreshold) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BootscreenPositioner) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
