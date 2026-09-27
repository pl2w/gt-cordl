#pragma once
// IWYU pragma private; include "Voxels/ChunkTaskSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Voxels/zzzz__ChunkTask_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ChunkTaskSet)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Voxels {
class ChunkTaskSet_ChunkTaskDelegate;
}
namespace Voxels {
struct ChunkTask;
}
namespace Voxels {
class Chunk;
}
namespace Voxels {
class VoxelGenerator;
}
// Forward declare root types
namespace Voxels {
class ChunkTaskSet;
}
namespace Voxels {
class ChunkTaskSet_ChunkTaskDelegate;
}
// Write type traits
MARK_REF_T(::Voxels::ChunkTaskSet*);
MARK_REF_T(::Voxels::ChunkTaskSet_ChunkTaskDelegate*);
DEFINE_IL2CPP_CLASS(::Voxels::ChunkTaskSet*, "Voxels", "ChunkTaskSet");
DEFINE_IL2CPP_CLASS(::Voxels::ChunkTaskSet_ChunkTaskDelegate*, "Voxels", "ChunkTaskSet/ChunkTaskDelegate");
// Dependencies System.Object, Voxels.ChunkTask
namespace Voxels {
// Is value type: false
// CS Name: Voxels.ChunkTaskSet
class CORDL_TYPE ChunkTaskSet : public ::System::Object {
public:
// Declarations
using ChunkTaskDelegate = ::Voxels::ChunkTaskSet_ChunkTaskDelegate;

/// @brief Field Callback, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Callback, put=__cordl_internal_set_Callback)) ::System::Action_1<::Voxels::Chunk*>*  Callback;

 __declspec(property(get=get_Chunk)) ::Voxels::Chunk*  Chunk;

/// @brief Field Chunks, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Chunks, put=__cordl_internal_set_Chunks)) ::System::Collections::Generic::List_1<::Voxels::Chunk*>*  Chunks;

/// @brief Field Current, offset 0x28, size 0x20 
 __declspec(property(get=__cordl_internal_get_Current, put=__cordl_internal_set_Current)) ::Voxels::ChunkTask  Current;

/// @brief Field Generator, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Generator, put=__cordl_internal_set_Generator)) ::Voxels::VoxelGenerator*  Generator;

