#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoCatchThrowBall.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AutoCatchThrowBall)
namespace GlobalNamespace {
struct AutoCatchThrowBall_HeldBall;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AutoCatchThrowBall;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AutoCatchThrowBall*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutoCatchThrowBall*, "", "AutoCatchThrowBall");
// Dependencies UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AutoCatchThrowBall
class CORDL_TYPE AutoCatchThrowBall : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HeldBall = ::GlobalNamespace::AutoCatchThrowBall_HeldBall;

/// @brief Field ballLayer, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ballLayer, put=__cordl_internal_set_ballLayer)) ::UnityEngine::LayerMask  ballLayer;

/// @brief Field ballPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ballPrefab, put=__cordl_internal_set_ballPrefab)) ::UnityW<::UnityEngine::GameObject>  ballPrefab;

/// @brief Field catchWaitTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchWaitTime, put=__cordl_internal_set_catchWaitTime)) float_t  catchWaitTime;

/// @brief Field heldBalls, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldBalls, put=__cordl_internal_set_heldBalls)) ::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall_HeldBall>*  heldBalls;

/// @brief Field overlapResults, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapResults, put=__cordl_internal_set_overlapResults)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  overlapResults;

/// @brief Field throwPitch, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_throwPitch, put=__cordl_internal_set_throwPitch)) float_t  throwPitch;

/// @brief Field throwSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_throwSpeed, put=__cordl_internal_set_throwSpeed)) float_t  throwSpeed;

/// @brief Field throwWaitTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_throwWaitTime, put=__cordl_internal_set_throwWaitTime)) float_t  throwWaitTime;

/// @brief Field vrRig, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrRig, put=__cordl_internal_set_vrRig)) ::UnityW<::GlobalNamespace::VRRig>  vrRig;

static inline ::GlobalNamespace::AutoCatchThrowBall* New_ctor() ;

/// @brief Method Start, addr 0x5ade774, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Throw, addr 0x5adf328, size 0x1b8, virtual false, abstract: false, final false
inline void Throw(::GlobalNamespace::TransferrableObject*  transferrable, ::UnityEngine::Vector3  throwDir) ;

/// @brief Method Update, addr 0x5ade7cc, size 0xb5c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_ballLayer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_ballLayer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ballPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ballPrefab() ;

constexpr float_t const& __cordl_internal_get_catchWaitTime() const;

constexpr float_t& __cordl_internal_get_catchWaitTime() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall_HeldBall>* const& __cordl_internal_get_heldBalls() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall_HeldBall>*& __cordl_internal_get_heldBalls() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_overlapResults() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_overlapResults() ;

constexpr float_t const& __cordl_internal_get_throwPitch() const;

constexpr float_t& __cordl_internal_get_throwPitch() ;

constexpr float_t const& __cordl_internal_get_throwSpeed() const;

constexpr float_t& __cordl_internal_get_throwSpeed() ;

constexpr float_t const& __cordl_internal_get_throwWaitTime() const;

constexpr float_t& __cordl_internal_get_throwWaitTime() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_vrRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_vrRig() ;

constexpr void __cordl_internal_set_ballLayer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_ballPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_catchWaitTime(float_t  value) ;

constexpr void __cordl_internal_set_heldBalls(::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall_HeldBall>*  value) ;

constexpr void __cordl_internal_set_overlapResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_throwPitch(float_t  value) ;

constexpr void __cordl_internal_set_throwSpeed(float_t  value) ;

constexpr void __cordl_internal_set_throwWaitTime(float_t  value) ;

constexpr void __cordl_internal_set_vrRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5adf4e8, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoCatchThrowBall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoCatchThrowBall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoCatchThrowBall(AutoCatchThrowBall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoCatchThrowBall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoCatchThrowBall(AutoCatchThrowBall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3432};

/// @brief Field ballPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ballPrefab;

/// @brief Field throwPitch, offset: 0x28, size: 0x4, def value: None
 float_t  ___throwPitch;

/// @brief Field throwSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___throwSpeed;

/// @brief Field throwWaitTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___throwWaitTime;

/// @brief Field catchWaitTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___catchWaitTime;

/// @brief Field ballLayer, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___ballLayer;

/// @brief Field vrRig, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___vrRig;

/// @brief Field overlapResults, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___overlapResults;

/// @brief Field heldBalls, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AutoCatchThrowBall_HeldBall>*  ___heldBalls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall, ___ballPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall, ___throwPitch) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall, ___throwSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall, ___throwWaitTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall, ___catchWaitTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall, ___ballLayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall, ___vrRig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall, ___overlapResults) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoCatchThrowBall, ___heldBalls) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutoCatchThrowBall) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
