#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InteractorUnregisteredEventArgs.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractorUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs.get_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* (::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::get_interactorObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40861c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs.set_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::set_interactorObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs.get_interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> (::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::get_interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40862c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>(),
                        {"get_interactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs.set_interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::set_interactor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb408634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>(),
                        {"set_interactor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::__cordl_internal_get__interactorObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorObject_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::__cordl_internal_get__interactorObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorObject_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::__cordl_internal_set__interactorObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactorObject_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::get_interactorObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::get_interactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>(),
                        {"get_interactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::set_interactor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>(),
                        {"set_interactor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs::InteractorUnregisteredEventArgs()   {
}
