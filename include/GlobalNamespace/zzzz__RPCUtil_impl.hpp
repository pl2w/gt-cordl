#pragma once
// IWYU pragma private; include "GlobalNamespace/RPCUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RPCUtil_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RPCUtil_RPCCallID_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RPCUtil.NotSpam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::GlobalNamespace::PhotonMessageInfoWrapped, float_t)>(&::GlobalNamespace::RPCUtil::NotSpam)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x58f9964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil*>(),
                        {"NotSpam", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RPCUtil.SafeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::GlobalNamespace::RPCUtil::SafeValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58f9b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil*>(),
                        {"SafeValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RPCUtil.SafeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, float_t)>(&::GlobalNamespace::RPCUtil::SafeValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58f9b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil*>(),
                        {"SafeValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RPCUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RPCUtil::*)()>(&::GlobalNamespace::RPCUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f9bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RPCUtil::setStaticF_RPCCallLog(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RPCUtil_RPCCallID,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RPCUtil_RPCCallID,float_t>*, "RPCCallLog", ::GlobalNamespace::RPCUtil*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RPCUtil_RPCCallID,float_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RPCUtil_RPCCallID,float_t>* GlobalNamespace::RPCUtil::getStaticF_RPCCallLog()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::RPCUtil_RPCCallID,float_t>*, "RPCCallLog", ::GlobalNamespace::RPCUtil*>();
}
inline bool GlobalNamespace::RPCUtil::NotSpam(::StringW  id, ::GlobalNamespace::PhotonMessageInfoWrapped  info, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil*>(),
                        {"NotSpam", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id, info, delay);
}
inline bool GlobalNamespace::RPCUtil::SafeValue(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil*>(),
                        {"SafeValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline bool GlobalNamespace::RPCUtil::SafeValue(float_t  v, float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil*>(),
                        {"SafeValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, min, max);
}
inline void GlobalNamespace::RPCUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RPCUtil* GlobalNamespace::RPCUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RPCUtil*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RPCUtil::RPCUtil()   {
}
