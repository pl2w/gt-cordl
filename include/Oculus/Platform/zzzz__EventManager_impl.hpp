#pragma once
// IWYU pragma private; include "Oculus/Platform/EventManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__EventManager_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::EventManager.SendUnifiedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::Oculus::Platform::EventManager::SendUnifiedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa539440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::EventManager*>(),
                        {"SendUnifiedEvent", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::EventManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::EventManager::*)()>(&::Oculus::Platform::EventManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa539444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::EventManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Platform::EventManager::setStaticF_projectName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "projectName", ::Oculus::Platform::EventManager*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Platform::EventManager::getStaticF_projectName()  {
return ::cordl_internals::getStaticField<::StringW, "projectName", ::Oculus::Platform::EventManager*>();
}
inline void Oculus::Platform::EventManager::setStaticF_projectGUID(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "projectGUID", ::Oculus::Platform::EventManager*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Platform::EventManager::getStaticF_projectGUID()  {
return ::cordl_internals::getStaticField<::StringW, "projectGUID", ::Oculus::Platform::EventManager*>();
}
inline void Oculus::Platform::EventManager::SendUnifiedEvent(bool  isEssential, ::StringW  productType, ::StringW  eventName, ::StringW  event_metadata_json, ::StringW  event_entrypoint, ::StringW  event_type, ::StringW  event_target, ::StringW  error_msg, ::StringW  is_internal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::EventManager*>(),
                        {"SendUnifiedEvent", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isEssential, productType, eventName, event_metadata_json, event_entrypoint, event_type, event_target, error_msg, is_internal);
}
inline void Oculus::Platform::EventManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::EventManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::EventManager* Oculus::Platform::EventManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::EventManager*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::EventManager::EventManager()   {
}
