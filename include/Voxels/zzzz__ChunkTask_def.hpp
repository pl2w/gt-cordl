#pragma once
// IWYU pragma private; include "Voxels/ChunkTask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ChunkTask)
namespace System {
class Action;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Voxels {
class ChunkTask___c__DisplayClass10_0;
}
namespace Voxels {
class Chunk;
}
// Forward declare root types
namespace Voxels {
class ChunkTask___c__DisplayClass10_0;
}
namespace Voxels {
struct ChunkTask;
}
// Write type traits
MARK_REF_T(::Voxels::ChunkTask___c__DisplayClass10_0*);
MARK_VAL_T(::Voxels::ChunkTask);
DEFINE_IL2CPP_CLASS(::Voxels::ChunkTask___c__DisplayClass10_0*, "Voxels", "ChunkTask/<>c__DisplayClass10_0");
DEFINE_IL2CPP_CLASS(::Voxels::ChunkTask, "Voxels", "ChunkTask");
// Dependencies Unity.Jobs.JobHandle
namespace Voxels {
// Is value type: true
// CS Name: Voxels.ChunkTask
struct CORDL_TYPE ChunkTask {
public:
// Declarations
using __c__DisplayClass10_0 = ::Voxels::ChunkTask___c__DisplayClass10_0;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Method Complete, addr 0x5daeb68, size 0x40, virtual false, abstract: false, final false
inline void Complete() ;

/// @brief Method CompleteIfReady, addr 0x5daeb30, size 0x38, virtual false, abstract: false, final false
inline bool CompleteIfReady() ;

/// @brief Method CreateCollisionJob, addr 0x5daebec, size 0x1b4, virtual false, abstract: false, final false
static inline ::Voxels::ChunkTask CreateCollisionJob(::Voxels::Chunk*  chunk) ;

/// @brief Method .ctor, addr 0x5daeba8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Voxels::Chunk*  chunk, ::Unity::Jobs::JobHandle  handle, ::System::Action*  onComplete) ;

/// @brief Method get_IsCompleted, addr 0x5daeb24, size 0xc, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Method get_IsCreated, addr 0x5daeafc, size 0x28, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

// Ctor Parameters []
// @brief default ctor
constexpr ChunkTask() ;

// Ctor Parameters [CppParam { name: "Chunk", ty: "::Voxels::Chunk*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Handle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "_onJobComplete", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }]
constexpr ChunkTask(::Voxels::Chunk*  Chunk, ::Unity::Jobs::JobHandle  Handle, ::System::Action*  _onJobComplete) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5009};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Chunk, offset: 0x0, size: 0x8, def value: None
 ::Voxels::Chunk*  Chunk;

/// @brief Field Handle, offset: 0x8, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  Handle;

/// @brief Field _onJobComplete, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  _onJobComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::ChunkTask, Chunk) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkTask, Handle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkTask, _onJobComplete) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Voxels::ChunkTask) == 0x20, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.ChunkTask/<>c__DisplayClass10_0
class CORDL_TYPE ChunkTask___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field chunk, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunk, put=__cordl_internal_set_chunk)) ::Voxels::Chunk*  chunk;

static inline ::Voxels::ChunkTask___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <CreateCollisionJob>b__0, addr 0x5daeda8, size 0x20, virtual false, abstract: false, final false
inline void _CreateCollisionJob_b__0() ;

constexpr ::Voxels::Chunk* const& __cordl_internal_get_chunk() const;

constexpr ::Voxels::Chunk*& __cordl_internal_get_chunk() ;

constexpr void __cordl_internal_set_chunk(::Voxels::Chunk*  value) ;

/// @brief Method .ctor, addr 0x5daeda0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunkTask___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunkTask___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunkTask___c__DisplayClass10_0(ChunkTask___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunkTask___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunkTask___c__DisplayClass10_0(ChunkTask___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5008};

/// @brief Field chunk, offset: 0x10, size: 0x8, def value: None
 ::Voxels::Chunk*  ___chunk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::ChunkTask___c__DisplayClass10_0, ___chunk) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Voxels::ChunkTask___c__DisplayClass10_0) == 0x18, "Size mismatch!");

} // namespace end def Voxels
