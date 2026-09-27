#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityArraySurrogate@ElementReaderWriterBoolean.hpp"
#include "Fusion/Internal/zzzz__UnityArraySurrogate_2_impl.hpp"
#include "GlobalNamespace/zzzz__ElementReaderWriterBoolean_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityArraySurrogate@ElementReaderWriterBoolean_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::*)()>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::get_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::*)(::ArrayW<bool>)>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::set_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::*)()>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e2f9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<bool>& Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::ArrayW<bool> const& Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::__cordl_internal_set_Data(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::ArrayW<bool> Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::set_DataProperty(::ArrayW<bool>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean* Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean::UnityArraySurrogate@ElementReaderWriterBoolean()   {
}
