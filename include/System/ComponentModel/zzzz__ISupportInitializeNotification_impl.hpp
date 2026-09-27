#pragma once
// IWYU pragma private; include "System/ComponentModel/ISupportInitializeNotification.hpp"
#include "System/ComponentModel/zzzz__ISupportInitializeNotification_def.hpp"
#include "System/ComponentModel/zzzz__ISupportInitialize_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ISupportInitializeNotification.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ISupportInitializeNotification::*)()>(&::System::ComponentModel::ISupportInitializeNotification::get_IsInitialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ISupportInitializeNotification*>(),
                    {::i2c::class_of<::System::ComponentModel::ISupportInitializeNotification*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ISupportInitializeNotification.add_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ISupportInitializeNotification::*)(::System::EventHandler*)>(&::System::ComponentModel::ISupportInitializeNotification::add_Initialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ISupportInitializeNotification*>(),
                    {::i2c::class_of<::System::ComponentModel::ISupportInitializeNotification*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ISupportInitializeNotification.remove_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ISupportInitializeNotification::*)(::System::EventHandler*)>(&::System::ComponentModel::ISupportInitializeNotification::remove_Initialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ISupportInitializeNotification*>(),
                    {::i2c::class_of<::System::ComponentModel::ISupportInitializeNotification*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::ISupportInitializeNotification::get_IsInitialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ISupportInitializeNotification*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::ISupportInitializeNotification::add_Initialized(::System::EventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ISupportInitializeNotification*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::ISupportInitializeNotification::remove_Initialized(::System::EventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ISupportInitializeNotification*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::System::ComponentModel::ISupportInitialize"
constexpr  System::ComponentModel::ISupportInitializeNotification::operator ::System::ComponentModel::ISupportInitialize*() noexcept {
return static_cast<::System::ComponentModel::ISupportInitialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ISupportInitialize"
constexpr ::System::ComponentModel::ISupportInitialize* System::ComponentModel::ISupportInitializeNotification::i___System__ComponentModel__ISupportInitialize() noexcept {
return static_cast<::System::ComponentModel::ISupportInitialize*>(static_cast<void*>(this));
}
