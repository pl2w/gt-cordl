#pragma once
// IWYU pragma private; include "CjLib/VectorUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VectorUtil)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace CjLib {
class VectorUtil;
}
// Write type traits
MARK_REF_T(::CjLib::VectorUtil*);
DEFINE_IL2CPP_CLASS(::CjLib::VectorUtil*, "CjLib", "VectorUtil");
// Dependencies System.Object
namespace CjLib {
// Is value type: false
// CS Name: CjLib.VectorUtil
class CORDL_TYPE VectorUtil : public ::System::Object {
public:
// Declarations
/// @brief Method CatmullRom, addr 0x5e0f774, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 CatmullRom(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3, float_t  t) ;

/// @brief Method FindOrthogonal, addr 0x5e0f39c, size 0x18c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FindOrthogonal(::UnityEngine::Vector3  v) ;

/// @brief Method FormOrthogonalBasis, addr 0x5e0f528, size 0x70, virtual false, abstract: false, final false
static inline void FormOrthogonalBasis(::UnityEngine::Vector3  v, ::by_ref<::UnityEngine::Vector3>  a, ::by_ref<::UnityEngine::Vector3>  b) ;

/// @brief Method Integrate, addr 0x5e0f598, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Integrate(::UnityEngine::Vector3  x, ::UnityEngine::Vector3  v, float_t  dt) ;

static inline ::CjLib::VectorUtil* New_ctor() ;

/// @brief Method NormalizeSafe, addr 0x5e0f250, size 0x14c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 NormalizeSafe(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  fallback) ;

/// @brief Method Rotate2D, addr 0x5e0f1a8, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Rotate2D(::UnityEngine::Vector3  v, float_t  deg) ;

/// @brief Method Slerp, addr 0x5e0f5b4, size 0x1c0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  t) ;

/// @brief Method .ctor, addr 0x5e0f874, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VectorUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VectorUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorUtil(VectorUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorUtil(VectorUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5155};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::CjLib::VectorUtil) == 0x10, "Size mismatch!");

} // namespace end def CjLib
