#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@UnityEngine_Quaternion_impl.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::get_DataProperty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2ef04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::*)(::UnityEngine::Quaternion)>(&::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::set_DataProperty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2ef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e2ef1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Quaternion& Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::UnityEngine::Quaternion const& Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::__cordl_internal_set_Data(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::UnityEngine::Quaternion Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::set_DataProperty(::UnityEngine::Quaternion  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion* Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion()   {
}
