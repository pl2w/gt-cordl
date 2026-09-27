#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_Collection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlLayout_Collection)
namespace GlobalNamespace {
struct Collection_InputControlLayout_LayoutMatcher;
}
namespace GlobalNamespace {
struct Collection_InputControlLayout_PrecompiledLayout;
}
namespace GlobalNamespace {
struct InputControlLayout_Cache;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Layouts {
class Collection_InputControlLayout__GetBaseLayouts_d__24;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlLayout_Collection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlLayout_Collection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlLayout_Collection, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct CORDL_TYPE InputControlLayout_Collection {
public:
// Declarations
using LayoutMatcher = ::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher;

using PrecompiledLayout = ::GlobalNamespace::Collection_InputControlLayout_PrecompiledLayout;

using _GetBaseLayouts_d__24 = ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24;

/// @brief Method AddMatcher, addr 0xb007c50, size 0x1c0, virtual false, abstract: false, final false
inline void AddMatcher(::UnityEngine::InputSystem::Utilities::InternedString  layout, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method Allocate, addr 0xb0068a4, size 0x2a8, virtual false, abstract: false, final false
inline void Allocate() ;

/// @brief Method ComputeDistanceInInheritanceHierarchy, addr 0xb0074a8, size 0x134, virtual false, abstract: false, final false
inline bool ComputeDistanceInInheritanceHierarchy(::UnityEngine::InputSystem::Utilities::InternedString  firstLayout, ::UnityEngine::InputSystem::Utilities::InternedString  secondLayout, ::by_ref<int32_t>  distance) ;

/// @brief Method FindLayoutThatIntroducesControl, addr 0xb0075dc, size 0xfc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString FindLayoutThatIntroducesControl(::UnityEngine::InputSystem::InputControl*  control, ::GlobalNamespace::InputControlLayout_Cache  cache) ;

/// @brief Method GetBaseLayoutName, addr 0xb007388, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString GetBaseLayoutName(::UnityEngine::InputSystem::Utilities::InternedString  layoutName) ;

/// [IteratorStateMachine(typeof(UnityEngine.InputSystem.Layouts.InputControlLayout::Collection::<GetBaseLayouts>d__24))]
/// @brief Method GetBaseLayouts, addr 0xb007ab0, size 0xc0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* GetBaseLayouts(::UnityEngine::InputSystem::Utilities::InternedString  layout, bool  includeSelf) ;

/// @brief Method GetControlTypeForLayout, addr 0xb0077fc, size 0x13c, virtual false, abstract: false, final false
inline ::System::Type* GetControlTypeForLayout(::UnityEngine::InputSystem::Utilities::InternedString  layoutName) ;

/// @brief Method GetRootLayoutName, addr 0xb007414, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString GetRootLayoutName(::UnityEngine::InputSystem::Utilities::InternedString  layoutName) ;

/// @brief Method HasLayout, addr 0xb0026d0, size 0xdc, virtual false, abstract: false, final false
inline bool HasLayout(::UnityEngine::InputSystem::Utilities::InternedString  name) ;

/// @brief Method IsBasedOn, addr 0xb007ba4, size 0xac, virtual false, abstract: false, final false
inline bool IsBasedOn(::UnityEngine::InputSystem::Utilities::InternedString  parentLayout, ::UnityEngine::InputSystem::Utilities::InternedString  childLayout) ;

/// @brief Method IsGeneratedLayout, addr 0xb007a48, size 0x68, virtual false, abstract: false, final false
inline bool IsGeneratedLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method TryFindLayoutForType, addr 0xb002534, size 0x19c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindLayoutForType(::System::Type*  layoutType) ;

/// @brief Method TryFindMatchingLayout, addr 0xb006b4c, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription) ;

/// @brief Method TryLoadLayout, addr 0xb006f1c, size 0x3a8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadLayout(::UnityEngine::InputSystem::Utilities::InternedString  name, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  table) ;

/// @brief Method TryLoadLayoutInternal, addr 0xb006d28, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadLayoutInternal(::UnityEngine::InputSystem::Utilities::InternedString  name) ;

/// @brief Method ValueTypeIsAssignableFrom, addr 0xb007938, size 0x110, virtual false, abstract: false, final false
inline bool ValueTypeIsAssignableFrom(::UnityEngine::InputSystem::Utilities::InternedString  layoutName, ::System::Type*  valueType) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout_Collection() ;

// Ctor Parameters [CppParam { name: "layoutTypes", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "layoutStrings", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "layoutBuilders", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "baseLayoutTable", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "layoutOverrides", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "layoutOverrideNames", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "precompiledLayouts", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::Collection_InputControlLayout_PrecompiledLayout>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "layoutMatchers", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher>*", modifiers: "", def_value: None, comment: None }]
constexpr InputControlLayout_Collection(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*  layoutTypes, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  layoutStrings, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*  layoutBuilders, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*  baseLayoutTable, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>>*  layoutOverrides, ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  layoutOverrideNames, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::Collection_InputControlLayout_PrecompiledLayout>*  precompiledLayouts, ::System::Collections::Generic::List_1<::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher>*  layoutMatchers) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13834};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field kBaseScoreForNonGeneratedLayouts offset 0xffffffff size 0x4
static constexpr float_t  kBaseScoreForNonGeneratedLayouts{static_cast<float_t>(1.0f)};

/// @brief Field layoutTypes, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*  layoutTypes;

/// @brief Field layoutStrings, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  layoutStrings;

/// @brief Field layoutBuilders, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*  layoutBuilders;

/// @brief Field baseLayoutTable, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*  baseLayoutTable;

/// @brief Field layoutOverrides, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>>*  layoutOverrides;

/// @brief Field layoutOverrideNames, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  layoutOverrideNames;

/// @brief Field precompiledLayouts, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::Collection_InputControlLayout_PrecompiledLayout>*  precompiledLayouts;

/// @brief Field layoutMatchers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher>*  layoutMatchers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlLayout_Collection, layoutTypes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_Collection, layoutStrings) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_Collection, layoutBuilders) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_Collection, baseLayoutTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_Collection, layoutOverrides) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_Collection, layoutOverrideNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_Collection, precompiledLayouts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_Collection, layoutMatchers) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlLayout_Collection) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