 __declspec(property(get=get_HasChunks)) bool  HasChunks;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

/// @brief Field Tasks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tasks, put=__cordl_internal_set_Tasks)) ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>*  Tasks;

/// @brief Method AddTask, addr 0x5dae05c, size 0xa0, virtual false, abstract: false, final false
inline void AddTask(::Voxels::ChunkTaskSet_ChunkTaskDelegate*  task, ::System::Action_1<::Voxels::Chunk*>*  callback) ;

/// @brief Method Complete, addr 0x5dae4c0, size 0x2c, virtual false, abstract: false, final false
inline void Complete() ;

/// @brief Method CompleteCurrent, addr 0x5dae4ec, size 0x164, virtual false, abstract: false, final false
inline void CompleteCurrent() ;

/// @brief Method CompleteCurrentIfReady, addr 0x5dae6d8, size 0x38, virtual false, abstract: false, final false
inline bool CompleteCurrentIfReady() ;

/// @brief Method CompleteIfReady, addr 0x5dae650, size 0x88, virtual false, abstract: false, final false
inline bool CompleteIfReady() ;

/// @brief Method CreateTask, addr 0x5dae710, size 0x34, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::Voxels::ChunkTask,::System::Action_1<::Voxels::Chunk*>*> CreateTask(/* [TupleElementNames(new[] { "task", "callback" })] */ ::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>  task) ;

/// @brief Method CreateTask, addr 0x5dae744, size 0x24c, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::Voxels::ChunkTask,::System::Action_1<::Voxels::Chunk*>*> CreateTask(::Voxels::ChunkTaskSet_ChunkTaskDelegate*  task, ::System::Action_1<::Voxels::Chunk*>*  callback) ;

static inline ::Voxels::ChunkTaskSet* New_ctor(::Voxels::Chunk*  chunk, ::Voxels::VoxelGenerator*  parameters, /* [ParamArray] [TupleElementNames(new[] { "task", "callback" })] */ ::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>  tasks) ;

static inline ::Voxels::ChunkTaskSet* New_ctor(::System::Collections::Generic::IList_1<::Voxels::Chunk*>*  chunks, ::Voxels::VoxelGenerator*  parameters, /* [ParamArray] [TupleElementNames(new[] { "task", "callback" })] */ ::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>  tasks) ;

static inline ::Voxels::ChunkTaskSet* New_ctor(::Voxels::VoxelGenerator*  generator) ;

/// @brief Method Start, addr 0x5dae0fc, size 0x7c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartNext, addr 0x5dae178, size 0xfc, virtual false, abstract: false, final false
inline bool StartNext() ;

/// @brief Method UpdateDirty, addr 0x5dae274, size 0x24c, virtual false, abstract: false, final false
inline void UpdateDirty() ;

constexpr ::System::Action_1<::Voxels::Chunk*>* const& __cordl_internal_get_Callback() const;

constexpr ::System::Action_1<::Voxels::Chunk*>*& __cordl_internal_get_Callback() ;

constexpr ::System::Collections::Generic::List_1<::Voxels::Chunk*>* const& __cordl_internal_get_Chunks() const;

constexpr ::System::Collections::Generic::List_1<::Voxels::Chunk*>*& __cordl_internal_get_Chunks() ;

constexpr ::Voxels::ChunkTask const& __cordl_internal_get_Current() const;

constexpr ::Voxels::ChunkTask& __cordl_internal_get_Current() ;

constexpr ::Voxels::VoxelGenerator* const& __cordl_internal_get_Generator() const;

constexpr ::Voxels::VoxelGenerator*& __cordl_internal_get_Generator() ;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>* const& __cordl_internal_get_Tasks() const;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>*& __cordl_internal_get_Tasks() ;

constexpr void __cordl_internal_set_Callback(::System::Action_1<::Voxels::Chunk*>*  value) ;

constexpr void __cordl_internal_set_Chunks(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  value) ;

constexpr void __cordl_internal_set_Current(::Voxels::ChunkTask  value) ;

constexpr void __cordl_internal_set_Generator(::Voxels::VoxelGenerator*  value) ;

constexpr void __cordl_internal_set_Tasks(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>*  value) ;

/// @brief Method .ctor, addr 0x5dadde0, size 0x174, virtual false, abstract: false, final false
inline void _ctor(::Voxels::Chunk*  chunk, ::Voxels::VoxelGenerator*  parameters, /* [ParamArray] [TupleElementNames(new[] { "task", "callback" })] */ ::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>  tasks) ;

/// @brief Method .ctor, addr 0x5dadf54, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IList_1<::Voxels::Chunk*>*  chunks, ::Voxels::VoxelGenerator*  parameters, /* [ParamArray] [TupleElementNames(new[] { "task", "callback" })] */ ::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>  tasks) ;

/// @brief Method .ctor, addr 0x5dadcf0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Voxels::VoxelGenerator*  generator) ;

/// @brief Method get_Chunk, addr 0x5dadadc, size 0x54, virtual false, abstract: false, final false
inline ::Voxels::Chunk* get_Chunk() ;

/// @brief Method get_HasChunks, addr 0x5dadb30, size 0x150, virtual false, abstract: false, final false
inline bool get_HasChunks() ;

/// @brief Method get_IsEmpty, addr 0x5dadc80, size 0x70, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunkTaskSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunkTaskSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunkTaskSet(ChunkTaskSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunkTaskSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunkTaskSet(ChunkTaskSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5007};

/// @brief Field Chunks, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Voxels::Chunk*>*  ___Chunks;

/// @brief Field Generator, offset: 0x18, size: 0x8, def value: None
 ::Voxels::VoxelGenerator*  ___Generator;

/// [TupleElementNames(new[] { "task", "callback" })]
/// @brief Field Tasks, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>*  ___Tasks;

/// @brief Field Current, offset: 0x28, size: 0x20, def value: None
 ::Voxels::ChunkTask  ___Current;

/// @brief Field Callback, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::Voxels::Chunk*>*  ___Callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::ChunkTaskSet, ___Chunks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkTaskSet, ___Generator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkTaskSet, ___Tasks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkTaskSet, ___Current) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkTaskSet, ___Callback) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Voxels::ChunkTaskSet) == 0x50, "Size mismatch!");

} // namespace end def Voxels
// Dependencies System.MulticastDelegate
namespace Voxels {
// Is value type: false
// CS Name: Voxels.ChunkTaskSet/ChunkTaskDelegate
class CORDL_TYPE ChunkTaskSet_ChunkTaskDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5daeaac, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Voxels::Chunk*  chunk, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5daeacc, size 0x30, virtual true, abstract: false, final false
inline ::Voxels::ChunkTask EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5daea98, size 0x14, virtual true, abstract: false, final false
inline ::Voxels::ChunkTask Invoke(::Voxels::Chunk*  chunk) ;

static inline ::Voxels::ChunkTaskSet_ChunkTaskDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5dae990, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunkTaskSet_ChunkTaskDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunkTaskSet_ChunkTaskDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunkTaskSet_ChunkTaskDelegate(ChunkTaskSet_ChunkTaskDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunkTaskSet_ChunkTaskDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunkTaskSet_ChunkTaskDelegate(ChunkTaskSet_ChunkTaskDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5006};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::ChunkTaskSet_ChunkTaskDelegate) == 0x80, "Size mismatch!");

} // namespace end def Voxels
