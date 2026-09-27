#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectBaker_Result.hpp"
#include "Fusion/zzzz__NetworkObjectBaker_Result_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectBaker_Result.get_HadChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkObjectBaker_Result::*)()>(&::GlobalNamespace::NetworkObjectBaker_Result::get_HadChanges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e53d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_Result>(),
                        {"get_HadChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectBaker_Result.get_ObjectCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkObjectBaker_Result::*)()>(&::GlobalNamespace::NetworkObjectBaker_Result::get_ObjectCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e53dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_Result>(),
                        {"get_ObjectCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectBaker_Result.get_BehaviourCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkObjectBaker_Result::*)()>(&::GlobalNamespace::NetworkObjectBaker_Result::get_BehaviourCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e53e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_Result>(),
                        {"get_BehaviourCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectBaker_Result._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectBaker_Result::*)(bool, int32_t, int32_t)>(&::GlobalNamespace::NetworkObjectBaker_Result::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e4af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_Result>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::NetworkObjectBaker_Result::get_HadChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_Result>(),
                        {"get_HadChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkObjectBaker_Result::get_ObjectCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_Result>(),
                        {"get_ObjectCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkObjectBaker_Result::get_BehaviourCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_Result>(),
                        {"get_BehaviourCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkObjectBaker_Result::_ctor(bool  dirty, int32_t  objectCount, int32_t  behaviourCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_Result>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dirty, objectCount, behaviourCount);
}
// Ctor Parameters [CppParam { name: "_HadChanges_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ObjectCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BehaviourCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkObjectBaker_Result::NetworkObjectBaker_Result(bool  _HadChanges_k__BackingField, int32_t  _ObjectCount_k__BackingField, int32_t  _BehaviourCount_k__BackingField) noexcept  {
this->_HadChanges_k__BackingField = _HadChanges_k__BackingField;
this->_ObjectCount_k__BackingField = _ObjectCount_k__BackingField;
this->_BehaviourCount_k__BackingField = _BehaviourCount_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkObjectBaker_Result::NetworkObjectBaker_Result()   {
}
