#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabAcquireContext.hpp"
#include "Fusion/zzzz__NetworkPrefabId_impl.hpp"
#include "Fusion/zzzz__NetworkPrefabAcquireContext_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkPrefabAcquireContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabAcquireContext::*)(::Fusion::NetworkPrefabId, ::Fusion::NetworkObjectMeta*, bool, bool)>(&::Fusion::NetworkPrefabAcquireContext::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fcc570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabAcquireContext>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabAcquireContext.get_HasHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabAcquireContext::*)()>(&::Fusion::NetworkPrefabAcquireContext::get_HasHeader)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fcc5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabAcquireContext>(),
                        {"get_HasHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabAcquireContext.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<int32_t> (::Fusion::NetworkPrefabAcquireContext::*)()>(&::Fusion::NetworkPrefabAcquireContext::get_Data)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fcc5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabAcquireContext>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkPrefabAcquireContext::_ctor(::Fusion::NetworkPrefabId  prefabId, ::Fusion::NetworkObjectMeta*  meta, bool  isSynchronous, bool  dontDestroyOnLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabAcquireContext>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prefabId, meta, isSynchronous, dontDestroyOnLoad);
}
inline bool Fusion::NetworkPrefabAcquireContext::get_HasHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabAcquireContext>(),
                        {"get_HasHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Span_1<int32_t> Fusion::NetworkPrefabAcquireContext::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabAcquireContext>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<int32_t>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "PrefabId", ty: "::Fusion::NetworkPrefabId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Meta", ty: "::Fusion::NetworkObjectMeta*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsSynchronous", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DontDestroyOnLoad", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkPrefabAcquireContext::NetworkPrefabAcquireContext(::Fusion::NetworkPrefabId  PrefabId, ::Fusion::NetworkObjectMeta*  Meta, bool  IsSynchronous, bool  DontDestroyOnLoad) noexcept  {
this->PrefabId = PrefabId;
this->Meta = Meta;
this->IsSynchronous = IsSynchronous;
this->DontDestroyOnLoad = DontDestroyOnLoad;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabAcquireContext::NetworkPrefabAcquireContext()   {
}
