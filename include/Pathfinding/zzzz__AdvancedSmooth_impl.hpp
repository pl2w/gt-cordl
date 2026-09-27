#pragma once
// IWYU pragma private; include "Pathfinding/AdvancedSmooth.hpp"
#include "Pathfinding/zzzz__AdvancedSmooth_impl.hpp"
#include "Pathfinding/zzzz__MonoModifier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__AdvancedSmooth_def.hpp"
#include "Pathfinding/zzzz__AdvancedSmooth_Turn_def.hpp"
#include "Pathfinding/zzzz__AdvancedSmooth_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AdvancedSmooth::*)()>(&::Pathfinding::AdvancedSmooth::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9cf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth::*)(::Pathfinding::Path*)>(&::Pathfinding::AdvancedSmooth::Apply)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5e9cf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth.EvaluatePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth::*)(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Pathfinding::AdvancedSmooth::EvaluatePaths)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5e9d798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth*>(),
                        {"EvaluatePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth::*)()>(&::Pathfinding::AdvancedSmooth::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e9d944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::AdvancedSmooth::__cordl_internal_get_turningRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turningRadius;
}
constexpr float_t const& Pathfinding::AdvancedSmooth::__cordl_internal_get_turningRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turningRadius;
}
constexpr void Pathfinding::AdvancedSmooth::__cordl_internal_set_turningRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turningRadius = value;
}
constexpr ::Pathfinding::AdvancedSmooth_MaxTurn*& Pathfinding::AdvancedSmooth::__cordl_internal_get_turnConstruct1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnConstruct1;
}
constexpr ::Pathfinding::AdvancedSmooth_MaxTurn* const& Pathfinding::AdvancedSmooth::__cordl_internal_get_turnConstruct1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnConstruct1;
}
constexpr void Pathfinding::AdvancedSmooth::__cordl_internal_set_turnConstruct1(::Pathfinding::AdvancedSmooth_MaxTurn*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnConstruct1 = value;
}
constexpr ::Pathfinding::AdvancedSmooth_ConstantTurn*& Pathfinding::AdvancedSmooth::__cordl_internal_get_turnConstruct2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnConstruct2;
}
constexpr ::Pathfinding::AdvancedSmooth_ConstantTurn* const& Pathfinding::AdvancedSmooth::__cordl_internal_get_turnConstruct2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnConstruct2;
}
constexpr void Pathfinding::AdvancedSmooth::__cordl_internal_set_turnConstruct2(::Pathfinding::AdvancedSmooth_ConstantTurn*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnConstruct2 = value;
}
inline int32_t Pathfinding::AdvancedSmooth::get_Order()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::AdvancedSmooth::Apply(::Pathfinding::Path*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void Pathfinding::AdvancedSmooth::EvaluatePaths(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth*>(),
                        {"EvaluatePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turnList, output);
}
inline void Pathfinding::AdvancedSmooth::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AdvancedSmooth* Pathfinding::AdvancedSmooth::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AdvancedSmooth*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AdvancedSmooth::AdvancedSmooth()   {
}
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_ConstantTurn.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_ConstantTurn::*)(int32_t, ::ArrayW<::UnityEngine::Vector3>)>(&::Pathfinding::AdvancedSmooth_ConstantTurn::Prepare)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e9fbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_ConstantTurn*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_ConstantTurn*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_ConstantTurn.TangentToTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_ConstantTurn::*)(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*)>(&::Pathfinding::AdvancedSmooth_ConstantTurn::TangentToTangent)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5e9fbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_ConstantTurn*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_ConstantTurn*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_ConstantTurn.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_ConstantTurn::*)(::GlobalNamespace::AdvancedSmooth_Turn, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Pathfinding::AdvancedSmooth_ConstantTurn::GetPath)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5e9ffc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_ConstantTurn*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_ConstantTurn*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_ConstantTurn._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_ConstantTurn::*)()>(&::Pathfinding::AdvancedSmooth_ConstantTurn::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e9daa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_ConstantTurn*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_get_circleCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circleCenter;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_get_circleCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circleCenter;
}
constexpr void Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_set_circleCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___circleCenter = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_get_gamma1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamma1;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_get_gamma1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamma1;
}
constexpr void Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_set_gamma1(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamma1 = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_get_gamma2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamma2;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_get_gamma2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamma2;
}
constexpr void Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_set_gamma2(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamma2 = value;
}
constexpr bool& Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_get_clockwise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockwise;
}
constexpr bool const& Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_get_clockwise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockwise;
}
constexpr void Pathfinding::AdvancedSmooth_ConstantTurn::__cordl_internal_set_clockwise(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clockwise = value;
}
inline void Pathfinding::AdvancedSmooth_ConstantTurn::Prepare(int32_t  i, ::ArrayW<::UnityEngine::Vector3>  vectorPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_ConstantTurn*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, vectorPath);
}
inline void Pathfinding::AdvancedSmooth_ConstantTurn::TangentToTangent(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_ConstantTurn*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turnList);
}
inline void Pathfinding::AdvancedSmooth_ConstantTurn::GetPath(::GlobalNamespace::AdvancedSmooth_Turn  turn, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_ConstantTurn*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turn, output);
}
inline void Pathfinding::AdvancedSmooth_ConstantTurn::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_ConstantTurn*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AdvancedSmooth_ConstantTurn* Pathfinding::AdvancedSmooth_ConstantTurn::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AdvancedSmooth_ConstantTurn*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AdvancedSmooth_ConstantTurn::AdvancedSmooth_ConstantTurn()   {
}
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_MaxTurn.OnTangentUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_MaxTurn::*)()>(&::Pathfinding::AdvancedSmooth_MaxTurn::OnTangentUpdate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e9db0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_MaxTurn.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_MaxTurn::*)(int32_t, ::ArrayW<::UnityEngine::Vector3>)>(&::Pathfinding::AdvancedSmooth_MaxTurn::Prepare)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e9dc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_MaxTurn.TangentToTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_MaxTurn::*)(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*)>(&::Pathfinding::AdvancedSmooth_MaxTurn::TangentToTangent)> {
  constexpr static std::size_t size = 0xcc8;
  constexpr static std::size_t addrs = 0x5e9dd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_MaxTurn.PointToTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_MaxTurn::*)(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*)>(&::Pathfinding::AdvancedSmooth_MaxTurn::PointToTangent)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x5e9eb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_MaxTurn.TangentToPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_MaxTurn::*)(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*)>(&::Pathfinding::AdvancedSmooth_MaxTurn::TangentToPoint)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x5e9f0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_MaxTurn.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_MaxTurn::*)(::GlobalNamespace::AdvancedSmooth_Turn, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Pathfinding::AdvancedSmooth_MaxTurn::GetPath)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5e9f584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_MaxTurn._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_MaxTurn::*)()>(&::Pathfinding::AdvancedSmooth_MaxTurn::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e9d9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_preRightCircleCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preRightCircleCenter;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_preRightCircleCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preRightCircleCenter;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_preRightCircleCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preRightCircleCenter = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_preLeftCircleCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preLeftCircleCenter;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_preLeftCircleCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preLeftCircleCenter;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_preLeftCircleCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preLeftCircleCenter = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_rightCircleCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightCircleCenter;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_rightCircleCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightCircleCenter;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_rightCircleCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightCircleCenter = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_leftCircleCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftCircleCenter;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_leftCircleCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftCircleCenter;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_leftCircleCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftCircleCenter = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_vaRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vaRight;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_vaRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vaRight;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_vaRight(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vaRight = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_vaLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vaLeft;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_vaLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vaLeft;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_vaLeft(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vaLeft = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_preVaLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preVaLeft;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_preVaLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preVaLeft;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_preVaLeft(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preVaLeft = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_preVaRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preVaRight;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_preVaRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preVaRight;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_preVaRight(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preVaRight = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_gammaLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gammaLeft;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_gammaLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gammaLeft;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_gammaLeft(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gammaLeft = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_gammaRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gammaRight;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_gammaRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gammaRight;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_gammaRight(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gammaRight = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_betaRightRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaRightRight;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_betaRightRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaRightRight;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_betaRightRight(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___betaRightRight = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_betaRightLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaRightLeft;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_betaRightLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaRightLeft;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_betaRightLeft(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___betaRightLeft = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_betaLeftRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaLeftRight;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_betaLeftRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaLeftRight;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_betaLeftRight(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___betaLeftRight = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_betaLeftLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaLeftLeft;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_betaLeftLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaLeftLeft;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_betaLeftLeft(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___betaLeftLeft = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_deltaRightLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaRightLeft;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_deltaRightLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaRightLeft;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_deltaRightLeft(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaRightLeft = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_deltaLeftRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaLeftRight;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_deltaLeftRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaLeftRight;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_deltaLeftRight(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaLeftRight = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_alfaRightRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alfaRightRight;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_alfaRightRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alfaRightRight;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_alfaRightRight(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alfaRightRight = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_alfaLeftLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alfaLeftLeft;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_alfaLeftLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alfaLeftLeft;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_alfaLeftLeft(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alfaLeftLeft = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_alfaRightLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alfaRightLeft;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_alfaRightLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alfaRightLeft;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_alfaRightLeft(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alfaRightLeft = value;
}
constexpr double_t& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_alfaLeftRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alfaLeftRight;
}
constexpr double_t const& Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_get_alfaLeftRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alfaLeftRight;
}
constexpr void Pathfinding::AdvancedSmooth_MaxTurn::__cordl_internal_set_alfaLeftRight(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alfaLeftRight = value;
}
inline void Pathfinding::AdvancedSmooth_MaxTurn::OnTangentUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AdvancedSmooth_MaxTurn::Prepare(int32_t  i, ::ArrayW<::UnityEngine::Vector3>  vectorPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, vectorPath);
}
inline void Pathfinding::AdvancedSmooth_MaxTurn::TangentToTangent(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turnList);
}
inline void Pathfinding::AdvancedSmooth_MaxTurn::PointToTangent(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turnList);
}
inline void Pathfinding::AdvancedSmooth_MaxTurn::TangentToPoint(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turnList);
}
inline void Pathfinding::AdvancedSmooth_MaxTurn::GetPath(::GlobalNamespace::AdvancedSmooth_Turn  turn, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turn, output);
}
inline void Pathfinding::AdvancedSmooth_MaxTurn::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_MaxTurn*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AdvancedSmooth_MaxTurn* Pathfinding::AdvancedSmooth_MaxTurn::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AdvancedSmooth_MaxTurn*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AdvancedSmooth_MaxTurn::AdvancedSmooth_MaxTurn()   {
}
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(int32_t, ::ArrayW<::UnityEngine::Vector3>)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::Prepare)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.OnTangentUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_TurnConstructor::*)()>(&::Pathfinding::AdvancedSmooth_TurnConstructor::OnTangentUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea034c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.PointToTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::PointToTangent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea0350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.TangentToPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::TangentToPoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea0354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.TangentToTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::TangentToTangent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea0358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(::GlobalNamespace::AdvancedSmooth_Turn, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::GetPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                    {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<::UnityEngine::Vector3>)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::Setup)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x5e9d2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"Setup", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.PostPrepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Pathfinding::AdvancedSmooth_TurnConstructor::PostPrepare)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e9d740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"PostPrepare", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.AddCircleSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(double_t, double_t, bool, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::AddCircleSegment)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5e9f900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"AddCircleSegment", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.DebugCircleSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(::UnityEngine::Vector3, double_t, double_t, double_t, ::UnityEngine::Color)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::DebugCircleSegment)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ea035c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"DebugCircleSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.DebugCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(::UnityEngine::Vector3, double_t, ::UnityEngine::Color)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::DebugCircle)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ea04dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"DebugCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.GetLengthFromAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(double_t, double_t)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::GetLengthFromAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9eaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"GetLengthFromAngle", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.ClockwiseAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(double_t, double_t)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::ClockwiseAngle)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e9ea24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"ClockwiseAngle", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.CounterClockwiseAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(double_t, double_t)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::CounterClockwiseAngle)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e9ea68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"CounterClockwiseAngle", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.AngleToVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(double_t)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::AngleToVector)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e9eab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"AngleToVector", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.ToDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(double_t)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::ToDegrees)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ea0668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"ToDegrees", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.ClampAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(double_t)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::ClampAngle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ea0628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"ClampAngle", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor.Atan2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Pathfinding::AdvancedSmooth_TurnConstructor::*)(::UnityEngine::Vector3)>(&::Pathfinding::AdvancedSmooth_TurnConstructor::Atan2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e9dbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"Atan2", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AdvancedSmooth_TurnConstructor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AdvancedSmooth_TurnConstructor::*)()>(&::Pathfinding::AdvancedSmooth_TurnConstructor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e9fbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::AdvancedSmooth_TurnConstructor::__cordl_internal_get_constantBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constantBias;
}
constexpr float_t const& Pathfinding::AdvancedSmooth_TurnConstructor::__cordl_internal_get_constantBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constantBias;
}
constexpr void Pathfinding::AdvancedSmooth_TurnConstructor::__cordl_internal_set_constantBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constantBias = value;
}
constexpr float_t& Pathfinding::AdvancedSmooth_TurnConstructor::__cordl_internal_get_factorBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factorBias;
}
constexpr float_t const& Pathfinding::AdvancedSmooth_TurnConstructor::__cordl_internal_get_factorBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factorBias;
}
constexpr void Pathfinding::AdvancedSmooth_TurnConstructor::__cordl_internal_set_factorBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___factorBias = value;
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::setStaticF_turningRadius(float_t  value)  {
::cordl_internals::setStaticField<float_t, "turningRadius", ::Pathfinding::AdvancedSmooth_TurnConstructor*>(std::forward<float_t>(value));
}
inline float_t Pathfinding::AdvancedSmooth_TurnConstructor::getStaticF_turningRadius()  {
return ::cordl_internals::getStaticField<float_t, "turningRadius", ::Pathfinding::AdvancedSmooth_TurnConstructor*>();
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::setStaticF_prev(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "prev", ::Pathfinding::AdvancedSmooth_TurnConstructor*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Pathfinding::AdvancedSmooth_TurnConstructor::getStaticF_prev()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "prev", ::Pathfinding::AdvancedSmooth_TurnConstructor*>();
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::setStaticF_current(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "current", ::Pathfinding::AdvancedSmooth_TurnConstructor*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Pathfinding::AdvancedSmooth_TurnConstructor::getStaticF_current()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "current", ::Pathfinding::AdvancedSmooth_TurnConstructor*>();
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::setStaticF_next(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "next", ::Pathfinding::AdvancedSmooth_TurnConstructor*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Pathfinding::AdvancedSmooth_TurnConstructor::getStaticF_next()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "next", ::Pathfinding::AdvancedSmooth_TurnConstructor*>();
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::setStaticF_t1(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "t1", ::Pathfinding::AdvancedSmooth_TurnConstructor*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Pathfinding::AdvancedSmooth_TurnConstructor::getStaticF_t1()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "t1", ::Pathfinding::AdvancedSmooth_TurnConstructor*>();
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::setStaticF_t2(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "t2", ::Pathfinding::AdvancedSmooth_TurnConstructor*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Pathfinding::AdvancedSmooth_TurnConstructor::getStaticF_t2()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "t2", ::Pathfinding::AdvancedSmooth_TurnConstructor*>();
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::setStaticF_normal(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "normal", ::Pathfinding::AdvancedSmooth_TurnConstructor*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Pathfinding::AdvancedSmooth_TurnConstructor::getStaticF_normal()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "normal", ::Pathfinding::AdvancedSmooth_TurnConstructor*>();
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::setStaticF_prevNormal(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "prevNormal", ::Pathfinding::AdvancedSmooth_TurnConstructor*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Pathfinding::AdvancedSmooth_TurnConstructor::getStaticF_prevNormal()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "prevNormal", ::Pathfinding::AdvancedSmooth_TurnConstructor*>();
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::setStaticF_changedPreviousTangent(bool  value)  {
::cordl_internals::setStaticField<bool, "changedPreviousTangent", ::Pathfinding::AdvancedSmooth_TurnConstructor*>(std::forward<bool>(value));
}
inline bool Pathfinding::AdvancedSmooth_TurnConstructor::getStaticF_changedPreviousTangent()  {
return ::cordl_internals::getStaticField<bool, "changedPreviousTangent", ::Pathfinding::AdvancedSmooth_TurnConstructor*>();
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::Prepare(int32_t  i, ::ArrayW<::UnityEngine::Vector3>  vectorPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, vectorPath);
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::OnTangentUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::PointToTangent(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turnList);
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::TangentToPoint(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turnList);
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::TangentToTangent(::System::Collections::Generic::List_1<::GlobalNamespace::AdvancedSmooth_Turn>*  turnList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turnList);
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::GetPath(::GlobalNamespace::AdvancedSmooth_Turn  turn, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turn, output);
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::Setup(int32_t  i, ::ArrayW<::UnityEngine::Vector3>  vectorPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"Setup", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, vectorPath);
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::PostPrepare()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"PostPrepare", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::AddCircleSegment(double_t  startAngle, double_t  endAngle, bool  clockwise, ::UnityEngine::Vector3  center, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"AddCircleSegment", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startAngle, endAngle, clockwise, center, output, radius);
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::DebugCircleSegment(::UnityEngine::Vector3  center, double_t  startAngle, double_t  endAngle, double_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"DebugCircleSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, startAngle, endAngle, radius, color);
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::DebugCircle(::UnityEngine::Vector3  center, double_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"DebugCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, radius, color);
}
inline double_t Pathfinding::AdvancedSmooth_TurnConstructor::GetLengthFromAngle(double_t  angle, double_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"GetLengthFromAngle", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, angle, radius);
}
inline double_t Pathfinding::AdvancedSmooth_TurnConstructor::ClockwiseAngle(double_t  from, double_t  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"ClockwiseAngle", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, from, to);
}
inline double_t Pathfinding::AdvancedSmooth_TurnConstructor::CounterClockwiseAngle(double_t  from, double_t  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"CounterClockwiseAngle", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, from, to);
}
inline ::UnityEngine::Vector3 Pathfinding::AdvancedSmooth_TurnConstructor::AngleToVector(double_t  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"AngleToVector", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, a);
}
inline double_t Pathfinding::AdvancedSmooth_TurnConstructor::ToDegrees(double_t  rad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"ToDegrees", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, rad);
}
inline double_t Pathfinding::AdvancedSmooth_TurnConstructor::ClampAngle(double_t  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"ClampAngle", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, a);
}
inline double_t Pathfinding::AdvancedSmooth_TurnConstructor::Atan2(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {"Atan2", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, v);
}
inline void Pathfinding::AdvancedSmooth_TurnConstructor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AdvancedSmooth_TurnConstructor* Pathfinding::AdvancedSmooth_TurnConstructor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AdvancedSmooth_TurnConstructor*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AdvancedSmooth_TurnConstructor::AdvancedSmooth_TurnConstructor()   {
}
