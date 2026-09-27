#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/AxisAlignedBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AxisAlignedBox)
namespace GlobalNamespace {
struct AxisAlignedBox_BoxSurface;
}
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
class AxisAlignedBox;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::AxisAlignedBox*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::AxisAlignedBox*, "Oculus.Interaction.Surfaces", "AxisAlignedBox");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.AxisAlignedBox
class CORDL_TYPE AxisAlignedBox : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BoxSurface = ::GlobalNamespace::AxisAlignedBox_BoxSurface;

 __declspec(property(get=get_Bounds)) ::UnityEngine::Bounds  Bounds;

 __declspec(property(get=get_Size, put=set_Size)) ::UnityEngine::Vector3  Size;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field _distances, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__distances, put=__cordl_internal_set__distances)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AxisAlignedBox_BoxSurface,float_t>*  _distances;

/// @brief Field _size, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) ::UnityEngine::Vector3  _size;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurface*() noexcept;

/// @brief Method ClosestSurfaceNormal, addr 0xa4b2c1c, size 0xe8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestSurfaceNormal(::UnityEngine::Vector3  point, ::System::Nullable_1<::GlobalNamespace::AxisAlignedBox_BoxSurface>  side) ;

/// @brief Method ClosestSurfacePoint, addr 0xa4b25c8, size 0x38c, virtual false, abstract: false, final false
inline bool ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method FindClosestBoxSide, addr 0xa4b2954, size 0x2c8, virtual false, abstract: false, final false
inline ::GlobalNamespace::AxisAlignedBox_BoxSurface FindClosestBoxSide(::UnityEngine::Vector3  point) ;

/// @brief Method IsWithinVolume, addr 0xa4b2d04, size 0x5c, virtual false, abstract: false, final false
inline bool IsWithinVolume(::UnityEngine::Vector3  point) ;

static inline ::Oculus::Interaction::Surfaces::AxisAlignedBox* New_ctor() ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint, addr 0xa4b31dc, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.Raycast, addr 0xa4b31d8, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0xa4b2d60, size 0x1cc, virtual false, abstract: false, final false
inline bool Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Start, addr 0xa4b2f2c, size 0x188, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AxisAlignedBox_BoxSurface,float_t>* const& __cordl_internal_get__distances() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AxisAlignedBox_BoxSurface,float_t>*& __cordl_internal_get__distances() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__size() ;

constexpr void __cordl_internal_set__distances(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AxisAlignedBox_BoxSurface,float_t>*  value) ;

constexpr void __cordl_internal_set__size(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa4b30b4, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Bounds, addr 0xa4b2564, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_Bounds() ;

/// @brief Method get_Size, addr 0xa4b2544, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Size() ;

/// @brief Method get_Transform, addr 0xa4b255c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* i___Oculus__Interaction__Surfaces__ISurface() noexcept;

/// @brief Method set_Size, addr 0xa4b2550, size 0xc, virtual false, abstract: false, final false
inline void set_Size(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AxisAlignedBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AxisAlignedBox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AxisAlignedBox(AxisAlignedBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AxisAlignedBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AxisAlignedBox(AxisAlignedBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16214};

/// [SerializeField]
/// [Tooltip("Size of the axis-aligned box, default to mesh size")]
/// @brief Field _size, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____size;

/// @brief Field _distances, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AxisAlignedBox_BoxSurface,float_t>*  ____distances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::AxisAlignedBox, ____size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::AxisAlignedBox, ____distances) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::AxisAlignedBox) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces
