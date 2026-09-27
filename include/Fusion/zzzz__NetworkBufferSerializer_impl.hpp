#pragma once
// IWYU pragma private; include "Fusion/NetworkBufferSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkBufferSerializer_def.hpp"
#include "Fusion/zzzz__NetworkBufferSerializerInfo_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkBufferSerializer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBufferSerializer::*)(::Fusion::Simulation_RecvContext*, ::Fusion::NetworkObjectMeta*, ::Fusion::NetworkBufferSerializerInfo, ::System::Span_1<int32_t>, int32_t)>(&::Fusion::NetworkBufferSerializer::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBufferSerializer*>(),
                    {::i2c::class_of<::Fusion::NetworkBufferSerializer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBufferSerializer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBufferSerializer::*)(::Fusion::Simulation_SendContext*, ::Fusion::NetworkObjectMeta*, ::Fusion::NetworkBufferSerializerInfo, ::System::Span_1<int32_t>, int32_t, int32_t)>(&::Fusion::NetworkBufferSerializer::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBufferSerializer*>(),
                    {::i2c::class_of<::Fusion::NetworkBufferSerializer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBufferSerializer.Skip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBufferSerializer::*)(::Fusion::Simulation_RecvContext*, int32_t)>(&::Fusion::NetworkBufferSerializer::Skip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBufferSerializer*>(),
                    {::i2c::class_of<::Fusion::NetworkBufferSerializer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBufferSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBufferSerializer::*)()>(&::Fusion::NetworkBufferSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa7b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBufferSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::NetworkBufferSerializer::Read(::Fusion::Simulation_RecvContext*  rc, ::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkBufferSerializerInfo  info, ::System::Span_1<int32_t>  ptr, int32_t  word)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBufferSerializer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rc, meta, info, ptr, word);
}
inline int32_t Fusion::NetworkBufferSerializer::Write(::Fusion::Simulation_SendContext*  sc, ::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkBufferSerializerInfo  info, ::System::Span_1<int32_t>  ptr, int32_t  word, int32_t  prev)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBufferSerializer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sc, meta, info, ptr, word, prev);
}
inline int32_t Fusion::NetworkBufferSerializer::Skip(::Fusion::Simulation_RecvContext*  rc, int32_t  word)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBufferSerializer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rc, word);
}
inline void Fusion::NetworkBufferSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBufferSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkBufferSerializer* Fusion::NetworkBufferSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkBufferSerializer*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkBufferSerializer::NetworkBufferSerializer()   {
}
