#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedMonoBehaviourObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_def.hpp"
CORDL_MODULE_EXPORT(TrackedMonoBehaviourObject)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
class TrackedMonoBehaviourObject;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject*, "UnityEngine.Localization.PropertyVariants.TrackedObjects", "TrackedMonoBehaviourObject");
// [CustomTrackedObject(typeof(UnityEngine.MonoBehaviour), true)]
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedObjects.JsonSerializerTrackedObject
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedMonoBehaviourObject
class CORDL_TYPE TrackedMonoBehaviourObject : public ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject {
public:
// Declarations
 __declspec(property(get=get_Changed)) ::UnityEngine::Events::UnityEvent*  Changed;

/// @brief Field m_Changed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Changed, put=__cordl_internal_set_m_Changed)) ::UnityEngine::Events::UnityEvent*  m_Changed;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject* New_ctor() ;

/// @brief Method PostApplyTrackedProperties, addr 0xb05775c, size 0x18, virtual true, abstract: false, final false
inline void PostApplyTrackedProperties() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_m_Changed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_m_Changed() ;

constexpr void __cordl_internal_set_m_Changed(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xb057778, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Changed, addr 0xb057754, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_Changed() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedMonoBehaviourObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedMonoBehaviourObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedMonoBehaviourObject(TrackedMonoBehaviourObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedMonoBehaviourObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedMonoBehaviourObject(TrackedMonoBehaviourObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25385};

/// [SerializeField]
/// @brief Field m_Changed, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___m_Changed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject, ___m_Changed) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMonoBehaviourObject) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedObjects
