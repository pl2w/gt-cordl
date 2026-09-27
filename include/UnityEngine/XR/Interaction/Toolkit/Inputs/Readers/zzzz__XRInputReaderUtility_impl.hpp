#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputReaderUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputReaderUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__XRInputHapticImpulseProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputButtonReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility.SetInputProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*, ::UnityEngine::Behaviour*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility::SetInputProperty)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb4ca3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility*>(),
                        {"SetInputProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(), ::i2c::type_of<::UnityEngine::Behaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility.SetInputProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*, ::UnityEngine::Behaviour*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility::SetInputProperty)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb4c3734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility*>(),
                        {"SetInputProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(), ::i2c::type_of<::UnityEngine::Behaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility.SetInputProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*, ::UnityEngine::Behaviour*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility::SetInputProperty)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb4ca578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility*>(),
                        {"SetInputProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(), ::i2c::type_of<::UnityEngine::Behaviour*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility::SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*  value, ::UnityEngine::Behaviour*  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility*>(),
                        {"SetInputProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>(), ::i2c::type_of<::UnityEngine::Behaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, property, value, behavior);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility::SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value, ::UnityEngine::Behaviour*  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility*>(),
                        {"SetInputProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(), ::i2c::type_of<::UnityEngine::Behaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, property, value, behavior);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility::SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*  value, ::UnityEngine::Behaviour*  behavior)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility*>(),
                    {"SetInputProperty", {::i2c::class_of<TValue>()}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>(), ::i2c::type_of<::UnityEngine::Behaviour*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, property, value, behavior);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility::SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value, ::UnityEngine::Behaviour*  behavior, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  buttonReaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility*>(),
                        {"SetInputProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(), ::i2c::type_of<::UnityEngine::Behaviour*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, property, value, behavior, buttonReaders);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility::SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*  value, ::UnityEngine::Behaviour*  behavior, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  valueReaders)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility*>(),
                    {"SetInputProperty", {::i2c::class_of<TValue>()}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>(), ::i2c::type_of<::UnityEngine::Behaviour*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, property, value, behavior, valueReaders);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility::XRInputReaderUtility()   {
}
