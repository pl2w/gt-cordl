#pragma once
// IWYU pragma private; include "BoingKit/Aabb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Aabb)
namespace GlobalNamespace {
struct BoingEffector_Params;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BoingKit {
struct Aabb;
}
// Write type traits
MARK_VAL_T(::BoingKit::Aabb);
DEFINE_IL2CPP_CLASS(::BoingKit::Aabb, "BoingKit", "Aabb");
// Dependencies UnityEngine.Vector3
namespace BoingKit {
// Is value type: true
// CS Name: BoingKit.Aabb
struct CORDL_TYPE Aabb {
public:
// Declarations
 __declspec(property(get=get_Center)) ::UnityEngine::Vector3  Center;

 __declspec(property(get=get_MaxX, put=set_MaxX)) float_t  MaxX;

 __declspec(property(get=get_MaxY, put=set_MaxY)) float_t  MaxY;

 __declspec(property(get=get_MaxZ, put=set_MaxZ)) float_t  MaxZ;

 __declspec(property(get=get_MinX, put=set_MinX)) float_t  MinX;

 __declspec(property(get=get_MinY, put=set_MinY)) float_t  MinY;

 __declspec(property(get=get_MinZ, put=set_MinZ)) float_t  MinZ;

 __declspec(property(get=get_Size)) ::UnityEngine::Vector3  Size;

/// @brief Method Contains, addr 0x5e2aa6c, size 0x54, virtual false, abstract: false, final false
inline bool Contains(::UnityEngine::Vector3  p) ;

/// @brief Method ContainsX, addr 0x5e2aac0, size 0x24, virtual false, abstract: false, final false
inline bool ContainsX(::UnityEngine::Vector3  p) ;

/// @brief Method ContainsY, addr 0x5e2aae4, size 0x24, virtual false, abstract: false, final false
inline bool ContainsY(::UnityEngine::Vector3  p) ;

/// @brief Method ContainsZ, addr 0x5e2ab08, size 0x24, virtual false, abstract: false, final false
inline bool ContainsZ(::UnityEngine::Vector3  p) ;

/// @brief Method Expand, addr 0x5e2ad2c, size 0x38, virtual false, abstract: false, final false
inline ::BoingKit::Aabb Expand(float_t  amount) ;

/// @brief Method FromPoint, addr 0x5e2a948, size 0x50, virtual false, abstract: false, final false
static inline ::BoingKit::Aabb FromPoint(::UnityEngine::Vector3  p) ;

/// @brief Method FromPoints, addr 0x5e2a9e4, size 0x88, virtual false, abstract: false, final false
static inline ::BoingKit::Aabb FromPoints(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method Include, addr 0x5e2a998, size 0x4c, virtual false, abstract: false, final false
inline void Include(::UnityEngine::Vector3  p) ;

/// @brief Method Intersects, addr 0x5e2ab98, size 0x194, virtual false, abstract: false, final false
inline bool Intersects(::by_ref<::GlobalNamespace::BoingEffector_Params>  effector) ;

/// @brief Method Intersects, addr 0x5e2ab2c, size 0x6c, virtual false, abstract: false, final false
inline bool Intersects(::BoingKit::Aabb  rhs) ;

/// @brief Method .ctor, addr 0x5e2a938, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// @brief Method get_Center, addr 0x5e2a8b8, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Center() ;

/// @brief Method get_Empty, addr 0x5e2a91c, size 0x1c, virtual false, abstract: false, final false
static inline ::BoingKit::Aabb get_Empty() ;

/// @brief Method get_MaxX, addr 0x5e2a888, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxX() ;

/// @brief Method get_MaxY, addr 0x5e2a898, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxY() ;

/// @brief Method get_MaxZ, addr 0x5e2a8a8, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxZ() ;

/// @brief Method get_MinX, addr 0x5e2a858, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinX() ;

/// @brief Method get_MinY, addr 0x5e2a868, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinY() ;

/// @brief Method get_MinZ, addr 0x5e2a878, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinZ() ;

/// @brief Method get_Size, addr 0x5e2a8e8, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Size() ;

/// @brief Method set_MaxX, addr 0x5e2a890, size 0x8, virtual false, abstract: false, final false
inline void set_MaxX(float_t  value) ;

/// @brief Method set_MaxY, addr 0x5e2a8a0, size 0x8, virtual false, abstract: false, final false
inline void set_MaxY(float_t  value) ;

/// @brief Method set_MaxZ, addr 0x5e2a8b0, size 0x8, virtual false, abstract: false, final false
inline void set_MaxZ(float_t  value) ;

/// @brief Method set_MinX, addr 0x5e2a860, size 0x8, virtual false, abstract: false, final false
inline void set_MinX(float_t  value) ;

/// @brief Method set_MinY, addr 0x5e2a870, size 0x8, virtual false, abstract: false, final false
inline void set_MinY(float_t  value) ;

/// @brief Method set_MinZ, addr 0x5e2a880, size 0x8, virtual false, abstract: false, final false
inline void set_MinZ(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Aabb() ;

// Ctor Parameters [CppParam { name: "Min", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Max", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr Aabb(::UnityEngine::Vector3  Min, ::UnityEngine::Vector3  Max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5220};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Min, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Min;

/// @brief Field Max, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  Max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::Aabb, Min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::Aabb, Max) == 0xc, "Offset mismatch!");

static_assert(sizeof(::BoingKit::Aabb) == 0x18, "Size mismatch!");

} // namespace end def BoingKit
