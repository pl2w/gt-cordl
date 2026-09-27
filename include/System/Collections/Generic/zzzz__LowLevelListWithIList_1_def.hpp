#pragma once
// IWYU pragma private; include "System/Collections/Generic/LowLevelListWithIList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__LowLevelList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LowLevelListWithIList_1)
namespace GlobalNamespace {
template<typename T>
struct LowLevelListWithIList_1_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
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
class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class LowLevelListWithIList_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Collections::Generic::LowLevelListWithIList_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Collections::Generic::LowLevelListWithIList_1, "System.Collections.Generic", "LowLevelListWithIList`1");
// Dependencies System.Collections.Generic.LowLevelList`1<T>
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Collections.Generic.LowLevelListWithIList`1<T>
class CORDL_TYPE LowLevelListWithIList_1 : public ::System::Collections::Generic::LowLevelList_1<T> {
public:
// Declarations
using Enumerator = ::GlobalNamespace::LowLevelListWithIList_1_Enumerator<T>;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
constexpr operator  ::System::Collections::Generic::IList_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

static inline ::System::Collections::Generic::LowLevelListWithIList_1<T>* New_ctor() ;

static inline ::System::Collections::Generic::LowLevelListWithIList_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
constexpr ::System::Collections::Generic::IList_1<T>* i___System__Collections__Generic__IList_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LowLevelListWithIList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LowLevelListWithIList_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LowLevelListWithIList_1(LowLevelListWithIList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelListWithIList_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LowLevelListWithIList_1(LowLevelListWithIList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6926};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
