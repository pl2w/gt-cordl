#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/CylinderSurfaceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CylinderSurfaceData)
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Grab::GrabSurfaces {
class CylinderSurfaceData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*, "Oculus.Interaction.Grab.GrabSurfaces", "CylinderSurfaceData");
// Dependencies System.Object, UnityEngine.Vector3
namespace Oculus::Interaction::Grab::GrabSurfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData
class CORDL_TYPE CylinderSurfaceData : public ::System::Object {
public:
// Declarations
/// @brief Field arcLength, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_arcLength, put=__cordl_internal_set_arcLength)) float_t  arcLength;

/// @brief Field arcOffset, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_arcOffset, put=__cordl_internal_set_arcOffset)) float_t  arcOffset;

/// @brief Field endPoint, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_endPoint, put=__cordl_internal_set_endPoint)) ::UnityEngine::Vector3  endPoint;

/// @brief Field startPoint, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPoint, put=__cordl_internal_set_startPoint)) ::UnityEngine::Vector3  startPoint;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Clone, addr 0xa4eb604, size 0xa0, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method Mirror, addr 0xa4eb6cc, size 0x80, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData* Mirror() ;

static inline ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_arcLength() const;

constexpr float_t& __cordl_internal_get_arcLength() ;

constexpr float_t const& __cordl_internal_get_arcOffset() const;

constexpr float_t& __cordl_internal_get_arcOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endPoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPoint() ;

constexpr void __cordl_internal_set_arcLength(float_t  value) ;

constexpr void __cordl_internal_set_arcOffset(float_t  value) ;

constexpr void __cordl_internal_set_endPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startPoint(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa4eb6a4, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CylinderSurfaceData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CylinderSurfaceData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CylinderSurfaceData(CylinderSurfaceData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CylinderSurfaceData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CylinderSurfaceData(CylinderSurfaceData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16359};

/// @brief Field startPoint, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPoint;

/// @brief Field endPoint, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endPoint;

/// [Range(0, 360)]
/// @brief Field arcOffset, offset: 0x28, size: 0x4, def value: None
 float_t  ___arcOffset;

/// [Range(0, 360)]
/// [FormerlySerializedAs("angle")]
/// @brief Field arcLength, offset: 0x2c, size: 0x4, def value: None
 float_t  ___arcLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData, ___startPoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData, ___endPoint) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData, ___arcOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData, ___arcLength) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab::GrabSurfaces
