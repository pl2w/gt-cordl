#pragma once
// IWYU pragma private; include "Pathfinding/RadiusModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__MonoModifier_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RadiusModifier)
namespace GlobalNamespace {
struct RadiusModifier_TangentType;
}
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class RadiusModifier;
}
// Write type traits
MARK_REF_T(::Pathfinding::RadiusModifier*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RadiusModifier*, "Pathfinding", "RadiusModifier");
// [AddComponentMenu("Pathfinding/Modifiers/Radius Offset")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_radius_modifier.php")]
// Dependencies Pathfinding.MonoModifier
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RadiusModifier
class CORDL_TYPE RadiusModifier : public ::Pathfinding::MonoModifier {
public:
// Declarations
using TangentType = ::GlobalNamespace::RadiusModifier_TangentType;

 __declspec(property(get=get_Order)) int32_t  Order;

/// @brief Field a1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_a1, put=__cordl_internal_set_a1)) ::ArrayW<float_t>  a1;

/// @brief Field a2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_a2, put=__cordl_internal_set_a2)) ::ArrayW<float_t>  a2;

/// @brief Field detail, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_detail, put=__cordl_internal_set_detail)) float_t  detail;

/// @brief Field dir, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_dir, put=__cordl_internal_set_dir)) ::ArrayW<bool>  dir;

/// @brief Field radi, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_radi, put=__cordl_internal_set_radi)) ::ArrayW<float_t>  radi;

/// @brief Field radius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Method Apply, addr 0x5ea1770, size 0xd3c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Apply(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vs) ;

/// @brief Method Apply, addr 0x5ea16c0, size 0xb0, virtual true, abstract: false, final false
inline void Apply(::Pathfinding::Path*  p) ;

/// @brief Method CalculateCircleInner, addr 0x5ea131c, size 0x148, virtual false, abstract: false, final false
inline bool CalculateCircleInner(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, float_t  r1, float_t  r2, ::by_ref<float_t>  a, ::by_ref<float_t>  sigma) ;

/// @brief Method CalculateCircleOuter, addr 0x5ea1464, size 0x16c, virtual false, abstract: false, final false
inline bool CalculateCircleOuter(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, float_t  r1, float_t  r2, ::by_ref<float_t>  a, ::by_ref<float_t>  sigma) ;

/// @brief Method CalculateTangentType, addr 0x5ea15d0, size 0xac, virtual false, abstract: false, final false
inline ::GlobalNamespace::RadiusModifier_TangentType CalculateTangentType(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3, ::UnityEngine::Vector3  p4) ;

/// @brief Method CalculateTangentTypeSimple, addr 0x5ea167c, size 0x44, virtual false, abstract: false, final false
inline ::GlobalNamespace::RadiusModifier_TangentType CalculateTangentTypeSimple(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3) ;

static inline ::Pathfinding::RadiusModifier* New_ctor() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_a1() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_a1() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_a2() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_a2() ;

constexpr float_t const& __cordl_internal_get_detail() const;

constexpr float_t& __cordl_internal_get_detail() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_dir() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_dir() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_radi() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_radi() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr void __cordl_internal_set_a1(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_a2(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_detail(float_t  value) ;

constexpr void __cordl_internal_set_dir(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_radi(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

/// @brief Method .ctor, addr 0x5ea24ac, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Order, addr 0x5ea1314, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Order() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RadiusModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RadiusModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RadiusModifier(RadiusModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadiusModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadiusModifier(RadiusModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21368};

/// @brief Field radius, offset: 0x30, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field detail, offset: 0x34, size: 0x4, def value: None
 float_t  ___detail;

/// @brief Field radi, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ___radi;

/// @brief Field a1, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ___a1;

/// @brief Field a2, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ___a2;

/// @brief Field dir, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<bool>  ___dir;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RadiusModifier, ___radius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RadiusModifier, ___detail) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RadiusModifier, ___radi) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RadiusModifier, ___a1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RadiusModifier, ___a2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RadiusModifier, ___dir) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RadiusModifier) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding
