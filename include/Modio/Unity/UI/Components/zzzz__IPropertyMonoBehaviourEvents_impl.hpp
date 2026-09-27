#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/IPropertyMonoBehaviourEvents.hpp"
#include "Modio/Unity/UI/Components/zzzz__IPropertyMonoBehaviourEvents_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::*)()>(&::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::*)()>(&::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::*)()>(&::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::OnEnable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::*)()>(&::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::OnDisable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
