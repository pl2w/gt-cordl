#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BindingsAllocator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BindingsAllocator)
namespace GlobalNamespace {
struct BindingsAllocator_NativeOwnedMemory;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class BindingsAllocator;
}
// Write type traits
MARK_REF_T(::UnityEngine::Bindings::BindingsAllocator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Bindings::BindingsAllocator*, "UnityEngine.Bindings", "BindingsAllocator");
// [StaticAccessor("Marshalling::BindingsAllocator", (UnityEngine.Bindings.StaticAccessorType)2)]
// [VisibleToOtherModules]
// [NativeHeader("Runtime/Scripting/Marshalling/BindingsAllocator.h")]
// Dependencies System.Object
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.BindingsAllocator
class CORDL_TYPE BindingsAllocator : public ::System::Object {
public:
// Declarations
using NativeOwnedMemory = ::GlobalNamespace::BindingsAllocator_NativeOwnedMemory;

/// [ThreadSafe]
/// @brief Method Free, addr 0xb5fb6f8, size 0x3c, virtual false, abstract: false, final false
static inline void Free(void*  ptr) ;

/// [ThreadSafe]
/// @brief Method FreeNativeOwnedMemory, addr 0xb5fb734, size 0x3c, virtual false, abstract: false, final false
static inline void FreeNativeOwnedMemory(void*  ptr) ;

/// @brief Method GetNativeOwnedDataPointer, addr 0xb5fb770, size 0x14, virtual false, abstract: false, final false
static inline void* GetNativeOwnedDataPointer(void*  ptr) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BindingsAllocator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BindingsAllocator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BindingsAllocator(BindingsAllocator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindingsAllocator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindingsAllocator(BindingsAllocator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15206};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Bindings::BindingsAllocator) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Bindings
