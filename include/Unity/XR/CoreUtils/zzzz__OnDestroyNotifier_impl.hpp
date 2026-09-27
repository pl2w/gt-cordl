#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/OnDestroyNotifier.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__OnDestroyNotifier_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::OnDestroyNotifier.get_Destroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* (::Unity::XR::CoreUtils::OnDestroyNotifier::*)()>(&::Unity::XR::CoreUtils::OnDestroyNotifier::get_Destroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3f8a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::OnDestroyNotifier*>(),
                        {"get_Destroyed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::OnDestroyNotifier.set_Destroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::OnDestroyNotifier::*)(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*)>(&::Unity::XR::CoreUtils::OnDestroyNotifier::set_Destroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3f8a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::OnDestroyNotifier*>(),
                        {"set_Destroyed", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::OnDestroyNotifier.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::OnDestroyNotifier::*)()>(&::Unity::XR::CoreUtils::OnDestroyNotifier::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb3f8a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::OnDestroyNotifier*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::OnDestroyNotifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::OnDestroyNotifier::*)()>(&::Unity::XR::CoreUtils::OnDestroyNotifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3f8a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::OnDestroyNotifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*& Unity::XR::CoreUtils::OnDestroyNotifier::__cordl_internal_get__Destroyed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Destroyed_k__BackingField;
}
constexpr ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* const& Unity::XR::CoreUtils::OnDestroyNotifier::__cordl_internal_get__Destroyed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Destroyed_k__BackingField;
}
constexpr void Unity::XR::CoreUtils::OnDestroyNotifier::__cordl_internal_set__Destroyed_k__BackingField(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Destroyed_k__BackingField = value;
}
inline ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* Unity::XR::CoreUtils::OnDestroyNotifier::get_Destroyed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::OnDestroyNotifier*>(),
                        {"get_Destroyed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::OnDestroyNotifier::set_Destroyed(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::OnDestroyNotifier*>(),
                        {"set_Destroyed", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::OnDestroyNotifier::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::OnDestroyNotifier*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::OnDestroyNotifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::OnDestroyNotifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::OnDestroyNotifier* Unity::XR::CoreUtils::OnDestroyNotifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::OnDestroyNotifier*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::OnDestroyNotifier::OnDestroyNotifier()   {
}
