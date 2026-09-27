#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapDebuggerTypeProxy_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnsafeParallelHashMapDebuggerTypeProxy_2)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
template<typename TKey,typename TValue>
class UnsafeParallelHashMapDebuggerTypeProxy_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDebuggerTypeProxy_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDebuggerTypeProxy_2, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashMapDebuggerTypeProxy`2");
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDebuggerTypeProxy`2<TKey,TValue>
class CORDL_TYPE UnsafeParallelHashMapDebuggerTypeProxy_2 : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeParallelHashMapDebuggerTypeProxy_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeParallelHashMapDebuggerTypeProxy_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeParallelHashMapDebuggerTypeProxy_2(UnsafeParallelHashMapDebuggerTypeProxy_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeParallelHashMapDebuggerTypeProxy_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeParallelHashMapDebuggerTypeProxy_2(UnsafeParallelHashMapDebuggerTypeProxy_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30242};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
