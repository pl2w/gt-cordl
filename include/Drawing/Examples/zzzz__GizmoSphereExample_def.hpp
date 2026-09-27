#pragma once
// IWYU pragma private; include "Drawing/Examples/GizmoSphereExample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__MonoBehaviourGizmos_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(GizmoSphereExample)
namespace GlobalNamespace {
struct GizmoSphereExample_Contact;
}
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
// Forward declare root types
namespace Drawing::Examples {
class GizmoSphereExample;
}
// Write type traits
MARK_REF_T(::Drawing::Examples::GizmoSphereExample*);
DEFINE_IL2CPP_CLASS(::Drawing::Examples::GizmoSphereExample*, "Drawing.Examples", "GizmoSphereExample");
// Dependencies Drawing.MonoBehaviourGizmos, UnityEngine.Color
namespace Drawing::Examples {
// Is value type: false
// CS Name: Drawing.Examples.GizmoSphereExample
class CORDL_TYPE GizmoSphereExample : public ::Drawing::MonoBehaviourGizmos {
public:
// Declarations
using Contact = ::GlobalNamespace::GizmoSphereExample_Contact;

/// @brief Field contactForces, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_contactForces, put=__cordl_internal_set_contactForces)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::GlobalNamespace::GizmoSphereExample_Contact>*  contactForces;

/// @brief Field gizmoColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_gizmoColor, put=__cordl_internal_set_gizmoColor)) ::UnityEngine::Color  gizmoColor;

/// @brief Field gizmoColor2, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_gizmoColor2, put=__cordl_internal_set_gizmoColor2)) ::UnityEngine::Color  gizmoColor2;

/// @brief Method DrawGizmos, addr 0x55e0474, size 0x388, virtual true, abstract: false, final false
inline void DrawGizmos() ;

/// @brief Method FixedUpdate, addr 0x55e07fc, size 0x2f0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Drawing::Examples::GizmoSphereExample* New_ctor() ;

/// @brief Method OnCollisionStay, addr 0x55e0aec, size 0x22c, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  collision) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::GlobalNamespace::GizmoSphereExample_Contact>* const& __cordl_internal_get_contactForces() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::GlobalNamespace::GizmoSphereExample_Contact>*& __cordl_internal_get_contactForces() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_gizmoColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_gizmoColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_gizmoColor2() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_gizmoColor2() ;

constexpr void __cordl_internal_set_contactForces(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::GlobalNamespace::GizmoSphereExample_Contact>*  value) ;

constexpr void __cordl_internal_set_gizmoColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_gizmoColor2(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x55e0d18, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GizmoSphereExample() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GizmoSphereExample", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GizmoSphereExample(GizmoSphereExample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GizmoSphereExample", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GizmoSphereExample(GizmoSphereExample const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27780};

/// @brief Field gizmoColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___gizmoColor;

/// @brief Field gizmoColor2, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___gizmoColor2;

/// @brief Field contactForces, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::GlobalNamespace::GizmoSphereExample_Contact>*  ___contactForces;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::Examples::GizmoSphereExample, ___gizmoColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::GizmoSphereExample, ___gizmoColor2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::GizmoSphereExample, ___contactForces) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Drawing::Examples::GizmoSphereExample) == 0x48, "Size mismatch!");

} // namespace end def Drawing::Examples
