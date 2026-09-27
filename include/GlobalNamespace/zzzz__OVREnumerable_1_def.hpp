#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREnumerable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVREnumerable_1)
namespace GlobalNamespace {
template<typename T>
struct OVREnumerable_1_Enumerator;
}
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
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct OVREnumerable_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVREnumerable_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVREnumerable_1, "", "OVREnumerable`1");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: OVREnumerable`1<T>
struct CORDL_TYPE OVREnumerable_1 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::OVREnumerable_1_Enumerator<T>;

 __declspec(property(get=get_Count)) ::System::Nullable_1<int32_t>  Count;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// [Obsolete("This method may enumerate the collection. Consider Count or TryGetCount instead.")]
/// @brief Method GetCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetCount() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVREnumerable_1_Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryGetCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetCount(::by_ref<int32_t>  count) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  enumerable) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_Count() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVREnumerable_1() ;

// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr OVREnumerable_1(::System::Collections::Generic::IEnumerable_1<T>*  _enumerable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12638};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _enumerable, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<T>*  _enumerable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
