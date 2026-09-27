#pragma once
// IWYU pragma private; include "Fusion/FusionUnityLogger.hpp"
#include "Fusion/zzzz__FusionUnityLoggerBase_impl.hpp"
#include "Fusion/zzzz__FusionUnityLogger_def.hpp"
#include "Fusion/zzzz__FusionUnityLoggerBase_LogContext_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::FusionUnityLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionUnityLogger::*)(::System::Threading::Thread*, bool)>(&::Fusion::FusionUnityLogger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e1034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Thread*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLogger.CreateMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::StringW,::UnityW<::UnityEngine::Object>> (::Fusion::FusionUnityLogger::*)(::by_ref<::GlobalNamespace::FusionUnityLoggerBase_LogContext>)>(&::Fusion::FusionUnityLogger::CreateMessage)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x60e1110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionUnityLogger*>(),
                    {::i2c::class_of<::Fusion::FusionUnityLogger*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLogger.TryAppendRunnerPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionUnityLogger::*)(::System::Text::StringBuilder*, ::Fusion::NetworkRunner*)>(&::Fusion::FusionUnityLogger::TryAppendRunnerPrefix)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x60e1740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLogger*>(),
                        {"TryAppendRunnerPrefix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLogger.TryAppendNetworkObjectPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionUnityLogger::*)(::System::Text::StringBuilder*, ::Fusion::NetworkObject*)>(&::Fusion::FusionUnityLogger::TryAppendNetworkObjectPrefix)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x60e18a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLogger*>(),
                        {"TryAppendNetworkObjectPrefix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnityLogger.TryAppendSimulationBehaviourPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionUnityLogger::*)(::System::Text::StringBuilder*, ::Fusion::SimulationBehaviour*)>(&::Fusion::FusionUnityLogger::TryAppendSimulationBehaviourPrefix)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x60e19f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLogger*>(),
                        {"TryAppendSimulationBehaviourPrefix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::FusionUnityLogger::__cordl_internal_get_LogActiveRunnerTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogActiveRunnerTick;
}
constexpr bool const& Fusion::FusionUnityLogger::__cordl_internal_get_LogActiveRunnerTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogActiveRunnerTick;
}
constexpr void Fusion::FusionUnityLogger::__cordl_internal_set_LogActiveRunnerTick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogActiveRunnerTick = value;
}
inline void Fusion::FusionUnityLogger::_ctor(::System::Threading::Thread*  mainThread, bool  isDarkMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Thread*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainThread, isDarkMode);
}
inline ::System::ValueTuple_2<::StringW,::UnityW<::UnityEngine::Object>> Fusion::FusionUnityLogger::CreateMessage(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::FusionUnityLoggerBase_LogContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionUnityLogger*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::StringW,::UnityW<::UnityEngine::Object>>>(this, ___internal_method, context);
}
inline bool Fusion::FusionUnityLogger::TryAppendRunnerPrefix(::System::Text::StringBuilder*  builder, ::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLogger*>(),
                        {"TryAppendRunnerPrefix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, builder, runner);
}
inline bool Fusion::FusionUnityLogger::TryAppendNetworkObjectPrefix(::System::Text::StringBuilder*  builder, ::Fusion::NetworkObject*  networkObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLogger*>(),
                        {"TryAppendNetworkObjectPrefix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, builder, networkObject);
}
inline bool Fusion::FusionUnityLogger::TryAppendSimulationBehaviourPrefix(::System::Text::StringBuilder*  builder, ::Fusion::SimulationBehaviour*  simulationBehaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnityLogger*>(),
                        {"TryAppendSimulationBehaviourPrefix", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, builder, simulationBehaviour);
}
inline ::Fusion::FusionUnityLogger* Fusion::FusionUnityLogger::New_ctor(::System::Threading::Thread*  mainThread, bool  isDarkMode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionUnityLogger*>(mainThread, isDarkMode));
}
// Ctor Parameters []
constexpr ::Fusion::FusionUnityLogger::FusionUnityLogger()   {
}
