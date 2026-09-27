#pragma once
// IWYU pragma private; include "Unity/Collections/CollectionHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionHelper)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace GlobalNamespace {
struct CollectionHelper_DummyJob;
}
// Forward declare root types
namespace Unity::Collections {
class CollectionHelper;
}
// Write type traits
MARK_REF_T(::Unity::Collections::CollectionHelper*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::CollectionHelper*, "Unity.Collections", "CollectionHelper");
// [GenerateTestsForBurstCompatibility]
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.CollectionHelper
class CORDL_TYPE CollectionHelper : public ::System::Object {
public:
// Declarations
using DummyJob = ::GlobalNamespace::CollectionHelper_DummyJob;

/// @brief Method Align, addr 0xaf03bc4, size 0x1c, virtual false, abstract: false, final false
static inline int32_t Align(int32_t  size, int32_t  alignmentPowerOfTwo) ;

/// @brief Method AssumePositive, addr 0xaf03c40, size 0x4, virtual false, abstract: false, final false
static inline int32_t AssumePositive(int32_t  value) ;

/// @brief Method Hash, addr 0xaf03bf4, size 0x40, virtual false, abstract: false, final false
static inline uint32_t Hash(void*  ptr, int32_t  bytes) ;

/// @brief Method IsAligned, addr 0xaf03be0, size 0x14, virtual false, abstract: false, final false
static inline bool IsAligned(uint64_t  offset, int32_t  alignmentPowerOfTwo) ;

/// @brief Method Log2Floor, addr 0xaf03b8c, size 0x38, virtual false, abstract: false, final false
static inline int32_t Log2Floor(int32_t  value) ;

/// @brief Method ShouldDeallocate, addr 0xaf03c34, size 0xc, virtual false, abstract: false, final false
static inline bool ShouldDeallocate(::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollectionHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollectionHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionHelper(CollectionHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionHelper(CollectionHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30119};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::CollectionHelper) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections
