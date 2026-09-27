#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformViewTeleportSerializer.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__TransformViewTeleportSerializer_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include "GlobalNamespace/zzzz__GorillaNetworkTransform_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformViewTeleportSerializer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformViewTeleportSerializer::*)()>(&::GlobalNamespace::TransformViewTeleportSerializer::Start)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ab2fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformViewTeleportSerializer.SetWillTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformViewTeleportSerializer::*)()>(&::GlobalNamespace::TransformViewTeleportSerializer::SetWillTeleport)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ab3004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                        {"SetWillTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformViewTeleportSerializer.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBool (::GlobalNamespace::TransformViewTeleportSerializer::*)()>(&::GlobalNamespace::TransformViewTeleportSerializer::get_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ab3010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformViewTeleportSerializer.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformViewTeleportSerializer::*)(::Fusion::NetworkBool)>(&::GlobalNamespace::TransformViewTeleportSerializer::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ab306c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                        {"set_Data", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformViewTeleportSerializer.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformViewTeleportSerializer::*)()>(&::GlobalNamespace::TransformViewTeleportSerializer::WriteDataFusion)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ab30c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformViewTeleportSerializer.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformViewTeleportSerializer::*)()>(&::GlobalNamespace::TransformViewTeleportSerializer::ReadDataFusion)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ab30f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformViewTeleportSerializer.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformViewTeleportSerializer::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::TransformViewTeleportSerializer::WriteDataPUN)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ab3130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformViewTeleportSerializer.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformViewTeleportSerializer::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::TransformViewTeleportSerializer::ReadDataPUN)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ab31ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformViewTeleportSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformViewTeleportSerializer::*)()>(&::GlobalNamespace::TransformViewTeleportSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab3240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformViewTeleportSerializer.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformViewTeleportSerializer::*)(bool)>(&::GlobalNamespace::TransformViewTeleportSerializer::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ab3248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformViewTeleportSerializer.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformViewTeleportSerializer::*)()>(&::GlobalNamespace::TransformViewTeleportSerializer::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ab3268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TransformViewTeleportSerializer::__cordl_internal_get_willTeleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___willTeleport;
}
constexpr bool const& GlobalNamespace::TransformViewTeleportSerializer::__cordl_internal_get_willTeleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___willTeleport;
}
constexpr void GlobalNamespace::TransformViewTeleportSerializer::__cordl_internal_set_willTeleport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___willTeleport = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaNetworkTransform>& GlobalNamespace::TransformViewTeleportSerializer::__cordl_internal_get_transformView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformView;
}
constexpr ::UnityW<::GlobalNamespace::GorillaNetworkTransform> const& GlobalNamespace::TransformViewTeleportSerializer::__cordl_internal_get_transformView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformView;
}
constexpr void GlobalNamespace::TransformViewTeleportSerializer::__cordl_internal_set_transformView(::UnityW<::GlobalNamespace::GorillaNetworkTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformView = value;
}
constexpr ::Fusion::NetworkBool& GlobalNamespace::TransformViewTeleportSerializer::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::TransformViewTeleportSerializer::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::TransformViewTeleportSerializer::__cordl_internal_set__Data(::Fusion::NetworkBool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GlobalNamespace::TransformViewTeleportSerializer::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformViewTeleportSerializer::SetWillTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                        {"SetWillTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkBool GlobalNamespace::TransformViewTeleportSerializer::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBool>(this, ___internal_method);
}
inline void GlobalNamespace::TransformViewTeleportSerializer::set_Data(::Fusion::NetworkBool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                        {"set_Data", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TransformViewTeleportSerializer::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformViewTeleportSerializer::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformViewTeleportSerializer::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::TransformViewTeleportSerializer::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::TransformViewTeleportSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformViewTeleportSerializer::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::TransformViewTeleportSerializer::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransformViewTeleportSerializer*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransformViewTeleportSerializer* GlobalNamespace::TransformViewTeleportSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransformViewTeleportSerializer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformViewTeleportSerializer::TransformViewTeleportSerializer()   {
}
