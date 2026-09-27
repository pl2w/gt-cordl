#pragma once
// IWYU pragma private; include "GlobalNamespace/SRand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SRand)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct SRand;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SRand);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SRand, "", "SRand");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SRand
struct CORDL_TYPE SRand {
public:
// Declarations
/// @brief Method GetHashCode, addr 0x5a20d80, size 0x6c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Mix, addr 0x5a20d48, size 0x38, virtual false, abstract: false, final false
inline uint32_t Mix(uint32_t  x) ;

/// @brief Method New, addr 0x5a20ffc, size 0x68, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SRand New() ;

/// @brief Method NextBool, addr 0x5a20124, size 0x54, virtual false, abstract: false, final false
inline bool NextBool() ;

/// @brief Method NextByte, addr 0x5a2040c, size 0x50, virtual false, abstract: false, final false
inline uint8_t NextByte() ;

/// @brief Method NextColor, addr 0x5a20964, size 0xdc, virtual false, abstract: false, final false
inline ::UnityEngine::Color NextColor() ;

/// @brief Method NextColor32, addr 0x5a2045c, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Color32 NextColor32() ;

/// @brief Method NextDouble, addr 0x5a1ff34, size 0x64, virtual false, abstract: false, final false
inline double_t NextDouble() ;

/// @brief Method NextDouble, addr 0x5a1ff98, size 0x78, virtual false, abstract: false, final false
inline double_t NextDouble(double_t  max) ;

/// @brief Method NextDouble, addr 0x5a20010, size 0x78, virtual false, abstract: false, final false
inline double_t NextDouble(double_t  min, double_t  max) ;

/// @brief Method NextFloat, addr 0x5a20088, size 0x68, virtual false, abstract: false, final false
inline float_t NextFloat() ;

/// @brief Method NextFloat, addr 0x5a200f0, size 0x18, virtual false, abstract: false, final false
inline float_t NextFloat(float_t  max) ;

/// @brief Method NextFloat, addr 0x5a20108, size 0x1c, virtual false, abstract: false, final false
inline float_t NextFloat(float_t  min, float_t  max) ;

/// @brief Method NextInt, addr 0x5a201c8, size 0x50, virtual false, abstract: false, final false
inline int32_t NextInt() ;

/// @brief Method NextInt, addr 0x5a20218, size 0x68, virtual false, abstract: false, final false
inline int32_t NextInt(int32_t  max) ;

/// @brief Method NextInt, addr 0x5a20280, size 0x68, virtual false, abstract: false, final false
inline int32_t NextInt(int32_t  min, int32_t  max) ;

/// @brief Method NextIntWithExclusion, addr 0x5a202e8, size 0x78, virtual false, abstract: false, final false
inline int32_t NextIntWithExclusion(int32_t  min, int32_t  max, int32_t  exclude) ;

/// @brief Method NextIntWithExclusion2, addr 0x5a20360, size 0xac, virtual false, abstract: false, final false
inline int32_t NextIntWithExclusion2(int32_t  min, int32_t  max, int32_t  exclude, int32_t  exclude2) ;

/// @brief Method NextPointInsideBox, addr 0x5a20870, size 0xf4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 NextPointInsideBox(::UnityEngine::Vector3  extents) ;

/// @brief Method NextPointInsideSphere, addr 0x5a204fc, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 NextPointInsideSphere(float_t  radius) ;

/// @brief Method NextPointOnSphere, addr 0x5a206e4, size 0x18c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 NextPointOnSphere(float_t  radius) ;

/// @brief Method NextState, addr 0x5a20cf8, size 0x50, virtual false, abstract: false, final false
inline uint32_t NextState() ;

/// @brief Method NextUInt, addr 0x5a20178, size 0x50, virtual false, abstract: false, final false
inline uint32_t NextUInt() ;

/// @brief Method Reset, addr 0x5a20a40, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Reset, addr 0x5a20c68, size 0x90, virtual false, abstract: false, final false
inline void Reset(::ArrayW<uint8_t>  seed) ;

/// @brief Method Reset, addr 0x5a20b10, size 0x158, virtual false, abstract: false, final false
inline void Reset(::StringW  seed) ;

/// @brief Method Reset, addr 0x5a20a88, size 0x88, virtual false, abstract: false, final false
inline void Reset(::System::DateTime  seed) ;

/// @brief Method Reset, addr 0x5a20a4c, size 0x8, virtual false, abstract: false, final false
inline void Reset(int32_t  seed) ;

/// @brief Method Reset, addr 0x5a20a5c, size 0x2c, virtual false, abstract: false, final false
inline void Reset(int64_t  seed) ;

/// @brief Method Reset, addr 0x5a20a54, size 0x8, virtual false, abstract: false, final false
inline void Reset(uint32_t  seed) ;

/// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Shuffle(::ArrayW<T>  array) ;

/// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Shuffle(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method ToString, addr 0x5a20dec, size 0x210, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5a1fea4, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  seed) ;

/// @brief Method .ctor, addr 0x5a1fd4c, size 0x158, virtual false, abstract: false, final false
inline void _ctor(::StringW  seed) ;

/// @brief Method .ctor, addr 0x5a1fcc4, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  seed) ;

/// @brief Method .ctor, addr 0x5a1fc88, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  seed) ;

/// @brief Method .ctor, addr 0x5a1fc98, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int64_t  seed) ;

/// @brief Method .ctor, addr 0x5a1fc90, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint32_t  seed) ;

/// @brief Method op_Explicit, addr 0x5a210c4, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SRand op_Explicit___GlobalNamespace__SRand(::ArrayW<uint8_t>  seed) ;

/// @brief Method op_Explicit, addr 0x5a210a8, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SRand op_Explicit___GlobalNamespace__SRand(::StringW  seed) ;

/// @brief Method op_Explicit, addr 0x5a210e0, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SRand op_Explicit___GlobalNamespace__SRand(::System::DateTime  seed) ;

/// @brief Method op_Explicit, addr 0x5a21064, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SRand op_Explicit___GlobalNamespace__SRand(int32_t  seed) ;

/// @brief Method op_Explicit, addr 0x5a2107c, size 0x2c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SRand op_Explicit___GlobalNamespace__SRand(int64_t  seed) ;

/// @brief Method op_Explicit, addr 0x5a21070, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SRand op_Explicit___GlobalNamespace__SRand(uint32_t  seed) ;

// Ctor Parameters []
// @brief default ctor
constexpr SRand() ;

// Ctor Parameters [CppParam { name: "_seed", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_state", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr SRand(uint32_t  _seed, uint32_t  _state) noexcept;

/// @brief Field MAX_AS_DOUBLE offset 0xffffffff size 0x8
static constexpr double_t  MAX_AS_DOUBLE{static_cast<double_t>(268435456.0)};

/// @brief Field MAX_PLUS_ONE offset 0xffffffff size 0x4
static constexpr uint32_t  MAX_PLUS_ONE{static_cast<uint32_t>(0x10000001u)};

/// @brief Field ONE_THIRD offset 0xffffffff size 0x4
static constexpr float_t  ONE_THIRD{static_cast<float_t>(0.33333334f)};

/// @brief Field STEP_SIZE offset 0xffffffff size 0x8
static constexpr double_t  STEP_SIZE{static_cast<double_t>(3.725290298461914e-9)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2839};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [SerializeField]
/// @brief Field _seed, offset: 0x0, size: 0x4, def value: None
 uint32_t  _seed;

/// [SerializeField]
/// @brief Field _state, offset: 0x4, size: 0x4, def value: None
 uint32_t  _state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SRand, _seed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SRand, _state) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SRand) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
