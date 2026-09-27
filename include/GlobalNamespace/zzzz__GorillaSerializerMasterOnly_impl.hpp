#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSerializerMasterOnly.hpp"
#include "GlobalNamespace/zzzz__GorillaWrappedSerializer_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSerializerMasterOnly_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerMasterOnly.ValidOnSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaSerializerMasterOnly::*)(::Photon::Pun::PhotonStream*, ::by_ref<::Photon::Pun::PhotonMessageInfo>)>(&::GlobalNamespace::GorillaSerializerMasterOnly::ValidOnSerialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58f4d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializerMasterOnly*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializerMasterOnly*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerMasterOnly._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializerMasterOnly::*)()>(&::GlobalNamespace::GorillaSerializerMasterOnly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f2d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerMasterOnly*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerMasterOnly.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializerMasterOnly::*)(bool)>(&::GlobalNamespace::GorillaSerializerMasterOnly::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f2d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializerMasterOnly*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializerMasterOnly*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSerializerMasterOnly.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSerializerMasterOnly::*)()>(&::GlobalNamespace::GorillaSerializerMasterOnly::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f2d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaSerializerMasterOnly*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaSerializerMasterOnly*>(), 24}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::GorillaSerializerMasterOnly::ValidOnSerialize(::Photon::Pun::PhotonStream*  stream, /* [IsReadOnly] */ ::by_ref<::Photon::Pun::PhotonMessageInfo>  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializerMasterOnly*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaSerializerMasterOnly::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSerializerMasterOnly*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSerializerMasterOnly::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializerMasterOnly*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GorillaSerializerMasterOnly::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaSerializerMasterOnly*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSerializerMasterOnly* GlobalNamespace::GorillaSerializerMasterOnly::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSerializerMasterOnly*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSerializerMasterOnly::GorillaSerializerMasterOnly()   {
}
