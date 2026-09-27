#pragma once
// IWYU pragma private; include "System/ComponentModel/ArraySubsetEnumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__ArraySubsetEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ArraySubsetEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ArraySubsetEnumerator::*)(::System::Array*, int32_t)>(&::System::ComponentModel::ArraySubsetEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xad6c3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ArraySubsetEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ArraySubsetEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ArraySubsetEnumerator::*)()>(&::System::ComponentModel::ArraySubsetEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xad6c418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ArraySubsetEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ArraySubsetEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ArraySubsetEnumerator::*)()>(&::System::ComponentModel::ArraySubsetEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xad6c43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ArraySubsetEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ArraySubsetEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ArraySubsetEnumerator::*)()>(&::System::ComponentModel::ArraySubsetEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xad6c448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ArraySubsetEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Array*& System::ComponentModel::ArraySubsetEnumerator::__cordl_internal_get_array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
constexpr ::System::Array* const& System::ComponentModel::ArraySubsetEnumerator::__cordl_internal_get_array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
constexpr void System::ComponentModel::ArraySubsetEnumerator::__cordl_internal_set_array(::System::Array*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___array = value;
}
constexpr int32_t& System::ComponentModel::ArraySubsetEnumerator::__cordl_internal_get_total()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___total;
}
constexpr int32_t const& System::ComponentModel::ArraySubsetEnumerator::__cordl_internal_get_total() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___total;
}
constexpr void System::ComponentModel::ArraySubsetEnumerator::__cordl_internal_set_total(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___total = value;
}
constexpr int32_t& System::ComponentModel::ArraySubsetEnumerator::__cordl_internal_get_current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
constexpr int32_t const& System::ComponentModel::ArraySubsetEnumerator::__cordl_internal_get_current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
constexpr void System::ComponentModel::ArraySubsetEnumerator::__cordl_internal_set_current(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___current = value;
}
inline void System::ComponentModel::ArraySubsetEnumerator::_ctor(::System::Array*  array, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ArraySubsetEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, count);
}
inline bool System::ComponentModel::ArraySubsetEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ArraySubsetEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::ArraySubsetEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ArraySubsetEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ArraySubsetEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ArraySubsetEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::ComponentModel::ArraySubsetEnumerator* System::ComponentModel::ArraySubsetEnumerator::New_ctor(::System::Array*  array, int32_t  count)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ArraySubsetEnumerator*>(array, count));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  System::ComponentModel::ArraySubsetEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::ComponentModel::ArraySubsetEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ArraySubsetEnumerator::ArraySubsetEnumerator()   {
}
