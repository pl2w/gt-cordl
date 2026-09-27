#pragma once
// IWYU pragma private; include "System/Net/SplitWritesState.hpp"
#include "System/Net/zzzz__BufferOffsetSize_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__SplitWritesState_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
//  Writing Method size for method: ::System::Net::SplitWritesState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SplitWritesState::*)(::ArrayW<::System::Net::BufferOffsetSize*>)>(&::System::Net::SplitWritesState::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xac5bacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SplitWritesState*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Net::BufferOffsetSize*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SplitWritesState.get_IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::SplitWritesState::*)()>(&::System::Net::SplitWritesState::get_IsDone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xac5bb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SplitWritesState*>(),
                        {"get_IsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SplitWritesState.GetNextBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::BufferOffsetSize*> (::System::Net::SplitWritesState::*)()>(&::System::Net::SplitWritesState::GetNextBuffers)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0xac5bb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SplitWritesState*>(),
                        {"GetNextBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Net::BufferOffsetSize*>& System::Net::SplitWritesState::__cordl_internal_get__UserBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserBuffers;
}
constexpr ::ArrayW<::System::Net::BufferOffsetSize*> const& System::Net::SplitWritesState::__cordl_internal_get__UserBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserBuffers;
}
constexpr void System::Net::SplitWritesState::__cordl_internal_set__UserBuffers(::ArrayW<::System::Net::BufferOffsetSize*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserBuffers = value;
}
constexpr int32_t& System::Net::SplitWritesState::__cordl_internal_get__Index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Index;
}
constexpr int32_t const& System::Net::SplitWritesState::__cordl_internal_get__Index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Index;
}
constexpr void System::Net::SplitWritesState::__cordl_internal_set__Index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Index = value;
}
constexpr int32_t& System::Net::SplitWritesState::__cordl_internal_get__LastBufferConsumed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBufferConsumed;
}
constexpr int32_t const& System::Net::SplitWritesState::__cordl_internal_get__LastBufferConsumed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBufferConsumed;
}
constexpr void System::Net::SplitWritesState::__cordl_internal_set__LastBufferConsumed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastBufferConsumed = value;
}
constexpr ::ArrayW<::System::Net::BufferOffsetSize*>& System::Net::SplitWritesState::__cordl_internal_get__RealBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RealBuffers;
}
constexpr ::ArrayW<::System::Net::BufferOffsetSize*> const& System::Net::SplitWritesState::__cordl_internal_get__RealBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RealBuffers;
}
constexpr void System::Net::SplitWritesState::__cordl_internal_set__RealBuffers(::ArrayW<::System::Net::BufferOffsetSize*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RealBuffers = value;
}
inline void System::Net::SplitWritesState::_ctor(::ArrayW<::System::Net::BufferOffsetSize*>  buffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SplitWritesState*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Net::BufferOffsetSize*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffers);
}
inline bool System::Net::SplitWritesState::get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SplitWritesState*>(),
                        {"get_IsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::System::Net::BufferOffsetSize*> System::Net::SplitWritesState::GetNextBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SplitWritesState*>(),
                        {"GetNextBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::BufferOffsetSize*>>(this, ___internal_method);
}
inline ::System::Net::SplitWritesState* System::Net::SplitWritesState::New_ctor(::ArrayW<::System::Net::BufferOffsetSize*>  buffers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::SplitWritesState*>(buffers));
}
// Ctor Parameters []
constexpr ::System::Net::SplitWritesState::SplitWritesState()   {
}
