#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RotatedBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotatedBox)
namespace Technie::PhysicsCreator {
class ConstructionPlane;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class RotatedBox;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::RotatedBox*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::RotatedBox*, "Technie.PhysicsCreator", "RotatedBox");
// Dependencies System.Object, UnityEngine.Vector3
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.RotatedBox
class CORDL_TYPE RotatedBox : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_VolumeCm3)) float_t  VolumeCm3;

/// @brief Field center, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Vector3  center;

/// @brief Field localCenter, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_localCenter, put=__cordl_internal_set_localCenter)) ::UnityEngine::Vector3  localCenter;

/// @brief Field plane, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_plane, put=__cordl_internal_set_plane)) ::Technie::PhysicsCreator::ConstructionPlane*  plane;

/// @brief Field size, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::Vector3  size;

/// @brief Field volume, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) float_t  volume;

/// @brief Method DrawWireframe, addr 0xadc635c, size 0x174, virtual false, abstract: false, final false
inline void DrawWireframe() ;

static inline ::Technie::PhysicsCreator::RotatedBox* New_ctor(::Technie::PhysicsCreator::ConstructionPlane*  p, ::UnityEngine::Vector3  localCenter, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  s) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_center() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localCenter() ;

constexpr ::Technie::PhysicsCreator::ConstructionPlane* const& __cordl_internal_get_plane() const;

constexpr ::Technie::PhysicsCreator::ConstructionPlane*& __cordl_internal_get_plane() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_size() ;

constexpr float_t const& __cordl_internal_get_volume() const;

constexpr float_t& __cordl_internal_get_volume() ;

constexpr void __cordl_internal_set_center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_plane(::Technie::PhysicsCreator::ConstructionPlane*  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_volume(float_t  value) ;

/// @brief Method .ctor, addr 0xadc62c8, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::Technie::PhysicsCreator::ConstructionPlane*  p, ::UnityEngine::Vector3  localCenter, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  s) ;

/// @brief Method get_VolumeCm3, addr 0xadc62b4, size 0x14, virtual false, abstract: false, final false
inline float_t get_VolumeCm3() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotatedBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotatedBox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotatedBox(RotatedBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotatedBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotatedBox(RotatedBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30490};

/// @brief Field plane, offset: 0x10, size: 0x8, def value: None
 ::Technie::PhysicsCreator::ConstructionPlane*  ___plane;

/// @brief Field localCenter, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localCenter;

/// @brief Field center, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___center;

/// @brief Field size, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___size;

/// @brief Field volume, offset: 0x3c, size: 0x4, def value: None
 float_t  ___volume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::RotatedBox, ___plane) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::RotatedBox, ___localCenter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::RotatedBox, ___center) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::RotatedBox, ___size) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::RotatedBox, ___volume) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::RotatedBox) == 0x40, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
