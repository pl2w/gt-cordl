#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstLike.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BurstLike)
namespace GlobalNamespace {
template<typename T>
struct BurstLike_SharedStatic_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
class BurstLike_SharedStatic;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class BurstLike;
}
namespace Unity::Collections::LowLevel::Unsafe {
class BurstLike_SharedStatic;
}
// Write type traits
MARK_REF_T(::Unity::Collections::LowLevel::Unsafe::BurstLike*);
MARK_REF_T(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::BurstLike*, "Unity.Collections.LowLevel.Unsafe", "BurstLike");
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic*, "Unity.Collections.LowLevel.Unsafe", "BurstLike/SharedStatic");
// [NativeHeader("Runtime/Export/BurstLike/BurstLike.bindings.h")]
// [VisibleToOtherModules(new[] { "UnityEngine.ParticleSystemModule" })]
// [StaticAccessor("BurstLike", (UnityEngine.Bindings.StaticAccessorType)2)]
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.BurstLike
class CORDL_TYPE BurstLike : public ::System::Object {
public:
// Declarations
template<typename T>
using SharedStatic_1 = ::GlobalNamespace::BurstLike_SharedStatic_1<T>;

using SharedStatic = ::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLike() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLike", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLike(BurstLike && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLike", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLike(BurstLike const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14736};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::BurstLike) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.BurstLike/SharedStatic
class CORDL_TYPE BurstLike_SharedStatic : public ::System::Object {
public:
// Declarations
/// @brief Method GetOrCreateSharedStaticInternal, addr 0xb55f878, size 0x74, virtual false, abstract: false, final false
static inline void* GetOrCreateSharedStaticInternal(int64_t  getHashCode64, int64_t  getSubHashCode64, uint32_t  sizeOf, uint32_t  alignment) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstLike_SharedStatic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstLike_SharedStatic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstLike_SharedStatic(BurstLike_SharedStatic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstLike_SharedStatic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstLike_SharedStatic(BurstLike_SharedStatic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14735};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::BurstLike_SharedStatic) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe
