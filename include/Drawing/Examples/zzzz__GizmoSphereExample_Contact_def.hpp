#pragma once
// IWYU pragma private; include "Drawing/Examples/GizmoSphereExample_Contact.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GizmoSphereExample_Contact)
// Forward declare root types
namespace GlobalNamespace {
struct GizmoSphereExample_Contact;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GizmoSphereExample_Contact);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GizmoSphereExample_Contact, "Drawing.Examples", "GizmoSphereExample/Contact");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.Examples.GizmoSphereExample/Contact
struct CORDL_TYPE GizmoSphereExample_Contact {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GizmoSphereExample_Contact() ;

// Ctor Parameters [CppParam { name: "impulse", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "smoothImpulse", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr GizmoSphereExample_Contact(float_t  impulse, float_t  smoothImpulse, ::UnityEngine::Vector3  lastPoint, ::UnityEngine::Vector3  lastNormal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27779};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field impulse, offset: 0x0, size: 0x4, def value: None
 float_t  impulse;

/// @brief Field smoothImpulse, offset: 0x4, size: 0x4, def value: None
 float_t  smoothImpulse;

/// @brief Field lastPoint, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  lastPoint;

/// @brief Field lastNormal, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  lastNormal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GizmoSphereExample_Contact, impulse) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoSphereExample_Contact, smoothImpulse) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoSphereExample_Contact, lastPoint) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GizmoSphereExample_Contact, lastNormal) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GizmoSphereExample_Contact) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
