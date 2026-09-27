#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerUpdaterDefaultInvokeSettings.hpp"
#include "Fusion/zzzz__UnityPlayerLoopSystemAddMode_impl.hpp"
#include "Fusion/zzzz__NetworkRunnerUpdaterDefaultInvokeSettings_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::*)(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings)>(&::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fdbd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::*)(::System::Object*)>(&::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fdbda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(),
                    {::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::*)()>(&::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fdbe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(),
                    {::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::*)()>(&::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::ToString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fdbe9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(),
                    {::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings)>(&::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fdbf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), ::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings)>(&::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fdb0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), ::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::Equals(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::op_Equality(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  left, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), ::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::op_Inequality(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  left, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>(), ::i2c::type_of<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>"
constexpr  Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::operator ::System::IEquatable_1<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>"
constexpr ::System::IEquatable_1<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>* Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::i___System__IEquatable_1___Fusion__NetworkRunnerUpdaterDefaultInvokeSettings_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ReferencePlayerLoopSystem", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AddMode", ty: "::Fusion::UnityPlayerLoopSystemAddMode", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::NetworkRunnerUpdaterDefaultInvokeSettings(::System::Type*  ReferencePlayerLoopSystem, ::Fusion::UnityPlayerLoopSystemAddMode  AddMode) noexcept  {
this->ReferencePlayerLoopSystem = ReferencePlayerLoopSystem;
this->AddMode = AddMode;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings::NetworkRunnerUpdaterDefaultInvokeSettings()   {
}
