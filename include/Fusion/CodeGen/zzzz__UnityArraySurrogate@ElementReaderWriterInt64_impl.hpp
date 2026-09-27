#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityArraySurrogate@ElementReaderWriterInt64.hpp"
#include "Fusion/Internal/zzzz__UnityArraySurrogate_2_impl.hpp"
#include "Fusion/zzzz__ElementReaderWriterInt64_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityArraySurrogate@ElementReaderWriterInt64_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int64_t> (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::*)()>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::get_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::*)(::ArrayW<int64_t>)>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::set_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::*)()>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e2f07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int64_t>& Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::ArrayW<int64_t> const& Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::__cordl_internal_set_Data(::ArrayW<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::ArrayW<int64_t> Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t>>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::set_DataProperty(::ArrayW<int64_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64* Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64::UnityArraySurrogate@ElementReaderWriterInt64()   {
}
