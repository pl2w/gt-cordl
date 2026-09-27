#pragma once
// IWYU pragma private; include "Voxels/ChunkTaskSet.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Voxels/zzzz__ChunkTask_impl.hpp"
#include "Voxels/zzzz__ChunkTaskSet_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Voxels/zzzz__ChunkTaskSet_def.hpp"
#include "Voxels/zzzz__ChunkTask_def.hpp"
#include "Voxels/zzzz__Chunk_def.hpp"
#include "Voxels/zzzz__VoxelGenerator_def.hpp"
//  Writing Method size for method: ::Voxels::ChunkTaskSet.get_Chunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::Chunk* (::Voxels::ChunkTaskSet::*)()>(&::Voxels::ChunkTaskSet::get_Chunk)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5dadadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"get_Chunk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.get_HasChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::ChunkTaskSet::*)()>(&::Voxels::ChunkTaskSet::get_HasChunks)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5dadb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"get_HasChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::ChunkTaskSet::*)()>(&::Voxels::ChunkTaskSet::get_IsEmpty)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5dadc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTaskSet::*)(::Voxels::VoxelGenerator*)>(&::Voxels::ChunkTaskSet::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5dadcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::VoxelGenerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTaskSet::*)(::Voxels::Chunk*, ::Voxels::VoxelGenerator*, ::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>)>(&::Voxels::ChunkTaskSet::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5dadde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::Voxels::VoxelGenerator*>(), ::i2c::type_of<::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTaskSet::*)(::System::Collections::Generic::IList_1<::Voxels::Chunk*>*, ::Voxels::VoxelGenerator*, ::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>)>(&::Voxels::ChunkTaskSet::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5dadf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Voxels::Chunk*>*>(), ::i2c::type_of<::Voxels::VoxelGenerator*>(), ::i2c::type_of<::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.AddTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTaskSet::*)(::Voxels::ChunkTaskSet_ChunkTaskDelegate*, ::System::Action_1<::Voxels::Chunk*>*)>(&::Voxels::ChunkTaskSet::AddTask)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5dae05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"AddTask", {}, {::i2c::type_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(), ::i2c::type_of<::System::Action_1<::Voxels::Chunk*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTaskSet::*)()>(&::Voxels::ChunkTaskSet::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5dae0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTaskSet::*)()>(&::Voxels::ChunkTaskSet::Complete)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5dae4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"Complete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.CompleteIfReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::ChunkTaskSet::*)()>(&::Voxels::ChunkTaskSet::CompleteIfReady)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5dae650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"CompleteIfReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.CompleteCurrentIfReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::ChunkTaskSet::*)()>(&::Voxels::ChunkTaskSet::CompleteCurrentIfReady)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5dae6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"CompleteCurrentIfReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.CompleteCurrent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTaskSet::*)()>(&::Voxels::ChunkTaskSet::CompleteCurrent)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5dae4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"CompleteCurrent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.StartNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::ChunkTaskSet::*)()>(&::Voxels::ChunkTaskSet::StartNext)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5dae178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"StartNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.UpdateDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTaskSet::*)()>(&::Voxels::ChunkTaskSet::UpdateDirty)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5dae274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"UpdateDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.CreateTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Voxels::ChunkTask,::System::Action_1<::Voxels::Chunk*>*> (::Voxels::ChunkTaskSet::*)(::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>)>(&::Voxels::ChunkTaskSet::CreateTask)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5dae710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"CreateTask", {}, {::i2c::type_of<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet.CreateTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Voxels::ChunkTask,::System::Action_1<::Voxels::Chunk*>*> (::Voxels::ChunkTaskSet::*)(::Voxels::ChunkTaskSet_ChunkTaskDelegate*, ::System::Action_1<::Voxels::Chunk*>*)>(&::Voxels::ChunkTaskSet::CreateTask)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5dae744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"CreateTask", {}, {::i2c::type_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(), ::i2c::type_of<::System::Action_1<::Voxels::Chunk*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Voxels::Chunk*>*& Voxels::ChunkTaskSet::__cordl_internal_get_Chunks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Chunks;
}
constexpr ::System::Collections::Generic::List_1<::Voxels::Chunk*>* const& Voxels::ChunkTaskSet::__cordl_internal_get_Chunks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Chunks;
}
constexpr void Voxels::ChunkTaskSet::__cordl_internal_set_Chunks(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Chunks = value;
}
constexpr ::Voxels::VoxelGenerator*& Voxels::ChunkTaskSet::__cordl_internal_get_Generator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Generator;
}
constexpr ::Voxels::VoxelGenerator* const& Voxels::ChunkTaskSet::__cordl_internal_get_Generator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Generator;
}
constexpr void Voxels::ChunkTaskSet::__cordl_internal_set_Generator(::Voxels::VoxelGenerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Generator = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>*& Voxels::ChunkTaskSet::__cordl_internal_get_Tasks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tasks;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>* const& Voxels::ChunkTaskSet::__cordl_internal_get_Tasks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tasks;
}
constexpr void Voxels::ChunkTaskSet::__cordl_internal_set_Tasks(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tasks = value;
}
constexpr ::Voxels::ChunkTask& Voxels::ChunkTaskSet::__cordl_internal_get_Current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Current;
}
constexpr ::Voxels::ChunkTask const& Voxels::ChunkTaskSet::__cordl_internal_get_Current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Current;
}
constexpr void Voxels::ChunkTaskSet::__cordl_internal_set_Current(::Voxels::ChunkTask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Current = value;
}
constexpr ::System::Action_1<::Voxels::Chunk*>*& Voxels::ChunkTaskSet::__cordl_internal_get_Callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callback;
}
constexpr ::System::Action_1<::Voxels::Chunk*>* const& Voxels::ChunkTaskSet::__cordl_internal_get_Callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callback;
}
constexpr void Voxels::ChunkTaskSet::__cordl_internal_set_Callback(::System::Action_1<::Voxels::Chunk*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Callback = value;
}
inline ::Voxels::Chunk* Voxels::ChunkTaskSet::get_Chunk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"get_Chunk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::Chunk*>(this, ___internal_method);
}
inline bool Voxels::ChunkTaskSet::get_HasChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"get_HasChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Voxels::ChunkTaskSet::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Voxels::ChunkTaskSet::_ctor(::Voxels::VoxelGenerator*  generator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::VoxelGenerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, generator);
}
inline void Voxels::ChunkTaskSet::_ctor(::Voxels::Chunk*  chunk, ::Voxels::VoxelGenerator*  parameters, /* [ParamArray] [TupleElementNames(new[] { "task", "callback" })] */ ::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>  tasks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::Voxels::VoxelGenerator*>(), ::i2c::type_of<::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk, parameters, tasks);
}
inline void Voxels::ChunkTaskSet::_ctor(::System::Collections::Generic::IList_1<::Voxels::Chunk*>*  chunks, ::Voxels::VoxelGenerator*  parameters, /* [ParamArray] [TupleElementNames(new[] { "task", "callback" })] */ ::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>  tasks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Voxels::Chunk*>*>(), ::i2c::type_of<::Voxels::VoxelGenerator*>(), ::i2c::type_of<::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunks, parameters, tasks);
}
inline void Voxels::ChunkTaskSet::AddTask(::Voxels::ChunkTaskSet_ChunkTaskDelegate*  task, ::System::Action_1<::Voxels::Chunk*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"AddTask", {}, {::i2c::type_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(), ::i2c::type_of<::System::Action_1<::Voxels::Chunk*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task, callback);
}
inline void Voxels::ChunkTaskSet::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::ChunkTaskSet::Complete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"Complete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Voxels::ChunkTaskSet::CompleteIfReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"CompleteIfReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Voxels::ChunkTaskSet::CompleteCurrentIfReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"CompleteCurrentIfReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Voxels::ChunkTaskSet::CompleteCurrent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"CompleteCurrent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Voxels::ChunkTaskSet::StartNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"StartNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Voxels::ChunkTaskSet::UpdateDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"UpdateDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::Voxels::ChunkTask,::System::Action_1<::Voxels::Chunk*>*> Voxels::ChunkTaskSet::CreateTask(/* [TupleElementNames(new[] { "task", "callback" })] */ ::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"CreateTask", {}, {::i2c::type_of<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Voxels::ChunkTask,::System::Action_1<::Voxels::Chunk*>*>>(this, ___internal_method, task);
}
inline ::System::ValueTuple_2<::Voxels::ChunkTask,::System::Action_1<::Voxels::Chunk*>*> Voxels::ChunkTaskSet::CreateTask(::Voxels::ChunkTaskSet_ChunkTaskDelegate*  task, ::System::Action_1<::Voxels::Chunk*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet*>(),
                        {"CreateTask", {}, {::i2c::type_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(), ::i2c::type_of<::System::Action_1<::Voxels::Chunk*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Voxels::ChunkTask,::System::Action_1<::Voxels::Chunk*>*>>(this, ___internal_method, task, callback);
}
inline ::Voxels::ChunkTaskSet* Voxels::ChunkTaskSet::New_ctor(::Voxels::VoxelGenerator*  generator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::ChunkTaskSet*>(generator));
}
inline ::Voxels::ChunkTaskSet* Voxels::ChunkTaskSet::New_ctor(::Voxels::Chunk*  chunk, ::Voxels::VoxelGenerator*  parameters, /* [ParamArray] [TupleElementNames(new[] { "task", "callback" })] */ ::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>  tasks)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::ChunkTaskSet*>(chunk, parameters, tasks));
}
inline ::Voxels::ChunkTaskSet* Voxels::ChunkTaskSet::New_ctor(::System::Collections::Generic::IList_1<::Voxels::Chunk*>*  chunks, ::Voxels::VoxelGenerator*  parameters, /* [ParamArray] [TupleElementNames(new[] { "task", "callback" })] */ ::ArrayW<::System::ValueTuple_2<::Voxels::ChunkTaskSet_ChunkTaskDelegate*,::System::Action_1<::Voxels::Chunk*>*>>  tasks)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::ChunkTaskSet*>(chunks, parameters, tasks));
}
// Ctor Parameters []
constexpr ::Voxels::ChunkTaskSet::ChunkTaskSet()   {
}
//  Writing Method size for method: ::Voxels::ChunkTaskSet_ChunkTaskDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTaskSet_ChunkTaskDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Voxels::ChunkTaskSet_ChunkTaskDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5dae990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet_ChunkTaskDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkTask (::Voxels::ChunkTaskSet_ChunkTaskDelegate::*)(::Voxels::Chunk*)>(&::Voxels::ChunkTaskSet_ChunkTaskDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5daea98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(),
                    {::i2c::class_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet_ChunkTaskDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Voxels::ChunkTaskSet_ChunkTaskDelegate::*)(::Voxels::Chunk*, ::System::AsyncCallback*, ::System::Object*)>(&::Voxels::ChunkTaskSet_ChunkTaskDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5daeaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(),
                    {::i2c::class_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTaskSet_ChunkTaskDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkTask (::Voxels::ChunkTaskSet_ChunkTaskDelegate::*)(::System::IAsyncResult*)>(&::Voxels::ChunkTaskSet_ChunkTaskDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5daeacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(),
                    {::i2c::class_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Voxels::ChunkTaskSet_ChunkTaskDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Voxels::ChunkTask Voxels::ChunkTaskSet_ChunkTaskDelegate::Invoke(::Voxels::Chunk*  chunk)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkTask>(this, ___internal_method, chunk);
}
inline ::System::IAsyncResult* Voxels::ChunkTaskSet_ChunkTaskDelegate::BeginInvoke(::Voxels::Chunk*  chunk, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, chunk, callback, object);
}
inline ::Voxels::ChunkTask Voxels::ChunkTaskSet_ChunkTaskDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkTask>(this, ___internal_method, result);
}
inline ::Voxels::ChunkTaskSet_ChunkTaskDelegate* Voxels::ChunkTaskSet_ChunkTaskDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::ChunkTaskSet_ChunkTaskDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Voxels::ChunkTaskSet_ChunkTaskDelegate::ChunkTaskSet_ChunkTaskDelegate()   {
}
