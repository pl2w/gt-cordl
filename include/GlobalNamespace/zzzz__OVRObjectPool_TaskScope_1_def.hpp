#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRObjectPool_TaskScope_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRObjectPool_TaskScope_1)
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
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
struct OVRObjectPool_TaskScope_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_TaskScope_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRObjectPool_TaskScope_1, "", "OVRObjectPool/TaskScope`1");
// Dependencies OVRObjectPool::ListScope`1<T>, OVRTask`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: OVRObjectPool/TaskScope`1<T>
struct CORDL_TYPE OVRObjectPool_TaskScope_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<T>>*>  tasks, ::by_ref<::System::Collections::Generic::List_1<T>*>  results) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRObjectPool_TaskScope_1() ;

// Ctor Parameters [CppParam { name: "_tasks", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<T>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_results", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<T>", modifiers: "", def_value: None, comment: None }]
constexpr OVRObjectPool_TaskScope_1(::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<T>>  _tasks, ::GlobalNamespace::OVRObjectPool_ListScope_1<T>  _results) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12685};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _tasks, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<T>>  _tasks;

/// @brief Field _results, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<T>  _results;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
