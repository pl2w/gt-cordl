#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRObjectPool_StackScope_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRObjectPool_StackScope_1)
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct OVRObjectPool_StackScope_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_StackScope_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRObjectPool_StackScope_1, "", "OVRObjectPool/StackScope`1");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: OVRObjectPool/StackScope`1<T>
struct CORDL_TYPE OVRObjectPool_StackScope_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::System::Collections::Generic::Stack_1<T>*>  stack) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRObjectPool_StackScope_1() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRObjectPool_StackScope_1(::System::Collections::Generic::Stack_1<T>*  _stack) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12688};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _stack, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<T>*  _stack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
