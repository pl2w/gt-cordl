#pragma once
// IWYU pragma private; include "GlobalNamespace/SizeLayerChangerGrabable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SizeLayerChangerGrabable)
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GlobalNamespace {
class SizeLayerMask;
}
namespace GorillaLocomotion::Gameplay {
class IGorillaGrabable;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SizeLayerChangerGrabable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SizeLayerChangerGrabable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SizeLayerChangerGrabable*, "", "SizeLayerChangerGrabable");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SizeLayerChangerGrabable
class CORDL_TYPE SizeLayerChangerGrabable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field grabChangesSizeLayer, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_grabChangesSizeLayer, put=__cordl_internal_set_grabChangesSizeLayer)) bool  grabChangesSizeLayer;

/// @brief Field grabbedSizeLayerMask, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedSizeLayerMask, put=__cordl_internal_set_grabbedSizeLayerMask)) ::GlobalNamespace::SizeLayerMask*  grabbedSizeLayerMask;

/// @brief Field momentaryGrabOnly, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_momentaryGrabOnly, put=__cordl_internal_set_momentaryGrabOnly)) bool  momentaryGrabOnly;

/// @brief Field releaseChangesSizeLayer, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_releaseChangesSizeLayer, put=__cordl_internal_set_releaseChangesSizeLayer)) bool  releaseChangesSizeLayer;

/// @brief Field releasedSizeLayerMask, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_releasedSizeLayerMask, put=__cordl_internal_set_releasedSizeLayerMask)) ::GlobalNamespace::SizeLayerMask*  releasedSizeLayerMask;

/// @brief Convert operator to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr operator  ::GorillaLocomotion::Gameplay::IGorillaGrabable*() noexcept;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.CanBeGrabbed, addr 0x595d5f4, size 0x8, virtual true, abstract: false, final true
inline bool GorillaLocomotion_Gameplay_IGorillaGrabable_CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber) ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabReleased, addr 0x595d7ec, size 0x144, virtual true, abstract: false, final true
inline void GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabReleased(::GlobalNamespace::GorillaGrabber*  g) ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.OnGrabbed, addr 0x595d5fc, size 0x1b8, virtual true, abstract: false, final true
inline void GorillaLocomotion_Gameplay_IGorillaGrabable_OnGrabbed(::GlobalNamespace::GorillaGrabber*  g, ::by_ref<::UnityEngine::Transform*>  grabbedObject, ::by_ref<::UnityEngine::Vector3>  grabbedLocalPosiiton) ;

/// @brief Method GorillaLocomotion.Gameplay.IGorillaGrabable.get_name, addr 0x595d948, size 0x8, virtual true, abstract: false, final true
inline ::StringW GorillaLocomotion_Gameplay_IGorillaGrabable_get_name() ;

/// @brief Method MomentaryGrabOnly, addr 0x595d5ec, size 0x8, virtual true, abstract: false, final true
inline bool MomentaryGrabOnly() ;

static inline ::GlobalNamespace::SizeLayerChangerGrabable* New_ctor() ;

constexpr bool const& __cordl_internal_get_grabChangesSizeLayer() const;

constexpr bool& __cordl_internal_get_grabChangesSizeLayer() ;

constexpr ::GlobalNamespace::SizeLayerMask* const& __cordl_internal_get_grabbedSizeLayerMask() const;

constexpr ::GlobalNamespace::SizeLayerMask*& __cordl_internal_get_grabbedSizeLayerMask() ;

constexpr bool const& __cordl_internal_get_momentaryGrabOnly() const;

constexpr bool& __cordl_internal_get_momentaryGrabOnly() ;

constexpr bool const& __cordl_internal_get_releaseChangesSizeLayer() const;

constexpr bool& __cordl_internal_get_releaseChangesSizeLayer() ;

constexpr ::GlobalNamespace::SizeLayerMask* const& __cordl_internal_get_releasedSizeLayerMask() const;

constexpr ::GlobalNamespace::SizeLayerMask*& __cordl_internal_get_releasedSizeLayerMask() ;

constexpr void __cordl_internal_set_grabChangesSizeLayer(bool  value) ;

constexpr void __cordl_internal_set_grabbedSizeLayerMask(::GlobalNamespace::SizeLayerMask*  value) ;

constexpr void __cordl_internal_set_momentaryGrabOnly(bool  value) ;

constexpr void __cordl_internal_set_releaseChangesSizeLayer(bool  value) ;

constexpr void __cordl_internal_set_releasedSizeLayerMask(::GlobalNamespace::SizeLayerMask*  value) ;

/// @brief Method .ctor, addr 0x595d930, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* i___GorillaLocomotion__Gameplay__IGorillaGrabable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SizeLayerChangerGrabable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SizeLayerChangerGrabable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SizeLayerChangerGrabable(SizeLayerChangerGrabable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SizeLayerChangerGrabable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SizeLayerChangerGrabable(SizeLayerChangerGrabable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2348};

/// [SerializeField]
/// @brief Field grabChangesSizeLayer, offset: 0x20, size: 0x1, def value: None
 bool  ___grabChangesSizeLayer;

/// [SerializeField]
/// @brief Field releaseChangesSizeLayer, offset: 0x21, size: 0x1, def value: None
 bool  ___releaseChangesSizeLayer;

/// [SerializeField]
/// @brief Field grabbedSizeLayerMask, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::SizeLayerMask*  ___grabbedSizeLayerMask;

/// [SerializeField]
/// @brief Field releasedSizeLayerMask, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::SizeLayerMask*  ___releasedSizeLayerMask;

/// [SerializeField]
/// @brief Field momentaryGrabOnly, offset: 0x38, size: 0x1, def value: None
 bool  ___momentaryGrabOnly;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SizeLayerChangerGrabable, ___grabChangesSizeLayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeLayerChangerGrabable, ___releaseChangesSizeLayer) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeLayerChangerGrabable, ___grabbedSizeLayerMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeLayerChangerGrabable, ___releasedSizeLayerMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeLayerChangerGrabable, ___momentaryGrabOnly) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SizeLayerChangerGrabable) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
