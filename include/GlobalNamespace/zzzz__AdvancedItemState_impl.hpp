#pragma once
// IWYU pragma private; include "GlobalNamespace/AdvancedItemState.hpp"
#include "GlobalNamespace/zzzz__AdvancedItemState_PointType_impl.hpp"
#include "GlobalNamespace/zzzz__LimitAxis_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__AdvancedItemState_def.hpp"
#include "GlobalNamespace/zzzz__AdvancedItemState_PointType_def.hpp"
#include "GlobalNamespace/zzzz__AdvancedItemState_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AdvancedItemState.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdvancedItemState::*)()>(&::GlobalNamespace::AdvancedItemState::Encode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5767838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"Encode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedItemState.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdvancedItemState::*)()>(&::GlobalNamespace::AdvancedItemState::Decode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5767a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"Decode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedItemState.GetQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::AdvancedItemState::*)()>(&::GlobalNamespace::AdvancedItemState::GetQuaternion)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5767c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"GetQuaternion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedItemState.DecodeAdvancedItemState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_4<int32_t,float_t,float_t,float_t> (::GlobalNamespace::AdvancedItemState::*)(int32_t)>(&::GlobalNamespace::AdvancedItemState::DecodeAdvancedItemState)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5767ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"DecodeAdvancedItemState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedItemState.get_EncodedDeltaRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AdvancedItemState::*)()>(&::GlobalNamespace::AdvancedItemState::get_EncodedDeltaRotation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5767d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"get_EncodedDeltaRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedItemState.GetEncodedDeltaRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AdvancedItemState::*)()>(&::GlobalNamespace::AdvancedItemState::GetEncodedDeltaRotation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5767d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"GetEncodedDeltaRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedItemState.DecodeDeltaRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdvancedItemState::*)(float_t, bool)>(&::GlobalNamespace::AdvancedItemState::DecodeDeltaRotation)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5767da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"DecodeDeltaRotation", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedItemState.EncodeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AdvancedItemState::*)()>(&::GlobalNamespace::AdvancedItemState::EncodeData)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5767850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"EncodeData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedItemState.DecodeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AdvancedItemState* (::GlobalNamespace::AdvancedItemState::*)(int32_t)>(&::GlobalNamespace::AdvancedItemState::DecodeData)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5767a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"DecodeData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedItemState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdvancedItemState::*)()>(&::GlobalNamespace::AdvancedItemState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5767eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AdvancedItemState::__cordl_internal_get__encodedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encodedValue;
}
constexpr int32_t const& GlobalNamespace::AdvancedItemState::__cordl_internal_get__encodedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encodedValue;
}
constexpr void GlobalNamespace::AdvancedItemState::__cordl_internal_set__encodedValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encodedValue = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::AdvancedItemState::__cordl_internal_get_angleVectorWhereUpIsStandard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleVectorWhereUpIsStandard;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::AdvancedItemState::__cordl_internal_get_angleVectorWhereUpIsStandard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleVectorWhereUpIsStandard;
}
constexpr void GlobalNamespace::AdvancedItemState::__cordl_internal_set_angleVectorWhereUpIsStandard(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleVectorWhereUpIsStandard = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::AdvancedItemState::__cordl_internal_get_deltaRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::AdvancedItemState::__cordl_internal_get_deltaRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaRotation;
}
constexpr void GlobalNamespace::AdvancedItemState::__cordl_internal_set_deltaRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaRotation = value;
}
constexpr int32_t& GlobalNamespace::AdvancedItemState::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::AdvancedItemState::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::AdvancedItemState::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr ::GlobalNamespace::AdvancedItemState_PreData*& GlobalNamespace::AdvancedItemState::__cordl_internal_get_preData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preData;
}
constexpr ::GlobalNamespace::AdvancedItemState_PreData* const& GlobalNamespace::AdvancedItemState::__cordl_internal_get_preData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preData;
}
constexpr void GlobalNamespace::AdvancedItemState::__cordl_internal_set_preData(::GlobalNamespace::AdvancedItemState_PreData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preData = value;
}
constexpr ::GlobalNamespace::LimitAxis& GlobalNamespace::AdvancedItemState::__cordl_internal_get_limitAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitAxis;
}
constexpr ::GlobalNamespace::LimitAxis const& GlobalNamespace::AdvancedItemState::__cordl_internal_get_limitAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitAxis;
}
constexpr void GlobalNamespace::AdvancedItemState::__cordl_internal_set_limitAxis(::GlobalNamespace::LimitAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitAxis = value;
}
constexpr bool& GlobalNamespace::AdvancedItemState::__cordl_internal_get_reverseGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseGrip;
}
constexpr bool const& GlobalNamespace::AdvancedItemState::__cordl_internal_get_reverseGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseGrip;
}
constexpr void GlobalNamespace::AdvancedItemState::__cordl_internal_set_reverseGrip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseGrip = value;
}
constexpr float_t& GlobalNamespace::AdvancedItemState::__cordl_internal_get_angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr float_t const& GlobalNamespace::AdvancedItemState::__cordl_internal_get_angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr void GlobalNamespace::AdvancedItemState::__cordl_internal_set_angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle = value;
}
inline void GlobalNamespace::AdvancedItemState::Encode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"Encode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AdvancedItemState::Decode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"Decode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::AdvancedItemState::GetQuaternion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"GetQuaternion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::System::ValueTuple_4<int32_t,float_t,float_t,float_t> GlobalNamespace::AdvancedItemState::DecodeAdvancedItemState(int32_t  encodedValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"DecodeAdvancedItemState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_4<int32_t,float_t,float_t,float_t>>(this, ___internal_method, encodedValue);
}
inline float_t GlobalNamespace::AdvancedItemState::get_EncodedDeltaRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"get_EncodedDeltaRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AdvancedItemState::GetEncodedDeltaRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"GetEncodedDeltaRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AdvancedItemState::DecodeDeltaRotation(float_t  encodedDelta, bool  isFlipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"DecodeDeltaRotation", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encodedDelta, isFlipped);
}
inline int32_t GlobalNamespace::AdvancedItemState::EncodeData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"EncodeData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::AdvancedItemState* GlobalNamespace::AdvancedItemState::DecodeData(int32_t  encoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {"DecodeData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AdvancedItemState*>(this, ___internal_method, encoded);
}
inline void GlobalNamespace::AdvancedItemState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AdvancedItemState* GlobalNamespace::AdvancedItemState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AdvancedItemState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AdvancedItemState::AdvancedItemState()   {
}
//  Writing Method size for method: ::GlobalNamespace::AdvancedItemState_PreData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdvancedItemState_PreData::*)()>(&::GlobalNamespace::AdvancedItemState_PreData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5767ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState_PreData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AdvancedItemState_PreData::__cordl_internal_get_distAlongLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distAlongLine;
}
constexpr float_t const& GlobalNamespace::AdvancedItemState_PreData::__cordl_internal_get_distAlongLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distAlongLine;
}
constexpr void GlobalNamespace::AdvancedItemState_PreData::__cordl_internal_set_distAlongLine(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distAlongLine = value;
}
constexpr ::GlobalNamespace::AdvancedItemState_PointType& GlobalNamespace::AdvancedItemState_PreData::__cordl_internal_get_pointType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointType;
}
constexpr ::GlobalNamespace::AdvancedItemState_PointType const& GlobalNamespace::AdvancedItemState_PreData::__cordl_internal_get_pointType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointType;
}
constexpr void GlobalNamespace::AdvancedItemState_PreData::__cordl_internal_set_pointType(::GlobalNamespace::AdvancedItemState_PointType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointType = value;
}
inline void GlobalNamespace::AdvancedItemState_PreData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedItemState_PreData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AdvancedItemState_PreData* GlobalNamespace::AdvancedItemState_PreData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AdvancedItemState_PreData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AdvancedItemState_PreData::AdvancedItemState_PreData()   {
}
