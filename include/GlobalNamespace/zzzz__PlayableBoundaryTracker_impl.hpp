#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayableBoundaryTracker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayableBoundaryTracker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryTracker.get_signedDistanceToBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayableBoundaryTracker::*)()>(&::GlobalNamespace::PlayableBoundaryTracker::get_signedDistanceToBoundary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5637510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"get_signedDistanceToBoundary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryTracker.set_signedDistanceToBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryTracker::*)(float_t)>(&::GlobalNamespace::PlayableBoundaryTracker::set_signedDistanceToBoundary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5637518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"set_signedDistanceToBoundary", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryTracker.get_prevSignedDistanceToBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayableBoundaryTracker::*)()>(&::GlobalNamespace::PlayableBoundaryTracker::get_prevSignedDistanceToBoundary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5637520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"get_prevSignedDistanceToBoundary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryTracker.set_prevSignedDistanceToBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryTracker::*)(float_t)>(&::GlobalNamespace::PlayableBoundaryTracker::set_prevSignedDistanceToBoundary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5637528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"set_prevSignedDistanceToBoundary", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryTracker.get_timeSinceCrossingBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayableBoundaryTracker::*)()>(&::GlobalNamespace::PlayableBoundaryTracker::get_timeSinceCrossingBorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5637530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"get_timeSinceCrossingBorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryTracker.set_timeSinceCrossingBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryTracker::*)(float_t)>(&::GlobalNamespace::PlayableBoundaryTracker::set_timeSinceCrossingBorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5637538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"set_timeSinceCrossingBorder", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryTracker.IsInsideZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayableBoundaryTracker::*)()>(&::GlobalNamespace::PlayableBoundaryTracker::IsInsideZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5637540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"IsInsideZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryTracker.UpdateSignedDistanceToBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryTracker::*)(float_t, float_t)>(&::GlobalNamespace::PlayableBoundaryTracker::UpdateSignedDistanceToBoundary)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5636f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"UpdateSignedDistanceToBoundary", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryTracker.ResetValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryTracker::*)()>(&::GlobalNamespace::PlayableBoundaryTracker::ResetValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56334d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"ResetValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryTracker::*)()>(&::GlobalNamespace::PlayableBoundaryTracker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5637550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr float_t& GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_get__signedDistanceToBoundary_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signedDistanceToBoundary_k__BackingField;
}
constexpr float_t const& GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_get__signedDistanceToBoundary_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signedDistanceToBoundary_k__BackingField;
}
constexpr void GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_set__signedDistanceToBoundary_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____signedDistanceToBoundary_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_get__prevSignedDistanceToBoundary_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevSignedDistanceToBoundary_k__BackingField;
}
constexpr float_t const& GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_get__prevSignedDistanceToBoundary_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevSignedDistanceToBoundary_k__BackingField;
}
constexpr void GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_set__prevSignedDistanceToBoundary_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevSignedDistanceToBoundary_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_get__timeSinceCrossingBorder_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceCrossingBorder_k__BackingField;
}
constexpr float_t const& GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_get__timeSinceCrossingBorder_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceCrossingBorder_k__BackingField;
}
constexpr void GlobalNamespace::PlayableBoundaryTracker::__cordl_internal_set__timeSinceCrossingBorder_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSinceCrossingBorder_k__BackingField = value;
}
inline float_t GlobalNamespace::PlayableBoundaryTracker::get_signedDistanceToBoundary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"get_signedDistanceToBoundary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayableBoundaryTracker::set_signedDistanceToBoundary(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"set_signedDistanceToBoundary", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayableBoundaryTracker::get_prevSignedDistanceToBoundary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"get_prevSignedDistanceToBoundary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayableBoundaryTracker::set_prevSignedDistanceToBoundary(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"set_prevSignedDistanceToBoundary", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayableBoundaryTracker::get_timeSinceCrossingBorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"get_timeSinceCrossingBorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayableBoundaryTracker::set_timeSinceCrossingBorder(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"set_timeSinceCrossingBorder", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayableBoundaryTracker::IsInsideZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"IsInsideZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayableBoundaryTracker::UpdateSignedDistanceToBoundary(float_t  newDistance, float_t  elapsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"UpdateSignedDistanceToBoundary", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newDistance, elapsed);
}
inline void GlobalNamespace::PlayableBoundaryTracker::ResetValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {"ResetValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayableBoundaryTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayableBoundaryTracker* GlobalNamespace::PlayableBoundaryTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayableBoundaryTracker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayableBoundaryTracker::PlayableBoundaryTracker()   {
}
