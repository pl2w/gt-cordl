#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ElementReaderWriterSingle.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_impl.hpp"
#include "Fusion/zzzz__ElementReaderWriterSingle_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityValueSurrogate@ElementReaderWriterSingle_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::get_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2eca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::*)(float_t)>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::set_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ecac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e2ecb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr float_t const& Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::__cordl_internal_set_Data(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline float_t Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::set_DataProperty(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle* Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterSingle::UnityValueSurrogate@ElementReaderWriterSingle()   {
}
