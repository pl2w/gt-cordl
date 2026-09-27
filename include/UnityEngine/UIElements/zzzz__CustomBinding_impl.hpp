#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CustomBinding.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CustomBinding_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomBinding_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CustomBinding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CustomBinding::*)()>(&::UnityEngine::UIElements::CustomBinding::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb7249f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::CustomBinding*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CustomBinding.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingResult (::UnityEngine::UIElements::CustomBinding::*)(::by_ref<::UnityEngine::UIElements::BindingContext>)>(&::UnityEngine::UIElements::CustomBinding::Update)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb724a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::CustomBinding*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::CustomBinding*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::CustomBinding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::CustomBinding*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BindingResult UnityEngine::UIElements::CustomBinding::Update(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::CustomBinding*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingResult>(this, ___internal_method, context);
}
inline ::UnityEngine::UIElements::CustomBinding* UnityEngine::UIElements::CustomBinding::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::CustomBinding*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CustomBinding::CustomBinding()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::CustomBinding_UxmlSerializedData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CustomBinding_UxmlSerializedData::*)()>(&::UnityEngine::UIElements::CustomBinding_UxmlSerializedData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb724a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::CustomBinding_UxmlSerializedData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::CustomBinding_UxmlSerializedData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::CustomBinding_UxmlSerializedData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::CustomBinding_UxmlSerializedData* UnityEngine::UIElements::CustomBinding_UxmlSerializedData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::CustomBinding_UxmlSerializedData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CustomBinding_UxmlSerializedData::CustomBinding_UxmlSerializedData()   {
}
