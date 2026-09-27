#pragma once
// IWYU pragma private; include "Oculus/Interaction/Collections/EnumerableHashSet_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
CORDL_MODULE_EXPORT(EnumerableHashSet_1)
namespace GlobalNamespace {
template<typename T>
struct HashSet_1_Enumerator;
}
namespace Oculus::Interaction::Collections {
template<typename T>
class IEnumerableHashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Oculus::Interaction::Collections {
template<typename T>
class EnumerableHashSet_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Collections::EnumerableHashSet_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Collections::EnumerableHashSet_1, "Oculus.Interaction.Collections", "EnumerableHashSet`1");
// Dependencies System.Collections.Generic.HashSet`1<T>
namespace Oculus::Interaction::Collections {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Oculus.Interaction.Collections.EnumerableHashSet`1<T>
class CORDL_TYPE EnumerableHashSet_1 : public ::System::Collections::Generic::HashSet_1<T> {
public:
// Declarations
/// @brief Convert operator to "::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>"
constexpr operator  ::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

static inline ::Oculus::Interaction::Collections::EnumerableHashSet_1<T>* New_ctor() ;

static inline ::Oculus::Interaction::Collections::EnumerableHashSet_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method Oculus.Interaction.Collections.IEnumerableHashSet<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::GlobalNamespace::HashSet_1_Enumerator<T> Oculus_Interaction_Collections_IEnumerableHashSet_T__GetEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Convert to "::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>"
constexpr ::Oculus::Interaction::Collections::IEnumerableHashSet_1<T>* i___Oculus__Interaction__Collections__IEnumerableHashSet_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumerableHashSet_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumerableHashSet_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableHashSet_1(EnumerableHashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableHashSet_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableHashSet_1(EnumerableHashSet_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Collections
