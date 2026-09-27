#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@Fusion_NetworkString_1_Fusion__128__impl.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_impl.hpp"
#include "Fusion/zzzz__NetworkString_1_impl.hpp"
#include "Fusion/zzzz___128_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128__def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___128_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkString_1<::Fusion::_128> (::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::get_DataProperty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2f6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::*)(::Fusion::NetworkString_1<::Fusion::_128>)>(&::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::set_DataProperty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2f6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e2f6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkString_1<::Fusion::_128>& Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::Fusion::NetworkString_1<::Fusion::_128> const& Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::__cordl_internal_set_Data(::Fusion::NetworkString_1<::Fusion::_128>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::Fusion::NetworkString_1<::Fusion::_128> Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkString_1<::Fusion::_128>>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::set_DataProperty(::Fusion::NetworkString_1<::Fusion::_128>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_* Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_()   {
}
