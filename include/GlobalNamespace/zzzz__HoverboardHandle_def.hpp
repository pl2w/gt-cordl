#pragma once
// IWYU pragma private; include "GlobalNamespace/HoverboardHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HoverboardHandle)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class HoverboardVisual;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class HoverboardHandle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoverboardHandle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoverboardHandle*, "", "HoverboardHandle");
// Dependencies HoldableObject, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoverboardHandle
class CORDL_TYPE HoverboardHandle : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
/// @brief Field defaultHoldAngleLeft, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultHoldAngleLeft, put=__cordl_internal_set_defaultHoldAngleLeft)) ::UnityEngine::Quaternion  defaultHoldAngleLeft;

/// @brief Field defaultHoldAngleRight, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultHoldAngleRight, put=__cordl_internal_set_defaultHoldAngleRight)) ::UnityEngine::Quaternion  defaultHoldAngleRight;

/// @brief Field defaultHoldPosLeft, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_defaultHoldPosLeft, put=__cordl_internal_set_defaultHoldPosLeft)) ::UnityEngine::Vector3  defaultHoldPosLeft;

/// @brief Field defaultHoldPosRight, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_defaultHoldPosRight, put=__cordl_internal_set_defaultHoldPosRight)) ::UnityEngine::Vector3  defaultHoldPosRight;

/// @brief Field noHapticsUntilFrame, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_noHapticsUntilFrame, put=__cordl_internal_set_noHapticsUntilFrame)) int32_t  noHapticsUntilFrame;

/// @brief Field parentVisual, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentVisual, put=__cordl_internal_set_parentVisual)) ::UnityW<::GlobalNamespace::HoverboardVisual>  parentVisual;

/// @brief Method DropItemCleanup, addr 0x5956840, size 0x48, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

static inline ::GlobalNamespace::HoverboardHandle* New_ctor() ;

/// @brief Method OnGrab, addr 0x595613c, size 0x384, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x5955efc, size 0x240, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x5956d00, size 0x16c, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_defaultHoldAngleLeft() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_defaultHoldAngleLeft() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_defaultHoldAngleRight() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_defaultHoldAngleRight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultHoldPosLeft() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultHoldPosLeft() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultHoldPosRight() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultHoldPosRight() ;

constexpr int32_t const& __cordl_internal_get_noHapticsUntilFrame() const;

constexpr int32_t& __cordl_internal_get_noHapticsUntilFrame() ;

constexpr ::UnityW<::GlobalNamespace::HoverboardVisual> const& __cordl_internal_get_parentVisual() const;

constexpr ::UnityW<::GlobalNamespace::HoverboardVisual>& __cordl_internal_get_parentVisual() ;

constexpr void __cordl_internal_set_defaultHoldAngleLeft(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_defaultHoldAngleRight(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_defaultHoldPosLeft(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_defaultHoldPosRight(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_noHapticsUntilFrame(int32_t  value) ;

constexpr void __cordl_internal_set_parentVisual(::UnityW<::GlobalNamespace::HoverboardVisual>  value) ;

/// @brief Method .ctor, addr 0x5956e6c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoverboardHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoverboardHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoverboardHandle(HoverboardHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoverboardHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoverboardHandle(HoverboardHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2315};

/// [SerializeField]
/// @brief Field parentVisual, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoverboardVisual>  ___parentVisual;

/// [SerializeField]
/// @brief Field defaultHoldAngleLeft, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___defaultHoldAngleLeft;

/// [SerializeField]
/// @brief Field defaultHoldAngleRight, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___defaultHoldAngleRight;

/// [SerializeField]
/// @brief Field defaultHoldPosLeft, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___defaultHoldPosLeft;

/// [SerializeField]
/// @brief Field defaultHoldPosRight, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___defaultHoldPosRight;

/// @brief Field noHapticsUntilFrame, offset: 0x60, size: 0x4, def value: None
 int32_t  ___noHapticsUntilFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HoverboardHandle, ___parentVisual) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardHandle, ___defaultHoldAngleLeft) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardHandle, ___defaultHoldAngleRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardHandle, ___defaultHoldPosLeft) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardHandle, ___defaultHoldPosRight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoverboardHandle, ___noHapticsUntilFrame) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HoverboardHandle) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
