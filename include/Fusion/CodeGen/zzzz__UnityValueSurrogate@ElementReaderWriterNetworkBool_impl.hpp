#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ElementReaderWriterNetworkBool.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_impl.hpp"
#include "Fusion/zzzz__ElementReaderWriterNetworkBool_impl.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityValueSurrogate@ElementReaderWriterNetworkBool_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBool (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::get_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ea74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::*)(::Fusion::NetworkBool)>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::set_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2ea7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::*)()>(&::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e2ea84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkBool& Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::Fusion::NetworkBool const& Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::__cordl_internal_set_Data(::Fusion::NetworkBool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::Fusion::NetworkBool Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBool>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::set_DataProperty(::Fusion::NetworkBool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool* Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool::UnityValueSurrogate@ElementReaderWriterNetworkBool()   {
}
