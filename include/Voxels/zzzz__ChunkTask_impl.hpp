#pragma once
// IWYU pragma private; include "Voxels/ChunkTask.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Voxels/zzzz__ChunkTask_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Voxels/zzzz__ChunkTask_def.hpp"
#include "Voxels/zzzz__Chunk_def.hpp"
//  Writing Method size for method: ::Voxels::ChunkTask.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::ChunkTask::*)()>(&::Voxels::ChunkTask::get_IsCreated)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5daeafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTask.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::ChunkTask::*)()>(&::Voxels::ChunkTask::get_IsCompleted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5daeb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTask.CompleteIfReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::ChunkTask::*)()>(&::Voxels::ChunkTask::CompleteIfReady)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5daeb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {"CompleteIfReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTask.Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTask::*)()>(&::Voxels::ChunkTask::Complete)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5daeb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {"Complete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTask::*)(::Voxels::Chunk*, ::Unity::Jobs::JobHandle, ::System::Action*)>(&::Voxels::ChunkTask::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5daeba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTask.CreateCollisionJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkTask (*)(::Voxels::Chunk*)>(&::Voxels::ChunkTask::CreateCollisionJob)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5daebec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {"CreateCollisionJob", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Voxels::ChunkTask::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Voxels::ChunkTask::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Voxels::ChunkTask::CompleteIfReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {"CompleteIfReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Voxels::ChunkTask::Complete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {"Complete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Voxels::ChunkTask::_ctor(::Voxels::Chunk*  chunk, ::Unity::Jobs::JobHandle  handle, ::System::Action*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk, handle, onComplete);
}
inline ::Voxels::ChunkTask Voxels::ChunkTask::CreateCollisionJob(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask>(),
                        {"CreateCollisionJob", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkTask>(nullptr, ___internal_method, chunk);
}
// Ctor Parameters [CppParam { name: "Chunk", ty: "::Voxels::Chunk*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Handle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_onJobComplete", ty: "::System::Action*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::ChunkTask::ChunkTask(::Voxels::Chunk*  Chunk, ::Unity::Jobs::JobHandle  Handle, ::System::Action*  _onJobComplete) noexcept  {
this->Chunk = Chunk;
this->Handle = Handle;
this->_onJobComplete = _onJobComplete;
}
// Ctor Parameters []
constexpr ::Voxels::ChunkTask::ChunkTask()   {
}
//  Writing Method size for method: ::Voxels::ChunkTask___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTask___c__DisplayClass10_0::*)()>(&::Voxels::ChunkTask___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5daeda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkTask___c__DisplayClass10_0._CreateCollisionJob_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkTask___c__DisplayClass10_0::*)()>(&::Voxels::ChunkTask___c__DisplayClass10_0::_CreateCollisionJob_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5daeda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask___c__DisplayClass10_0*>(),
                        {"<CreateCollisionJob>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Voxels::Chunk*& Voxels::ChunkTask___c__DisplayClass10_0::__cordl_internal_get_chunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr ::Voxels::Chunk* const& Voxels::ChunkTask___c__DisplayClass10_0::__cordl_internal_get_chunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr void Voxels::ChunkTask___c__DisplayClass10_0::__cordl_internal_set_chunk(::Voxels::Chunk*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunk = value;
}
inline void Voxels::ChunkTask___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::ChunkTask___c__DisplayClass10_0::_CreateCollisionJob_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkTask___c__DisplayClass10_0*>(),
                        {"<CreateCollisionJob>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::ChunkTask___c__DisplayClass10_0* Voxels::ChunkTask___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::ChunkTask___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Voxels::ChunkTask___c__DisplayClass10_0::ChunkTask___c__DisplayClass10_0()   {
}
