#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PalmMenu/DominantHandGameObjectFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DominantHandGameObjectFilter)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IGameObjectFilter;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Samples::PalmMenu {
class DominantHandGameObjectFilter;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter*, "Oculus.Interaction.Samples.PalmMenu", "DominantHandGameObjectFilter");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples::PalmMenu {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.PalmMenu.DominantHandGameObjectFilter
class CORDL_TYPE DominantHandGameObjectFilter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_LeftHand, put=set_LeftHand)) ::Oculus::Interaction::Input::IHand*  LeftHand;

/// @brief Field <LeftHand>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__LeftHand_k__BackingField, put=__cordl_internal_set__LeftHand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _LeftHand_k__BackingField;

/// @brief Field _leftHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHand, put=__cordl_internal_set__leftHand)) ::UnityW<::UnityEngine::Object>  _leftHand;

/// @brief Field _leftHandedGameObjectSet, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHandedGameObjectSet, put=__cordl_internal_set__leftHandedGameObjectSet)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  _leftHandedGameObjectSet;

/// @brief Field _leftHandedGameObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHandedGameObjects, put=__cordl_internal_set__leftHandedGameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _leftHandedGameObjects;

/// @brief Field _rightHandedGameObjectSet, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHandedGameObjectSet, put=__cordl_internal_set__rightHandedGameObjectSet)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  _rightHandedGameObjectSet;

/// @brief Field _rightHandedGameObjects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHandedGameObjects, put=__cordl_internal_set__rightHandedGameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _rightHandedGameObjects;

/// @brief Convert operator to "::Oculus::Interaction::IGameObjectFilter"
constexpr operator  ::Oculus::Interaction::IGameObjectFilter*() noexcept;

/// @brief Method Filter, addr 0xa440f0c, size 0xdc, virtual true, abstract: false, final true
inline bool Filter(::UnityEngine::GameObject*  go) ;

static inline ::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter* New_ctor() ;

/// @brief Method Start, addr 0xa440df8, size 0x114, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__LeftHand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__LeftHand_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__leftHand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__leftHand() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__leftHandedGameObjectSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__leftHandedGameObjectSet() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__leftHandedGameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__leftHandedGameObjects() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__rightHandedGameObjectSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__rightHandedGameObjectSet() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__rightHandedGameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__rightHandedGameObjects() ;

constexpr void __cordl_internal_set__LeftHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__leftHand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__leftHandedGameObjectSet(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__leftHandedGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__rightHandedGameObjectSet(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__rightHandedGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0xa440fe8, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_LeftHand, addr 0xa440de8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_LeftHand() ;

/// @brief Convert to "::Oculus::Interaction::IGameObjectFilter"
constexpr ::Oculus::Interaction::IGameObjectFilter* i___Oculus__Interaction__IGameObjectFilter() noexcept;

/// [CompilerGenerated]
/// @brief Method set_LeftHand, addr 0xa440df0, size 0x8, virtual false, abstract: false, final false
inline void set_LeftHand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DominantHandGameObjectFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DominantHandGameObjectFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DominantHandGameObjectFilter(DominantHandGameObjectFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DominantHandGameObjectFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DominantHandGameObjectFilter(DominantHandGameObjectFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28351};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _leftHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____leftHand;

/// [SerializeField]
/// @brief Field _leftHandedGameObjects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____leftHandedGameObjects;

/// [SerializeField]
/// @brief Field _rightHandedGameObjects, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____rightHandedGameObjects;

/// [CompilerGenerated]
/// @brief Field <LeftHand>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____LeftHand_k__BackingField;

/// @brief Field _leftHandedGameObjectSet, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  ____leftHandedGameObjectSet;

/// @brief Field _rightHandedGameObjectSet, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  ____rightHandedGameObjectSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter, ____leftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter, ____leftHandedGameObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter, ____rightHandedGameObjects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter, ____LeftHand_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter, ____leftHandedGameObjectSet) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter, ____rightHandedGameObjectSet) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::PalmMenu::DominantHandGameObjectFilter) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples::PalmMenu
