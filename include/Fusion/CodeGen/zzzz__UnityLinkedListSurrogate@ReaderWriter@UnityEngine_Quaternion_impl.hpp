#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@UnityEngine_Quaternion_impl.hpp"
#include "Fusion/Internal/zzzz__UnityLinkedListSurrogate_2_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Quaternion> (::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::*)()>(&::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::get_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::*)(::ArrayW<::UnityEngine::Quaternion>)>(&::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::set_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::*)()>(&::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e2f4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Quaternion>& Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::__cordl_internal_set_Data(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::ArrayW<::UnityEngine::Quaternion> Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Quaternion>>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::set_DataProperty(::ArrayW<::UnityEngine::Quaternion>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion* Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion::UnityLinkedListSurrogate@ReaderWriter@UnityEngine_Quaternion()   {
}
