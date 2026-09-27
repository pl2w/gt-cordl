#pragma once
// IWYU pragma private; include "GlobalNamespace/BoundsInt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoundsInt)
namespace System {
class Object;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct BoundsInt;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoundsInt);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoundsInt, "", "BoundsInt");
// Dependencies UnityEngine.Vector3Int
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoundsInt
struct CORDL_TYPE BoundsInt {
public:
// Declarations
 __declspec(property(get=get_center)) ::UnityEngine::Vector3Int  center;

 __declspec(property(get=get_centerFloat)) ::UnityEngine::Vector3  centerFloat;

 __declspec(property(get=get_size)) ::UnityEngine::Vector3Int  size;

 __declspec(property(get=get_sizeFloat)) ::UnityEngine::Vector3  sizeFloat;

/// @brief Method Contains, addr 0x5b42900, size 0x6c, virtual false, abstract: false, final false
inline bool Contains(::GlobalNamespace::BoundsInt  other) ;

/// @brief Method Contains, addr 0x5b4296c, size 0x68, virtual false, abstract: false, final false
inline bool Contains(::UnityEngine::Vector3  point) ;

/// @brief Method Encapsulate, addr 0x5b42714, size 0x4c, virtual false, abstract: false, final false
inline void Encapsulate(::GlobalNamespace::BoundsInt  other) ;

/// @brief Method Equals, addr 0x5b42c00, size 0xc8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Expand, addr 0x5b42760, size 0x134, virtual false, abstract: false, final false
inline void Expand(float_t  amount) ;

/// @brief Method FloatToInt, addr 0x5b42204, size 0x264, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int FloatToInt(::UnityEngine::Vector3  v) ;

/// @brief Method FromBounds, addr 0x5b425c0, size 0x2c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BoundsInt FromBounds(::UnityEngine::Bounds  bounds) ;

/// @brief Method GetHashCode, addr 0x5b42cc8, size 0xd4, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetIntersection, addr 0x5b429d4, size 0xdc, virtual false, abstract: false, final false
inline ::GlobalNamespace::BoundsInt GetIntersection(::GlobalNamespace::BoundsInt  other) ;

/// @brief Method IntToFloat, addr 0x5b42550, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 IntToFloat(::UnityEngine::Vector3Int  v) ;

/// @brief Method Intersects, addr 0x5b42894, size 0x6c, virtual false, abstract: false, final false
inline bool Intersects(::GlobalNamespace::BoundsInt  other) ;

/// @brief Method SetMinMax, addr 0x5b426c4, size 0x50, virtual false, abstract: false, final false
inline void SetMinMax(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// @brief Method SetMinMax, addr 0x5b426b0, size 0x14, virtual false, abstract: false, final false
inline void SetMinMax(::UnityEngine::Vector3Int  min, ::UnityEngine::Vector3Int  max) ;

/// @brief Method ToBounds, addr 0x5b425ec, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds ToBounds() ;

/// @brief Method ToString, addr 0x5b42d9c, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Volume, addr 0x5b42ab0, size 0x34, virtual false, abstract: false, final false
inline int64_t Volume() ;

/// @brief Method VolumeFloat, addr 0x5b42ae4, size 0x44, virtual false, abstract: false, final false
inline float_t VolumeFloat() ;

/// @brief Method .ctor, addr 0x5b42190, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size) ;

/// @brief Method .ctor, addr 0x5b4217c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3Int  min, ::UnityEngine::Vector3Int  max) ;

/// @brief Method get_center, addr 0x5b42468, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int get_center() ;

/// @brief Method get_centerFloat, addr 0x5b424e4, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_centerFloat() ;

/// @brief Method get_size, addr 0x5b424b8, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int get_size() ;

/// @brief Method get_sizeFloat, addr 0x5b42578, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_sizeFloat() ;

/// @brief Method op_Equality, addr 0x5b42b28, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::BoundsInt  a, ::GlobalNamespace::BoundsInt  b) ;

/// @brief Method op_Inequality, addr 0x5b42b94, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::BoundsInt  a, ::GlobalNamespace::BoundsInt  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr BoundsInt() ;

// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "max", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }]
constexpr BoundsInt(::UnityEngine::Vector3Int  min, ::UnityEngine::Vector3Int  max) noexcept;

/// @brief Field SCALE_FACTOR offset 0xffffffff size 0x4
static constexpr int32_t  SCALE_FACTOR{static_cast<int32_t>(0x3e8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3728};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field min, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  min;

/// @brief Field max, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoundsInt, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsInt, max) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoundsInt) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
