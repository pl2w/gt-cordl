#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelAction.hpp"
#include "GlobalNamespace/zzzz__OperationType_impl.hpp"
#include "GlobalNamespace/zzzz__VoxelAction_def.hpp"
#include "GlobalNamespace/zzzz__OperationType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoxelAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelAction::*)(::GlobalNamespace::OperationType, float_t, float_t, uint8_t)>(&::GlobalNamespace::VoxelAction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5df5f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelAction>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OperationType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelAction.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoxelAction::*)()>(&::GlobalNamespace::VoxelAction::IsValid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5df5f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelAction>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VoxelAction::_ctor(::GlobalNamespace::OperationType  operation, float_t  radius, float_t  strength, uint8_t  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelAction>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OperationType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, operation, radius, strength, material);
}
inline bool GlobalNamespace::VoxelAction::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelAction>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "operation", ty: "::GlobalNamespace::OperationType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "strength", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VoxelAction::VoxelAction(::GlobalNamespace::OperationType  operation, float_t  radius, float_t  strength, uint8_t  material) noexcept  {
this->operation = operation;
this->radius = radius;
this->strength = strength;
this->material = material;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelAction::VoxelAction()   {
}
