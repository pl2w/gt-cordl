#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/ByteArraySlicePool.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__ByteArraySlicePool_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ByteArraySlice_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlicePool.get_MinStackIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::ByteArraySlicePool::*)()>(&::ExitGames::Client::Photon::ByteArraySlicePool::get_MinStackIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"get_MinStackIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlicePool.set_MinStackIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::ByteArraySlicePool::*)(int32_t)>(&::ExitGames::Client::Photon::ByteArraySlicePool::set_MinStackIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6b6d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"set_MinStackIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlicePool.get_AllocationCounter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::ByteArraySlicePool::*)()>(&::ExitGames::Client::Photon::ByteArraySlicePool::get_AllocationCounter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"get_AllocationCounter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlicePool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::ByteArraySlicePool::*)()>(&::ExitGames::Client::Photon::ByteArraySlicePool::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa6b6d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlicePool.Acquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::ByteArraySlice* (::ExitGames::Client::Photon::ByteArraySlicePool::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ExitGames::Client::Photon::ByteArraySlicePool::Acquire)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa6b6f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"Acquire", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlicePool.Acquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::ByteArraySlice* (::ExitGames::Client::Photon::ByteArraySlicePool::*)(int32_t)>(&::ExitGames::Client::Photon::ByteArraySlicePool::Acquire)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xa6b72c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"Acquire", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlicePool.PopOrCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::ByteArraySlice* (::ExitGames::Client::Photon::ByteArraySlicePool::*)(::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*, int32_t)>(&::ExitGames::Client::Photon::ByteArraySlicePool::PopOrCreate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa6b7138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"PopOrCreate", {}, {::i2c::type_of<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlicePool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::ByteArraySlicePool::*)(::ExitGames::Client::Photon::ByteArraySlice*, int32_t)>(&::ExitGames::Client::Photon::ByteArraySlicePool::Release)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa6b6b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"Release", {}, {::i2c::type_of<::ExitGames::Client::Photon::ByteArraySlice*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlicePool.ClearPools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::ByteArraySlicePool::*)(int32_t, int32_t)>(&::ExitGames::Client::Photon::ByteArraySlicePool::ClearPools)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xa6b7604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"ClearPools", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ExitGames::Client::Photon::ByteArraySlicePool::__cordl_internal_get_minStackIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minStackIndex;
}
constexpr int32_t const& ExitGames::Client::Photon::ByteArraySlicePool::__cordl_internal_get_minStackIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minStackIndex;
}
constexpr void ExitGames::Client::Photon::ByteArraySlicePool::__cordl_internal_set_minStackIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minStackIndex = value;
}
constexpr ::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>& ExitGames::Client::Photon::ByteArraySlicePool::__cordl_internal_get_poolTiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolTiers;
}
constexpr ::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*> const& ExitGames::Client::Photon::ByteArraySlicePool::__cordl_internal_get_poolTiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolTiers;
}
constexpr void ExitGames::Client::Photon::ByteArraySlicePool::__cordl_internal_set_poolTiers(::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolTiers = value;
}
constexpr int32_t& ExitGames::Client::Photon::ByteArraySlicePool::__cordl_internal_get_allocationCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allocationCounter;
}
constexpr int32_t const& ExitGames::Client::Photon::ByteArraySlicePool::__cordl_internal_get_allocationCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allocationCounter;
}
constexpr void ExitGames::Client::Photon::ByteArraySlicePool::__cordl_internal_set_allocationCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allocationCounter = value;
}
inline int32_t ExitGames::Client::Photon::ByteArraySlicePool::get_MinStackIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"get_MinStackIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::ByteArraySlicePool::set_MinStackIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"set_MinStackIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::ByteArraySlicePool::get_AllocationCounter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"get_AllocationCounter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::ByteArraySlicePool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::ByteArraySlice* ExitGames::Client::Photon::ByteArraySlicePool::Acquire(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"Acquire", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ByteArraySlice*>(this, ___internal_method, buffer, offset, count);
}
inline ::ExitGames::Client::Photon::ByteArraySlice* ExitGames::Client::Photon::ByteArraySlicePool::Acquire(int32_t  minByteCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"Acquire", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ByteArraySlice*>(this, ___internal_method, minByteCount);
}
inline ::ExitGames::Client::Photon::ByteArraySlice* ExitGames::Client::Photon::ByteArraySlicePool::PopOrCreate(::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*  stack, int32_t  stackIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"PopOrCreate", {}, {::i2c::type_of<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ByteArraySlice*>(this, ___internal_method, stack, stackIndex);
}
inline bool ExitGames::Client::Photon::ByteArraySlicePool::Release(::ExitGames::Client::Photon::ByteArraySlice*  slice, int32_t  stackIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"Release", {}, {::i2c::type_of<::ExitGames::Client::Photon::ByteArraySlice*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, slice, stackIndex);
}
inline void ExitGames::Client::Photon::ByteArraySlicePool::ClearPools(int32_t  lower, int32_t  upper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(),
                        {"ClearPools", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lower, upper);
}
inline ::ExitGames::Client::Photon::ByteArraySlicePool* ExitGames::Client::Photon::ByteArraySlicePool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::ByteArraySlicePool*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::ByteArraySlicePool::ByteArraySlicePool()   {
}
