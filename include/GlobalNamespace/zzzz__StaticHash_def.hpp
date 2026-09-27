#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticHash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticHash)
namespace GlobalNamespace {
struct StaticHash_DoubleInt64;
}
namespace GlobalNamespace {
struct StaticHash_SingleInt32;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticHash;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StaticHash*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StaticHash*, "", "StaticHash");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticHash
class CORDL_TYPE StaticHash : public ::System::Object {
public:
// Declarations
using DoubleInt64 = ::GlobalNamespace::StaticHash_DoubleInt64;

using SingleInt32 = ::GlobalNamespace::StaticHash_SingleInt32;

/// @brief Method Compute, addr 0x5b171bc, size 0x1c, virtual false, abstract: false, final false
static inline int32_t Compute(bool  b) ;

/// @brief Method Compute, addr 0x5b171d8, size 0x80, virtual false, abstract: false, final false
static inline int32_t Compute(bool  b1, bool  b2) ;

/// @brief Method Compute, addr 0x5b17258, size 0x80, virtual false, abstract: false, final false
static inline int32_t Compute(bool  b1, bool  b2, bool  b3) ;

/// @brief Method Compute, addr 0x5b172d8, size 0xf0, virtual false, abstract: false, final false
static inline int32_t Compute(bool  b1, bool  b2, bool  b3, bool  b4) ;

/// @brief Method Compute, addr 0x5b17df0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t Compute(::ArrayW<uint8_t>  bytes) ;

/// @brief Method Compute, addr 0x5b16eb8, size 0x2c, virtual false, abstract: false, final false
static inline int32_t Compute(double_t  d) ;

/// @brief Method Compute, addr 0x5b16ee4, size 0xb4, virtual false, abstract: false, final false
static inline int32_t Compute(double_t  d1, double_t  d2) ;

/// @brief Method Compute, addr 0x5b16f98, size 0xdc, virtual false, abstract: false, final false
static inline int32_t Compute(double_t  d1, double_t  d2, double_t  d3) ;

/// @brief Method Compute, addr 0x5b17074, size 0x148, virtual false, abstract: false, final false
static inline int32_t Compute(double_t  d1, double_t  d2, double_t  d3, double_t  d4) ;

/// @brief Method Compute, addr 0x5b173c8, size 0x80, virtual false, abstract: false, final false
static inline int32_t Compute(::System::DateTime  dt) ;

/// @brief Method Compute, addr 0x5b16748, size 0x68, virtual false, abstract: false, final false
static inline int32_t Compute(float_t  f) ;

/// @brief Method Compute, addr 0x5b167b0, size 0x100, virtual false, abstract: false, final false
static inline int32_t Compute(float_t  f1, float_t  f2) ;

/// @brief Method Compute, addr 0x5b168b0, size 0x144, virtual false, abstract: false, final false
static inline int32_t Compute(float_t  f1, float_t  f2, float_t  f3) ;

/// @brief Method Compute, addr 0x5b169f4, size 0x1c4, virtual false, abstract: false, final false
static inline int32_t Compute(float_t  f1, float_t  f2, float_t  f3, float_t  f4) ;

/// @brief Method Compute, addr 0x5b16680, size 0x64, virtual false, abstract: false, final false
static inline int32_t Compute(int32_t  i) ;

/// @brief Method Compute, addr 0x5b17ec0, size 0x68, virtual false, abstract: false, final false
static inline int32_t Compute(int32_t  i1, int32_t  i2) ;

/// @brief Method Compute, addr 0x5b17f28, size 0x6c, virtual false, abstract: false, final false
static inline int32_t Compute(int32_t  i1, int32_t  i2, int32_t  i3) ;

/// @brief Method Compute, addr 0x5b17f94, size 0xb4, virtual false, abstract: false, final false
static inline int32_t Compute(int32_t  i1, int32_t  i2, int32_t  i3, int32_t  i4) ;

/// @brief Method Compute, addr 0x5b16bdc, size 0x28, virtual false, abstract: false, final false
static inline int32_t Compute(int64_t  l) ;

/// @brief Method Compute, addr 0x5b16c04, size 0xac, virtual false, abstract: false, final false
static inline int32_t Compute(int64_t  l1, int64_t  l2) ;

/// @brief Method Compute, addr 0x5b16cb0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t Compute(int64_t  l1, int64_t  l2, int64_t  l3) ;

/// @brief Method Compute, addr 0x5b16d80, size 0x138, virtual false, abstract: false, final false
static inline int32_t Compute(int64_t  l1, int64_t  l2, int64_t  l3, int64_t  l4) ;

/// @brief Method Compute, addr 0x5b17448, size 0xdc, virtual false, abstract: false, final false
static inline int32_t Compute(::StringW  s) ;

/// @brief Method Compute, addr 0x5b17524, size 0x210, virtual false, abstract: false, final false
static inline int32_t Compute(::StringW  s1, ::StringW  s2) ;

/// @brief Method Compute, addr 0x5b17734, size 0x2cc, virtual false, abstract: false, final false
static inline int32_t Compute(::StringW  s1, ::StringW  s2, ::StringW  s3) ;

/// @brief Method Compute, addr 0x5b17a00, size 0x3f0, virtual false, abstract: false, final false
static inline int32_t Compute(::StringW  s1, ::StringW  s2, ::StringW  s3, ::StringW  s4) ;

/// @brief Method Compute, addr 0x5b166e4, size 0x64, virtual false, abstract: false, final false
static inline int32_t Compute(uint32_t  u) ;

/// @brief Method Compute, addr 0x5b18418, size 0x68, virtual false, abstract: false, final false
static inline int32_t Compute(uint32_t  u1, uint32_t  u2) ;

/// @brief Method Compute, addr 0x5b18480, size 0x6c, virtual false, abstract: false, final false
static inline int32_t Compute(uint32_t  u1, uint32_t  u2, uint32_t  u3) ;

/// @brief Method Compute, addr 0x5b184ec, size 0xb4, virtual false, abstract: false, final false
static inline int32_t Compute(uint32_t  u1, uint32_t  u2, uint32_t  u3, uint32_t  u4) ;

/// @brief Method Compute, addr 0x5b18048, size 0x1e8, virtual false, abstract: false, final false
static inline int32_t Compute(::ArrayW<int32_t>  values) ;

/// @brief Method Compute, addr 0x5b18230, size 0x1e8, virtual false, abstract: false, final false
static inline int32_t Compute(::ArrayW<uint32_t>  values) ;

/// @brief Method Compute128To64, addr 0x5b1868c, size 0x30, virtual false, abstract: false, final false
static inline int64_t Compute128To64(int64_t  a, int64_t  b) ;

/// @brief Method Compute128To64, addr 0x5b186bc, size 0x30, virtual false, abstract: false, final false
static inline int64_t Compute128To64(uint64_t  a, uint64_t  b) ;

/// @brief Method ComputeOrderAgnostic, addr 0x5b185a0, size 0xec, virtual false, abstract: false, final false
static inline int32_t ComputeOrderAgnostic(::ArrayW<int32_t>  values) ;

/// @brief Method ComputeTriple32, addr 0x5b186ec, size 0x3c, virtual false, abstract: false, final false
static inline int32_t ComputeTriple32(int32_t  i) ;

/// @brief Method ComputeU, addr 0x5b1661c, size 0x64, virtual false, abstract: false, final false
static inline uint32_t ComputeU(int32_t  i) ;

/// @brief Method ComputeU, addr 0x5b165b8, size 0x64, virtual false, abstract: false, final false
static inline uint32_t ComputeU(uint32_t  u) ;

/// @brief Method ComputeUL, addr 0x5b16bb8, size 0x24, virtual false, abstract: false, final false
static inline uint64_t ComputeUL(uint64_t  h) ;

/// @brief Method Finalize, addr 0x5b18888, size 0xcc, virtual false, abstract: false, final false
static inline void Finalize(::by_ref<uint32_t>  a, ::by_ref<uint32_t>  b, ::by_ref<uint32_t>  c) ;

/// @brief Method Mix, addr 0x5b1877c, size 0x10c, virtual false, abstract: false, final false
static inline void Mix(::by_ref<uint32_t>  a, ::by_ref<uint32_t>  b, ::by_ref<uint32_t>  c) ;

/// @brief Method ReverseTriple32, addr 0x5b18728, size 0x54, virtual false, abstract: false, final false
static inline int32_t ReverseTriple32(int32_t  i) ;

/// @brief Method Rotate, addr 0x5b18954, size 0xc, virtual false, abstract: false, final false
static inline uint32_t Rotate(uint32_t  x, int32_t  k) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticHash() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticHash", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticHash(StaticHash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticHash", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticHash(StaticHash const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3563};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::StaticHash) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
