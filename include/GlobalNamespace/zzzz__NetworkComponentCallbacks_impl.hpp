#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkComponentCallbacks.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponentCallbacks_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkComponentCallbacks.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkComponentCallbacks::*)()>(&::GlobalNamespace::NetworkComponentCallbacks::ReadDataFusion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56e88a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkComponentCallbacks.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkComponentCallbacks::*)()>(&::GlobalNamespace::NetworkComponentCallbacks::WriteDataFusion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56e88c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkComponentCallbacks.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkComponentCallbacks::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::NetworkComponentCallbacks::ReadDataPUN)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56e88e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkComponentCallbacks.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkComponentCallbacks::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::NetworkComponentCallbacks::WriteDataPUN)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56e892c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkComponentCallbacks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkComponentCallbacks::*)()>(&::GlobalNamespace::NetworkComponentCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e8970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkComponentCallbacks.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkComponentCallbacks::*)(bool)>(&::GlobalNamespace::NetworkComponentCallbacks::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56e8978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkComponentCallbacks.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkComponentCallbacks::*)()>(&::GlobalNamespace::NetworkComponentCallbacks::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56e897c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_get_ReadData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReadData;
}
constexpr ::System::Action* const& GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_get_ReadData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReadData;
}
constexpr void GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_set_ReadData(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReadData = value;
}
constexpr ::System::Action*& GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_get_WriteData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WriteData;
}
constexpr ::System::Action* const& GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_get_WriteData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WriteData;
}
constexpr void GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_set_WriteData(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WriteData = value;
}
constexpr ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*& GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_get_ReadPunData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReadPunData;
}
constexpr ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>* const& GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_get_ReadPunData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReadPunData;
}
constexpr void GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_set_ReadPunData(::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReadPunData = value;
}
constexpr ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*& GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_get_WritePunData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WritePunData;
}
constexpr ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>* const& GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_get_WritePunData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WritePunData;
}
constexpr void GlobalNamespace::NetworkComponentCallbacks::__cordl_internal_set_WritePunData(::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WritePunData = value;
}
inline void GlobalNamespace::NetworkComponentCallbacks::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkComponentCallbacks::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkComponentCallbacks::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::NetworkComponentCallbacks::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::NetworkComponentCallbacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkComponentCallbacks::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::NetworkComponentCallbacks::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkComponentCallbacks*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkComponentCallbacks* GlobalNamespace::NetworkComponentCallbacks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkComponentCallbacks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkComponentCallbacks::NetworkComponentCallbacks()   {
}
