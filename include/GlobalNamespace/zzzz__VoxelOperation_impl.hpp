#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelOperation.hpp"
#include "GlobalNamespace/zzzz__OperationType_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "GlobalNamespace/zzzz__VoxelOperation_def.hpp"
#include "GlobalNamespace/zzzz__VoxelAction_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoxelOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelOperation::*)(::UnityEngine::Vector3, ::GlobalNamespace::VoxelAction)>(&::GlobalNamespace::VoxelOperation::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5df5fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelOperation>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelOperation.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoxelOperation::*)()>(&::GlobalNamespace::VoxelOperation::IsValid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5df60b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelOperation>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelOperation.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::VoxelOperation::*)()>(&::GlobalNamespace::VoxelOperation::ToString)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5df60e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VoxelOperation>(),
                    {::i2c::class_of<::GlobalNamespace::VoxelOperation>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VoxelOperation::_ctor(::UnityEngine::Vector3  origin, ::GlobalNamespace::VoxelAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelOperation>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, action);
}
inline bool GlobalNamespace::VoxelOperation::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelOperation>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::VoxelOperation::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VoxelOperation>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "origin", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "operationType", ty: "::GlobalNamespace::OperationType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radius", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "strength", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VoxelOperation::VoxelOperation(::Unity::Mathematics::int3  origin, ::GlobalNamespace::OperationType  operationType, int16_t  radius, int16_t  strength, uint8_t  material) noexcept  {
this->origin = origin;
this->operationType = operationType;
this->radius = radius;
this->strength = strength;
this->material = material;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelOperation::VoxelOperation()   {
}
