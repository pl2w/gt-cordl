#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/InputManagerProvider_ButtonEventsIterator.hpp"
#include "UnityEngine/InputForUI/zzzz__InputManagerProvider_ButtonEventsIterator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputManagerProvider_ButtonEventsIterator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputManagerProvider_ButtonEventsIterator::*)()>(&::GlobalNamespace::InputManagerProvider_ButtonEventsIterator::get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb664d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputManagerProvider_ButtonEventsIterator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputManagerProvider_ButtonEventsIterator::*)()>(&::GlobalNamespace::InputManagerProvider_ButtonEventsIterator::MoveNext)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb664e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputManagerProvider_ButtonEventsIterator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputManagerProvider_ButtonEventsIterator::*)()>(&::GlobalNamespace::InputManagerProvider_ButtonEventsIterator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb665998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputManagerProvider_ButtonEventsIterator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::InputManagerProvider_ButtonEventsIterator::*)()>(&::GlobalNamespace::InputManagerProvider_ButtonEventsIterator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb6659a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputManagerProvider_ButtonEventsIterator.FromState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator (*)(bool, bool, bool, bool)>(&::GlobalNamespace::InputManagerProvider_ButtonEventsIterator::FromState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb664d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator>(),
                        {"FromState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::InputManagerProvider_ButtonEventsIterator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::InputManagerProvider_ButtonEventsIterator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::InputManagerProvider_ButtonEventsIterator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::InputManagerProvider_ButtonEventsIterator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::GlobalNamespace::InputManagerProvider_ButtonEventsIterator GlobalNamespace::InputManagerProvider_ButtonEventsIterator::FromState(bool  previous, bool  down, bool  up, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator>(),
                        {"FromState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputManagerProvider_ButtonEventsIterator>(nullptr, ___internal_method, previous, down, up, current);
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::InputManagerProvider_ButtonEventsIterator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::InputManagerProvider_ButtonEventsIterator::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_mask", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bit", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputManagerProvider_ButtonEventsIterator::InputManagerProvider_ButtonEventsIterator(uint32_t  _mask, int32_t  _bit) noexcept  {
this->_mask = _mask;
this->_bit = _bit;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputManagerProvider_ButtonEventsIterator::InputManagerProvider_ButtonEventsIterator()   {
}
