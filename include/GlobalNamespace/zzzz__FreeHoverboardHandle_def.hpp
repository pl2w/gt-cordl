#pragma once
// IWYU pragma private; include "GlobalNamespace/FreeHoverboardHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FreeHoverboardHandle)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class FreeHoverboardInstance;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class FreeHoverboardHandle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FreeHoverboardHandle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FreeHoverboardHandle*, "", "FreeHoverboardHandle");
// Dependencies HoldableObject, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FreeHoverboardHandle
class CORDL_TYPE FreeHoverboardHandle : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
/// @brief Field defaultHoldAngleLeft, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultHoldAngleLeft, put=__cordl_internal_set_defaultHoldAngleLeft)) ::UnityEngine::Quaternion  defaultHoldAngleLeft;

/// @brief Field defaultHoldAngleRight, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultHoldAngleRight, put=__cordl_internal_set_defaultHoldAngleRight)) ::UnityEngine::Quaternion  defaultHoldAngleRight;

/// @brief Field defaultHoldPosLeft, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_defaultHoldPosLeft, put=__cordl_internal_set_defaultHoldPosLeft)) ::UnityEngine::Vector3  defaultHoldPosLeft;

/// @brief Field defaultHoldPosRight, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_defaultHoldPosRight, put=__cordl_internal_set_defaultHoldPosRight)) ::UnityEngine::Vector3  defaultHoldPosRight;

/// @brief Field hasParentBoard, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasParentBoard, put=__cordl_internal_set_hasParentBoard)) bool  hasParentBoard;

/// @brief Field noHapticsUntilFrame, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_noHapticsUntilFrame, put=__cordl_internal_set_noHapticsUntilFrame)) int32_t  noHapticsUntilFrame;

/// @brief Field parentFreeBoard, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentFreeBoard, put=__cordl_internal_set_parentFreeBoard)) ::UnityW<::GlobalNamespace::FreeHoverboardInstance>  parentFreeBoard;

/// @brief Method Awake, addr 0x59531c8, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DropItemCleanup, addr 0x5953b10, size 0x4, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

static inline ::GlobalNamespace::FreeHoverboardHandle* New_ctor() ;

/// @brief Method OnGrab, addr 0x5953474, size 0x4c8, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x5953234, size 0x240, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x5953b14, size 0x38, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_defaultHoldAngleLeft() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_defaultHoldAngleLeft() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_defaultHoldAngleRight() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_defaultHoldAngleRight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultHoldPosLeft() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultHoldPosLeft() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultHoldPosRight() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultHoldPosRight() ;

constexpr bool const& __cordl_internal_get_hasParentBoard() const;

constexpr bool& __cordl_internal_get_hasParentBoard() ;

constexpr int32_t const& __cordl_internal_get_noHapticsUntilFrame() const;

constexpr int32_t& __cordl_internal_get_noHapticsUntilFrame() ;

constexpr ::UnityW<::GlobalNamespace::FreeHoverboardInstance> const& __cordl_internal_get_parentFreeBoard() const;

constexpr ::UnityW<::GlobalNamespace::FreeHoverboardInstance>& __cordl_internal_get_parentFreeBoard() ;

constexpr void __cordl_internal_set_defaultHoldAngleLeft(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_defaultHoldAngleRight(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_defaultHoldPosLeft(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_defaultHoldPosRight(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_hasParentBoard(bool  value) ;

constexpr void __cordl_internal_set_noHapticsUntilFrame(int32_t  value) ;

constexpr void __cordl_internal_set_parentFreeBoard(::UnityW<::GlobalNamespace::FreeHoverboardInstance>  value) ;

/// @brief Method .ctor, addr 0x5953b4c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FreeHoverboardHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FreeHoverboardHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeHoverboardHandle(FreeHoverboardHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeHoverboardHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeHoverboardHandle(FreeHoverboardHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2308};

/// [SerializeField]
/// @brief Field parentFreeBoard, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FreeHoverboardInstance>  ___parentFreeBoard;

/// @brief Field hasParentBoard, offset: 0x28, size: 0x1, def value: None
 bool  ___hasParentBoard;

/// [SerializeField]
/// @brief Field defaultHoldPosLeft, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___defaultHoldPosLeft;

/// [SerializeField]
/// @brief Field defaultHoldPosRight, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___defaultHoldPosRight;

/// [SerializeField]
/// @brief Field defaultHoldAngleLeft, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___defaultHoldAngleLeft;

/// [SerializeField]
/// @brief Field defaultHoldAngleRight, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___defaultHoldAngleRight;

/// @brief Field noHapticsUntilFrame, offset: 0x64, size: 0x4, def value: None
 int32_t  ___noHapticsUntilFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FreeHoverboardHandle, ___parentFreeBoard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardHandle, ___hasParentBoard) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardHandle, ___defaultHoldPosLeft) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardHandle, ___defaultHoldPosRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardHandle, ___defaultHoldAngleLeft) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardHandle, ___defaultHoldAngleRight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardHandle, ___noHapticsUntilFrame) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FreeHoverboardHandle) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
