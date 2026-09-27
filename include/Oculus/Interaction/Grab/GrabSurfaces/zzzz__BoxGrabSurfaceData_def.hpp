#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/BoxGrabSurfaceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoxGrabSurfaceData)
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Grab::GrabSurfaces {
class BoxGrabSurfaceData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*, "Oculus.Interaction.Grab.GrabSurfaces", "BoxGrabSurfaceData");
// Dependencies System.Object, UnityEngine.Vector3, UnityEngine.Vector4
namespace Oculus::Interaction::Grab::GrabSurfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData
class CORDL_TYPE BoxGrabSurfaceData : public ::System::Object {
public:
// Declarations
/// @brief Field eulerAngles, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_eulerAngles, put=__cordl_internal_set_eulerAngles)) ::UnityEngine::Vector3  eulerAngles;

/// @brief Field size, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::Vector3  size;

/// @brief Field snapOffset, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get_snapOffset, put=__cordl_internal_set_snapOffset)) ::UnityEngine::Vector4  snapOffset;

/// @brief Field widthOffset, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_widthOffset, put=__cordl_internal_set_widthOffset)) float_t  widthOffset;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Clone, addr 0xa4e8de4, size 0xa8, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method Mirror, addr 0xa4e8eb4, size 0x8c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData* Mirror() ;

static inline ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_eulerAngles() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_eulerAngles() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_size() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_snapOffset() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_snapOffset() ;

constexpr float_t const& __cordl_internal_get_widthOffset() const;

constexpr float_t& __cordl_internal_get_widthOffset() ;

constexpr void __cordl_internal_set_eulerAngles(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_snapOffset(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_widthOffset(float_t  value) ;

/// @brief Method .ctor, addr 0xa4e8e8c, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoxGrabSurfaceData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoxGrabSurfaceData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoxGrabSurfaceData(BoxGrabSurfaceData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoxGrabSurfaceData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoxGrabSurfaceData(BoxGrabSurfaceData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16356};

/// [Range(0, 1)]
/// @brief Field widthOffset, offset: 0x10, size: 0x4, def value: None
 float_t  ___widthOffset;

/// @brief Field snapOffset, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___snapOffset;

/// @brief Field size, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___size;

/// @brief Field eulerAngles, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___eulerAngles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData, ___widthOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData, ___snapOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData, ___size) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData, ___eulerAngles) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab::GrabSurfaces
