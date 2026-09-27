#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ElementReaderWriterVector3.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_impl.hpp"
#include "Fusion/zzzz__ElementReaderWriterVector3_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityValueSurrogate@ElementReaderWriterVector3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::get_DataProperty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2ec44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::*)(::UnityEngine::Vector3)>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::set_DataProperty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e2ec5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::UnityEngine::Vector3 const& Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::__cordl_internal_set_Data(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::UnityEngine::Vector3 Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::set_DataProperty(::UnityEngine::Vector3  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3* Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3::UnityValueSurrogate@ElementReaderWriterVector3()   {
}
