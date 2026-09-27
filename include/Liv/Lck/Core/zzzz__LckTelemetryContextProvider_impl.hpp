#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckTelemetryContextProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/zzzz__LckTelemetryContextProvider_def.hpp"
#include "Liv/Lck/Core/Serialization/zzzz__ILckSerializer_def.hpp"
#include "Liv/Lck/Core/zzzz__ILckTelemetryContextProvider_def.hpp"
#include "Liv/Lck/Core/zzzz__LckTelemetryContextType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::LckTelemetryContextProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckTelemetryContextProvider::*)()>(&::Liv::Lck::Core::LckTelemetryContextProvider::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d01940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckTelemetryContextProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckTelemetryContextProvider.SetTelemetryContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckTelemetryContextProvider::*)(::Liv::Lck::Core::LckTelemetryContextType, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Liv::Lck::Core::LckTelemetryContextProvider::SetTelemetryContext)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x9d01a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckTelemetryContextProvider*>(),
                        {"SetTelemetryContext", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryContextType>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckTelemetryContextProvider.ClearTelemetryContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckTelemetryContextProvider::*)(::Liv::Lck::Core::LckTelemetryContextType)>(&::Liv::Lck::Core::LckTelemetryContextProvider::ClearTelemetryContext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9d01e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckTelemetryContextProvider*>(),
                        {"ClearTelemetryContext", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryContextType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Core::Serialization::ILckSerializer*& Liv::Lck::Core::LckTelemetryContextProvider::__cordl_internal_get__serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializer;
}
constexpr ::Liv::Lck::Core::Serialization::ILckSerializer* const& Liv::Lck::Core::LckTelemetryContextProvider::__cordl_internal_get__serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializer;
}
constexpr void Liv::Lck::Core::LckTelemetryContextProvider::__cordl_internal_set__serializer(::Liv::Lck::Core::Serialization::ILckSerializer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serializer = value;
}
inline void Liv::Lck::Core::LckTelemetryContextProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckTelemetryContextProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Core::LckTelemetryContextProvider::SetTelemetryContext(::Liv::Lck::Core::LckTelemetryContextType  contextType, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckTelemetryContextProvider*>(),
                        {"SetTelemetryContext", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryContextType>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextType, context);
}
inline void Liv::Lck::Core::LckTelemetryContextProvider::ClearTelemetryContext(::Liv::Lck::Core::LckTelemetryContextType  contextType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckTelemetryContextProvider*>(),
                        {"ClearTelemetryContext", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryContextType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextType);
}
/// @brief [Preserve]
inline ::Liv::Lck::Core::LckTelemetryContextProvider* Liv::Lck::Core::LckTelemetryContextProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::LckTelemetryContextProvider*>());
}
/// @brief Convert operator to "::Liv::Lck::Core::ILckTelemetryContextProvider"
constexpr  Liv::Lck::Core::LckTelemetryContextProvider::operator ::Liv::Lck::Core::ILckTelemetryContextProvider*() noexcept {
return static_cast<::Liv::Lck::Core::ILckTelemetryContextProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Core::ILckTelemetryContextProvider"
constexpr ::Liv::Lck::Core::ILckTelemetryContextProvider* Liv::Lck::Core::LckTelemetryContextProvider::i___Liv__Lck__Core__ILckTelemetryContextProvider() noexcept {
return static_cast<::Liv::Lck::Core::ILckTelemetryContextProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckTelemetryContextProvider::LckTelemetryContextProvider()   {
}
