#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraPipelineAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraPipelineAttribute_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CameraPipelineAttribute.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CameraPipelineAttribute::*)()>(&::Unity::Cinemachine::CameraPipelineAttribute::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb3734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraPipelineAttribute*>(),
                        {"get_Stage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraPipelineAttribute.set_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraPipelineAttribute::*)(::GlobalNamespace::CinemachineCore_Stage)>(&::Unity::Cinemachine::CameraPipelineAttribute::set_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb373c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraPipelineAttribute*>(),
                        {"set_Stage", {}, {::i2c::type_of<::GlobalNamespace::CinemachineCore_Stage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraPipelineAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraPipelineAttribute::*)(::GlobalNamespace::CinemachineCore_Stage)>(&::Unity::Cinemachine::CameraPipelineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaeb3744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraPipelineAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CinemachineCore_Stage>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachineCore_Stage& Unity::Cinemachine::CameraPipelineAttribute::__cordl_internal_get__Stage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stage_k__BackingField;
}
constexpr ::GlobalNamespace::CinemachineCore_Stage const& Unity::Cinemachine::CameraPipelineAttribute::__cordl_internal_get__Stage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stage_k__BackingField;
}
constexpr void Unity::Cinemachine::CameraPipelineAttribute::__cordl_internal_set__Stage_k__BackingField(::GlobalNamespace::CinemachineCore_Stage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Stage_k__BackingField = value;
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CameraPipelineAttribute::get_Stage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraPipelineAttribute*>(),
                        {"get_Stage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline void Unity::Cinemachine::CameraPipelineAttribute::set_Stage(::GlobalNamespace::CinemachineCore_Stage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraPipelineAttribute*>(),
                        {"set_Stage", {}, {::i2c::type_of<::GlobalNamespace::CinemachineCore_Stage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CameraPipelineAttribute::_ctor(::GlobalNamespace::CinemachineCore_Stage  stage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraPipelineAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CinemachineCore_Stage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage);
}
inline ::Unity::Cinemachine::CameraPipelineAttribute* Unity::Cinemachine::CameraPipelineAttribute::New_ctor(::GlobalNamespace::CinemachineCore_Stage  stage)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CameraPipelineAttribute*>(stage));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CameraPipelineAttribute::CameraPipelineAttribute()   {
}
