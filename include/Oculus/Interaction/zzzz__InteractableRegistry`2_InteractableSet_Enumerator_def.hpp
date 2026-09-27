#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableRegistry`2_InteractableSet_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractableRegistry`2_InteractableSet_Enumerator)
namespace GlobalNamespace {
template<typename TInteractor,typename TInteractable>
struct InteractableRegistry_2_InteractableSet;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TInteractor,typename TInteractable>
struct InteractableSet_InteractableRegistry_2_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator, "Oculus.Interaction", "InteractableRegistry`2/InteractableSet/Enumerator");
// Dependencies Oculus.Interaction.InteractableRegistry`2::InteractableSet<TInteractor, TInteractable>
namespace GlobalNamespace {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: true
// CS Name: Oculus.Interaction.InteractableRegistry`2/InteractableSet/Enumerator<TInteractor,TInteractable>
struct CORDL_TYPE InteractableSet_InteractableRegistry_2_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) TInteractable  Current;

 __declspec(property(get=get_Data)) ::System::Collections::Generic::IReadOnlyList_1<TInteractable>*  Data;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TInteractable>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TInteractable>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>  set) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TInteractable get_Current() ;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<TInteractable>* get_Data() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TInteractable>"
constexpr ::System::Collections::Generic::IEnumerator_1<TInteractable>* i___System__Collections__Generic__IEnumerator_1_TInteractable_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InteractableSet_InteractableRegistry_2_Enumerator() ;

// Ctor Parameters [CppParam { name: "_set", ty: "::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_position", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InteractableSet_InteractableRegistry_2_Enumerator(::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>  _set, int32_t  _position) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15779};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _set, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>  _set;

/// @brief Field _position, offset: 0x18, size: 0x4, def value: None
 int32_t  _position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
