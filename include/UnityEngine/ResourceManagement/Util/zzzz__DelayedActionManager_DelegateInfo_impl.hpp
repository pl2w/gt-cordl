#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/DelayedActionManager_DelegateInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__DelayedActionManager_DelegateInfo_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DelayedActionManager_DelegateInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedActionManager_DelegateInfo::*)(::System::Delegate*, float_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::DelayedActionManager_DelegateInfo::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb2f9a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedActionManager_DelegateInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedActionManager_DelegateInfo.get_InvocationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::DelayedActionManager_DelegateInfo::*)()>(&::GlobalNamespace::DelayedActionManager_DelegateInfo::get_InvocationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2fa4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedActionManager_DelegateInfo>(),
                        {"get_InvocationTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedActionManager_DelegateInfo.set_InvocationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedActionManager_DelegateInfo::*)(float_t)>(&::GlobalNamespace::DelayedActionManager_DelegateInfo::set_InvocationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2fa4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedActionManager_DelegateInfo>(),
                        {"set_InvocationTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedActionManager_DelegateInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DelayedActionManager_DelegateInfo::*)()>(&::GlobalNamespace::DelayedActionManager_DelegateInfo::ToString)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xb2fa4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DelayedActionManager_DelegateInfo>(),
                    {::i2c::class_of<::GlobalNamespace::DelayedActionManager_DelegateInfo>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DelayedActionManager_DelegateInfo.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DelayedActionManager_DelegateInfo::*)()>(&::GlobalNamespace::DelayedActionManager_DelegateInfo::Invoke)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb2fa098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedActionManager_DelegateInfo>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DelayedActionManager_DelegateInfo::setStaticF_s_Id(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Id", ::GlobalNamespace::DelayedActionManager_DelegateInfo>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::DelayedActionManager_DelegateInfo::getStaticF_s_Id()  {
return ::cordl_internals::getStaticField<int32_t, "s_Id", ::GlobalNamespace::DelayedActionManager_DelegateInfo>();
}
inline void GlobalNamespace::DelayedActionManager_DelegateInfo::_ctor(::System::Delegate*  d, float_t  invocationTime, /* [ParamArray] */ ::ArrayW<::System::Object*>  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedActionManager_DelegateInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, d, invocationTime, p);
}
inline float_t GlobalNamespace::DelayedActionManager_DelegateInfo::get_InvocationTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedActionManager_DelegateInfo>(),
                        {"get_InvocationTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::DelayedActionManager_DelegateInfo::set_InvocationTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedActionManager_DelegateInfo>(),
                        {"set_InvocationTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::DelayedActionManager_DelegateInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DelayedActionManager_DelegateInfo>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::DelayedActionManager_DelegateInfo::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DelayedActionManager_DelegateInfo>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Delegate", ty: "::System::Delegate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Target", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_InvocationTime_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DelayedActionManager_DelegateInfo::DelayedActionManager_DelegateInfo(int32_t  m_Id, ::System::Delegate*  m_Delegate, ::ArrayW<::System::Object*>  m_Target, float_t  _InvocationTime_k__BackingField) noexcept  {
this->m_Id = m_Id;
this->m_Delegate = m_Delegate;
this->m_Target = m_Target;
this->_InvocationTime_k__BackingField = _InvocationTime_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DelayedActionManager_DelegateInfo::DelayedActionManager_DelegateInfo()   {
}
