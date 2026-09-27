#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/Extensions/Vector3Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3Extensions)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::Extensions {
class Vector3Extensions;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions*, "Meta.XR.MRUtilityKit.Extensions", "Vector3Extensions");
// [Extension]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit::Extensions {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.Extensions.Vector3Extensions
class CORDL_TYPE Vector3Extensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Add, addr 0x9f4f9b4, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Add(::UnityEngine::Vector3  a, float_t  b) ;

/// [Extension]
/// @brief Method Floor, addr 0x9f4f9d4, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Floor(::UnityEngine::Vector3  a) ;

/// @brief Method FromVector2AndZ, addr 0x9f51640, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FromVector2AndZ(::UnityEngine::Vector2  xy, float_t  z) ;

/// [Extension]
/// @brief Method Subtract, addr 0x9f4f9c4, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Subtract(::UnityEngine::Vector3  a, float_t  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector3Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector3Extensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector3Extensions(Vector3Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Extensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector3Extensions(Vector3Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25980};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::Extensions
