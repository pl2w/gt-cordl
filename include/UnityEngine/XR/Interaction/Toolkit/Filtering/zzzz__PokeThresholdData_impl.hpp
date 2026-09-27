#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/PokeThresholdData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeAxis_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeThresholdData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeAxis_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData.get_pokeDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::get_pokeDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a5904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"get_pokeDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData.set_pokeDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::*)(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::set_pokeDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a590c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"set_pokeDirection", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData.get_interactionDepthOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::get_interactionDepthOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a5914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"get_interactionDepthOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData.set_interactionDepthOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::set_interactionDepthOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a591c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"set_interactionDepthOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData.get_enablePokeAngleThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::get_enablePokeAngleThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a5924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"get_enablePokeAngleThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData.set_enablePokeAngleThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::set_enablePokeAngleThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a592c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"set_enablePokeAngleThreshold", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData.get_pokeAngleThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::get_pokeAngleThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a5934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"get_pokeAngleThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData.set_pokeAngleThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::set_pokeAngleThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a593c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"set_pokeAngleThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData.GetSelectEntranceVectorDotThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::GetSelectEntranceVectorDotThreshold)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4a5944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"GetSelectEntranceVectorDotThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4a5958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis& UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_get_m_PokeDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeDirection;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis const& UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_get_m_PokeDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeDirection;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_set_m_PokeDirection(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeDirection = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_get_m_InteractionDepthOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionDepthOffset;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_get_m_InteractionDepthOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionDepthOffset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_set_m_InteractionDepthOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionDepthOffset = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_get_m_EnablePokeAngleThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnablePokeAngleThreshold;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_get_m_EnablePokeAngleThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnablePokeAngleThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_set_m_EnablePokeAngleThreshold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnablePokeAngleThreshold = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_get_m_PokeAngleThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeAngleThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_get_m_PokeAngleThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeAngleThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::__cordl_internal_set_m_PokeAngleThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeAngleThreshold = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::get_pokeDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"get_pokeDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::set_pokeDirection(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"set_pokeDirection", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::get_interactionDepthOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"get_interactionDepthOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::set_interactionDepthOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"set_interactionDepthOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::get_enablePokeAngleThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"get_enablePokeAngleThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::set_enablePokeAngleThreshold(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"set_enablePokeAngleThreshold", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::get_pokeAngleThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"get_pokeAngleThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::set_pokeAngleThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"set_pokeAngleThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::GetSelectEntranceVectorDotThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {"GetSelectEntranceVectorDotThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData* UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData::PokeThresholdData()   {
}
