#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Utilities/GTBitArray.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Shared/Scripts/Utilities/zzzz__GTBitArray_def.hpp"
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Utilities::GTBitArray.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Shared::Scripts::Utilities::GTBitArray::*)(int32_t)>(&::GorillaTag::Shared::Scripts::Utilities::GTBitArray::get_Item)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d4d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Utilities::GTBitArray.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Utilities::GTBitArray::*)(int32_t, bool)>(&::GorillaTag::Shared::Scripts::Utilities::GTBitArray::set_Item)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d4d870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Utilities::GTBitArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Utilities::GTBitArray::*)(int32_t)>(&::GorillaTag::Shared::Scripts::Utilities::GTBitArray::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d4d928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Utilities::GTBitArray.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Utilities::GTBitArray::*)()>(&::GorillaTag::Shared::Scripts::Utilities::GTBitArray::Clear)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d4d9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Utilities::GTBitArray.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Utilities::GTBitArray::*)(::GorillaTag::Shared::Scripts::Utilities::GTBitArray*)>(&::GorillaTag::Shared::Scripts::Utilities::GTBitArray::CopyFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d4da3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::Shared::Scripts::Utilities::GTBitArray::__cordl_internal_get_Length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Length;
}
constexpr int32_t const& GorillaTag::Shared::Scripts::Utilities::GTBitArray::__cordl_internal_get_Length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Length;
}
constexpr void GorillaTag::Shared::Scripts::Utilities::GTBitArray::__cordl_internal_set_Length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Length = value;
}
constexpr ::ArrayW<uint32_t>& GorillaTag::Shared::Scripts::Utilities::GTBitArray::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::ArrayW<uint32_t> const& GorillaTag::Shared::Scripts::Utilities::GTBitArray::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void GorillaTag::Shared::Scripts::Utilities::GTBitArray::__cordl_internal_set__data(::ArrayW<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
inline bool GorillaTag::Shared::Scripts::Utilities::GTBitArray::get_Item(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx);
}
inline void GorillaTag::Shared::Scripts::Utilities::GTBitArray::set_Item(int32_t  idx, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, value);
}
inline void GorillaTag::Shared::Scripts::Utilities::GTBitArray::_ctor(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline void GorillaTag::Shared::Scripts::Utilities::GTBitArray::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::Utilities::GTBitArray::CopyFrom(::GorillaTag::Shared::Scripts::Utilities::GTBitArray*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::GorillaTag::Shared::Scripts::Utilities::GTBitArray* GorillaTag::Shared::Scripts::Utilities::GTBitArray::New_ctor(int32_t  length)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Shared::Scripts::Utilities::GTBitArray*>(length));
}
// Ctor Parameters []
constexpr ::GorillaTag::Shared::Scripts::Utilities::GTBitArray::GTBitArray()   {
}
