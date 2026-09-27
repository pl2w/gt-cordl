#pragma once
// IWYU pragma private; include "Unity/Mathematics/noise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(noise)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace Unity::Mathematics {
class noise;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::noise*);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::noise*, "Unity.Mathematics", "noise");
// [Il2CppEagerStaticClassConstruction]
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.noise
class CORDL_TYPE noise : public ::System::Object {
public:
// Declarations
/// @brief Method mod289, addr 0xb0643f4, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 mod289(::Unity::Mathematics::float3  x) ;

/// @brief Method mod289, addr 0xb064504, size 0x74, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 mod289(::Unity::Mathematics::float4  x) ;

/// @brief Method permute, addr 0xb064578, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 permute(::Unity::Mathematics::float4  x) ;

/// @brief Method snoise, addr 0xb0645e0, size 0x624, virtual false, abstract: false, final false
static inline float_t snoise(::Unity::Mathematics::float3  v) ;

/// @brief Method taylorInvSqrt, addr 0xb0645ac, size 0x34, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 taylorInvSqrt(::Unity::Mathematics::float4  r) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr noise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
noise(noise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "noise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
noise(noise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31505};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Mathematics::noise) == 0x10, "Size mismatch!");

} // namespace end def Unity::Mathematics
