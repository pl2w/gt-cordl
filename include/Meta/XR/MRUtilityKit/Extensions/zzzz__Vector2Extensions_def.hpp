#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/Extensions/Vector2Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector2Extensions)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::Extensions {
class Vector2Extensions;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions*, "Meta.XR.MRUtilityKit.Extensions", "Vector2Extensions");
// [Extension]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit::Extensions {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.Extensions.Vector2Extensions
class CORDL_TYPE Vector2Extensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Abs, addr 0x9f51c78, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Abs(::UnityEngine::Vector2  a) ;

/// [Extension]
/// @brief Method Add, addr 0x9f51c6c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Add(::UnityEngine::Vector2  a, float_t  b) ;

/// [Extension]
/// @brief Method Floor, addr 0x9f4f9a8, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Floor(::UnityEngine::Vector2  a) ;

/// [Extension]
/// @brief Method Frac, addr 0x9f51c58, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Frac(::UnityEngine::Vector2  a) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector2Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector2Extensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2Extensions(Vector2Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Extensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2Extensions(Vector2Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25979};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::Extensions
