#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RandomWeightedOutput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__RandomWeightedOutput_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__NetworkedRandomProvider_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RandomWeightedOutput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::RandomWeightedOutput.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RandomWeightedOutput::*)()>(&::GorillaTag::Cosmetics::RandomWeightedOutput::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d9f760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RandomWeightedOutput*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RandomWeightedOutput.PickNextRandom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RandomWeightedOutput::*)()>(&::GorillaTag::Cosmetics::RandomWeightedOutput::PickNextRandom)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5d9f804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RandomWeightedOutput*>(),
                        {"PickNextRandom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RandomWeightedOutput.GetDeterministicPickIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Cosmetics::RandomWeightedOutput::*)()>(&::GorillaTag::Cosmetics::RandomWeightedOutput::GetDeterministicPickIndex)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5d9f950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RandomWeightedOutput*>(),
                        {"GetDeterministicPickIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RandomWeightedOutput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RandomWeightedOutput::*)()>(&::GorillaTag::Cosmetics::RandomWeightedOutput::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d9fd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RandomWeightedOutput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider>& GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_get_networkProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkProvider;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider> const& GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_get_networkProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkProvider;
}
constexpr void GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_set_networkProvider(::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkProvider = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*>*& GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_get_outputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputs;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*>* const& GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_get_outputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputs;
}
constexpr void GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_set_outputs(::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputs = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_get_onAnyPick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAnyPick;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_get_onAnyPick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAnyPick;
}
constexpr void GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_set_onAnyPick(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onAnyPick = value;
}
constexpr bool& GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_get_debugLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLog;
}
constexpr bool const& GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_get_debugLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLog;
}
constexpr void GorillaTag::Cosmetics::RandomWeightedOutput::__cordl_internal_set_debugLog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugLog = value;
}
inline void GorillaTag::Cosmetics::RandomWeightedOutput::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RandomWeightedOutput*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RandomWeightedOutput::PickNextRandom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RandomWeightedOutput*>(),
                        {"PickNextRandom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTag::Cosmetics::RandomWeightedOutput::GetDeterministicPickIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RandomWeightedOutput*>(),
                        {"GetDeterministicPickIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RandomWeightedOutput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RandomWeightedOutput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::RandomWeightedOutput* GorillaTag::Cosmetics::RandomWeightedOutput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::RandomWeightedOutput*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::RandomWeightedOutput::RandomWeightedOutput()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::*)()>(&::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d9fde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr float_t& GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_get_weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr float_t const& GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_get_weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weight;
}
constexpr void GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_set_weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weight = value;
}
constexpr bool& GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_get_enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr bool const& GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_get_enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr void GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_set_enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabled = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_get_onPick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPick;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_get_onPick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPick;
}
constexpr void GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::__cordl_internal_set_onPick(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPick = value;
}
inline void GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput* GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput::RandomWeightedOutput_WeightedOutput()   {
}
