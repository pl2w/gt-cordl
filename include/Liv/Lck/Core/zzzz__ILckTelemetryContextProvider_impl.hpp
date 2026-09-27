#pragma once
// IWYU pragma private; include "Liv/Lck/Core/ILckTelemetryContextProvider.hpp"
#include "Liv/Lck/Core/zzzz__ILckTelemetryContextProvider_def.hpp"
#include "Liv/Lck/Core/zzzz__LckTelemetryContextType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::ILckTelemetryContextProvider.SetTelemetryContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::ILckTelemetryContextProvider::*)(::Liv::Lck::Core::LckTelemetryContextType, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Liv::Lck::Core::ILckTelemetryContextProvider::SetTelemetryContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::ILckTelemetryContextProvider*>(),
                    {::i2c::class_of<::Liv::Lck::Core::ILckTelemetryContextProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::ILckTelemetryContextProvider.ClearTelemetryContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::ILckTelemetryContextProvider::*)(::Liv::Lck::Core::LckTelemetryContextType)>(&::Liv::Lck::Core::ILckTelemetryContextProvider::ClearTelemetryContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::ILckTelemetryContextProvider*>(),
                    {::i2c::class_of<::Liv::Lck::Core::ILckTelemetryContextProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::ILckTelemetryContextProvider::SetTelemetryContext(::Liv::Lck::Core::LckTelemetryContextType  contextType, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::ILckTelemetryContextProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextType, context);
}
inline void Liv::Lck::Core::ILckTelemetryContextProvider::ClearTelemetryContext(::Liv::Lck::Core::LckTelemetryContextType  contextType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::ILckTelemetryContextProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextType);
}
