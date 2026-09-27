#pragma once
// IWYU pragma private; include "Oculus/Interaction/SurfaceSnapPoseDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceSnapPoseDelegate)
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
namespace Oculus::Interaction {
class ISnapPoseDelegate;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class SurfaceSnapPoseDelegate;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SurfaceSnapPoseDelegate*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SurfaceSnapPoseDelegate*, "Oculus.Interaction", "SurfaceSnapPoseDelegate");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SurfaceSnapPoseDelegate
class CORDL_TYPE SurfaceSnapPoseDelegate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Surface, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Surface, put=__cordl_internal_set_Surface)) ::Oculus::Interaction::Surfaces::ISurface*  Surface;

/// @brief Field _snappedPoses, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__snappedPoses, put=__cordl_internal_set__snappedPoses)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Pose>*  _snappedPoses;

/// @brief Field _surface, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__surface, put=__cordl_internal_set__surface)) ::UnityW<::UnityEngine::Object>  _surface;

/// @brief Convert operator to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr operator  ::Oculus::Interaction::ISnapPoseDelegate*() noexcept;

/// @brief Method Awake, addr 0xa4640b4, size 0xc8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeLocalSurfacePose, addr 0xa464350, size 0x284, virtual false, abstract: false, final false
inline bool ComputeLocalSurfacePose(::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result) ;

/// @brief Method ComputeWorldSurfacePose, addr 0xa464188, size 0x1c8, virtual false, abstract: false, final false
inline bool ComputeWorldSurfacePose(::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result) ;

/// @brief Method InjectAllSurfaceSnapPoseDelegate, addr 0xa46497c, size 0x4, virtual false, abstract: false, final false
inline void InjectAllSurfaceSnapPoseDelegate(::Oculus::Interaction::Surfaces::ISurface*  surface) ;

/// @brief Method InjectSurface, addr 0xa464980, size 0xd0, virtual false, abstract: false, final false
inline void InjectSurface(::Oculus::Interaction::Surfaces::ISurface*  surface) ;

/// @brief Method MoveTrackedElement, addr 0xa4646fc, size 0x4, virtual true, abstract: false, final true
inline void MoveTrackedElement(int32_t  id, ::UnityEngine::Pose  p) ;

static inline ::Oculus::Interaction::SurfaceSnapPoseDelegate* New_ctor() ;

/// @brief Method SnapElement, addr 0xa4645d4, size 0xd0, virtual true, abstract: false, final true
inline void SnapElement(int32_t  id, ::UnityEngine::Pose  pose) ;

/// @brief Method SnapPoseForElement, addr 0xa464700, size 0x27c, virtual true, abstract: false, final true
inline bool SnapPoseForElement(int32_t  id, ::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result) ;

/// @brief Method Start, addr 0xa46417c, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TrackElement, addr 0xa464180, size 0x4, virtual true, abstract: false, final true
inline void TrackElement(int32_t  id, ::UnityEngine::Pose  p) ;

/// @brief Method UnsnapElement, addr 0xa4646a4, size 0x58, virtual true, abstract: false, final true
inline void UnsnapElement(int32_t  id) ;

/// @brief Method UntrackElement, addr 0xa464184, size 0x4, virtual true, abstract: false, final true
inline void UntrackElement(int32_t  id) ;

constexpr ::Oculus::Interaction::Surfaces::ISurface* const& __cordl_internal_get_Surface() const;

constexpr ::Oculus::Interaction::Surfaces::ISurface*& __cordl_internal_get_Surface() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Pose>* const& __cordl_internal_get__snappedPoses() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Pose>*& __cordl_internal_get__snappedPoses() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__surface() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__surface() ;

constexpr void __cordl_internal_set_Surface(::Oculus::Interaction::Surfaces::ISurface*  value) ;

constexpr void __cordl_internal_set__snappedPoses(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set__surface(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa464a50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr ::Oculus::Interaction::ISnapPoseDelegate* i___Oculus__Interaction__ISnapPoseDelegate() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceSnapPoseDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceSnapPoseDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceSnapPoseDelegate(SurfaceSnapPoseDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceSnapPoseDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceSnapPoseDelegate(SurfaceSnapPoseDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15883};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Surfaces.ISurface), new[] {  })]
/// @brief Field _surface, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____surface;

/// @brief Field Surface, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Surfaces::ISurface*  ___Surface;

/// @brief Field _snappedPoses, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Pose>*  ____snappedPoses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SurfaceSnapPoseDelegate, ____surface) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SurfaceSnapPoseDelegate, ___Surface) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SurfaceSnapPoseDelegate, ____snappedPoses) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SurfaceSnapPoseDelegate) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
