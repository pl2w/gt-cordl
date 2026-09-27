#pragma once
// IWYU pragma private; include "Fusion/SimulationBehaviourAttribute.hpp"
#include "Fusion/zzzz__SimulationModes_impl.hpp"
#include "Fusion/zzzz__SimulationStages_impl.hpp"
#include "Fusion/zzzz__Topologies_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__SimulationBehaviourAttribute_def.hpp"
#include "Fusion/zzzz__SimulationModes_def.hpp"
#include "Fusion/zzzz__SimulationStages_def.hpp"
#include "Fusion/zzzz__Topologies_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationBehaviourAttribute.get_Stages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationStages (::Fusion::SimulationBehaviourAttribute::*)()>(&::Fusion::SimulationBehaviourAttribute::get_Stages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"get_Stages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourAttribute.set_Stages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourAttribute::*)(::Fusion::SimulationStages)>(&::Fusion::SimulationBehaviourAttribute::set_Stages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"set_Stages", {}, {::i2c::type_of<::Fusion::SimulationStages>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourAttribute.get_Modes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationModes (::Fusion::SimulationBehaviourAttribute::*)()>(&::Fusion::SimulationBehaviourAttribute::get_Modes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"get_Modes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourAttribute.set_Modes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourAttribute::*)(::Fusion::SimulationModes)>(&::Fusion::SimulationBehaviourAttribute::set_Modes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"set_Modes", {}, {::i2c::type_of<::Fusion::SimulationModes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourAttribute.get_Topologies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Topologies (::Fusion::SimulationBehaviourAttribute::*)()>(&::Fusion::SimulationBehaviourAttribute::get_Topologies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"get_Topologies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourAttribute.set_Topologies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourAttribute::*)(::Fusion::Topologies)>(&::Fusion::SimulationBehaviourAttribute::set_Topologies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"set_Topologies", {}, {::i2c::type_of<::Fusion::Topologies>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourAttribute::*)()>(&::Fusion::SimulationBehaviourAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::SimulationStages& Fusion::SimulationBehaviourAttribute::__cordl_internal_get__Stages_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stages_k__BackingField;
}
constexpr ::Fusion::SimulationStages const& Fusion::SimulationBehaviourAttribute::__cordl_internal_get__Stages_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stages_k__BackingField;
}
constexpr void Fusion::SimulationBehaviourAttribute::__cordl_internal_set__Stages_k__BackingField(::Fusion::SimulationStages  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Stages_k__BackingField = value;
}
constexpr ::Fusion::SimulationModes& Fusion::SimulationBehaviourAttribute::__cordl_internal_get__Modes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Modes_k__BackingField;
}
constexpr ::Fusion::SimulationModes const& Fusion::SimulationBehaviourAttribute::__cordl_internal_get__Modes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Modes_k__BackingField;
}
constexpr void Fusion::SimulationBehaviourAttribute::__cordl_internal_set__Modes_k__BackingField(::Fusion::SimulationModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Modes_k__BackingField = value;
}
constexpr ::Fusion::Topologies& Fusion::SimulationBehaviourAttribute::__cordl_internal_get__Topologies_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Topologies_k__BackingField;
}
constexpr ::Fusion::Topologies const& Fusion::SimulationBehaviourAttribute::__cordl_internal_get__Topologies_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Topologies_k__BackingField;
}
constexpr void Fusion::SimulationBehaviourAttribute::__cordl_internal_set__Topologies_k__BackingField(::Fusion::Topologies  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Topologies_k__BackingField = value;
}
inline ::Fusion::SimulationStages Fusion::SimulationBehaviourAttribute::get_Stages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"get_Stages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationStages>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviourAttribute::set_Stages(::Fusion::SimulationStages  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"set_Stages", {}, {::i2c::type_of<::Fusion::SimulationStages>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::SimulationModes Fusion::SimulationBehaviourAttribute::get_Modes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"get_Modes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationModes>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviourAttribute::set_Modes(::Fusion::SimulationModes  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"set_Modes", {}, {::i2c::type_of<::Fusion::SimulationModes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Topologies Fusion::SimulationBehaviourAttribute::get_Topologies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"get_Topologies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Topologies>(this, ___internal_method);
}
inline void Fusion::SimulationBehaviourAttribute::set_Topologies(::Fusion::Topologies  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {"set_Topologies", {}, {::i2c::type_of<::Fusion::Topologies>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::SimulationBehaviourAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::SimulationBehaviourAttribute* Fusion::SimulationBehaviourAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationBehaviourAttribute*>());
}
// Ctor Parameters []
constexpr ::Fusion::SimulationBehaviourAttribute::SimulationBehaviourAttribute()   {
}
