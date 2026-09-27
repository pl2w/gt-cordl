#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Vector3Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3Extensions)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class Vector3Extensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Vector3Extensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Vector3Extensions*, "Unity.XR.CoreUtils", "Vector3Extensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Vector3Extensions
class CORDL_TYPE Vector3Extensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Abs, addr 0xb3f2b54, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3  vector) ;

/// [Extension]
/// @brief Method Divide, addr 0xb3f2b74, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Divide(::UnityEngine::Vector3  value, ::UnityEngine::Vector3  scale) ;

/// [Extension]
/// @brief Method Inverse, addr 0xb3f2b18, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Inverse(::UnityEngine::Vector3  vector) ;

/// [Extension]
/// @brief Method MaxComponent, addr 0xb3f2b40, size 0x14, virtual false, abstract: false, final false
static inline float_t MaxComponent(::UnityEngine::Vector3  vector) ;

/// [Extension]
/// @brief Method MinComponent, addr 0xb3f2b2c, size 0x14, virtual false, abstract: false, final false
static inline float_t MinComponent(::UnityEngine::Vector3  vector) ;

/// [Extension]
/// @brief Method Multiply, addr 0xb3f2b64, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Multiply(::UnityEngine::Vector3  value, ::UnityEngine::Vector3  scale) ;

/// [Extension]
/// @brief Method SafeDivide, addr 0xb3f2b84, size 0x108, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SafeDivide(::UnityEngine::Vector3  value, ::UnityEngine::Vector3  scale) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30414};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Vector3Extensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
