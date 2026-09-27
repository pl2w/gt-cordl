#pragma once
// IWYU pragma private; include "Fusion/SimulationBehaviourListScope.hpp"
#include "Fusion/zzzz__SimulationBehaviourListScope_def.hpp"
#include "Fusion/zzzz__SimulationBehaviourUpdater_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationBehaviourListScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourListScope::*)(::Fusion::SimulationBehaviourUpdater_BehaviourList*)>(&::Fusion::SimulationBehaviourListScope::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f86d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourListScope>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationBehaviourListScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationBehaviourListScope::*)()>(&::Fusion::SimulationBehaviourListScope::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f86d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourListScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::SimulationBehaviourListScope::_ctor(::Fusion::SimulationBehaviourUpdater_BehaviourList*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourListScope>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::SimulationBehaviourUpdater_BehaviourList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
inline void Fusion::SimulationBehaviourListScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationBehaviourListScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::SimulationBehaviourListScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::SimulationBehaviourListScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_list", ty: "::Fusion::SimulationBehaviourUpdater_BehaviourList*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationBehaviourListScope::SimulationBehaviourListScope(::Fusion::SimulationBehaviourUpdater_BehaviourList*  _list) noexcept  {
this->_list = _list;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationBehaviourListScope::SimulationBehaviourListScope()   {
}
