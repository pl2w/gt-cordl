#pragma once
// IWYU pragma private; include "GlobalNamespace/ManipulatableLever.hpp"
#include "GlobalNamespace/zzzz__ManipulatableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "GlobalNamespace/zzzz__ManipulatableLever_def.hpp"
#include "GlobalNamespace/zzzz__ManipulatableLever_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ManipulatableLever.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableLever::*)()>(&::GlobalNamespace::ManipulatableLever::Awake)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x575c5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableLever.ShouldHandDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ManipulatableLever::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableLever::ShouldHandDetach)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x575c5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableLever.OnHeldUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableLever::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::ManipulatableLever::OnHeldUpdate)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x575c694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                    {::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableLever.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableLever::*)(float_t)>(&::GlobalNamespace::ManipulatableLever::SetValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x575c8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {"SetValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableLever.SetNotch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableLever::*)(int32_t)>(&::GlobalNamespace::ManipulatableLever::SetNotch)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x575c93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {"SetNotch", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableLever.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ManipulatableLever::*)()>(&::GlobalNamespace::ManipulatableLever::GetValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x575c9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {"GetValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableLever.GetNotch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ManipulatableLever::*)()>(&::GlobalNamespace::ManipulatableLever::GetNotch)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x575ca34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {"GetNotch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManipulatableLever._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableLever::*)()>(&::GlobalNamespace::ManipulatableLever::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x575cab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ManipulatableLever::__cordl_internal_get_breakDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakDistance;
}
constexpr float_t const& GlobalNamespace::ManipulatableLever::__cordl_internal_get_breakDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakDistance;
}
constexpr void GlobalNamespace::ManipulatableLever::__cordl_internal_set_breakDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakDistance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ManipulatableLever::__cordl_internal_get_leverGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leverGrip;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ManipulatableLever::__cordl_internal_get_leverGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leverGrip;
}
constexpr void GlobalNamespace::ManipulatableLever::__cordl_internal_set_leverGrip(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leverGrip = value;
}
constexpr float_t& GlobalNamespace::ManipulatableLever::__cordl_internal_get_maxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAngle;
}
constexpr float_t const& GlobalNamespace::ManipulatableLever::__cordl_internal_get_maxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAngle;
}
constexpr void GlobalNamespace::ManipulatableLever::__cordl_internal_set_maxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAngle = value;
}
constexpr float_t& GlobalNamespace::ManipulatableLever::__cordl_internal_get_minAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAngle;
}
constexpr float_t const& GlobalNamespace::ManipulatableLever::__cordl_internal_get_minAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAngle;
}
constexpr void GlobalNamespace::ManipulatableLever::__cordl_internal_set_minAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minAngle = value;
}
constexpr ::ArrayW<::GlobalNamespace::ManipulatableLever_LeverNotch*>& GlobalNamespace::ManipulatableLever::__cordl_internal_get_notches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notches;
}
constexpr ::ArrayW<::GlobalNamespace::ManipulatableLever_LeverNotch*> const& GlobalNamespace::ManipulatableLever::__cordl_internal_get_notches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notches;
}
constexpr void GlobalNamespace::ManipulatableLever::__cordl_internal_set_notches(::ArrayW<::GlobalNamespace::ManipulatableLever_LeverNotch*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notches = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::ManipulatableLever::__cordl_internal_get_localSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpace;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::ManipulatableLever::__cordl_internal_get_localSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localSpace;
}
constexpr void GlobalNamespace::ManipulatableLever::__cordl_internal_set_localSpace(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localSpace = value;
}
inline void GlobalNamespace::ManipulatableLever::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ManipulatableLever::ShouldHandDetach(::UnityEngine::GameObject*  hand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hand);
}
inline void GlobalNamespace::ManipulatableLever::OnHeldUpdate(::UnityEngine::GameObject*  hand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void GlobalNamespace::ManipulatableLever::SetValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {"SetValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ManipulatableLever::SetNotch(int32_t  notchValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {"SetNotch", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notchValue);
}
inline float_t GlobalNamespace::ManipulatableLever::GetValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {"GetValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ManipulatableLever::GetNotch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {"GetNotch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ManipulatableLever::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ManipulatableLever* GlobalNamespace::ManipulatableLever::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ManipulatableLever*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManipulatableLever::ManipulatableLever()   {
}
//  Writing Method size for method: ::GlobalNamespace::ManipulatableLever_LeverNotch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManipulatableLever_LeverNotch::*)()>(&::GlobalNamespace::ManipulatableLever_LeverNotch::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x575cae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever_LeverNotch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ManipulatableLever_LeverNotch::__cordl_internal_get_minAngleValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAngleValue;
}
constexpr float_t const& GlobalNamespace::ManipulatableLever_LeverNotch::__cordl_internal_get_minAngleValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAngleValue;
}
constexpr void GlobalNamespace::ManipulatableLever_LeverNotch::__cordl_internal_set_minAngleValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minAngleValue = value;
}
constexpr float_t& GlobalNamespace::ManipulatableLever_LeverNotch::__cordl_internal_get_maxAngleValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAngleValue;
}
constexpr float_t const& GlobalNamespace::ManipulatableLever_LeverNotch::__cordl_internal_get_maxAngleValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAngleValue;
}
constexpr void GlobalNamespace::ManipulatableLever_LeverNotch::__cordl_internal_set_maxAngleValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAngleValue = value;
}
constexpr int32_t& GlobalNamespace::ManipulatableLever_LeverNotch::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr int32_t const& GlobalNamespace::ManipulatableLever_LeverNotch::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GlobalNamespace::ManipulatableLever_LeverNotch::__cordl_internal_set_value(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void GlobalNamespace::ManipulatableLever_LeverNotch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManipulatableLever_LeverNotch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ManipulatableLever_LeverNotch* GlobalNamespace::ManipulatableLever_LeverNotch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ManipulatableLever_LeverNotch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManipulatableLever_LeverNotch::ManipulatableLever_LeverNotch()   {
}
