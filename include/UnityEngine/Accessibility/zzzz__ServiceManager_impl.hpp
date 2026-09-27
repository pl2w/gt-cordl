#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/ServiceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__IService_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__ServiceManager_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Accessibility/zzzz__IService_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::ServiceManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::ServiceManager::*)()>(&::UnityEngine::Accessibility::ServiceManager::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb51c494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::ServiceManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::ServiceManager.UpdateServices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::ServiceManager::*)(bool)>(&::UnityEngine::Accessibility::ServiceManager::UpdateServices)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb51d554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::ServiceManager*>(),
                        {"UpdateServices", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::ServiceManager.ScreenReaderStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::ServiceManager::*)(bool)>(&::UnityEngine::Accessibility::ServiceManager::ScreenReaderStatusChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb51d758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::ServiceManager*>(),
                        {"ScreenReaderStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::UnityEngine::Accessibility::IService*>*& UnityEngine::Accessibility::ServiceManager::__cordl_internal_get_m_Services()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Services;
}
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::UnityEngine::Accessibility::IService*>* const& UnityEngine::Accessibility::ServiceManager::__cordl_internal_get_m_Services() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Services;
}
constexpr void UnityEngine::Accessibility::ServiceManager::__cordl_internal_set_m_Services(::System::Collections::Generic::IDictionary_2<::System::Type*,::UnityEngine::Accessibility::IService*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Services = value;
}
inline void UnityEngine::Accessibility::ServiceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::ServiceManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Accessibility::IService*>)
inline T UnityEngine::Accessibility::ServiceManager::GetService()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Accessibility::ServiceManager*>(),
                    {"GetService", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Accessibility::IService*>)
inline void UnityEngine::Accessibility::ServiceManager::StopService()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Accessibility::ServiceManager*>(),
                    {"StopService", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::ServiceManager::UpdateServices(bool  isScreenReaderEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::ServiceManager*>(),
                        {"UpdateServices", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isScreenReaderEnabled);
}
inline void UnityEngine::Accessibility::ServiceManager::ScreenReaderStatusChanged(bool  isScreenReaderEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::ServiceManager*>(),
                        {"ScreenReaderStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isScreenReaderEnabled);
}
inline ::UnityEngine::Accessibility::ServiceManager* UnityEngine::Accessibility::ServiceManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Accessibility::ServiceManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::ServiceManager::ServiceManager()   {
}
