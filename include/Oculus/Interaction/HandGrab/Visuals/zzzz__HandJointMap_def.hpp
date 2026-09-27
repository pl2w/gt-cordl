#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Visuals/HandJointMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(HandJointMap)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab::Visuals {
class HandJointMap;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::Visuals::HandJointMap*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::Visuals::HandJointMap*, "Oculus.Interaction.HandGrab.Visuals", "HandJointMap");
// Dependencies Oculus.Interaction.Input.HandJointId, System.Object, UnityEngine.Vector3
namespace Oculus::Interaction::HandGrab::Visuals {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.Visuals.HandJointMap
class CORDL_TYPE HandJointMap : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_RotationOffset)) ::UnityEngine::Quaternion  RotationOffset;

 __declspec(property(get=get_TrackedRotation)) ::UnityEngine::Quaternion  TrackedRotation;

/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::Oculus::Interaction::Input::HandJointId  id;

/// @brief Field rotationOffset, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationOffset, put=__cordl_internal_set_rotationOffset)) ::UnityEngine::Vector3  rotationOffset;

/// @brief Field transform, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::UnityW<::UnityEngine::Transform>  transform;

static inline ::Oculus::Interaction::HandGrab::Visuals::HandJointMap* New_ctor() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get_id() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get_id() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set_id(::Oculus::Interaction::Input::HandJointId  value) ;

constexpr void __cordl_internal_set_rotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4e5c08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_RotationOffset, addr 0xa4e5aec, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_RotationOffset() ;

/// @brief Method get_TrackedRotation, addr 0xa4e5b1c, size 0xec, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_TrackedRotation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandJointMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandJointMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandJointMap(HandJointMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandJointMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandJointMap(HandJointMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16344};

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ___id;

/// @brief Field transform, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transform;

/// @brief Field rotationOffset, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::HandJointMap, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::HandJointMap, ___transform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::HandJointMap, ___rotationOffset) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::Visuals::HandJointMap) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab::Visuals
