#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/ByteArraySlice.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__ByteArraySlice_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ByteArraySlicePool_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::ByteArraySlice::*)(::ExitGames::Client::Photon::ByteArraySlicePool*, int32_t)>(&::ExitGames::Client::Photon::ByteArraySlice::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6b69b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::ByteArraySlice::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ExitGames::Client::Photon::ByteArraySlice::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa6b6a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::ByteArraySlice::*)()>(&::ExitGames::Client::Photon::ByteArraySlice::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa6b6abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlice.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::ByteArraySlice::*)()>(&::ExitGames::Client::Photon::ByteArraySlice::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6b6aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlice.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::ByteArraySlice::*)()>(&::ExitGames::Client::Photon::ByteArraySlice::Release)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa6b6af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::ByteArraySlice.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::ByteArraySlice::*)()>(&::ExitGames::Client::Photon::ByteArraySlice::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b6d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_get_Buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Buffer;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_get_Buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Buffer;
}
constexpr void ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_set_Buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Buffer = value;
}
constexpr int32_t& ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_get_Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr int32_t const& ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_get_Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr void ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_set_Offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Offset = value;
}
constexpr int32_t& ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_get_Count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Count;
}
constexpr int32_t const& ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_get_Count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Count;
}
constexpr void ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_set_Count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Count = value;
}
constexpr ::ExitGames::Client::Photon::ByteArraySlicePool*& ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_get_returnPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnPool;
}
constexpr ::ExitGames::Client::Photon::ByteArraySlicePool* const& ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_get_returnPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnPool;
}
constexpr void ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_set_returnPool(::ExitGames::Client::Photon::ByteArraySlicePool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnPool = value;
}
constexpr int32_t& ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_get_stackIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stackIndex;
}
constexpr int32_t const& ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_get_stackIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stackIndex;
}
constexpr void ExitGames::Client::Photon::ByteArraySlice::__cordl_internal_set_stackIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stackIndex = value;
}
inline void ExitGames::Client::Photon::ByteArraySlice::_ctor(::ExitGames::Client::Photon::ByteArraySlicePool*  returnPool, int32_t  stackIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::ByteArraySlicePool*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnPool, stackIndex);
}
inline void ExitGames::Client::Photon::ByteArraySlice::_ctor(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ExitGames::Client::Photon::ByteArraySlice::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::ByteArraySlice::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::ByteArraySlice::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::ByteArraySlice::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::ByteArraySlice*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::ByteArraySlice* ExitGames::Client::Photon::ByteArraySlice::New_ctor(::ExitGames::Client::Photon::ByteArraySlicePool*  returnPool, int32_t  stackIndex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::ByteArraySlice*>(returnPool, stackIndex));
}
inline ::ExitGames::Client::Photon::ByteArraySlice* ExitGames::Client::Photon::ByteArraySlice::New_ctor(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::ByteArraySlice*>(buffer, offset, count));
}
inline ::ExitGames::Client::Photon::ByteArraySlice* ExitGames::Client::Photon::ByteArraySlice::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::ByteArraySlice*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ExitGames::Client::Photon::ByteArraySlice::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ExitGames::Client::Photon::ByteArraySlice::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::ByteArraySlice::ByteArraySlice()   {
}
