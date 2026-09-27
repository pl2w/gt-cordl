#pragma once
// IWYU pragma private; include "BoingKit/Codec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Codec)
namespace GlobalNamespace {
struct Codec_IntFloat;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace BoingKit {
class Codec;
}
// Write type traits
MARK_REF_T(::BoingKit::Codec*);
DEFINE_IL2CPP_CLASS(::BoingKit::Codec*, "BoingKit", "Codec");
// Dependencies System.Object
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.Codec
class CORDL_TYPE Codec : public ::System::Object {
public:
// Declarations
using IntFloat = ::GlobalNamespace::Codec_IntFloat;

/// @brief Field FnvDefaultBasis, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FnvDefaultBasis, put=setStaticF_FnvDefaultBasis)) int32_t  FnvDefaultBasis;

/// @brief Field FnvPrime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FnvPrime, put=setStaticF_FnvPrime)) int32_t  FnvPrime;

/// @brief Method Hash, addr 0x5e2a29c, size 0x60, virtual false, abstract: false, final false
static inline int32_t Hash(bool  b) ;

/// @brief Method Hash, addr 0x5e2a5bc, size 0x88, virtual false, abstract: false, final false
static inline int32_t Hash(::UnityEngine::Color  c) ;

/// @brief Method Hash, addr 0x5e2a234, size 0x68, virtual false, abstract: false, final false
static inline int32_t Hash(float_t  f) ;

/// @brief Method Hash, addr 0x5e2a35c, size 0x60, virtual false, abstract: false, final false
static inline int32_t Hash(/* [ParamArray] */ ::ArrayW<float_t>  floats) ;

/// @brief Method Hash, addr 0x5e2a174, size 0x60, virtual false, abstract: false, final false
static inline int32_t Hash(int32_t  i) ;

/// @brief Method Hash, addr 0x5e2a1d4, size 0x60, virtual false, abstract: false, final false
static inline int32_t Hash(int64_t  i) ;

/// @brief Method Hash, addr 0x5e2a2fc, size 0x60, virtual false, abstract: false, final false
static inline int32_t Hash(/* [ParamArray] */ ::ArrayW<int32_t>  ints) ;

/// @brief Method Hash, addr 0x5e2a534, size 0x88, virtual false, abstract: false, final false
static inline int32_t Hash(::UnityEngine::Quaternion  q) ;

/// @brief Method Hash, addr 0x5e2a3bc, size 0x70, virtual false, abstract: false, final false
static inline int32_t Hash(::UnityEngine::Vector2  v) ;

/// @brief Method Hash, addr 0x5e2a42c, size 0x80, virtual false, abstract: false, final false
static inline int32_t Hash(::UnityEngine::Vector3  v) ;

/// @brief Method Hash, addr 0x5e2a4ac, size 0x88, virtual false, abstract: false, final false
static inline int32_t Hash(::UnityEngine::Vector4  v) ;

/// @brief Method HashConcat, addr 0x5e29b24, size 0x64, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, bool  b) ;

/// @brief Method HashConcat, addr 0x5e2a020, size 0xd8, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, ::UnityEngine::Color  c) ;

/// @brief Method HashConcat, addr 0x5e29ac0, size 0x64, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, float_t  f) ;

/// @brief Method HashConcat, addr 0x5e29c40, size 0xb8, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, /* [ParamArray] */ ::ArrayW<float_t>  floats) ;

/// @brief Method HashConcat, addr 0x5e299e4, size 0x70, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, int32_t  i) ;

/// @brief Method HashConcat, addr 0x5e29a54, size 0x6c, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, int64_t  i) ;

/// @brief Method HashConcat, addr 0x5e29b88, size 0xb8, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, /* [ParamArray] */ ::ArrayW<int32_t>  ints) ;

/// @brief Method HashConcat, addr 0x5e29f48, size 0xd8, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, ::UnityEngine::Quaternion  q) ;

/// @brief Method HashConcat, addr 0x5e2a0f8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, ::UnityEngine::Transform*  t) ;

/// @brief Method HashConcat, addr 0x5e29cf8, size 0xb0, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, ::UnityEngine::Vector2  v) ;

/// @brief Method HashConcat, addr 0x5e29da8, size 0xc8, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, ::UnityEngine::Vector3  v) ;

/// @brief Method HashConcat, addr 0x5e29e70, size 0xd8, virtual false, abstract: false, final false
static inline int32_t HashConcat(int32_t  hash, ::UnityEngine::Vector4  v) ;

/// @brief Method HashTransformHierarchy, addr 0x5e2a740, size 0x60, virtual false, abstract: false, final false
static inline int32_t HashTransformHierarchy(::UnityEngine::Transform*  t) ;

/// @brief Method HashTransformHierarchyRecurvsive, addr 0x5e2a644, size 0xfc, virtual false, abstract: false, final false
static inline int32_t HashTransformHierarchyRecurvsive(int32_t  hash, ::UnityEngine::Transform*  t) ;

/// @brief Method IntReinterpret, addr 0x5e299dc, size 0x8, virtual false, abstract: false, final false
static inline int32_t IntReinterpret(float_t  f) ;

static inline ::BoingKit::Codec* New_ctor() ;

/// @brief Method OctWrap, addr 0x5e294f0, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 OctWrap(::UnityEngine::Vector2  v) ;

/// @brief Method Pack8888, addr 0x5e299a4, size 0x14, virtual false, abstract: false, final false
static inline uint32_t Pack8888(uint32_t  x, uint32_t  y, uint32_t  z, uint32_t  w) ;

/// @brief Method PackNormal, addr 0x5e29568, size 0x104, virtual false, abstract: false, final false
static inline float_t PackNormal(::UnityEngine::Vector3  n) ;

/// @brief Method PackRgb, addr 0x5e2984c, size 0x58, virtual false, abstract: false, final false
static inline uint32_t PackRgb(::UnityEngine::Color  color) ;

/// @brief Method PackRgba, addr 0x5e298e8, size 0x70, virtual false, abstract: false, final false
static inline uint32_t PackRgba(::UnityEngine::Color  color) ;

/// @brief Method PackSaturated, addr 0x5e293f8, size 0x2c, virtual false, abstract: false, final false
static inline float_t PackSaturated(float_t  a, float_t  b) ;

/// @brief Method PackSaturated, addr 0x5e29424, size 0x84, virtual false, abstract: false, final false
static inline float_t PackSaturated(::UnityEngine::Vector2  v) ;

/// @brief Method Unpack8888, addr 0x5e299b8, size 0x24, virtual false, abstract: false, final false
static inline void Unpack8888(uint32_t  i, ::by_ref<uint32_t>  x, ::by_ref<uint32_t>  y, ::by_ref<uint32_t>  z, ::by_ref<uint32_t>  w) ;

/// @brief Method UnpackNormal, addr 0x5e2966c, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 UnpackNormal(float_t  f) ;

/// @brief Method UnpackRgb, addr 0x5e298a4, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Color UnpackRgb(uint32_t  i) ;

/// @brief Method UnpackRgba, addr 0x5e29958, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color UnpackRgba(uint32_t  i) ;

/// @brief Method UnpackSaturated, addr 0x5e294a8, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 UnpackSaturated(float_t  f) ;

/// @brief Method .ctor, addr 0x5e2a7a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_FnvDefaultBasis() ;

static inline int32_t getStaticF_FnvPrime() ;

static inline void setStaticF_FnvDefaultBasis(int32_t  value) ;

static inline void setStaticF_FnvPrime(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Codec() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Codec", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Codec(Codec && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Codec", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Codec(Codec const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5216};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::Codec) == 0x10, "Size mismatch!");

} // namespace end def BoingKit
