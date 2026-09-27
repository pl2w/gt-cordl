#pragma once
// IWYU pragma private; include "UnityEngine/ContactPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__CollisionPairEventFlags_def.hpp"
#include "UnityEngine/zzzz__CollisionPairFlags_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactPair)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct ContactPairPoint;
}
namespace UnityEngine {
struct ContactPoint;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPair;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactPair);
DEFINE_IL2CPP_CLASS(::UnityEngine::ContactPair, "UnityEngine", "ContactPair");
// [IsReadOnly]
// [UsedByNativeCode]
// Dependencies System.IntPtr, UnityEngine.CollisionPairEventFlags, UnityEngine.CollisionPairFlags, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ContactPair
struct CORDL_TYPE ContactPair {
public:
// Declarations
 __declspec(property(get=get_collider)) ::UnityW<::UnityEngine::Collider>  collider;

 __declspec(property(get=get_colliderInstanceID)) int32_t  colliderInstanceID;

 __declspec(property(get=get_hasRemovedCollider)) bool  hasRemovedCollider;

 __declspec(property(get=get_impulseSum)) ::UnityEngine::Vector3  impulseSum;

 __declspec(property(get=get_isCollisionEnter)) bool  isCollisionEnter;

 __declspec(property(get=get_isCollisionExit)) bool  isCollisionExit;

 __declspec(property(get=get_isCollisionStay)) bool  isCollisionStay;

 __declspec(property(get=get_otherCollider)) ::UnityW<::UnityEngine::Collider>  otherCollider;

 __declspec(property(get=get_otherColliderInstanceID)) int32_t  otherColliderInstanceID;

/// @brief Method ExtractContactsArray, addr 0xb67ecf0, size 0x148, virtual false, abstract: false, final false
inline int32_t ExtractContactsArray(::ArrayW<::UnityEngine::ContactPoint>  managedContainer, bool  flipped) ;

/// @brief Method GetContactPoint, addr 0xb68d198, size 0x4, virtual false, abstract: false, final false
inline ::by_ref<::UnityEngine::ContactPairPoint> GetContactPoint(int32_t  index) ;

/// @brief Method GetContactPoint_Internal, addr 0xb67f148, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::ContactPairPoint* GetContactPoint_Internal(int32_t  index) ;

/// @brief Method get_collider, addr 0xb67eac0, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_collider() ;

/// @brief Method get_colliderInstanceID, addr 0xb68d17c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_colliderInstanceID() ;

/// @brief Method get_hasRemovedCollider, addr 0xb68aa20, size 0x10, virtual false, abstract: false, final false
inline bool get_hasRemovedCollider() ;

/// @brief Method get_impulseSum, addr 0xb68d18c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_impulseSum() ;

/// @brief Method get_isCollisionEnter, addr 0xb68aa30, size 0xc, virtual false, abstract: false, final false
inline bool get_isCollisionEnter() ;

/// @brief Method get_isCollisionExit, addr 0xb68ab74, size 0xc, virtual false, abstract: false, final false
inline bool get_isCollisionExit() ;

/// @brief Method get_isCollisionStay, addr 0xb68ab68, size 0xc, virtual false, abstract: false, final false
inline bool get_isCollisionStay() ;

/// @brief Method get_otherCollider, addr 0xb67ea44, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_otherCollider() ;

/// @brief Method get_otherColliderInstanceID, addr 0xb68d184, size 0x8, virtual false, abstract: false, final false
inline int32_t get_otherColliderInstanceID() ;

// Ctor Parameters []
// @brief default ctor
constexpr ContactPair() ;

// Ctor Parameters [CppParam { name: "m_ColliderID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OtherColliderID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartPtr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NbPoints", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::CollisionPairFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Events", ty: "::UnityEngine::CollisionPairEventFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ImpulseSum", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr ContactPair(int32_t  m_ColliderID, int32_t  m_OtherColliderID, ::System::IntPtr  m_StartPtr, uint32_t  m_NbPoints, ::UnityEngine::CollisionPairFlags  m_Flags, ::UnityEngine::CollisionPairEventFlags  m_Events, ::UnityEngine::Vector3  m_ImpulseSum) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30583};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field c_InvalidFaceIndex offset 0xffffffff size 0x4
static constexpr uint32_t  c_InvalidFaceIndex{static_cast<uint32_t>(0xffffffffu)};

/// @brief Field m_ColliderID, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ColliderID;

/// @brief Field m_OtherColliderID, offset: 0x4, size: 0x4, def value: None
 int32_t  m_OtherColliderID;

/// @brief Field m_StartPtr, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_StartPtr;

/// @brief Field m_NbPoints, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_NbPoints;

/// @brief Field m_Flags, offset: 0x14, size: 0x2, def value: None
 ::UnityEngine::CollisionPairFlags  m_Flags;

/// @brief Field m_Events, offset: 0x16, size: 0x2, def value: None
 ::UnityEngine::CollisionPairEventFlags  m_Events;

/// @brief Field m_ImpulseSum, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_ImpulseSum;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ContactPair, m_ColliderID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_OtherColliderID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_StartPtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_NbPoints) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_Flags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_Events) == 0x16, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_ImpulseSum) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ContactPair) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine
