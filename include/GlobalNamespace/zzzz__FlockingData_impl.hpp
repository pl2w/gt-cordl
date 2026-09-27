#pragma once
// IWYU pragma private; include "GlobalNamespace/FlockingData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@153_impl.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@183_impl.hpp"
#include "GlobalNamespace/zzzz__FlockingData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkLinkedList_1_def.hpp"
#include "GlobalNamespace/zzzz__Flocking_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlockingData.get_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FlockingData::*)()>(&::GlobalNamespace::FlockingData::get_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580a53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingData>(),
                        {"get_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingData.set_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingData::*)(int32_t)>(&::GlobalNamespace::FlockingData::set_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580a544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingData>(),
                        {"set_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingData.get_Positions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkLinkedList_1<::UnityEngine::Vector3> (::GlobalNamespace::FlockingData::*)()>(&::GlobalNamespace::FlockingData::get_Positions)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5809fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingData>(),
                        {"get_Positions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingData.get_Rotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkLinkedList_1<::UnityEngine::Quaternion> (::GlobalNamespace::FlockingData::*)()>(&::GlobalNamespace::FlockingData::get_Rotations)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x580a0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingData>(),
                        {"get_Rotations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingData::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*)>(&::GlobalNamespace::FlockingData::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5809b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingData>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FlockingData::__cordl_internal_get__count_k__BackingField()  {
return this->____count_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::FlockingData::__cordl_internal_get__count_k__BackingField() const {
return this->____count_k__BackingField;
}
constexpr void GlobalNamespace::FlockingData::__cordl_internal_set__count_k__BackingField(int32_t  value)  {
this->____count_k__BackingField = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@153& GlobalNamespace::FlockingData::__cordl_internal_get__Positions()  {
return this->____Positions;
}
constexpr ::Fusion::CodeGen::FixedStorage@153 const& GlobalNamespace::FlockingData::__cordl_internal_get__Positions() const {
return this->____Positions;
}
constexpr void GlobalNamespace::FlockingData::__cordl_internal_set__Positions(::Fusion::CodeGen::FixedStorage@153  value)  {
this->____Positions = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@183& GlobalNamespace::FlockingData::__cordl_internal_get__Rotations()  {
return this->____Rotations;
}
constexpr ::Fusion::CodeGen::FixedStorage@183 const& GlobalNamespace::FlockingData::__cordl_internal_get__Rotations() const {
return this->____Rotations;
}
constexpr void GlobalNamespace::FlockingData::__cordl_internal_set__Rotations(::Fusion::CodeGen::FixedStorage@183  value)  {
this->____Rotations = value;
}
inline int32_t GlobalNamespace::FlockingData::get_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingData>(),
                        {"get_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::FlockingData::set_count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingData>(),
                        {"set_count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkLinkedList_1<::UnityEngine::Vector3> GlobalNamespace::FlockingData::get_Positions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingData>(),
                        {"get_Positions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkLinkedList_1<::UnityEngine::Vector3>>(*this, ___internal_method);
}
inline ::Fusion::NetworkLinkedList_1<::UnityEngine::Quaternion> GlobalNamespace::FlockingData::get_Rotations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingData>(),
                        {"get_Rotations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkLinkedList_1<::UnityEngine::Quaternion>>(*this, ___internal_method);
}
inline void GlobalNamespace::FlockingData::_ctor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingData>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, items);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::FlockingData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::FlockingData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_count_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Positions", ty: "::Fusion::CodeGen::FixedStorage@153", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Rotations", ty: "::Fusion::CodeGen::FixedStorage@183", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FlockingData::FlockingData(int32_t  _count_k__BackingField, ::Fusion::CodeGen::FixedStorage@153  _Positions, ::Fusion::CodeGen::FixedStorage@183  _Rotations) noexcept  {
this->_count_k__BackingField = _count_k__BackingField;
this->_Positions = _Positions;
this->_Rotations = _Rotations;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlockingData::FlockingData()   {
}
