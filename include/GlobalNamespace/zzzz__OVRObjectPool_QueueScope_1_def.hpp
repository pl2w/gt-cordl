#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRObjectPool_QueueScope_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRObjectPool_QueueScope_1)
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct OVRObjectPool_QueueScope_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_QueueScope_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRObjectPool_QueueScope_1, "", "OVRObjectPool/QueueScope`1");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: OVRObjectPool/QueueScope`1<T>
struct CORDL_TYPE OVRObjectPool_QueueScope_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::System::Collections::Generic::Queue_1<T>*>  queue) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRObjectPool_QueueScope_1() ;

// Ctor Parameters [CppParam { name: "_queue", ty: "::System::Collections::Generic::Queue_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRObjectPool_QueueScope_1(::System::Collections::Generic::Queue_1<T>*  _queue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12689};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _queue, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<T>*  _queue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
