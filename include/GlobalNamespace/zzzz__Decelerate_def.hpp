#pragma once
// IWYU pragma private; include "GlobalNamespace/Decelerate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Decelerate)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class Decelerate;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Decelerate*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Decelerate*, "", "Decelerate");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Decelerate
class CORDL_TYPE Decelerate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _friction, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__friction, put=__cordl_internal_set__friction)) float_t  _friction;

/// @brief Field _resetOrientationOnRelease, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__resetOrientationOnRelease, put=__cordl_internal_set__resetOrientationOnRelease)) bool  _resetOrientationOnRelease;

/// @brief Field _rigidbody, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field onStop, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStop, put=__cordl_internal_set_onStop)) ::UnityEngine::Events::UnityEvent*  onStop;

static inline ::GlobalNamespace::Decelerate* New_ctor() ;

/// @brief Method Restart, addr 0x5802bc4, size 0xc, virtual false, abstract: false, final false
inline void Restart() ;

/// @brief Method Update, addr 0x5802bd0, size 0x278, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__friction() const;

constexpr float_t& __cordl_internal_get__friction() ;

constexpr bool const& __cordl_internal_get__resetOrientationOnRelease() const;

constexpr bool& __cordl_internal_get__resetOrientationOnRelease() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStop() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStop() ;

constexpr void __cordl_internal_set__friction(float_t  value) ;

constexpr void __cordl_internal_set__resetOrientationOnRelease(bool  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_onStop(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5802e48, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Decelerate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Decelerate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Decelerate(Decelerate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Decelerate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Decelerate(Decelerate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1681};

/// [SerializeField]
/// @brief Field _rigidbody, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [SerializeField]
/// @brief Field _friction, offset: 0x28, size: 0x4, def value: None
 float_t  ____friction;

/// [SerializeField]
/// @brief Field _resetOrientationOnRelease, offset: 0x2c, size: 0x1, def value: None
 bool  ____resetOrientationOnRelease;

/// @brief Field onStop, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Decelerate, ____rigidbody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Decelerate, ____friction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Decelerate, ____resetOrientationOnRelease) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Decelerate, ___onStop) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Decelerate) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
