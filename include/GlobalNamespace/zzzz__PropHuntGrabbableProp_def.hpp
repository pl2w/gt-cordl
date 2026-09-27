#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntGrabbableProp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(PropHuntGrabbableProp)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class PropHuntHandFollower;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PropHuntGrabbableProp;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHuntGrabbableProp*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntGrabbableProp*, "", "PropHuntGrabbableProp");
// Dependencies HoldableObject, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHuntGrabbableProp
class CORDL_TYPE PropHuntGrabbableProp : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
/// @brief Field handFollower, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handFollower, put=__cordl_internal_set_handFollower)) ::UnityW<::GlobalNamespace::PropHuntHandFollower>  handFollower;

/// @brief Field interactionPoints, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionPoints, put=__cordl_internal_set_interactionPoints)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  interactionPoints;

/// @brief Field offset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

/// @brief Method DropItemCleanup, addr 0x56380ec, size 0x4, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

static inline ::GlobalNamespace::PropHuntGrabbableProp* New_ctor() ;

/// @brief Method OnGrab, addr 0x5637ee4, size 0xd8, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x5637ee0, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x56380f0, size 0x130, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

constexpr ::UnityW<::GlobalNamespace::PropHuntHandFollower> const& __cordl_internal_get_handFollower() const;

constexpr ::UnityW<::GlobalNamespace::PropHuntHandFollower>& __cordl_internal_get_handFollower() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>* const& __cordl_internal_get_interactionPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*& __cordl_internal_get_interactionPoints() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr void __cordl_internal_set_handFollower(::UnityW<::GlobalNamespace::PropHuntHandFollower>  value) ;

constexpr void __cordl_internal_set_interactionPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  value) ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5638220, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHuntGrabbableProp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHuntGrabbableProp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHuntGrabbableProp(PropHuntGrabbableProp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHuntGrabbableProp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHuntGrabbableProp(PropHuntGrabbableProp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{634};

/// @brief Field handFollower, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHuntHandFollower>  ___handFollower;

/// @brief Field offset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

/// @brief Field interactionPoints, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  ___interactionPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHuntGrabbableProp, ___handFollower) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntGrabbableProp, ___offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntGrabbableProp, ___interactionPoints) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHuntGrabbableProp) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
