#pragma once
// IWYU pragma private; include "Fusion/NetworkTransformSerializer.hpp"
#include "Fusion/zzzz__NetworkBufferSerializer_impl.hpp"
#include "Fusion/zzzz__NetworkTransformSerializer_def.hpp"
#include "Fusion/zzzz__NetworkBufferSerializerInfo_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkTransformSerializer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkTransformSerializer::*)(::Fusion::Simulation_SendContext*, ::Fusion::NetworkObjectMeta*, ::Fusion::NetworkBufferSerializerInfo, ::System::Span_1<int32_t>, int32_t, int32_t)>(&::Fusion::NetworkTransformSerializer::Write)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x5fcd8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkTransformSerializer*>(),
                    {::i2c::class_of<::Fusion::NetworkTransformSerializer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransformSerializer.Skip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkTransformSerializer::*)(::Fusion::Simulation_RecvContext*, int32_t)>(&::Fusion::NetworkTransformSerializer::Skip)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fcdd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkTransformSerializer*>(),
                    {::i2c::class_of<::Fusion::NetworkTransformSerializer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransformSerializer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkTransformSerializer::*)(::Fusion::Simulation_RecvContext*, ::Fusion::NetworkObjectMeta*, ::Fusion::NetworkBufferSerializerInfo, ::System::Span_1<int32_t>, int32_t)>(&::Fusion::NetworkTransformSerializer::Read)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x5fcde14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkTransformSerializer*>(),
                    {::i2c::class_of<::Fusion::NetworkTransformSerializer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkTransformSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkTransformSerializer::*)()>(&::Fusion::NetworkTransformSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fce274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransformSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkTransformSerializer::setStaticF_Instance(::Fusion::NetworkTransformSerializer*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkTransformSerializer*, "Instance", ::Fusion::NetworkTransformSerializer*>(std::forward<::Fusion::NetworkTransformSerializer*>(value));
}
inline ::Fusion::NetworkTransformSerializer* Fusion::NetworkTransformSerializer::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkTransformSerializer*, "Instance", ::Fusion::NetworkTransformSerializer*>();
}
inline int32_t Fusion::NetworkTransformSerializer::Write(::Fusion::Simulation_SendContext*  sc, ::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkBufferSerializerInfo  info, ::System::Span_1<int32_t>  ptr, int32_t  word, int32_t  prev)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkTransformSerializer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sc, meta, info, ptr, word, prev);
}
inline int32_t Fusion::NetworkTransformSerializer::Skip(::Fusion::Simulation_RecvContext*  rc, int32_t  word)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkTransformSerializer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rc, word);
}
inline int32_t Fusion::NetworkTransformSerializer::Read(::Fusion::Simulation_RecvContext*  rc, ::Fusion::NetworkObjectMeta*  meta, ::Fusion::NetworkBufferSerializerInfo  info, ::System::Span_1<int32_t>  ptr, int32_t  word)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkTransformSerializer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rc, meta, info, ptr, word);
}
inline void Fusion::NetworkTransformSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTransformSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkTransformSerializer* Fusion::NetworkTransformSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkTransformSerializer*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkTransformSerializer::NetworkTransformSerializer()   {
}
