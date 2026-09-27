#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREnumerable`1_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVREnumerable`1_Enumerator_CollectionType_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__Queue`1_Enumerator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVREnumerable`1_Enumerator)
namespace GlobalNamespace {
template<typename T>
struct Enumerator_OVREnumerable_1_CollectionType;
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
template<typename T>
struct OVREnumerable_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVREnumerable_1_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVREnumerable_1_Enumerator, "", "OVREnumerable`1/Enumerator");
// Dependencies OVREnumerable`1::Enumerator::CollectionType<T>, System.Collections.Generic.HashSet`1::Enumerator<T>, System.Collections.Generic.List`1::Enumerator<T>, System.Collections.Generic.Queue`1::Enumerator<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: OVREnumerable`1/Enumerator<T>
struct CORDL_TYPE OVREnumerable_1_Enumerator {
public:
// Declarations
using CollectionType = ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method MoveNextReadOnlyList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool MoveNextReadOnlyList() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method ValidateAndThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ValidateAndThrow() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  enumerable) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVREnumerable_1_Enumerator() ;

// Ctor Parameters [CppParam { name: "_listIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_type", ty: "::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_listCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_enumerator", ty: "::System::Collections::Generic::IEnumerator_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_readOnlyList", ty: "::System::Collections::Generic::IReadOnlyList_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_setEnumerator", ty: "::GlobalNamespace::HashSet_1_Enumerator<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_queueEnumerator", ty: "::GlobalNamespace::Queue_1_Enumerator<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_listEnumerator", ty: "::GlobalNamespace::List_1_Enumerator<T>", modifiers: "", def_value: None, comment: None }]
constexpr OVREnumerable_1_Enumerator(int32_t  _listIndex, ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>  _type, int32_t  _listCount, ::System::Collections::Generic::IEnumerator_1<T>*  _enumerator, ::System::Collections::Generic::IReadOnlyList_1<T>*  _readOnlyList, ::GlobalNamespace::HashSet_1_Enumerator<T>  _setEnumerator, ::GlobalNamespace::Queue_1_Enumerator<T>  _queueEnumerator, ::GlobalNamespace::List_1_Enumerator<T>  _listEnumerator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12637};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field _listIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  _listIndex;

/// @brief Field _type, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::Enumerator_OVREnumerable_1_CollectionType<T>  _type;

/// @brief Field _listCount, offset: 0x8, size: 0x4, def value: None
 int32_t  _listCount;

/// @brief Field _enumerator, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<T>*  _enumerator;

/// @brief Field _readOnlyList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<T>*  _readOnlyList;

/// @brief Field _setEnumerator, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::HashSet_1_Enumerator<T>  _setEnumerator;

/// @brief Field _queueEnumerator, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::Queue_1_Enumerator<T>  _queueEnumerator;

/// @brief Field _listEnumerator, offset: 0x50, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<T>  _listEnumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
