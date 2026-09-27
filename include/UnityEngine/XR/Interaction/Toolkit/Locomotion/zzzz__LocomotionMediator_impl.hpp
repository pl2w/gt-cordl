#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionMediator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionMediator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionMediator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRBodyTransformer_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator.get_xrOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::XR::CoreUtils::XROrigin> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::get_xrOrigin)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb446fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"get_xrOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator.set_xrOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::*)(::Unity::XR::CoreUtils::XROrigin*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::set_xrOrigin)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb446fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"set_xrOrigin", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator.get_bodyTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::get_bodyTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb446ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"get_bodyTransformer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb447000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::Update)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0xb447058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator.TryPrepareLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::TryPrepareLocomotion)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb447574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"TryPrepareLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator.TryStartLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::TryStartLocomotion)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb447704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"TryStartLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator.TryEndLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::TryEndLocomotion)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb447800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"TryEndLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator.ChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::ChangeState)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4474f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"ChangeState", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator.GetProviderLocomotionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::GetProviderLocomotionState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb447680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"GetProviderLocomotionState", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb447a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::__cordl_internal_get_m_XRBodyTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XRBodyTransformer;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::__cordl_internal_get_m_XRBodyTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XRBodyTransformer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::__cordl_internal_set_m_XRBodyTransformer(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XRBodyTransformer = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::__cordl_internal_get_m_ProviderDataMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderDataMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::__cordl_internal_get_m_ProviderDataMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderDataMap;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::__cordl_internal_set_m_ProviderDataMap(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProviderDataMap = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::setStaticF_s_ProvidersToRemove(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*, "s_ProvidersToRemove", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::getStaticF_s_ProvidersToRemove()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*, "s_ProvidersToRemove", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>();
}
inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::get_xrOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"get_xrOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::XR::CoreUtils::XROrigin>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::set_xrOrigin(::Unity::XR::CoreUtils::XROrigin*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"set_xrOrigin", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::get_bodyTransformer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"get_bodyTransformer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::TryPrepareLocomotion(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"TryPrepareLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, provider);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::TryStartLocomotion(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"TryStartLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, provider);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::TryEndLocomotion(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"TryEndLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::ChangeState(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*  providerData, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"ChangeState", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, providerData, state);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::GetProviderLocomotionState(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {"GetProviderLocomotionState", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator* UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator::LocomotionMediator()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb447678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData::__cordl_internal_set_state(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData::__cordl_internal_get_locomotionEndFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionEndFrame;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData::__cordl_internal_get_locomotionEndFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionEndFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData::__cordl_internal_set_locomotionEndFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locomotionEndFrame = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData* UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator_LocomotionProviderData::LocomotionMediator_LocomotionProviderData()   {
}
