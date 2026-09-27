#pragma once
// IWYU pragma private; include "Pathfinding/AdvancedSmooth_Turn.hpp"
#include "Pathfinding/zzzz__AdvancedSmooth_Turn_def.hpp"
#include "Pathfinding/zzzz__AdvancedSmooth_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AdvancedSmooth_Turn.get_score
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AdvancedSmooth_Turn::*)()>(&::GlobalNamespace::AdvancedSmooth_Turn::get_score)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ea06c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {"get_score", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedSmooth_Turn._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdvancedSmooth_Turn::*)(float_t, ::Pathfinding::AdvancedSmooth_TurnConstructor*, int32_t)>(&::GlobalNamespace::AdvancedSmooth_Turn::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e9eb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedSmooth_Turn.GetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdvancedSmooth_Turn::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::AdvancedSmooth_Turn::GetPath)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e9d918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {"GetPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedSmooth_Turn.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AdvancedSmooth_Turn::*)(::GlobalNamespace::AdvancedSmooth_Turn)>(&::GlobalNamespace::AdvancedSmooth_Turn::CompareTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ea06ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::AdvancedSmooth_Turn>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedSmooth_Turn.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AdvancedSmooth_Turn, ::GlobalNamespace::AdvancedSmooth_Turn)>(&::GlobalNamespace::AdvancedSmooth_Turn::op_LessThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ea0748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {"op_LessThan", {}, {::i2c::type_of<::GlobalNamespace::AdvancedSmooth_Turn>(), ::i2c::type_of<::GlobalNamespace::AdvancedSmooth_Turn>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdvancedSmooth_Turn.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AdvancedSmooth_Turn, ::GlobalNamespace::AdvancedSmooth_Turn)>(&::GlobalNamespace::AdvancedSmooth_Turn::op_GreaterThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ea0788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::GlobalNamespace::AdvancedSmooth_Turn>(), ::i2c::type_of<::GlobalNamespace::AdvancedSmooth_Turn>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::AdvancedSmooth_Turn::get_score()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {"get_score", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::AdvancedSmooth_Turn::_ctor(float_t  length, ::Pathfinding::AdvancedSmooth_TurnConstructor*  constructor, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Pathfinding::AdvancedSmooth_TurnConstructor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, constructor, id);
}
inline void GlobalNamespace::AdvancedSmooth_Turn::GetPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {"GetPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, output);
}
inline int32_t GlobalNamespace::AdvancedSmooth_Turn::CompareTo(::GlobalNamespace::AdvancedSmooth_Turn  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::AdvancedSmooth_Turn>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, t);
}
inline bool GlobalNamespace::AdvancedSmooth_Turn::op_LessThan(::GlobalNamespace::AdvancedSmooth_Turn  lhs, ::GlobalNamespace::AdvancedSmooth_Turn  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {"op_LessThan", {}, {::i2c::type_of<::GlobalNamespace::AdvancedSmooth_Turn>(), ::i2c::type_of<::GlobalNamespace::AdvancedSmooth_Turn>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::AdvancedSmooth_Turn::op_GreaterThan(::GlobalNamespace::AdvancedSmooth_Turn  lhs, ::GlobalNamespace::AdvancedSmooth_Turn  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AdvancedSmooth_Turn>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::GlobalNamespace::AdvancedSmooth_Turn>(), ::i2c::type_of<::GlobalNamespace::AdvancedSmooth_Turn>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::AdvancedSmooth_Turn>"
constexpr  GlobalNamespace::AdvancedSmooth_Turn::operator ::System::IComparable_1<::GlobalNamespace::AdvancedSmooth_Turn>*()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::AdvancedSmooth_Turn>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::AdvancedSmooth_Turn>"
constexpr ::System::IComparable_1<::GlobalNamespace::AdvancedSmooth_Turn>* GlobalNamespace::AdvancedSmooth_Turn::i___System__IComparable_1___GlobalNamespace__AdvancedSmooth_Turn_()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::AdvancedSmooth_Turn>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "length", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "constructor", ty: "::Pathfinding::AdvancedSmooth_TurnConstructor*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AdvancedSmooth_Turn::AdvancedSmooth_Turn(float_t  length, int32_t  id, ::Pathfinding::AdvancedSmooth_TurnConstructor*  constructor) noexcept  {
this->length = length;
this->id = id;
this->constructor = constructor;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AdvancedSmooth_Turn::AdvancedSmooth_Turn()   {
}
