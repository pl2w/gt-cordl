#pragma once
// IWYU pragma private; include "Cysharp/Text/ReadOnlyListAdaptor_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyListAdaptor_1)
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
// Forward declare root types
namespace Cysharp::Text {
template<typename T>
struct ReadOnlyListAdaptor_1;
}
// Write type traits
MARK_GEN_VAL_T(::Cysharp::Text::ReadOnlyListAdaptor_1);
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Text::ReadOnlyListAdaptor_1, "Cysharp.Text", "ReadOnlyListAdaptor`1");
// [NullableContext(1)]
// [Nullable(0)]
// [IsReadOnly]
// [DefaultMember("Item")]
// Dependencies 
namespace Cysharp::Text {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Text.ReadOnlyListAdaptor`1<T>
struct CORDL_TYPE ReadOnlyListAdaptor_1 {
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
inline void _ctor(::System::Collections::Generic::IList_1<T>*  list) ;

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
constexpr ReadOnlyListAdaptor_1() ;

// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::IList_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr ReadOnlyListAdaptor_1(::System::Collections::Generic::IList_1<T>*  _list) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26383};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _list, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<T>*  _list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Text
