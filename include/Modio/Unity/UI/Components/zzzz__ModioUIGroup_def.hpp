#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUIGroup)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components {
class ModioUIMod;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUIGroup;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIGroup*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIGroup*, "Modio.Unity.UI.Components", "ModioUIGroup");
// Dependencies System.ValueTuple`2<T1, T2>, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIGroup
class CORDL_TYPE ModioUIGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TempActive, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TempActive, put=setStaticF_TempActive)) ::System::Collections::Generic::Dictionary_2<::Modio::Mods::Mod*,::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  TempActive;

/// @brief Field _active, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  _active;

/// @brief Field _displayOnEnable, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__displayOnEnable, put=__cordl_internal_set__displayOnEnable)) ::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>  _displayOnEnable;

/// @brief Field _inactive, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__inactive, put=__cordl_internal_set__inactive)) ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  _inactive;

/// @brief Field _layoutRebuilder, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__layoutRebuilder, put=__cordl_internal_set__layoutRebuilder)) ::UnityW<::UnityEngine::RectTransform>  _layoutRebuilder;

/// @brief Field _template, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__template, put=__cordl_internal_set__template)) ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  _template;

/// @brief Method Awake, addr 0x9fb8eb0, size 0x1f0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::UI::Components::ModioUIGroup* New_ctor() ;

/// @brief Method OnEnable, addr 0x9fb90a0, size 0x24, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetMods, addr 0x9fb90c4, size 0xae4, virtual false, abstract: false, final false
inline void SetMods(::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*  mods, int32_t  selectionIndex) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>* const& __cordl_internal_get__active() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*& __cordl_internal_get__active() ;

constexpr ::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t> const& __cordl_internal_get__displayOnEnable() const;

constexpr ::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>& __cordl_internal_get__displayOnEnable() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>* const& __cordl_internal_get__inactive() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*& __cordl_internal_get__inactive() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__layoutRebuilder() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__layoutRebuilder() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& __cordl_internal_get__template() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& __cordl_internal_get__template() ;

constexpr void __cordl_internal_set__active(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  value) ;

constexpr void __cordl_internal_set__displayOnEnable(::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>  value) ;

constexpr void __cordl_internal_set__inactive(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  value) ;

constexpr void __cordl_internal_set__layoutRebuilder(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__template(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value) ;

/// @brief Method .ctor, addr 0x9fb9cb4, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::Mod*,::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>* getStaticF_TempActive() ;

static inline void setStaticF_TempActive(::System::Collections::Generic::Dictionary_2<::Modio::Mods::Mod*,::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIGroup(ModioUIGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIGroup(ModioUIGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27145};

/// @brief Field _template, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  ____template;

/// @brief Field _active, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  ____active;

/// @brief Field _inactive, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  ____inactive;

/// [TupleElementNames(new[] { "mods", "selectionIndex" })]
/// @brief Field _displayOnEnable, offset: 0x38, size: 0x10, def value: None
 ::System::ValueTuple_2<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>  ____displayOnEnable;

/// [SerializeField]
/// [Tooltip("(Optional) The root layout to rebuild before performing selections")]
/// @brief Field _layoutRebuilder, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____layoutRebuilder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIGroup, ____template) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIGroup, ____active) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIGroup, ____inactive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIGroup, ____displayOnEnable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIGroup, ____layoutRebuilder) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIGroup) == 0x50, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
