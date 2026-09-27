#pragma once
// IWYU pragma private; include "Oculus/Interaction/Collections/IEnumerableHashSet_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEnumerableHashSet_1)
namespace GlobalNamespace {
template<typename T>
struct HashSet_1_Enumerator;
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
class IEnumerableHashSet_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Collections::IEnumerableHashSet_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Collections::IEnumerableHashSet_1, "Oculus.Interaction.Collections", "IEnumerableHashSet`1");
// Dependencies 
namespace Oculus::Interaction::Collections {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Oculus.Interaction.Collections.IEnumerableHashSet`1<T>
class CORDL_TYPE IEnumerableHashSet_1 {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Contains(T  item) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::HashSet_1_Enumerator<T> GetEnumerator() ;

/// @brief Method IsProperSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IsProperSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IsSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IsSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method Overlaps, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Overlaps(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method SetEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Count() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IEnumerableHashSet_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEnumerableHashSet_1(IEnumerableHashSet_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16381};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Collections
