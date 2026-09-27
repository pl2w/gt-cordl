#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/DropEventArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__DropEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs.get_selectExitEventArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* (::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::get_selectExitEventArgs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb459450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>(),
                        {"get_selectExitEventArgs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs.set_selectExitEventArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::set_selectExitEventArgs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb459458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>(),
                        {"set_selectExitEventArgs", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb459460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*& UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::__cordl_internal_get__selectExitEventArgs_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectExitEventArgs_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* const& UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::__cordl_internal_get__selectExitEventArgs_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectExitEventArgs_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::__cordl_internal_set__selectExitEventArgs_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectExitEventArgs_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::get_selectExitEventArgs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>(),
                        {"get_selectExitEventArgs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::set_selectExitEventArgs(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>(),
                        {"set_selectExitEventArgs", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs* UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs::DropEventArgs()   {
}
