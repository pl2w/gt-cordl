#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/SphereGrabSurfaceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(SphereGrabSurfaceData)
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Grab::GrabSurfaces {
class SphereGrabSurfaceData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*, "Oculus.Interaction.Grab.GrabSurfaces", "SphereGrabSurfaceData");
// Dependencies System.Object, UnityEngine.Vector3
namespace Oculus::Interaction::Grab::GrabSurfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData
class CORDL_TYPE SphereGrabSurfaceData : public ::System::Object {
public:
// Declarations
/// @brief Field centre, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_centre, put=__cordl_internal_set_centre)) ::UnityEngine::Vector3  centre;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Clone, addr 0xa4eda6c, size 0x6c, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method Mirror, addr 0xa4edb38, size 0x80, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData* Mirror() ;

static inline ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_centre() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_centre() ;

constexpr void __cordl_internal_set_centre(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa4edad8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereGrabSurfaceData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereGrabSurfaceData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereGrabSurfaceData(SphereGrabSurfaceData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereGrabSurfaceData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereGrabSurfaceData(SphereGrabSurfaceData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16362};

/// @brief Field centre, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___centre;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData, ___centre) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab::GrabSurfaces
