#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityLinkedListSurrogate@ElementReaderWriterSingle.hpp"
#include "Fusion/Internal/zzzz__UnityLinkedListSurrogate_2_impl.hpp"
#include "Fusion/zzzz__ElementReaderWriterSingle_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityLinkedListSurrogate@ElementReaderWriterSingle_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::*)()>(&::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::get_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::*)(::ArrayW<float_t>)>(&::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::set_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2fb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::*)()>(&::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e2fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::ArrayW<float_t> const& Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::__cordl_internal_set_Data(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::ArrayW<float_t> Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::set_DataProperty(::ArrayW<float_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle* Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle::UnityLinkedListSurrogate@ElementReaderWriterSingle()   {
}
