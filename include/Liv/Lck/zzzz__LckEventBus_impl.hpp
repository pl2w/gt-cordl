#pragma once
// IWYU pragma private; include "Liv/Lck/LckEventBus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckEventBus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckEventBus::*)()>(&::Liv::Lck::LckEventBus::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9ce124c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEventBus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*& Liv::Lck::LckEventBus::__cordl_internal_get__delegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delegates;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>* const& Liv::Lck::LckEventBus::__cordl_internal_get__delegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delegates;
}
constexpr void Liv::Lck::LckEventBus::__cordl_internal_set__delegates(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delegates = value;
}
inline void Liv::Lck::LckEventBus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckEventBus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Liv::Lck::LckEventBus::AddListener(::System::Action_1<T>*  listener)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckEventBus*>(),
                    {"AddListener", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
template<typename T>
inline void Liv::Lck::LckEventBus::RemoveListener(::System::Action_1<T>*  listener)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckEventBus*>(),
                    {"RemoveListener", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
template<typename T>
inline void Liv::Lck::LckEventBus::Trigger(T  eventData)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckEventBus*>(),
                    {"Trigger", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
/// @brief [Preserve]
inline ::Liv::Lck::LckEventBus* Liv::Lck::LckEventBus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckEventBus*>());
}
/// @brief Convert operator to "::Liv::Lck::ILckEventBus"
constexpr  Liv::Lck::LckEventBus::operator ::Liv::Lck::ILckEventBus*() noexcept {
return static_cast<::Liv::Lck::ILckEventBus*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckEventBus"
constexpr ::Liv::Lck::ILckEventBus* Liv::Lck::LckEventBus::i___Liv__Lck__ILckEventBus() noexcept {
return static_cast<::Liv::Lck::ILckEventBus*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckEventBus::LckEventBus()   {
}
