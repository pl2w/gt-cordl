#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/MicAmplifierFloat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__MicAmplifierFloat_def.hpp"
#include "Photon/Voice/zzzz__IProcessor_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.get_AmplificationFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::get_AmplificationFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7892cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"get_AmplificationFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.set_AmplificationFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)(float_t)>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::set_AmplificationFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7892d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"set_AmplificationFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.get_BoostValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::get_BoostValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7892dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"get_BoostValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.set_BoostValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)(float_t)>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::set_BoostValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7892e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"set_BoostValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.get_MaxBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::get_MaxBefore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7892ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"get_MaxBefore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.set_MaxBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)(float_t)>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::set_MaxBefore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7892f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"set_MaxBefore", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.get_MaxAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::get_MaxAfter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7892fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"get_MaxAfter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.set_MaxAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)(float_t)>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::set_MaxAfter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa789304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"set_MaxAfter", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.get_Disabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::get_Disabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78930c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"get_Disabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.set_Disabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)(bool)>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::set_Disabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa789314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"set_Disabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)(float_t, float_t)>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa789260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)(::ArrayW<float_t>)>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::Process)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa78931c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7893a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_get__AmplificationFactor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AmplificationFactor_k__BackingField;
}
constexpr float_t const& Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_get__AmplificationFactor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AmplificationFactor_k__BackingField;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_set__AmplificationFactor_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AmplificationFactor_k__BackingField = value;
}
constexpr float_t& Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_get__BoostValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoostValue_k__BackingField;
}
constexpr float_t const& Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_get__BoostValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoostValue_k__BackingField;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_set__BoostValue_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BoostValue_k__BackingField = value;
}
constexpr float_t& Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_get__MaxBefore_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxBefore_k__BackingField;
}
constexpr float_t const& Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_get__MaxBefore_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxBefore_k__BackingField;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_set__MaxBefore_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxBefore_k__BackingField = value;
}
constexpr float_t& Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_get__MaxAfter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxAfter_k__BackingField;
}
constexpr float_t const& Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_get__MaxAfter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxAfter_k__BackingField;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_set__MaxAfter_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxAfter_k__BackingField = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_get__Disabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Disabled_k__BackingField;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_get__Disabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Disabled_k__BackingField;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::__cordl_internal_set__Disabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Disabled_k__BackingField = value;
}
inline float_t Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::get_AmplificationFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"get_AmplificationFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::set_AmplificationFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"set_AmplificationFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::get_BoostValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"get_BoostValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::set_BoostValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"set_BoostValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::get_MaxBefore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"get_MaxBefore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::set_MaxBefore(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"set_MaxBefore", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::get_MaxAfter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"get_MaxAfter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::set_MaxAfter(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"set_MaxAfter", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::get_Disabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"get_Disabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::set_Disabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"set_Disabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::_ctor(float_t  amplificationFactor, float_t  boostValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amplificationFactor, boostValue);
}
inline ::ArrayW<float_t> Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::Process(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method, buf);
}
inline void Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat* Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::New_ctor(float_t  amplificationFactor, float_t  boostValue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat*>(amplificationFactor, boostValue));
}
/// @brief Convert operator to "::Photon::Voice::IProcessor_1<float_t>"
constexpr  Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::operator ::Photon::Voice::IProcessor_1<float_t>*() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IProcessor_1<float_t>"
constexpr ::Photon::Voice::IProcessor_1<float_t>* Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::i___Photon__Voice__IProcessor_1_float_t_() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::MicAmplifierFloat::MicAmplifierFloat()   {
}
