#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/PointerModel_InternalData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PointerModel_InternalData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct PointerModel_InternalData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PointerModel_InternalData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PointerModel_InternalData, "UnityEngine.XR.Interaction.Toolkit.UI", "PointerModel/InternalData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.PointerModel/InternalData
struct CORDL_TYPE PointerModel_InternalData {
public:
// Declarations
 __declspec(property(get=get_hoverTargets, put=set_hoverTargets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  hoverTargets;

 __declspec(property(get=get_pointerTarget, put=set_pointerTarget)) ::UnityW<::UnityEngine::GameObject>  pointerTarget;

/// @brief Method Reset, addr 0xb432978, size 0xd0, virtual false, abstract: false, final false
inline void Reset() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_hoverTargets, addr 0xb432c58, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* get_hoverTargets() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_pointerTarget, addr 0xb432c68, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_pointerTarget() ;

/// [CompilerGenerated]
/// @brief Method set_hoverTargets, addr 0xb432c60, size 0x8, virtual false, abstract: false, final false
inline void set_hoverTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_pointerTarget, addr 0xb432c70, size 0x8, virtual false, abstract: false, final false
inline void set_pointerTarget(::UnityEngine::GameObject*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PointerModel_InternalData() ;

// Ctor Parameters [CppParam { name: "_hoverTargets_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pointerTarget_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }]
constexpr PointerModel_InternalData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _hoverTargets_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _pointerTarget_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11287};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <hoverTargets>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _hoverTargets_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pointerTarget>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  _pointerTarget_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PointerModel_InternalData, _hoverTargets_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PointerModel_InternalData, _pointerTarget_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PointerModel_InternalData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
