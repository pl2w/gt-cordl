#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabInteractableDataCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(HandGrabInteractableDataCollection)
namespace GlobalNamespace {
struct HandGrabUtils_HandGrabInteractableData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractableDataCollection;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*, "Oculus.Interaction.HandGrab", "HandGrabInteractableDataCollection");
// [CreateAssetMenu(menuName = "Meta/Interaction/SDK/Pose Authoring/HandGrabInteractable Data Collection")]
// Dependencies UnityEngine.ScriptableObject
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabInteractableDataCollection
class CORDL_TYPE HandGrabInteractableDataCollection : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_InteractablesData)) ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*  InteractablesData;

/// @brief Field _interactablesData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactablesData, put=__cordl_internal_set__interactablesData)) ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*  _interactablesData;

static inline ::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection* New_ctor() ;

/// @brief Method StoreInteractables, addr 0xa4deb58, size 0x8, virtual false, abstract: false, final false
inline void StoreInteractables(::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*  interactablesData) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>* const& __cordl_internal_get__interactablesData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*& __cordl_internal_get__interactablesData() ;

constexpr void __cordl_internal_set__interactablesData(::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*  value) ;

/// @brief Method .ctor, addr 0xa4deb60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractablesData, addr 0xa4deb50, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>* get_InteractablesData() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabInteractableDataCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteractableDataCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabInteractableDataCollection(HandGrabInteractableDataCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabInteractableDataCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabInteractableDataCollection(HandGrabInteractableDataCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16318};

/// [SerializeField]
/// [Tooltip("Do not modify this manually unless you are sure! Instead load the HandGrabInteractable and use the tools provided.")]
/// @brief Field _interactablesData, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>*  ____interactablesData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection, ____interactablesData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
