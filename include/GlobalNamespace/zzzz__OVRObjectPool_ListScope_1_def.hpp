#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRObjectPool_ListScope_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRObjectPool_ListScope_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct OVRObjectPool_ListScope_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_ListScope_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRObjectPool_ListScope_1, "", "OVRObjectPool/ListScope`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: OVRObjectPool/ListScope`1<T>
struct CORDL_TYPE OVRObjectPool_ListScope_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::System::Collections::Generic::List_1<T>*>  list) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  source, ::by_ref<::System::Collections::Generic::List_1<T>*>  list) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRObjectPool_ListScope_1() ;

// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRObjectPool_ListScope_1(::System::Collections::Generic::List_1<T>*  _list) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12684};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _list, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  _list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
