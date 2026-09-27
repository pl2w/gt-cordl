#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_ChangeDetector_Enumerable.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_Enumerable_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_Enumerator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable::*)(::ArrayW<::StringW>, int32_t)>(&::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f82214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator (::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable::*)()>(&::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f82634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable.Changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable::*)(::StringW)>(&::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable::Changed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f82694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable>(),
                        {"Changed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable::_ctor(::ArrayW<::StringW>  changed, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, changed, count);
}
inline ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator>(*this, ___internal_method);
}
inline bool GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable::Changed(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable>(),
                        {"Changed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, name);
}
// Ctor Parameters [CppParam { name: "_changed", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable::ChangeDetector_NetworkBehaviour_Enumerable(::ArrayW<::StringW>  _changed, int32_t  _count) noexcept  {
this->_changed = _changed;
this->_count = _count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable::ChangeDetector_NetworkBehaviour_Enumerable()   {
}
