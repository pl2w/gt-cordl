#pragma once
// IWYU pragma private; include "GlobalNamespace/VectorMath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VectorMath)
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class VectorMath;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VectorMath*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VectorMath*, "", "VectorMath");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VectorMath
class CORDL_TYPE VectorMath : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Abs, addr 0x5b1c704, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method Abs, addr 0x5b1c688, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int Abs(::UnityEngine::Vector3Int  v) ;

/// [Extension]
/// @brief Method Add, addr 0x5b1c8f8, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Add(::UnityEngine::Vector3  v, float_t  amount) ;

/// [Extension]
/// @brief Method Approx, addr 0x5b1cd5c, size 0x30, virtual false, abstract: false, final false
static inline bool Approx(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  epsilon) ;

/// [Extension]
/// @brief Method Approx, addr 0x5b1cd8c, size 0x40, virtual false, abstract: false, final false
static inline bool Approx(::UnityEngine::Vector4  a, ::UnityEngine::Vector4  b, float_t  epsilon) ;

/// [Extension]
/// @brief Method Approx0, addr 0x5b1cd04, size 0x24, virtual false, abstract: false, final false
static inline bool Approx0(::UnityEngine::Vector3  v, float_t  epsilon) ;

/// [Extension]
/// @brief Method Approx1, addr 0x5b1cd28, size 0x34, virtual false, abstract: false, final false
static inline bool Approx1(::UnityEngine::Vector3  v, float_t  epsilon) ;

/// [Extension]
/// @brief Method Clamped, addr 0x5b1cb24, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Clamped(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// [Extension]
/// @brief Method Clamped, addr 0x5b1c4ec, size 0x190, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int Clamped(::UnityEngine::Vector3Int  v, int32_t  min, int32_t  max) ;

/// [Extension]
/// @brief Method Div, addr 0x5b1c928, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Div(::UnityEngine::Vector3  v, float_t  amount) ;

/// [Extension]
/// @brief Method IsFinite, addr 0x5b1caf8, size 0x2c, virtual false, abstract: false, final false
static inline bool IsFinite(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method Max, addr 0x5b1ca68, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 Max(::Unity::Mathematics::float3  v) ;

/// [Extension]
/// @brief Method Max, addr 0x5b1c940, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Max(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method Max, addr 0x5b1c9cc, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Max(::UnityEngine::Vector3  v, float_t  max) ;

/// [Extension]
/// @brief Method Max, addr 0x5b1c838, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Max(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  other) ;

/// [Extension]
/// @brief Method Min, addr 0x5b1c778, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Min(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  other) ;

/// [Extension]
/// @brief Method Mul, addr 0x5b1c918, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Mul(::UnityEngine::Vector3  v, float_t  amount) ;

/// [Extension]
/// @brief Method SetXYZ, addr 0x5b1c67c, size 0xc, virtual false, abstract: false, final false
static inline void SetXYZ(::by_ref<::UnityEngine::Vector3>  v, float_t  f) ;

/// [Extension]
/// @brief Method Sub, addr 0x5b1c908, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Sub(::UnityEngine::Vector3  v, float_t  amount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VectorMath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VectorMath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorMath(VectorMath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorMath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorMath(VectorMath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3585};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VectorMath) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
