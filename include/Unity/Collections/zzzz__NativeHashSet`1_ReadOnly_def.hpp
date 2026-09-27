#pragma once
// IWYU pragma private; include "Unity/Collections/NativeHashSet`1_ReadOnly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NativeHashSet`1_ReadOnly)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace Unity::Collections::LowLevel::Unsafe {
template<typename TKey>
struct HashMapHelper_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeHashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NativeHashSet_1_ReadOnly;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeHashSet_1_ReadOnly);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeHashSet_1_ReadOnly, "Unity.Collections", "NativeHashSet`1/ReadOnly");
// [NativeContainer]
// [NativeContainerIsReadOnly]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeHashSet`1/ReadOnly<T>
struct CORDL_TYPE NativeHashSet_1_ReadOnly {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// [IsReadOnly]
/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  item) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Unity::Collections::NativeHashSet_1<T>>  data) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeHashSet_1_ReadOnly() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr NativeHashSet_1_ReadOnly(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<T>*  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30166};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<T>*  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
