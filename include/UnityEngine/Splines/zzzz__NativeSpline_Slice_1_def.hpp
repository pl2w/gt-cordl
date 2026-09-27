#pragma once
// IWYU pragma private; include "UnityEngine/Splines/NativeSpline_Slice_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeSpline_Slice_1)
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
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NativeSpline_Slice_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeSpline_Slice_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeSpline_Slice_1, "UnityEngine.Splines", "NativeSpline/Slice`1");
// [DefaultMember("Item")]
// Dependencies Unity.Collections.NativeSlice`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Splines.NativeSpline/Slice`1<T>
struct CORDL_TYPE NativeSpline_Slice_1 {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) T  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::NativeArray_1<T>  array, int32_t  start, int32_t  count) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() ;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* i___System__Collections__Generic__IReadOnlyList_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeSpline_Slice_1() ;

// Ctor Parameters [CppParam { name: "m_Slice", ty: "::Unity::Collections::NativeSlice_1<T>", modifiers: "", def_value: None, comment: None }]
constexpr NativeSpline_Slice_1(::Unity::Collections::NativeSlice_1<T>  m_Slice) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27937};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Slice, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<T>  m_Slice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
