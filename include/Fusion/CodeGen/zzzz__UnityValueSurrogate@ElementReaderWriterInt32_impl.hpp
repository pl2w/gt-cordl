#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ElementReaderWriterInt32.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_impl.hpp"
#include "Fusion/zzzz__ElementReaderWriterInt32_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityValueSurrogate@ElementReaderWriterInt32_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::get_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ef64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::*)(int32_t)>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::set_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ef6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e2ef74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr int32_t const& Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::__cordl_internal_set_Data(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline int32_t Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::set_DataProperty(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32* Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32::UnityValueSurrogate@ElementReaderWriterInt32()   {
}
