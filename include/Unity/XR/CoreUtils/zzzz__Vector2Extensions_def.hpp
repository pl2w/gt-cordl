#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Vector2Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector2Extensions)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class Vector2Extensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Vector2Extensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Vector2Extensions*, "Unity.XR.CoreUtils", "Vector2Extensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Vector2Extensions
class CORDL_TYPE Vector2Extensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Abs, addr 0xb3f2b0c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Abs(::UnityEngine::Vector2  vector) ;

/// [Extension]
/// @brief Method Inverse, addr 0xb3f2ae4, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Inverse(::UnityEngine::Vector2  vector) ;

/// [Extension]
/// @brief Method MaxComponent, addr 0xb3f2b00, size 0xc, virtual false, abstract: false, final false
static inline float_t MaxComponent(::UnityEngine::Vector2  vector) ;

/// [Extension]
/// @brief Method MinComponent, addr 0xb3f2af4, size 0xc, virtual false, abstract: false, final false
static inline float_t MinComponent(::UnityEngine::Vector2  vector) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30413};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Vector2Extensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
