#pragma once
// IWYU pragma private; include "Pathfinding/PathReturnQueue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__PathReturnQueue_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::PathReturnQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathReturnQueue::*)(::System::Object*)>(&::Pathfinding::PathReturnQueue::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e66678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathReturnQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathReturnQueue.Enqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathReturnQueue::*)(::Pathfinding::Path*)>(&::Pathfinding::PathReturnQueue::Enqueue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e65b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathReturnQueue*>(),
                        {"Enqueue", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathReturnQueue.ReturnPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathReturnQueue::*)(bool)>(&::Pathfinding::PathReturnQueue::ReturnPaths)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5e66714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathReturnQueue*>(),
                        {"ReturnPaths", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::Path*>*& Pathfinding::PathReturnQueue::__cordl_internal_get_pathReturnQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathReturnQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::Path*>* const& Pathfinding::PathReturnQueue::__cordl_internal_get_pathReturnQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathReturnQueue;
}
constexpr void Pathfinding::PathReturnQueue::__cordl_internal_set_pathReturnQueue(::System::Collections::Generic::Queue_1<::Pathfinding::Path*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathReturnQueue = value;
}
constexpr ::System::Object*& Pathfinding::PathReturnQueue::__cordl_internal_get_pathsClaimedSilentlyBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathsClaimedSilentlyBy;
}
constexpr ::System::Object* const& Pathfinding::PathReturnQueue::__cordl_internal_get_pathsClaimedSilentlyBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathsClaimedSilentlyBy;
}
constexpr void Pathfinding::PathReturnQueue::__cordl_internal_set_pathsClaimedSilentlyBy(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathsClaimedSilentlyBy = value;
}
inline void Pathfinding::PathReturnQueue::_ctor(::System::Object*  pathsClaimedSilentlyBy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathReturnQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pathsClaimedSilentlyBy);
}
inline void Pathfinding::PathReturnQueue::Enqueue(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathReturnQueue*>(),
                        {"Enqueue", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::PathReturnQueue::ReturnPaths(bool  timeSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathReturnQueue*>(),
                        {"ReturnPaths", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSlice);
}
inline ::Pathfinding::PathReturnQueue* Pathfinding::PathReturnQueue::New_ctor(::System::Object*  pathsClaimedSilentlyBy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathReturnQueue*>(pathsClaimedSilentlyBy));
}
// Ctor Parameters []
constexpr ::Pathfinding::PathReturnQueue::PathReturnQueue()   {
}
