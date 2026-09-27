#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkHoldableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkHoldableObject)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class IHoldableObject;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkHoldableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkHoldableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkHoldableObject*, "", "NetworkHoldableObject");
// [NetworkBehaviourWeaved(0)]
// Dependencies NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkHoldableObject
class CORDL_TYPE NetworkHoldableObject : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
 __declspec(property(get=get_TwoHanded)) bool  TwoHanded;

/// @brief Convert operator to "::GlobalNamespace::IHoldableObject"
constexpr operator  ::GlobalNamespace::IHoldableObject*() noexcept;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x575e664, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x575e66c, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method DropItemCleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DropItemCleanup() ;

/// @brief Method IHoldableObject.get_gameObject, addr 0x575e64c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> IHoldableObject_get_gameObject() ;

/// @brief Method IHoldableObject.get_name, addr 0x575e654, size 0x8, virtual true, abstract: false, final true
inline ::StringW IHoldableObject_get_name() ;

/// @brief Method IHoldableObject.set_name, addr 0x575e65c, size 0x8, virtual true, abstract: false, final true
inline void IHoldableObject_set_name(::StringW  value) ;

static inline ::GlobalNamespace::NetworkHoldableObject* New_ctor() ;

/// @brief Method OnGrab, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x575e504, size 0x130, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method ReadDataFusion, addr 0x575e634, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x575e63c, size 0x4, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method WriteDataFusion, addr 0x575e638, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x575e640, size 0x4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method .ctor, addr 0x575e644, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TwoHanded, addr 0x575e4fc, size 0x8, virtual true, abstract: false, final false
inline bool get_TwoHanded() ;

/// @brief Convert to "::GlobalNamespace::IHoldableObject"
constexpr ::GlobalNamespace::IHoldableObject* i___GlobalNamespace__IHoldableObject() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkHoldableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkHoldableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkHoldableObject(NetworkHoldableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkHoldableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkHoldableObject(NetworkHoldableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1340};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkHoldableObject) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
