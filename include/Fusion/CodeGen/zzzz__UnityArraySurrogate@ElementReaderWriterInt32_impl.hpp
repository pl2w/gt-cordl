#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityArraySurrogate@ElementReaderWriterInt32.hpp"
#include "Fusion/Internal/zzzz__UnityArraySurrogate_2_impl.hpp"
#include "Fusion/zzzz__ElementReaderWriterInt32_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityArraySurrogate@ElementReaderWriterInt32_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::*)()>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::get_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::*)(::ArrayW<int32_t>)>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::set_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::*)()>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e2f14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::ArrayW<int32_t> const& Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::__cordl_internal_set_Data(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::ArrayW<int32_t> Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::set_DataProperty(::ArrayW<int32_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32* Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt32::UnityArraySurrogate@ElementReaderWriterInt32()   {
}
