#pragma once
// IWYU pragma private; include "System/Data/RBTree`1_RBTreeEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RBTree`1_RBTreeEnumerator)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Data {
template<typename K>
class RBTree_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename K>
struct RBTree_1_RBTreeEnumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RBTree_1_RBTreeEnumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RBTree_1_RBTreeEnumerator, "System.Data", "RBTree`1/RBTreeEnumerator");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename K>
// Is value type: true
// CS Name: System.Data.RBTree`1/RBTreeEnumerator<K>
struct CORDL_TYPE RBTree_1_RBTreeEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) K  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<K>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<K>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Data::RBTree_1<K>*  tree) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Data::RBTree_1<K>*  tree, int32_t  position) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline K get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<K>"
constexpr ::System::Collections::Generic::IEnumerator_1<K>* i___System__Collections__Generic__IEnumerator_1_K_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr RBTree_1_RBTreeEnumerator() ;

// Ctor Parameters [CppParam { name: "_tree", ty: "::System::Data::RBTree_1<K>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_mainTreeNodeId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_current", ty: "K", modifiers: "", def_value: None, comment: None }]
constexpr RBTree_1_RBTreeEnumerator(::System::Data::RBTree_1<K>*  _tree, int32_t  _version, int32_t  _index, int32_t  _mainTreeNodeId, K  _current) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21046};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _tree, offset: 0x0, size: 0x8, def value: None
 ::System::Data::RBTree_1<K>*  _tree;

/// @brief Field _version, offset: 0x8, size: 0x4, def value: None
 int32_t  _version;

/// @brief Field _index, offset: 0xc, size: 0x4, def value: None
 int32_t  _index;

/// @brief Field _mainTreeNodeId, offset: 0x10, size: 0x4, def value: None
 int32_t  _mainTreeNodeId;

/// @brief Field _current, offset: 0x18, size: 0x8, def value: None
 K  _current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
