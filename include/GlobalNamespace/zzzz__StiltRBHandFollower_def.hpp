#pragma once
// IWYU pragma private; include "GlobalNamespace/StiltRBHandFollower.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StiltRBHandFollower)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class StiltRBHandFollower;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StiltRBHandFollower*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StiltRBHandFollower*, "", "StiltRBHandFollower");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: StiltRBHandFollower
class CORDL_TYPE StiltRBHandFollower : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field angularSpeedLimit, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularSpeedLimit, put=__cordl_internal_set_angularSpeedLimit)) float_t  angularSpeedLimit;

/// @brief Field collisions, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisions, put=__cordl_internal_set_collisions)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Vector3>*  collisions;

/// @brief Field handOffset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_handOffset, put=__cordl_internal_set_handOffset)) ::UnityEngine::Vector3  handOffset;

/// @brief Field handRotOffset, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_handRotOffset, put=__cordl_internal_set_handRotOffset)) ::UnityEngine::Quaternion  handRotOffset;

/// @brief Field rb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field targetHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetHand, put=__cordl_internal_set_targetHand)) ::UnityW<::UnityEngine::Transform>  targetHand;

/// @brief Method FixedUpdate, addr 0x5af7e1c, size 0x248, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::StiltRBHandFollower* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5af8064, size 0x98, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnCollisionExit, addr 0x5af8194, size 0x6c, virtual false, abstract: false, final false
inline void OnCollisionExit(::UnityEngine::Collision*  collision) ;

/// @brief Method OnCollisionStay, addr 0x5af80fc, size 0x98, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  collision) ;

/// @brief Method Start, addr 0x5af7da8, size 0x74, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_angularSpeedLimit() const;

constexpr float_t& __cordl_internal_get_angularSpeedLimit() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Vector3>* const& __cordl_internal_get_collisions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Vector3>*& __cordl_internal_get_collisions() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_handOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_handOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_handRotOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_handRotOffset() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetHand() ;

constexpr void __cordl_internal_set_angularSpeedLimit(float_t  value) ;

constexpr void __cordl_internal_set_collisions(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_handOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_handRotOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_targetHand(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5af8200, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StiltRBHandFollower() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StiltRBHandFollower", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StiltRBHandFollower(StiltRBHandFollower && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StiltRBHandFollower", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StiltRBHandFollower(StiltRBHandFollower const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{382};

/// @brief Field rb, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// [SerializeField]
/// @brief Field targetHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetHand;

/// [SerializeField]
/// @brief Field handOffset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___handOffset;

/// [SerializeField]
/// @brief Field handRotOffset, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___handRotOffset;

/// [SerializeField]
/// @brief Field angularSpeedLimit, offset: 0x4c, size: 0x4, def value: None
 float_t  ___angularSpeedLimit;

/// @brief Field collisions, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Vector3>*  ___collisions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StiltRBHandFollower, ___rb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StiltRBHandFollower, ___targetHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StiltRBHandFollower, ___handOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StiltRBHandFollower, ___handRotOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StiltRBHandFollower, ___angularSpeedLimit) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StiltRBHandFollower, ___collisions) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StiltRBHandFollower) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
