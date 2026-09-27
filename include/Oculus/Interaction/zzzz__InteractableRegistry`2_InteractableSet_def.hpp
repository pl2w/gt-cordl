#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableRegistry`2_InteractableSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(InteractableRegistry`2_InteractableSet)
namespace GlobalNamespace {
template<typename TInteractor,typename TInteractable>
struct InteractableSet_InteractableRegistry_2_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class ISet_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TInteractor,typename TInteractable>
struct InteractableRegistry_2_InteractableSet;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::InteractableRegistry_2_InteractableSet);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::InteractableRegistry_2_InteractableSet, "Oculus.Interaction", "InteractableRegistry`2/InteractableSet");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: true
// CS Name: Oculus.Interaction.InteractableRegistry`2/InteractableSet<TInteractor,TInteractable>
struct CORDL_TYPE InteractableRegistry_2_InteractableSet {
public:
// Declarations
using Enumerator = ::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor, TInteractable>;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TInteractable>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TInteractable>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable> GetEnumerator() ;

/// @brief Method Include, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Include(TInteractable  interactable) ;

/// @brief Method System.Collections.Generic.IEnumerable<TInteractable>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<TInteractable>* System_Collections_Generic_IEnumerable_TInteractable__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::ISet_1<TInteractable>*  onlyInclude, TInteractor  testAgainst) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TInteractable>"
constexpr ::System::Collections::Generic::IEnumerable_1<TInteractable>* i___System__Collections__Generic__IEnumerable_1_TInteractable_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InteractableRegistry_2_InteractableSet() ;

// Ctor Parameters [CppParam { name: "_data", ty: "::System::Collections::Generic::IReadOnlyList_1<TInteractable>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_onlyInclude", ty: "::System::Collections::Generic::ISet_1<TInteractable>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_testAgainst", ty: "TInteractor", modifiers: "", def_value: None, comment: None }]
constexpr InteractableRegistry_2_InteractableSet(::System::Collections::Generic::IReadOnlyList_1<TInteractable>*  _data, ::System::Collections::Generic::ISet_1<TInteractable>*  _onlyInclude, TInteractor  _testAgainst) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15780};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _data, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<TInteractable>*  _data;

/// @brief Field _onlyInclude, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::ISet_1<TInteractable>*  _onlyInclude;

/// @brief Field _testAgainst, offset: 0x10, size: 0x8, def value: None
 TInteractor  _testAgainst;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
