#pragma once
// IWYU pragma private; include "System/ComponentModel/INestedContainer.hpp"
#include "System/ComponentModel/zzzz__INestedContainer_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::INestedContainer.get_Owner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::INestedContainer::*)()>(&::System::ComponentModel::INestedContainer::get_Owner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::INestedContainer*>(),
                    {::i2c::class_of<::System::ComponentModel::INestedContainer*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::IComponent* System::ComponentModel::INestedContainer::get_Owner()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::INestedContainer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*>(this, ___internal_method);
}
/// @brief Convert operator to "::System::ComponentModel::IContainer"
constexpr  System::ComponentModel::INestedContainer::operator ::System::ComponentModel::IContainer*() noexcept {
return static_cast<::System::ComponentModel::IContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IContainer"
constexpr ::System::ComponentModel::IContainer* System::ComponentModel::INestedContainer::i___System__ComponentModel__IContainer() noexcept {
return static_cast<::System::ComponentModel::IContainer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::ComponentModel::INestedContainer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::ComponentModel::INestedContainer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
