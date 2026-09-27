#pragma once
// IWYU pragma private; include "System/Net/InterlockedGate.hpp"
#include "System/Net/zzzz__InterlockedGate_def.hpp"
//  Writing Method size for method: ::System::Net::InterlockedGate.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::InterlockedGate::*)()>(&::System::Net::InterlockedGate::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac5a264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::InterlockedGate.Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::InterlockedGate::*)(bool)>(&::System::Net::InterlockedGate::Trigger)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xac5a26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"Trigger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::InterlockedGate.StartTriggering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::InterlockedGate::*)(bool)>(&::System::Net::InterlockedGate::StartTriggering)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xac5a2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"StartTriggering", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::InterlockedGate.FinishTriggering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::InterlockedGate::*)()>(&::System::Net::InterlockedGate::FinishTriggering)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac5a33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"FinishTriggering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::InterlockedGate.StartSignaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::InterlockedGate::*)(bool)>(&::System::Net::InterlockedGate::StartSignaling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xac5a390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"StartSignaling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::InterlockedGate.FinishSignaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::InterlockedGate::*)()>(&::System::Net::InterlockedGate::FinishSignaling)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac5a3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"FinishSignaling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::InterlockedGate.Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::InterlockedGate::*)()>(&::System::Net::InterlockedGate::Complete)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac5a44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"Complete", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::InterlockedGate::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool System::Net::InterlockedGate::Trigger(bool  exclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"Trigger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, exclusive);
}
inline bool System::Net::InterlockedGate::StartTriggering(bool  exclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"StartTriggering", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, exclusive);
}
inline void System::Net::InterlockedGate::FinishTriggering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"FinishTriggering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool System::Net::InterlockedGate::StartSignaling(bool  exclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"StartSignaling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, exclusive);
}
inline void System::Net::InterlockedGate::FinishSignaling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"FinishSignaling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool System::Net::InterlockedGate::Complete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::InterlockedGate>(),
                        {"Complete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_State", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::InterlockedGate::InterlockedGate(int32_t  m_State) noexcept  {
this->m_State = m_State;
}
// Ctor Parameters []
constexpr ::System::Net::InterlockedGate::InterlockedGate()   {
}
