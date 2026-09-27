#pragma once
// IWYU pragma private; include "GlobalNamespace/CounterRotator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CounterRotator)
namespace GorillaTag::Gravity {
class ChangingBasicGravityZone;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CounterRotator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CounterRotator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CounterRotator*, "", "CounterRotator");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CounterRotator
class CORDL_TYPE CounterRotator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field gravityCompensator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gravityCompensator, put=__cordl_internal_set_gravityCompensator)) ::UnityW<::GorillaTag::Gravity::ChangingBasicGravityZone>  gravityCompensator;

/// @brief Field stabilizedObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stabilizedObject, put=__cordl_internal_set_stabilizedObject)) ::UnityW<::UnityEngine::GameObject>  stabilizedObject;

/// @brief Field startingPosition, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingPosition, put=__cordl_internal_set_startingPosition)) ::UnityEngine::Vector3  startingPosition;

/// @brief Field startingRotation, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_startingRotation, put=__cordl_internal_set_startingRotation)) ::UnityEngine::Quaternion  startingRotation;

/// @brief Method LateUpdate, addr 0x566dc30, size 0x2d0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::CounterRotator* New_ctor() ;

/// @brief Method Start, addr 0x566dbd4, size 0x5c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GorillaTag::Gravity::ChangingBasicGravityZone> const& __cordl_internal_get_gravityCompensator() const;

constexpr ::UnityW<::GorillaTag::Gravity::ChangingBasicGravityZone>& __cordl_internal_get_gravityCompensator() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_stabilizedObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_stabilizedObject() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_startingRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_startingRotation() ;

constexpr void __cordl_internal_set_gravityCompensator(::UnityW<::GorillaTag::Gravity::ChangingBasicGravityZone>  value) ;

constexpr void __cordl_internal_set_stabilizedObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_startingPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startingRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x566df00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CounterRotator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CounterRotator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CounterRotator(CounterRotator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CounterRotator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CounterRotator(CounterRotator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{788};

/// [SerializeField]
/// @brief Field stabilizedObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___stabilizedObject;

/// [SerializeField]
/// @brief Field gravityCompensator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Gravity::ChangingBasicGravityZone>  ___gravityCompensator;

/// @brief Field startingPosition, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingPosition;

/// @brief Field startingRotation, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___startingRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CounterRotator, ___stabilizedObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CounterRotator, ___gravityCompensator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CounterRotator, ___startingPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CounterRotator, ___startingRotation) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CounterRotator) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
