#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityArraySurrogate@ElementReaderWriterNetworkBool.hpp"
#include "Fusion/Internal/zzzz__UnityArraySurrogate_2_impl.hpp"
#include "Fusion/zzzz__ElementReaderWriterNetworkBool_impl.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityArraySurrogate@ElementReaderWriterNetworkBool_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Fusion::NetworkBool> (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::*)()>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::get_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ecfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::*)(::ArrayW<::Fusion::NetworkBool>)>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::set_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ed04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::*)()>(&::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e2ed0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Fusion::NetworkBool>& Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::ArrayW<::Fusion::NetworkBool> const& Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::__cordl_internal_set_Data(::ArrayW<::Fusion::NetworkBool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::ArrayW<::Fusion::NetworkBool> Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Fusion::NetworkBool>>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::set_DataProperty(::ArrayW<::Fusion::NetworkBool>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool* Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool::UnityArraySurrogate@ElementReaderWriterNetworkBool()   {
}
