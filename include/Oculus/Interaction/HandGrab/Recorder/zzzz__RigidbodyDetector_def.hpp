#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Recorder/RigidbodyDetector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RigidbodyDetector)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab::Recorder {
class RigidbodyDetector;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*, "Oculus.Interaction.HandGrab.Recorder", "RigidbodyDetector");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::HandGrab::Recorder {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.Recorder.RigidbodyDetector
class CORDL_TYPE RigidbodyDetector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IntersectingBodies, put=set_IntersectingBodies)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  IntersectingBodies;

/// @brief Field <IntersectingBodies>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__IntersectingBodies_k__BackingField, put=__cordl_internal_set__IntersectingBodies_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  _IntersectingBodies_k__BackingField;

/// @brief Field _ignoredBodies, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ignoredBodies, put=__cordl_internal_set__ignoredBodies)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Rigidbody>>*  _ignoredBodies;

/// @brief Method IgnoreBody, addr 0xa4324b8, size 0xe4, virtual false, abstract: false, final false
inline void IgnoreBody(::UnityEngine::Rigidbody*  body) ;

static inline ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0xa433a44, size 0x160, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnTriggerExit, addr 0xa433ba4, size 0xe0, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  collider) ;

/// @brief Method UnIgnoreBody, addr 0xa4339b4, size 0x90, virtual false, abstract: false, final false
inline void UnIgnoreBody(::UnityEngine::Rigidbody*  body) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* const& __cordl_internal_get__IntersectingBodies_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*& __cordl_internal_get__IntersectingBodies_k__BackingField() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Rigidbody>>* const& __cordl_internal_get__ignoredBodies() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Rigidbody>>*& __cordl_internal_get__ignoredBodies() ;

constexpr void __cordl_internal_set__IntersectingBodies_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  value) ;

constexpr void __cordl_internal_set__ignoredBodies(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Rigidbody>>*  value) ;

/// @brief Method .ctor, addr 0xa433c84, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IntersectingBodies, addr 0xa4339a4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* get_IntersectingBodies() ;

/// [CompilerGenerated]
/// @brief Method set_IntersectingBodies, addr 0xa4339ac, size 0x8, virtual false, abstract: false, final false
inline void set_IntersectingBodies(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigidbodyDetector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyDetector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigidbodyDetector(RigidbodyDetector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyDetector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigidbodyDetector(RigidbodyDetector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28284};

/// @brief Field _ignoredBodies, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Rigidbody>>*  ____ignoredBodies;

/// [CompilerGenerated]
/// @brief Field <IntersectingBodies>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  ____IntersectingBodies_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector, ____ignoredBodies) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector, ____IntersectingBodies_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab::Recorder
