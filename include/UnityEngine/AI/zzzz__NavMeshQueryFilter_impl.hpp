#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshQueryFilter.hpp"
#include "UnityEngine/AI/zzzz__NavMeshQueryFilter_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshQueryFilter.get_areaMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshQueryFilter::*)()>(&::UnityEngine::AI::NavMeshQueryFilter::get_areaMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5205bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshQueryFilter>(),
                        {"get_areaMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshQueryFilter.set_areaMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshQueryFilter::*)(int32_t)>(&::UnityEngine::AI::NavMeshQueryFilter::set_areaMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5205c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshQueryFilter>(),
                        {"set_areaMask", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshQueryFilter.get_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshQueryFilter::*)()>(&::UnityEngine::AI::NavMeshQueryFilter::get_agentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5205cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshQueryFilter>(),
                        {"get_agentTypeID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshQueryFilter.set_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshQueryFilter::*)(int32_t)>(&::UnityEngine::AI::NavMeshQueryFilter::set_agentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5205d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshQueryFilter>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::AI::NavMeshQueryFilter::get_areaMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshQueryFilter>(),
                        {"get_areaMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshQueryFilter::set_areaMask(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshQueryFilter>(),
                        {"set_areaMask", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::AI::NavMeshQueryFilter::get_agentTypeID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshQueryFilter>(),
                        {"get_agentTypeID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshQueryFilter::set_agentTypeID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshQueryFilter>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_costs_k__BackingField", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_areaMask_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_agentTypeID_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::NavMeshQueryFilter::NavMeshQueryFilter(::ArrayW<float_t>  _costs_k__BackingField, int32_t  _areaMask_k__BackingField, int32_t  _agentTypeID_k__BackingField) noexcept  {
this->_costs_k__BackingField = _costs_k__BackingField;
this->_areaMask_k__BackingField = _areaMask_k__BackingField;
this->_agentTypeID_k__BackingField = _agentTypeID_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshQueryFilter::NavMeshQueryFilter()   {
}
