#pragma once
// IWYU pragma private; include "Pathfinding/RadiusModifier.hpp"
#include "Pathfinding/zzzz__MonoModifier_impl.hpp"
#include "Pathfinding/zzzz__RadiusModifier_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__RadiusModifier_TangentType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RadiusModifier.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::RadiusModifier::*)()>(&::Pathfinding::RadiusModifier::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea1314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                    {::i2c::class_of<::Pathfinding::RadiusModifier*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RadiusModifier.CalculateCircleInner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RadiusModifier::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Pathfinding::RadiusModifier::CalculateCircleInner)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5ea131c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {"CalculateCircleInner", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RadiusModifier.CalculateCircleOuter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RadiusModifier::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Pathfinding::RadiusModifier::CalculateCircleOuter)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5ea1464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {"CalculateCircleOuter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RadiusModifier.CalculateTangentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RadiusModifier_TangentType (::Pathfinding::RadiusModifier::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::RadiusModifier::CalculateTangentType)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ea15d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {"CalculateTangentType", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RadiusModifier.CalculateTangentTypeSimple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RadiusModifier_TangentType (::Pathfinding::RadiusModifier::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::RadiusModifier::CalculateTangentTypeSimple)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ea167c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {"CalculateTangentTypeSimple", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RadiusModifier.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RadiusModifier::*)(::Pathfinding::Path*)>(&::Pathfinding::RadiusModifier::Apply)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ea16c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                    {::i2c::class_of<::Pathfinding::RadiusModifier*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RadiusModifier.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (::Pathfinding::RadiusModifier::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Pathfinding::RadiusModifier::Apply)> {
  constexpr static std::size_t size = 0xd3c;
  constexpr static std::size_t addrs = 0x5ea1770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {"Apply", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RadiusModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RadiusModifier::*)()>(&::Pathfinding::RadiusModifier::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ea24ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::RadiusModifier::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& Pathfinding::RadiusModifier::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void Pathfinding::RadiusModifier::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr float_t& Pathfinding::RadiusModifier::__cordl_internal_get_detail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detail;
}
constexpr float_t const& Pathfinding::RadiusModifier::__cordl_internal_get_detail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detail;
}
constexpr void Pathfinding::RadiusModifier::__cordl_internal_set_detail(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detail = value;
}
constexpr ::ArrayW<float_t>& Pathfinding::RadiusModifier::__cordl_internal_get_radi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radi;
}
constexpr ::ArrayW<float_t> const& Pathfinding::RadiusModifier::__cordl_internal_get_radi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radi;
}
constexpr void Pathfinding::RadiusModifier::__cordl_internal_set_radi(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radi = value;
}
constexpr ::ArrayW<float_t>& Pathfinding::RadiusModifier::__cordl_internal_get_a1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___a1;
}
constexpr ::ArrayW<float_t> const& Pathfinding::RadiusModifier::__cordl_internal_get_a1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___a1;
}
constexpr void Pathfinding::RadiusModifier::__cordl_internal_set_a1(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___a1 = value;
}
constexpr ::ArrayW<float_t>& Pathfinding::RadiusModifier::__cordl_internal_get_a2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___a2;
}
constexpr ::ArrayW<float_t> const& Pathfinding::RadiusModifier::__cordl_internal_get_a2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___a2;
}
constexpr void Pathfinding::RadiusModifier::__cordl_internal_set_a2(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___a2 = value;
}
constexpr ::ArrayW<bool>& Pathfinding::RadiusModifier::__cordl_internal_get_dir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dir;
}
constexpr ::ArrayW<bool> const& Pathfinding::RadiusModifier::__cordl_internal_get_dir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dir;
}
constexpr void Pathfinding::RadiusModifier::__cordl_internal_set_dir(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dir = value;
}
inline int32_t Pathfinding::RadiusModifier::get_Order()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RadiusModifier*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Pathfinding::RadiusModifier::CalculateCircleInner(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, float_t  r1, float_t  r2, ::by_ref<float_t>  a, ::by_ref<float_t>  sigma)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {"CalculateCircleInner", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p1, p2, r1, r2, a, sigma);
}
inline bool Pathfinding::RadiusModifier::CalculateCircleOuter(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, float_t  r1, float_t  r2, ::by_ref<float_t>  a, ::by_ref<float_t>  sigma)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {"CalculateCircleOuter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p1, p2, r1, r2, a, sigma);
}
inline ::GlobalNamespace::RadiusModifier_TangentType Pathfinding::RadiusModifier::CalculateTangentType(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3, ::UnityEngine::Vector3  p4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {"CalculateTangentType", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RadiusModifier_TangentType>(this, ___internal_method, p1, p2, p3, p4);
}
inline ::GlobalNamespace::RadiusModifier_TangentType Pathfinding::RadiusModifier::CalculateTangentTypeSimple(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {"CalculateTangentTypeSimple", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RadiusModifier_TangentType>(this, ___internal_method, p1, p2, p3);
}
inline void Pathfinding::RadiusModifier::Apply(::Pathfinding::Path*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RadiusModifier*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::RadiusModifier::Apply(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {"Apply", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(this, ___internal_method, vs);
}
inline void Pathfinding::RadiusModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RadiusModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RadiusModifier* Pathfinding::RadiusModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RadiusModifier*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RadiusModifier::RadiusModifier()   {
}
